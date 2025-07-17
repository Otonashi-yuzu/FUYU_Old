// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMChoiceGraph_init() {}
	VNMCHOICEGRAPH_API UFunction* Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature();
	VNMCHOICEGRAPH_API UFunction* Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VNMChoiceGraph;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph()
	{
		if (!Z_Registration_Info_UPackage__Script_VNMChoiceGraph.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VNMChoiceGraph",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAEBEA982,
				0xBCBBC1BF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VNMChoiceGraph.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VNMChoiceGraph.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VNMChoiceGraph(Z_Construct_UPackage__Script_VNMChoiceGraph, TEXT("/Script/VNMChoiceGraph"), Z_Registration_Info_UPackage__Script_VNMChoiceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAEBEA982, 0xBCBBC1BF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
