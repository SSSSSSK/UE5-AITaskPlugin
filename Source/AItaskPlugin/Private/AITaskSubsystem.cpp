#include "AITaskSubsystem.h"
#include "TaskDataModel.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "JsonObjectConverter.h"
#include "Serialization/JsonSerializer.h"
#include "TimerManager.h"
#include "Engine/GameInstance.h"

// 定义一个静态日志类别，方便在 Output Log 里过滤查看
DEFINE_LOG_CATEGORY_STATIC(LogAI, Log, All);

void UAITaskSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // 1. 加载模型配置表 (建议改为你的实际路径)
    FString ModelTablePath = TEXT("/Script/Engine.DataTable'/AItaskPlugin/Data/DT_AIModels.DT_AIModels'");
    ModelConfigTable = LoadObject<UDataTable>(nullptr, *ModelTablePath);

    // 2. 加载提示词配置表
    FString PromptTablePath = TEXT("/Script/Engine.DataTable'/AItaskPlugin/Data/DT_AIPrompts.DT_AIPrompts'");
    PromptConfigTable = LoadObject<UDataTable>(nullptr, *PromptTablePath);
    
    // 初始化默认配置ID
    CurrentModelRowName = FName("DefaultGemini");
    CurrentPromptRowName = FName("TaskSplit_MVP");
}

void UAITaskSubsystem::GenerateTasksFromAI(FString UserGoal, int32 RetryCount)
{
    if (UserGoal.IsEmpty()) return;

    // ==========================================
    // 1. 准备配置数据 (Config Preparation)
    // ==========================================
    FString FinalUrl;
    FString FinalApiKey;
    FString SystemText;
    FString UserText;

    // --- A. 读取模型配置 (Model Config) ---
    FAIModelConfig* ModelRow = nullptr;
    if (ModelConfigTable)
    {
        ModelRow = ModelConfigTable->FindRow<FAIModelConfig>(CurrentModelRowName, TEXT("GetModelConfig"));
    }

    if (ModelRow)
    {
        // 成功读取到配置
        FinalUrl = ModelRow->FullEndpointUrl;
        FinalApiKey = ModelRow->ApiKey;
        UE_LOG(LogAI, Log, TEXT("Using Configured Model: %s"), *ModelRow->ModelDisplayName);
    }
    else
    {
        // 【保底逻辑】如果没有表，或者RowName写错了，强制使用 Gemini 1.0 Pro
        UE_LOG(LogAI, Warning, TEXT("Model Config Not Found! Using Fallback Gemini 1.0 Pro."));
        
        FinalUrl = TEXT("https://generativelanguage.googleapis.com/v1beta/models/gemini-2.0-flash:generateContent");
        // 注意：这里的Key最好也别写真实Key，或者写一个测试Key，
        // 在生产环境，保底逻辑通常意味着"报错"，但测试阶段可以写死一个。
        FinalApiKey = TEXT("YOUR_FALLBACK_TEST_KEY"); 
    }

    // --- B. 读取提示词配置 (Prompt Config) ---
    FAIPromptDefinition* PromptRow = nullptr;
    if (PromptConfigTable)
    {
        PromptRow = PromptConfigTable->FindRow<FAIPromptDefinition>(CurrentPromptRowName, TEXT("GetPromptConfig"));
    }

    if (PromptRow)
    {
        SystemText = PromptRow->SystemPrompt.ToString(); // 自动本地化
        UserText = FText::Format(PromptRow->UserPromptTemplate, FText::FromString(UserGoal)).ToString();
    }
    else
    {
        // 保底提示词
        SystemText = TEXT("You are a task expert. Return raw JSON array.");
        UserText = FString::Printf(TEXT("Split task: %s"), *UserGoal);
    }

    // 最终拼接 Prompt
    FString FinalPrompt = FString::Printf(TEXT("%s\n\nTask: %s"), *SystemText, *UserText);


    // ==========================================
    // 2. 发送请求 (Request Execution)
    // ==========================================
    FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
    Request->SetVerb("POST");
    Request->SetURL(FinalUrl);
    Request->SetTimeout(60.0f);

    // Header
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("x-goog-api-key"), FinalApiKey);

    // Body
    TSharedPtr<FJsonObject> RootJson = MakeShareable(new FJsonObject);

    // Config (JSON Mode)
    TSharedPtr<FJsonObject> ConfigJson = MakeShareable(new FJsonObject);
    ConfigJson->SetStringField("response_mime_type", "application/json");
    RootJson->SetObjectField("generationConfig", ConfigJson);

    // Contents
    TSharedPtr<FJsonObject> PartJson = MakeShareable(new FJsonObject);
    PartJson->SetStringField("text", FinalPrompt);
    UE_LOG(LogAI, Error, TEXT("FinalPrompt: %s"),  FinalPrompt);
    
    
    TSharedPtr<FJsonObject> ContentItemJson = MakeShareable(new FJsonObject);
    TArray<TSharedPtr<FJsonValue>> PartsArray;
    PartsArray.Add(MakeShareable(new FJsonValueObject(PartJson)));
    ContentItemJson->SetArrayField("parts", PartsArray);

    TArray<TSharedPtr<FJsonValue>> ContentsArray;
    ContentsArray.Add(MakeShareable(new FJsonValueObject(ContentItemJson)));
    RootJson->SetArrayField("contents", ContentsArray);

    // Serialize
    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RootJson.ToSharedRef(), Writer);
    Request->SetContentAsString(RequestBody);

    // Bind Callback & Retry Logic
    Request->OnProcessRequestComplete().BindWeakLambda(this, [this, UserGoal, RetryCount](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bConnected)
    {
        if (!bConnected || !Res.IsValid())
        {
            UE_LOG(LogAI, Error, TEXT("Network Failed."));
            return;
        }

        int32 Code = Res->GetResponseCode();
        
        // 503 Retry
        if (Code == 503 && RetryCount < 3)
        {
            float WaitTime = 2.0f * (RetryCount + 1);
            if (UGameInstance* GI = GetGameInstance())
            {
                GI->GetTimerManager().SetTimer(RetryTimerHandle, [this, UserGoal, RetryCount]()
                {
                    GenerateTasksFromAI(UserGoal, RetryCount + 1);
                }, WaitTime, false);
            }
            return;
        }

        if (Code != 200)
        {
            UE_LOG(LogAI, Error, TEXT("API Error %d: %s"), Code, *Res->GetContentAsString());
            return;
        }

        this->OnGeminiResponseReceived(Req, Res, bConnected);
    });

    Request->ProcessRequest();
}

