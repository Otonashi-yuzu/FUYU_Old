// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/RichTextBlockColorDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockColorDecorator() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_URichTextBlockColorDecorator();
VNM_API UClass* Z_Construct_UClass_URichTextBlockColorDecorator_NoRegister();
// End Cross Module References

// Begin Class URichTextBlockColorDecorator
void URichTextBlockColorDecorator::StaticRegisterNativesURichTextBlockColorDecorator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlockColorDecorator);
UClass* Z_Construct_UClass_URichTextBlockColorDecorator_NoRegister()
{
	return URichTextBlockColorDecorator::StaticClass();
}
struct Z_Construct_UClass_URichTextBlockColorDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/RichTextBlockColorDecorator.h" },
		{ "ModuleRelativePath", "Public/UI/RichTextBlockColorDecorator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockColorDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URichTextBlockColorDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockColorDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockColorDecorator_Statics::ClassParams = {
	&URichTextBlockColorDecorator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockColorDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_URichTextBlockColorDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URichTextBlockColorDecorator()
{
	if (!Z_Registration_Info_UClass_URichTextBlockColorDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlockColorDecorator.OuterSingleton, Z_Construct_UClass_URichTextBlockColorDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URichTextBlockColorDecorator.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<URichTextBlockColorDecorator>()
{
	return URichTextBlockColorDecorator::StaticClass();
}
URichTextBlockColorDecorator::URichTextBlockColorDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockColorDecorator);
URichTextBlockColorDecorator::~URichTextBlockColorDecorator() {}
// End Class URichTextBlockColorDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_RichTextBlockColorDecorator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlockColorDecorator, URichTextBlockColorDecorator::StaticClass, TEXT("URichTextBlockColorDecorator"), &Z_Registration_Info_UClass_URichTextBlockColorDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlockColorDecorator), 3340916673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_RichTextBlockColorDecorator_h_1538482759(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_RichTextBlockColorDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_RichTextBlockColorDecorator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
