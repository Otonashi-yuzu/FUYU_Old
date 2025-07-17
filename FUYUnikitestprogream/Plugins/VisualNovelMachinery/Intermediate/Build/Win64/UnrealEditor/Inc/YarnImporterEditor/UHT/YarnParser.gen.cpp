// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnImporterEditor/Private/YarnParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnParser() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_YarnImporterEditor();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UYarnParser();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UYarnParser_NoRegister();
// End Cross Module References

// Begin Class UYarnParser
void UYarnParser::StaticRegisterNativesUYarnParser()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYarnParser);
UClass* Z_Construct_UClass_UYarnParser_NoRegister()
{
	return UYarnParser::StaticClass();
}
struct Z_Construct_UClass_UYarnParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "YarnParser.h" },
		{ "ModuleRelativePath", "Private/YarnParser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYarnParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYarnParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYarnParser_Statics::ClassParams = {
	&UYarnParser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnParser_Statics::Class_MetaDataParams), Z_Construct_UClass_UYarnParser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYarnParser()
{
	if (!Z_Registration_Info_UClass_UYarnParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYarnParser.OuterSingleton, Z_Construct_UClass_UYarnParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYarnParser.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UClass* StaticClass<UYarnParser>()
{
	return UYarnParser::StaticClass();
}
UYarnParser::UYarnParser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYarnParser);
UYarnParser::~UYarnParser() {}
// End Class UYarnParser

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnParser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYarnParser, UYarnParser::StaticClass, TEXT("UYarnParser"), &Z_Registration_Info_UClass_UYarnParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYarnParser), 438138230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnParser_h_3156884719(TEXT("/Script/YarnImporterEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnParser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnParser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