void UAITaskSubsystem::OnGeminiResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    // 1. 基础网络检查
    if (!bWasSuccessful || !Response.IsValid())
    {
        UE_LOG(LogAI, Error, TEXT("Network Connection Failed."));
        return;
    }

    // 2. HTTP 状态码检查
    int32 ResponseCode = Response->GetResponseCode();
    FString ContentStr = Response->GetContentAsString();

    if (ResponseCode != 200)
    {
        UE_LOG(LogAI, Error, TEXT("API Error (Code %d): %s"), ResponseCode, *ContentStr);
        return;
    }

    // --- 开始解析 ---

    // 3. 第一层解析：解包 Gemini 的信封
    // 我们定义在 AITaskModel.h 里的 FGeminiResponseRoot 结构体就是为了这一步
    FGeminiResponseRoot GeminiRoot;
    if (!FJsonObjectConverter::JsonObjectStringToUStruct(ContentStr, &GeminiRoot, 0, 0))
    {
        UE_LOG(LogAI, Error, TEXT("Failed to parse Gemini Root Wrapper. Content: %s"), *ContentStr);
        return;
    }

    // 4. 安全检查：确保 AI 真的生成了内容
    if (GeminiRoot.candidates.Num() == 0 || 
        GeminiRoot.candidates[0].content.parts.Num() == 0)
    {
        UE_LOG(LogAI, Warning, TEXT("Gemini response was valid but empty."));
        return;
    }

    // 5. 提取核心文本 (这里是 AI 生成的 raw text)
    FString AiGeneratedText = GeminiRoot.candidates[0].content.parts[0].text;

    // 6. 数据清洗 (关键步骤！)
    // Gemini 经常会返回 "```json [ ... ] ```"，我们需要把 ```json 和 ``` 删掉
    // 同时也去掉可能存在的首尾空白字符
    AiGeneratedText = AiGeneratedText.Replace(TEXT("```json"), TEXT(""));
    AiGeneratedText = AiGeneratedText.Replace(TEXT("```"), TEXT(""));
    AiGeneratedText = AiGeneratedText.TrimStartAndEnd();

    UE_LOG(LogAI, Log, TEXT("Cleaned JSON String: %s"), *AiGeneratedText);

    // 7. 第二层解析：将纯 JSON 字符串转为任务结构体数组
    TArray<FTaskRawData> RawTasks;
    if (!FJsonObjectConverter::JsonArrayStringToUStruct(AiGeneratedText, &RawTasks, 0, 0))
    {
        // 如果这里失败了，通常是因为 AI 返回的格式不是严格的 JSON 数组
        // 比如它可能在 JSON 前面加了一句 "好的，这是你的任务："
        UE_LOG(LogAI, Error, TEXT("Failed to deserialize task list. The AI output might not be a valid JSON Array. Content: %s"), *AiGeneratedText);
        return;
    }

    // 8. 转换为 UObject (UTaskItem)
    // 这一步是为了让 UMG (ListView) 能够显示数据
    TArray<UTaskItem*> FinalTasks;

    for (const FTaskRawData& RawData : RawTasks)
    {
        // 创建 UObject，Outer 是 this (Subsystem)，这样可以保证对象不被立刻 GC
        UTaskItem* NewItem = NewObject<UTaskItem>(this);
        
        // 赋值
        NewItem->Title = RawData.Title;
        NewItem->Description = RawData.Description;

        FinalTasks.Add(NewItem);
    }

    // 9. 广播事件，通知 UI 刷新
    UE_LOG(LogAI, Log, TEXT("Successfully parsed %d tasks. Broadcasting to UI..."), FinalTasks.Num());
    OnTasksGenerated.Broadcast(FinalTasks);
}

