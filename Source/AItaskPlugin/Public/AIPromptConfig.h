#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AIPromptConfig.generated.h"

// --- 表1：模型配置 (技术层) ---
USTRUCT(BlueprintType)
struct FAIModelConfig : public FTableRowBase
{
	GENERATED_BODY()

public:
	// 完整的 API 地址 (例如: https://api.proxy.com/v1/gemini-pro:generateContent)
	// 这样设计最灵活，你可以随意切换官方API或任何第三方代理
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FullEndpointUrl;

	// 该模型对应的 API Key
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ApiKey;

	// 模型显示名称 (仅用于日志打印或UI显示，不参与逻辑)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ModelDisplayName;

	// (可选) 最大Token数，温度等参数也可以放这里
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxOutputTokens = 2048;
};

// --- 表2：提示词配置 (业务层) ---
USTRUCT(BlueprintType)
struct FAIPromptDefinition : public FTableRowBase
{
	GENERATED_BODY()

public:
	// 开发者备注
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeveloperNote;

	// 系统提示词 (支持多语言)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SystemPrompt;

	// 用户提示词模板 (支持多语言，例如 "拆解任务: {0}")
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UserPromptTemplate;
};