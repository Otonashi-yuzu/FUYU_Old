// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedLayeredImage_init() {}
	ADVANCEDLAYEREDIMAGE_API UFunction* Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedLayeredImage;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedLayeredImage()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedLayeredImage.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedLayeredImage",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5F154D47,
				0x2A79F08E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedLayeredImage.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedLayeredImage.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedLayeredImage(Z_Construct_UPackage__Script_AdvancedLayeredImage, TEXT("/Script/AdvancedLayeredImage"), Z_Registration_Info_UPackage__Script_AdvancedLayeredImage, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F154D47, 0x2A79F08E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
