// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VNMEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VNMEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_VNMEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VNMEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0xDDBDFFBA,
				0x32D9FCB9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VNMEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VNMEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VNMEditor(Z_Construct_UPackage__Script_VNMEditor, TEXT("/Script/VNMEditor"), Z_Registration_Info_UPackage__Script_VNMEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDDBDFFBA, 0x32D9FCB9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
