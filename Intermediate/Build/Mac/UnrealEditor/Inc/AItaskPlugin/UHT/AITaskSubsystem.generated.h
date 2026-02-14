// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AITaskSubsystem.h"

#ifdef AITASKPLUGIN_AITaskSubsystem_generated_h
#error "AITaskSubsystem.generated.h already included, missing '#pragma once' in AITaskSubsystem.h"
#endif
#define AITASKPLUGIN_AITaskSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTaskItem;

// ********** Begin Delegate FOnTasksGenerated *****************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_10_DELEGATE \
AITASKPLUGIN_API void FOnTasksGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnTasksGenerated, TArray<UTaskItem*> const& NewTasks);


// ********** End Delegate FOnTasksGenerated *******************************************************

// ********** Begin Class UAITaskSubsystem *********************************************************
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateTasksFromAI); \
	DECLARE_FUNCTION(execDebugListModels);


AITASKPLUGIN_API UClass* Z_Construct_UClass_UAITaskSubsystem_NoRegister();

#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITaskSubsystem(); \
	friend struct Z_Construct_UClass_UAITaskSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITASKPLUGIN_API UClass* Z_Construct_UClass_UAITaskSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAITaskSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AItaskPlugin"), Z_Construct_UClass_UAITaskSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAITaskSubsystem)


#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITaskSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAITaskSubsystem(UAITaskSubsystem&&) = delete; \
	UAITaskSubsystem(const UAITaskSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITaskSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITaskSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAITaskSubsystem) \
	NO_API virtual ~UAITaskSubsystem();


#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_12_PROLOG
#define FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAITaskSubsystem;

// ********** End Class UAITaskSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_z_Documents_Unreal_Projects_AChannProject_Plugins_AItaskPlugin_Source_AItaskPlugin_Public_AITaskSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
