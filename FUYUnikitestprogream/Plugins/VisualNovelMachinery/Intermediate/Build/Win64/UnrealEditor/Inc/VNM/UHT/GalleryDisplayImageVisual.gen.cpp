// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/GalleryDisplayImageVisual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalleryDisplayImageVisual() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UGalleryDisplayImageVisual();
VNM_API UClass* Z_Construct_UClass_UGalleryDisplayImageVisual_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
// End Cross Module References

// Begin Class UGalleryDisplayImageVisual
void UGalleryDisplayImageVisual::StaticRegisterNativesUGalleryDisplayImageVisual()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGalleryDisplayImageVisual);
UClass* Z_Construct_UClass_UGalleryDisplayImageVisual_NoRegister()
{
	return UGalleryDisplayImageVisual::StaticClass();
}
struct Z_Construct_UClass_UGalleryDisplayImageVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Style" },
		{ "IncludePath", "UI/MainMenu/GalleryDisplayImageVisual.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryDisplayImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryDisplayImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryDisplayImageVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryDisplayImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGalleryDisplayImageVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::NewProp_GalleryDisplayImage = { "GalleryDisplayImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryDisplayImageVisual, GalleryDisplayImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryDisplayImage_MetaData), NewProp_GalleryDisplayImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::NewProp_GalleryDisplayImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::ClassParams = {
	&UGalleryDisplayImageVisual::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGalleryDisplayImageVisual()
{
	if (!Z_Registration_Info_UClass_UGalleryDisplayImageVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGalleryDisplayImageVisual.OuterSingleton, Z_Construct_UClass_UGalleryDisplayImageVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGalleryDisplayImageVisual.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UGalleryDisplayImageVisual>()
{
	return UGalleryDisplayImageVisual::StaticClass();
}
UGalleryDisplayImageVisual::UGalleryDisplayImageVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGalleryDisplayImageVisual);
UGalleryDisplayImageVisual::~UGalleryDisplayImageVisual() {}
// End Class UGalleryDisplayImageVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryDisplayImageVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGalleryDisplayImageVisual, UGalleryDisplayImageVisual::StaticClass, TEXT("UGalleryDisplayImageVisual"), &Z_Registration_Info_UClass_UGalleryDisplayImageVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGalleryDisplayImageVisual), 931331842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryDisplayImageVisual_h_2323131665(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryDisplayImageVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryDisplayImageVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
