// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskDataModel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskDataModel() {}

// ********** Begin Cross Module References ********************************************************
AITASKPLUGIN_API UClass* Z_Construct_UClass_UTaskItem();
AITASKPLUGIN_API UClass* Z_Construct_UClass_UTaskItem_NoRegister();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGeminiCandidate();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGeminiContent();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGeminiPart();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGeminiResponseRoot();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTaskRawData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AItaskPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGeminiPart *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGeminiPart;
class UScriptStruct* FGeminiPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGeminiPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeminiPart, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("GeminiPart"));
	}
	return Z_Registration_Info_UScriptStruct_FGeminiPart.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGeminiPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94 JSON: { \"text\": \"...\" }\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94 JSON: { \"text\": \"...\" }" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeminiPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeminiPart_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeminiPart, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeminiPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiPart_Statics::NewProp_text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeminiPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	nullptr,
	&NewStructOps,
	"GeminiPart",
	Z_Construct_UScriptStruct_FGeminiPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiPart_Statics::PropPointers),
	sizeof(FGeminiPart),
	alignof(FGeminiPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeminiPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeminiPart()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGeminiPart.InnerSingleton, Z_Construct_UScriptStruct_FGeminiPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGeminiPart.InnerSingleton;
}
// ********** End ScriptStruct FGeminiPart *********************************************************

// ********** Begin ScriptStruct FGeminiContent ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGeminiContent;
class UScriptStruct* FGeminiContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGeminiContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeminiContent, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("GeminiContent"));
	}
	return Z_Registration_Info_UScriptStruct_FGeminiContent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGeminiContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94 JSON: { \"parts\": [ ... ] }\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94 JSON: { \"parts\": [ ... ] }" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_parts_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_parts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_parts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeminiContent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeminiContent_Statics::NewProp_parts_Inner = { "parts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeminiPart, METADATA_PARAMS(0, nullptr) }; // 1195015505
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeminiContent_Statics::NewProp_parts = { "parts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeminiContent, parts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_parts_MetaData), NewProp_parts_MetaData) }; // 1195015505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeminiContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiContent_Statics::NewProp_parts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiContent_Statics::NewProp_parts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeminiContent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	nullptr,
	&NewStructOps,
	"GeminiContent",
	Z_Construct_UScriptStruct_FGeminiContent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiContent_Statics::PropPointers),
	sizeof(FGeminiContent),
	alignof(FGeminiContent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiContent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeminiContent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeminiContent()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiContent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGeminiContent.InnerSingleton, Z_Construct_UScriptStruct_FGeminiContent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGeminiContent.InnerSingleton;
}
// ********** End ScriptStruct FGeminiContent ******************************************************

// ********** Begin ScriptStruct FGeminiCandidate **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGeminiCandidate;
class UScriptStruct* FGeminiCandidate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiCandidate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGeminiCandidate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeminiCandidate, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("GeminiCandidate"));
	}
	return Z_Registration_Info_UScriptStruct_FGeminiCandidate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGeminiCandidate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94 JSON: { \"content\": { ... } }\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94 JSON: { \"content\": { ... } }" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeminiCandidate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeminiCandidate_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeminiCandidate, content), Z_Construct_UScriptStruct_FGeminiContent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_content_MetaData), NewProp_content_MetaData) }; // 1886866301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeminiCandidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiCandidate_Statics::NewProp_content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiCandidate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeminiCandidate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	nullptr,
	&NewStructOps,
	"GeminiCandidate",
	Z_Construct_UScriptStruct_FGeminiCandidate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiCandidate_Statics::PropPointers),
	sizeof(FGeminiCandidate),
	alignof(FGeminiCandidate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiCandidate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeminiCandidate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeminiCandidate()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiCandidate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGeminiCandidate.InnerSingleton, Z_Construct_UScriptStruct_FGeminiCandidate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGeminiCandidate.InnerSingleton;
}
// ********** End ScriptStruct FGeminiCandidate ****************************************************

