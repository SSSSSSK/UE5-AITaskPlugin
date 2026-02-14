// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskDataModel.h"

#ifdef AITASKPLUGIN_TaskDataModel_generated_h
#error "TaskDataModel.generated.h already included, missing '#pragma once' in TaskDataModel.h"
#endif
#define AITASKPLUGIN_TaskDataModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeminiPart *******************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeminiPart_Statics; \
	AITASKPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGeminiPart;
// ********** End ScriptStruct FGeminiPart *********************************************************

// ********** Begin ScriptStruct FGeminiContent ****************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeminiContent_Statics; \
	AITASKPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGeminiContent;
// ********** End ScriptStruct FGeminiContent ******************************************************

// ********** Begin ScriptStruct FGeminiCandidate **************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeminiCandidate_Statics; \
	AITASKPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGeminiCandidate;
// ********** End ScriptStruct FGeminiCandidate ****************************************************

// ********** Begin ScriptStruct FGeminiResponseRoot ***********************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeminiResponseRoot_Statics; \
	AITASKPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGeminiResponseRoot;
// ********** End ScriptStruct FGeminiResponseRoot *************************************************

// ********** Begin ScriptStruct FTaskRawData ******************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskRawData_Statics; \
	AITASKPLUGIN_API static class UScriptStruct* StaticStruct();


struct FTaskRawData;
// ********** End ScriptStruct FTaskRawData ********************************************************

// ********** Begin Class UTaskItem ****************************************************************
AITASKPLUGIN_API UClass* Z_Construct_UClass_UTaskItem_NoRegister();

#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskItem(); \
	friend struct Z_Construct_UClass_UTaskItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITASKPLUGIN_API UClass* Z_Construct_UClass_UTaskItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaskItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AItaskPlugin"), Z_Construct_UClass_UTaskItem_NoRegister) \
	DECLARE_SERIALIZER(UTaskItem)


#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaskItem(UTaskItem&&) = delete; \
	UTaskItem(const UTaskItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskItem) \
	NO_API virtual ~UTaskItem();


#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_75_PROLOG
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_78_INCLASS_NO_PURE_DECLS \
	FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaskItem;

// ********** End Class UTaskItem ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_TaskDataModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
