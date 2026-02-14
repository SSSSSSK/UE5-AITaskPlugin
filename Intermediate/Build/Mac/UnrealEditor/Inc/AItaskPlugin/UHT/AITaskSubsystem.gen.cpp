// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITaskSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITaskSubsystem() {}

// ********** Begin Cross Module References ********************************************************
AITASKPLUGIN_API UClass* Z_Construct_UClass_UAITaskSubsystem();
AITASKPLUGIN_API UClass* Z_Construct_UClass_UAITaskSubsystem_NoRegister();
AITASKPLUGIN_API UClass* Z_Construct_UClass_UTaskItem_NoRegister();
AITASKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_AItaskPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTasksGenerated *****************************************************
struct Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics
{
	struct _Script_AItaskPlugin_eventOnTasksGenerated_Parms
	{
		TArray<UTaskItem*> NewTasks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::NewProp_NewTasks_Inner = { "NewTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::NewProp_NewTasks = { "NewTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AItaskPlugin_eventOnTasksGenerated_Parms, NewTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTasks_MetaData), NewProp_NewTasks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::NewProp_NewTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::NewProp_NewTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AItaskPlugin, nullptr, "OnTasksGenerated__DelegateSignature", Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::_Script_AItaskPlugin_eventOnTasksGenerated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::_Script_AItaskPlugin_eventOnTasksGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTasksGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnTasksGenerated, TArray<UTaskItem*> const& NewTasks)
{
	struct _Script_AItaskPlugin_eventOnTasksGenerated_Parms
	{
		TArray<UTaskItem*> NewTasks;
	};
	_Script_AItaskPlugin_eventOnTasksGenerated_Parms Parms;
	Parms.NewTasks=NewTasks;
	OnTasksGenerated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTasksGenerated *******************************************************

// ********** Begin Class UAITaskSubsystem Function DebugListModels ********************************
struct Z_Construct_UFunction_UAITaskSubsystem_DebugListModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb0\x83\xe8\xaf\x95\xe4\xb8\x93\xe7\x94\xa8\xef\xbc\x9a\xe6\x89\x93\xe5\x8d\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe7\x94\xa8\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe4\xb8\x93\xe7\x94\xa8\xef\xbc\x9a\xe6\x89\x93\xe5\x8d\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe7\x94\xa8\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskSubsystem_DebugListModels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAITaskSubsystem, nullptr, "DebugListModels", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskSubsystem_DebugListModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITaskSubsystem_DebugListModels_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAITaskSubsystem_DebugListModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITaskSubsystem_DebugListModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAITaskSubsystem::execDebugListModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugListModels();
	P_NATIVE_END;
}
// ********** End Class UAITaskSubsystem Function DebugListModels **********************************

// ********** Begin Class UAITaskSubsystem Function GenerateTasksFromAI ****************************
struct Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics
{
	struct AITaskSubsystem_eventGenerateTasksFromAI_Parms
	{
		FString UserGoal;
		int32 RetryCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Task Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\xa0\xb8\xe5\xbf\x83\xe5\x8a\x9f\xe8\x83\xbd ---\n" },
#endif
		{ "CPP_Default_RetryCount", "0" },
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\xa0\xb8\xe5\xbf\x83\xe5\x8a\x9f\xe8\x83\xbd ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserGoal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::NewProp_UserGoal = { "UserGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITaskSubsystem_eventGenerateTasksFromAI_Parms, UserGoal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::NewProp_RetryCount = { "RetryCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITaskSubsystem_eventGenerateTasksFromAI_Parms, RetryCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::NewProp_UserGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::NewProp_RetryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAITaskSubsystem, nullptr, "GenerateTasksFromAI", Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::AITaskSubsystem_eventGenerateTasksFromAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::AITaskSubsystem_eventGenerateTasksFromAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAITaskSubsystem::execGenerateTasksFromAI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserGoal);
	P_GET_PROPERTY(FIntProperty,Z_Param_RetryCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTasksFromAI(Z_Param_UserGoal,Z_Param_RetryCount);
	P_NATIVE_END;
}
// ********** End Class UAITaskSubsystem Function GenerateTasksFromAI ******************************

// ********** Begin Class UAITaskSubsystem *********************************************************
void UAITaskSubsystem::StaticRegisterNativesUAITaskSubsystem()
{
	UClass* Class = UAITaskSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugListModels", &UAITaskSubsystem::execDebugListModels },
		{ "GenerateTasksFromAI", &UAITaskSubsystem::execGenerateTasksFromAI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAITaskSubsystem;
UClass* UAITaskSubsystem::GetPrivateStaticClass()
{
	using TClass = UAITaskSubsystem;
	if (!Z_Registration_Info_UClass_UAITaskSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITaskSubsystem"),
			Z_Registration_Info_UClass_UAITaskSubsystem.InnerSingleton,
			StaticRegisterNativesUAITaskSubsystem,
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
	return Z_Registration_Info_UClass_UAITaskSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAITaskSubsystem_NoRegister()
{
	return UAITaskSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAITaskSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AITaskSubsystem.h" },
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentModelRowName_MetaData[] = {
		{ "Category", "AI Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xaeID (\xe5\xaf\xb9\xe5\xba\x94 DT_AIModels \xe7\x9a\x84 Row Name)\n// \xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x98\xaf \"GeminiFlash\" \xe6\x88\x96 \"GeminiPro\"\n" },
#endif
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xaeID (\xe5\xaf\xb9\xe5\xba\x94 DT_AIModels \xe7\x9a\x84 Row Name)\n\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x98\xaf \"GeminiFlash\" \xe6\x88\x96 \"GeminiPro\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPromptRowName_MetaData[] = {
		{ "Category", "AI Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8dID (\xe5\xaf\xb9\xe5\xba\x94 DT_AIPrompts \xe7\x9a\x84 Row Name)\n" },
#endif
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe8\xaf\x8dID (\xe5\xaf\xb9\xe5\xba\x94 DT_AIPrompts \xe7\x9a\x84 Row Name)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelConfigTable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\xbc\x95\xe7\x94\xa8 ---\n" },
#endif
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\xbc\x95\xe7\x94\xa8 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptConfigTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTasksGenerated_MetaData[] = {
		{ "Category", "AI Task Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe4\xbb\xa3\xe7\x90\x86 ---\n" },
#endif
		{ "ModuleRelativePath", "Public/AITaskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe4\xbb\xa3\xe7\x90\x86 ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentModelRowName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentPromptRowName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelConfigTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptConfigTable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTasksGenerated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITaskSubsystem_DebugListModels, "DebugListModels" }, // 3891753647
		{ &Z_Construct_UFunction_UAITaskSubsystem_GenerateTasksFromAI, "GenerateTasksFromAI" }, // 3366567622
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_CurrentModelRowName = { "CurrentModelRowName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSubsystem, CurrentModelRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentModelRowName_MetaData), NewProp_CurrentModelRowName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_CurrentPromptRowName = { "CurrentPromptRowName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSubsystem, CurrentPromptRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPromptRowName_MetaData), NewProp_CurrentPromptRowName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_ModelConfigTable = { "ModelConfigTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSubsystem, ModelConfigTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelConfigTable_MetaData), NewProp_ModelConfigTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_PromptConfigTable = { "PromptConfigTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSubsystem, PromptConfigTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptConfigTable_MetaData), NewProp_PromptConfigTable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_OnTasksGenerated = { "OnTasksGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSubsystem, OnTasksGenerated), Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTasksGenerated_MetaData), NewProp_OnTasksGenerated_MetaData) }; // 574579783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_CurrentModelRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_CurrentPromptRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_ModelConfigTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_PromptConfigTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSubsystem_Statics::NewProp_OnTasksGenerated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITaskSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AItaskPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITaskSubsystem_Statics::ClassParams = {
	&UAITaskSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAITaskSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITaskSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITaskSubsystem()
{
	if (!Z_Registration_Info_UClass_UAITaskSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITaskSubsystem.OuterSingleton, Z_Construct_UClass_UAITaskSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITaskSubsystem.OuterSingleton;
}
UAITaskSubsystem::UAITaskSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskSubsystem);
UAITaskSubsystem::~UAITaskSubsystem() {}
// ********** End Class UAITaskSubsystem ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h__Script_AItaskPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITaskSubsystem, UAITaskSubsystem::StaticClass, TEXT("UAITaskSubsystem"), &Z_Registration_Info_UClass_UAITaskSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskSubsystem), 3053348390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h__Script_AItaskPlugin_4101983003(TEXT("/Script/AItaskPlugin"),
	Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h__Script_AItaskPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h__Script_AItaskPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
