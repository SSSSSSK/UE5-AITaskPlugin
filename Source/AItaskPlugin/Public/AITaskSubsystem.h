#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/IHttpRequest.h"
#include "Engine/DataTable.h" 
#include "AIPromptConfig.h"   // 包含上面定义的结构体
#include "AITaskSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTasksGenerated, const TArray<class UTaskItem*>&, NewTasks);

UCLASS()
class AITASKPLUGIN_API UAITaskSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
public:
    // 调试专用：打印所有可用模型到日志
    UFUNCTION(BlueprintCallable, Category = "AI Debug")
    void DebugListModels();
    // --- 核心功能 ---
    UFUNCTION(BlueprintCallable, Category = "AI Task Plugin")
    void GenerateTasksFromAI(FString UserGoal, int32 RetryCount = 0);

    // --- 配置项 (可在蓝图/编辑器中修改) ---
    
    // 当前使用的模型配置ID (对应 DT_AIModels 的 Row Name)
    // 默认值可以是 "GeminiFlash" 或 "GeminiPro"
    UPROPERTY(BlueprintReadWrite, Category = "AI Config")
    FName CurrentModelRowName = FName("DefaultGemini");

    // 当前使用的提示词ID (对应 DT_AIPrompts 的 Row Name)
    UPROPERTY(BlueprintReadWrite, Category = "AI Config")
    FName CurrentPromptRowName = FName("TaskSplit_MVP");

    // --- 数据表引用 ---
    UPROPERTY()
    UDataTable* ModelConfigTable;

    UPROPERTY()
    UDataTable* PromptConfigTable;

    // --- 代理 ---
    UPROPERTY(BlueprintAssignable, Category = "AI Task Plugin")
    FOnTasksGenerated OnTasksGenerated;

private:
    void OnGeminiResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    FTimerHandle RetryTimerHandle;
};