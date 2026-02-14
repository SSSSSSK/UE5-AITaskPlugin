// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAItaskPlugin_init() {}
	AITASKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AItaskPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AItaskPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_AItaskPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AItaskPlugin_OnTasksGenerated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AItaskPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D362342,
				0x7EE5270E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AItaskPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AItaskPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AItaskPlugin(Z_Construct_UPackage__Script_AItaskPlugin, TEXT("/Script/AItaskPlugin"), Z_Registration_Info_UPackage__Script_AItaskPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D362342, 0x7EE5270E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
