// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnUtils/Public/VNMYarnSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMYarnSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_YarnUtils();
YARNUTILS_API UClass* Z_Construct_UClass_UVNMYarnSettings();
YARNUTILS_API UClass* Z_Construct_UClass_UVNMYarnSettings_NoRegister();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnCommandBlueprintLibrary_NoRegister();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnFunctionBlueprintLibrary_NoRegister();
// End Cross Module References

// Begin Class UVNMYarnSettings
void UVNMYarnSettings::StaticRegisterNativesUVNMYarnSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMYarnSettings);
UClass* Z_Construct_UClass_UVNMYarnSettings_NoRegister()
{
	return UVNMYarnSettings::StaticClass();
}
struct Z_Construct_UClass_UVNMYarnSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VNMYarnSettings.h" },
		{ "ModuleRelativePath", "Public/VNMYarnSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YarnFunctionLibrary_MetaData[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/VNMYarnSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YarnCommandLibrary_MetaData[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/VNMYarnSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_YarnFunctionLibrary;
	static const UECodeGen_Private::FClassPropertyParams NewProp_YarnCommandLibrary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMYarnSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMYarnSettings_Statics::NewProp_YarnFunctionLibrary = { "YarnFunctionLibrary", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMYarnSettings, YarnFunctionLibrary), Z_Construct_UClass_UClass, Z_Construct_UClass_UYarnFunctionBlueprintLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YarnFunctionLibrary_MetaData), NewProp_YarnFunctionLibrary_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMYarnSettings_Statics::NewProp_YarnCommandLibrary = { "YarnCommandLibrary", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMYarnSettings, YarnCommandLibrary), Z_Construct_UClass_UClass, Z_Construct_UClass_UYarnCommandBlueprintLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YarnCommandLibrary_MetaData), NewProp_YarnCommandLibrary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMYarnSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMYarnSettings_Statics::NewProp_YarnFunctionLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMYarnSettings_Statics::NewProp_YarnCommandLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMYarnSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMYarnSettings_Statics::ClassParams = {
	&UVNMYarnSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMYarnSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMYarnSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMYarnSettings()
{
	if (!Z_Registration_Info_UClass_UVNMYarnSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMYarnSettings.OuterSingleton, Z_Construct_UClass_UVNMYarnSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMYarnSettings.OuterSingleton;
}
template<> YARNUTILS_API UClass* StaticClass<UVNMYarnSettings>()
{
	return UVNMYarnSettings::StaticClass();
}
UVNMYarnSettings::UVNMYarnSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMYarnSettings);
UVNMYarnSettings::~UVNMYarnSettings() {}
// End Class UVNMYarnSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_VNMYarnSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMYarnSettings, UVNMYarnSettings::StaticClass, TEXT("UVNMYarnSettings"), &Z_Registration_Info_UClass_UVNMYarnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMYarnSettings), 3358187320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_VNMYarnSettings_h_4019009862(TEXT("/Script/YarnUtils"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_VNMYarnSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_VNMYarnSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