//DebugGeminiListModels
void UAITaskSubsystem::DebugListModels()
{
    // 1. 获取 API Key (优先从配置表读，读不到用硬编码)
    FString CurrentApiKey = TEXT("YOUR_HARDCODED_KEY_IF_NEEDED");
    if (ModelConfigTable)
    {
        static const FString ContextString(TEXT("GetModelConfig"));
        // 假设你要查的是 DefaultGemini 对应的 Key
        FAIModelConfig* Row = ModelConfigTable->FindRow<FAIModelConfig>(CurrentModelRowName, ContextString);
        if (Row) CurrentApiKey = Row->ApiKey;
    }

    // 2. 构造请求
    FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
    Request->SetVerb("GET"); // 注意：查列表用 GET
    
    // ListModels 的 API 地址
    FString ListUrl = TEXT("https://generativelanguage.googleapis.com/v1beta/models?key=") + CurrentApiKey;
    Request->SetURL(ListUrl);
    
    // 3. 绑定回调
    Request->OnProcessRequestComplete().BindWeakLambda(this, [](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bConnected)
    {
        if (!bConnected || !Res.IsValid())
        {
            UE_LOG(LogTemp, Error, TEXT("ListModels Failed: Network Error"));
            return;
        }
        
        if (Res->GetResponseCode() != 200)
        {
            UE_LOG(LogTemp, Error, TEXT("ListModels Error %d: %s"), Res->GetResponseCode(), *Res->GetContentAsString());
            return;
        }

        // 4. 打印结果
        UE_LOG(LogTemp, Warning, TEXT("=== Available Gemini Models ==="));
        UE_LOG(LogTemp, Log, TEXT("%s"), *Res->GetContentAsString());
        UE_LOG(LogTemp, Warning, TEXT("==============================="));
    });

    UE_LOG(LogTemp, Log, TEXT("Requesting Model List..."));
    Request->ProcessRequest();
}