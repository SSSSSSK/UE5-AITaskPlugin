// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPromptConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIPromptConfig() {}

// ********** Begin Cross Module References ********************************************************
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAIModelConfig();
AITASKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAIPromptDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_AItaskPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAIModelConfig ****************************************************
static_assert(std::is_polymorphic<FAIModelConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAIModelConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAIModelConfig;
class UScriptStruct* FAIModelConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAIModelConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAIModelConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIModelConfig, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("AIModelConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAIModelConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAIModelConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe8\xa1\xa8""1\xef\xbc\x9a\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xae (\xe6\x8a\x80\xe6\x9c\xaf\xe5\xb1\x82) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe8\xa1\xa8""1\xef\xbc\x9a\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xae (\xe6\x8a\x80\xe6\x9c\xaf\xe5\xb1\x82) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullEndpointUrl_MetaData[] = {
		{ "Category", "AIModelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x8c\xe6\x95\xb4\xe7\x9a\x84 API \xe5\x9c\xb0\xe5\x9d\x80 (\xe4\xbe\x8b\xe5\xa6\x82: https://api.proxy.com/v1/gemini-pro:generateContent)\n// \xe8\xbf\x99\xe6\xa0\xb7\xe8\xae\xbe\xe8\xae\xa1\xe6\x9c\x80\xe7\x81\xb5\xe6\xb4\xbb\xef\xbc\x8c\xe4\xbd\xa0\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x9a\x8f\xe6\x84\x8f\xe5\x88\x87\xe6\x8d\xa2\xe5\xae\x98\xe6\x96\xb9""API\xe6\x88\x96\xe4\xbb\xbb\xe4\xbd\x95\xe7\xac\xac\xe4\xb8\x89\xe6\x96\xb9\xe4\xbb\xa3\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x8c\xe6\x95\xb4\xe7\x9a\x84 API \xe5\x9c\xb0\xe5\x9d\x80 (\xe4\xbe\x8b\xe5\xa6\x82: https:api.proxy.com/v1/gemini-pro:generateContent)\n\xe8\xbf\x99\xe6\xa0\xb7\xe8\xae\xbe\xe8\xae\xa1\xe6\x9c\x80\xe7\x81\xb5\xe6\xb4\xbb\xef\xbc\x8c\xe4\xbd\xa0\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x9a\x8f\xe6\x84\x8f\xe5\x88\x87\xe6\x8d\xa2\xe5\xae\x98\xe6\x96\xb9""API\xe6\x88\x96\xe4\xbb\xbb\xe4\xbd\x95\xe7\xac\xac\xe4\xb8\x89\xe6\x96\xb9\xe4\xbb\xa3\xe7\x90\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "Category", "AIModelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9e\x8b\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84 API Key\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe6\xa8\xa1\xe5\x9e\x8b\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84 API Key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelDisplayName_MetaData[] = {
		{ "Category", "AIModelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa8\xa1\xe5\x9e\x8b\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0 (\xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa5\xe5\xbf\x97\xe6\x89\x93\xe5\x8d\xb0\xe6\x88\x96UI\xe6\x98\xbe\xe7\xa4\xba\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe9\x80\xbb\xe8\xbe\x91)\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0 (\xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe6\x97\xa5\xe5\xbf\x97\xe6\x89\x93\xe5\x8d\xb0\xe6\x88\x96UI\xe6\x98\xbe\xe7\xa4\xba\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe9\x80\xbb\xe8\xbe\x91)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutputTokens_MetaData[] = {
		{ "Category", "AIModelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (\xe5\x8f\xaf\xe9\x80\x89) \xe6\x9c\x80\xe5\xa4\xa7Token\xe6\x95\xb0\xef\xbc\x8c\xe6\xb8\xa9\xe5\xba\xa6\xe7\xad\x89\xe5\x8f\x82\xe6\x95\xb0\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x94\xbe\xe8\xbf\x99\xe9\x87\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(\xe5\x8f\xaf\xe9\x80\x89) \xe6\x9c\x80\xe5\xa4\xa7Token\xe6\x95\xb0\xef\xbc\x8c\xe6\xb8\xa9\xe5\xba\xa6\xe7\xad\x89\xe5\x8f\x82\xe6\x95\xb0\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x94\xbe\xe8\xbf\x99\xe9\x87\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullEndpointUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelDisplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOutputTokens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIModelConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_FullEndpointUrl = { "FullEndpointUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIModelConfig, FullEndpointUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullEndpointUrl_MetaData), NewProp_FullEndpointUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIModelConfig, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_ModelDisplayName = { "ModelDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIModelConfig, ModelDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelDisplayName_MetaData), NewProp_ModelDisplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_MaxOutputTokens = { "MaxOutputTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIModelConfig, MaxOutputTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutputTokens_MetaData), NewProp_MaxOutputTokens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIModelConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_FullEndpointUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_ModelDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewProp_MaxOutputTokens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIModelConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIModelConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AIModelConfig",
	Z_Construct_UScriptStruct_FAIModelConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIModelConfig_Statics::PropPointers),
	sizeof(FAIModelConfig),
	alignof(FAIModelConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIModelConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIModelConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIModelConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAIModelConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAIModelConfig.InnerSingleton, Z_Construct_UScriptStruct_FAIModelConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAIModelConfig.InnerSingleton;
}
// ********** End ScriptStruct FAIModelConfig ******************************************************

// ********** Begin ScriptStruct FAIPromptDefinition ***********************************************
static_assert(std::is_polymorphic<FAIPromptDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAIPromptDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAIPromptDefinition;
class UScriptStruct* FAIPromptDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAIPromptDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAIPromptDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIPromptDefinition, (UObject*)Z_Construct_UPackage__Script_AItaskPlugin(), TEXT("AIPromptDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FAIPromptDefinition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAIPromptDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe8\xa1\xa8""2\xef\xbc\x9a\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d\xe9\x85\x8d\xe7\xbd\xae (\xe4\xb8\x9a\xe5\x8a\xa1\xe5\xb1\x82) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe8\xa1\xa8""2\xef\xbc\x9a\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d\xe9\x85\x8d\xe7\xbd\xae (\xe4\xb8\x9a\xe5\x8a\xa1\xe5\xb1\x82) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperNote_MetaData[] = {
		{ "Category", "AIPromptDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xa4\x87\xe6\xb3\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xa4\x87\xe6\xb3\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemPrompt_MetaData[] = {
		{ "Category", "AIPromptDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb3\xbb\xe7\xbb\x9f\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d (\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe8\xaf\xad\xe8\xa8\x80)\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d (\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe8\xaf\xad\xe8\xa8\x80)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserPromptTemplate_MetaData[] = {
		{ "Category", "AIPromptDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d\xe6\xa8\xa1\xe6\x9d\xbf (\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe8\xaf\xad\xe8\xa8\x80\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"\xe6\x8b\x86\xe8\xa7\xa3\xe4\xbb\xbb\xe5\x8a\xa1: {0}\")\n" },
#endif
		{ "ModuleRelativePath", "Public/AIPromptConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8d\xe6\xa8\xa1\xe6\x9d\xbf (\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe8\xaf\xad\xe8\xa8\x80\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"\xe6\x8b\x86\xe8\xa7\xa3\xe4\xbb\xbb\xe5\x8a\xa1: {0}\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperNote;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SystemPrompt;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UserPromptTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIPromptDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_DeveloperNote = { "DeveloperNote", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIPromptDefinition, DeveloperNote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperNote_MetaData), NewProp_DeveloperNote_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_SystemPrompt = { "SystemPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIPromptDefinition, SystemPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemPrompt_MetaData), NewProp_SystemPrompt_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_UserPromptTemplate = { "UserPromptTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIPromptDefinition, UserPromptTemplate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserPromptTemplate_MetaData), NewProp_UserPromptTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_DeveloperNote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_SystemPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewProp_UserPromptTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AIPromptDefinition",
	Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::PropPointers),
	sizeof(FAIPromptDefinition),
	alignof(FAIPromptDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIPromptDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_FAIPromptDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAIPromptDefinition.InnerSingleton, Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAIPromptDefinition.InnerSingleton;
}
// ********** End ScriptStruct FAIPromptDefinition *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AIPromptConfig_h__Script_AItaskPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIModelConfig::StaticStruct, Z_Construct_UScriptStruct_FAIModelConfig_Statics::NewStructOps, TEXT("AIModelConfig"), &Z_Registration_Info_UScriptStruct_FAIModelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIModelConfig), 2524033586U) },
		{ FAIPromptDefinition::StaticStruct, Z_Construct_UScriptStruct_FAIPromptDefinition_Statics::NewStructOps, TEXT("AIPromptDefinition"), &Z_Registration_Info_UScriptStruct_FAIPromptDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIPromptDefinition), 119873691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AIPromptConfig_h__Script_AItaskPlugin_2088232004(TEXT("/Script/AItaskPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AIPromptConfig_h__Script_AItaskPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AIPromptConfig_h__Script_AItaskPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
