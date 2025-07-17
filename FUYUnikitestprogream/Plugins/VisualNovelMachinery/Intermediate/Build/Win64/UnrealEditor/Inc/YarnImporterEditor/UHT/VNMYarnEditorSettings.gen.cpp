// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnImporterEditor/Public/VNMYarnEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMYarnEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_YarnImporterEditor();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UVNMYarnEditorSettings();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UVNMYarnEditorSettings_NoRegister();
// End Cross Module References

// Begin Class UVNMYarnEditorSettings
void UVNMYarnEditorSettings::StaticRegisterNativesUVNMYarnEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMYarnEditorSettings);
UClass* Z_Construct_UClass_UVNMYarnEditorSettings_NoRegister()
{
	return UVNMYarnEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UVNMYarnEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VNMYarnEditorSettings.h" },
		{ "ModuleRelativePath", "Public/VNMYarnEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YarnCompilerPath_MetaData[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/VNMYarnEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_YarnCompilerPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMYarnEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMYarnEditorSettings_Statics::NewProp_YarnCompilerPath = { "YarnCompilerPath", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMYarnEditorSettings, YarnCompilerPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YarnCompilerPath_MetaData), NewProp_YarnCompilerPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMYarnEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMYarnEditorSettings_Statics::NewProp_YarnCompilerPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMYarnEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMYarnEditorSettings_Statics::ClassParams = {
	&UVNMYarnEditorSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMYarnEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMYarnEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMYarnEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMYarnEditorSettings()
{
	if (!Z_Registration_Info_UClass_UVNMYarnEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMYarnEditorSettings.OuterSingleton, Z_Construct_UClass_UVNMYarnEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMYarnEditorSettings.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UClass* StaticClass<UVNMYarnEditorSettings>()
{
	return UVNMYarnEditorSettings::StaticClass();
}
UVNMYarnEditorSettings::UVNMYarnEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMYarnEditorSettings);
UVNMYarnEditorSettings::~UVNMYarnEditorSettings() {}
// End Class UVNMYarnEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_VNMYarnEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMYarnEditorSettings, UVNMYarnEditorSettings::StaticClass, TEXT("UVNMYarnEditorSettings"), &Z_Registration_Info_UClass_UVNMYarnEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMYarnEditorSettings), 146532866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_VNMYarnEditorSettings_h_3339603917(TEXT("/Script/YarnImporterEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_VNMYarnEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_VNMYarnEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