// ********** Begin ScriptStruct FGeminiResponseRoot ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGeminiResponseRoot;
class UScriptStruct* FGeminiResponseRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeminiResponseRoot, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("GeminiResponseRoot"));
	}
	return Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94 JSON: { \"candidates\": [ ... ] } (\xe6\xa0\xb9\xe8\x8a\x82\xe7\x82\xb9)\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94 JSON: { \"candidates\": [ ... ] } (\xe6\xa0\xb9\xe8\x8a\x82\xe7\x82\xb9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_candidates_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_candidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_candidates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeminiResponseRoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::NewProp_candidates_Inner = { "candidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeminiCandidate, METADATA_PARAMS(0, nullptr) }; // 226301824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::NewProp_candidates = { "candidates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeminiResponseRoot, candidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_candidates_MetaData), NewProp_candidates_MetaData) }; // 226301824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::NewProp_candidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::NewProp_candidates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	nullptr,
	&NewStructOps,
	"GeminiResponseRoot",
	Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::PropPointers),
	sizeof(FGeminiResponseRoot),
	alignof(FGeminiResponseRoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeminiResponseRoot()
{
	if (!Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.InnerSingleton, Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGeminiResponseRoot.InnerSingleton;
}
// ********** End ScriptStruct FGeminiResponseRoot *************************************************

// ********** Begin ScriptStruct FTaskRawData ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTaskRawData;
class UScriptStruct* FTaskRawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTaskRawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTaskRawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskRawData, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("TaskRawData"));
	}
	return Z_Registration_Info_UScriptStruct_FTaskRawData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTaskRawData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94 AI \xe7\x94\x9f\xe6\x88\x90\xe5\x90\x8e\xe7\x9a\x84\xe7\xba\xaf\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94 AI \xe7\x94\x9f\xe6\x88\x90\xe5\x90\x8e\xe7\x9a\x84\xe7\xba\xaf\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "TaskRawData" },
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "TaskRawData" },
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskRawData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskRawData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskRawData, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskRawData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskRawData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskRawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskRawData_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskRawData_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskRawData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskRawData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	nullptr,
	&NewStructOps,
	"TaskRawData",
	Z_Construct_UScriptStruct_FTaskRawData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskRawData_Statics::PropPointers),
	sizeof(FTaskRawData),
	alignof(FTaskRawData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskRawData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskRawData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaskRawData()
{
	if (!Z_Registration_Info_UScriptStruct_FTaskRawData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTaskRawData.InnerSingleton, Z_Construct_UScriptStruct_FTaskRawData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTaskRawData.InnerSingleton;
}
// ********** End ScriptStruct FTaskRawData ********************************************************

// ********** Begin Class UTaskItem ****************************************************************
void UTaskItem::StaticRegisterNativesUTaskItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTaskItem;
UClass* UTaskItem::GetPrivateStaticClass()
{
	using TClass = UTaskItem;
	if (!Z_Registration_Info_UClass_UTaskItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TaskItem"),
			Z_Registration_Info_UClass_UTaskItem.InnerSingleton,
			StaticRegisterNativesUTaskItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTaskItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTaskItem_NoRegister()
{
	return UTaskItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTaskItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---------------------------------------------------------\n// 3. UI \xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1 (UObject)\n// ---------------------------------------------------------\n" },
#endif
		{ "IncludePath", "TaskDataModel.h" },
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3. UI \xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1 (UObject)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/TaskDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskItem_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskItem, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskItem_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskItem_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskItem_Statics::ClassParams = {
	&UTaskItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaskItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskItem()
{
	if (!Z_Registration_Info_UClass_UTaskItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskItem.OuterSingleton, Z_Construct_UClass_UTaskItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskItem.OuterSingleton;
}
UTaskItem::UTaskItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskItem);
UTaskItem::~UTaskItem() {}
// ********** End Class UTaskItem ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeminiPart::StaticStruct, Z_Construct_UScriptStruct_FGeminiPart_Statics::NewStructOps, TEXT("GeminiPart"), &Z_Registration_Info_UScriptStruct_FGeminiPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeminiPart), 1195015505U) },
		{ FGeminiContent::StaticStruct, Z_Construct_UScriptStruct_FGeminiContent_Statics::NewStructOps, TEXT("GeminiContent"), &Z_Registration_Info_UScriptStruct_FGeminiContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeminiContent), 1886866301U) },
		{ FGeminiCandidate::StaticStruct, Z_Construct_UScriptStruct_FGeminiCandidate_Statics::NewStructOps, TEXT("GeminiCandidate"), &Z_Registration_Info_UScriptStruct_FGeminiCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeminiCandidate), 226301824U) },
		{ FGeminiResponseRoot::StaticStruct, Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics::NewStructOps, TEXT("GeminiResponseRoot"), &Z_Registration_Info_UScriptStruct_FGeminiResponseRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeminiResponseRoot), 2844869211U) },
		{ FTaskRawData::StaticStruct, Z_Construct_UScriptStruct_FTaskRawData_Statics::NewStructOps, TEXT("TaskRawData"), &Z_Registration_Info_UScriptStruct_FTaskRawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskRawData), 2924170281U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskItem, UTaskItem::StaticClass, TEXT("UTaskItem"), &Z_Registration_Info_UClass_UTaskItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskItem), 3370287833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_102827303(TEXT("/Script/AItaskPlugin"),
	Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h__Script_AItaskPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
