// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h" // 必须包含
#include "TaskDataModel.generated.h"

// ---------------------------------------------------------
// 1. AI 原始响应结构 (用于解析 JSON)
// ---------------------------------------------------------

// 对应 JSON: { "text": "..." }
USTRUCT()
struct FGeminiPart
{
    GENERATED_BODY()
    
    UPROPERTY()
    FString text;
};

// 对应 JSON: { "parts": [ ... ] }
USTRUCT()
struct FGeminiContent
{
    GENERATED_BODY()
    
    UPROPERTY()
    TArray<FGeminiPart> parts;
};

// 对应 JSON: { "content": { ... } }
USTRUCT()
struct FGeminiCandidate
{
    GENERATED_BODY()
    
    UPROPERTY()
    FGeminiContent content;
};

// 对应 JSON: { "candidates": [ ... ] } (根节点)
USTRUCT()
struct FGeminiResponseRoot
{
    GENERATED_BODY()
    
    UPROPERTY()
    TArray<FGeminiCandidate> candidates;
};

// ---------------------------------------------------------
// 2. 任务数据结构
// ---------------------------------------------------------

// 对应 AI 生成后的纯任务数据
USTRUCT(BlueprintType)
struct FTaskRawData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Title;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;
};

// ---------------------------------------------------------
// 3. UI 使用的对象 (UObject)
// ---------------------------------------------------------

UCLASS(BlueprintType)
class UTaskItem : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Task")
    FString Title;

    UPROPERTY(BlueprintReadWrite, Category = "Task")
    FString Description;
};
