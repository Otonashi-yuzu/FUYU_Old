// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/GalleryImageVisual.h"
#include "VNM/Public/VNMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalleryImageVisual() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UGalleryDisplayImageVisual_NoRegister();
VNM_API UClass* Z_Construct_UClass_UGalleryImageVisual();
VNM_API UClass* Z_Construct_UClass_UGalleryImageVisual_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogImageDefinition();
// End Cross Module References

// Begin Class UGalleryImageVisual
void UGalleryImageVisual::StaticRegisterNativesUGalleryImageVisual()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGalleryImageVisual);
UClass* Z_Construct_UClass_UGalleryImageVisual_NoRegister()
{
	return UGalleryImageVisual::StaticClass();
}
struct Z_Construct_UClass_UGalleryImageVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Style" },
		{ "IncludePath", "UI/MainMenu/GalleryImageVisual.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryImageId_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgIds_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDefinitions_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryPreviewImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryLockImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryLockBlur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryDisplayImageVisualClass_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryImageVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GalleryImageId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CgIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CgDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CgDefinitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryPreviewImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryLockImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryLockBlur;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GalleryDisplayImageVisualClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGalleryImageVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryImageId = { "GalleryImageId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, GalleryImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryImageId_MetaData), NewProp_GalleryImageId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgIds_Inner = { "CgIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgIds = { "CgIds", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, CgIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgIds_MetaData), NewProp_CgIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgDefinitions_Inner = { "CgDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(0, nullptr) }; // 1970769294
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgDefinitions = { "CgDefinitions", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, CgDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDefinitions_MetaData), NewProp_CgDefinitions_MetaData) }; // 1970769294
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryPreviewImage = { "GalleryPreviewImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, GalleryPreviewImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryPreviewImage_MetaData), NewProp_GalleryPreviewImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryLockImage = { "GalleryLockImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, GalleryLockImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryLockImage_MetaData), NewProp_GalleryLockImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryLockBlur = { "GalleryLockBlur", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, GalleryLockBlur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryLockBlur_MetaData), NewProp_GalleryLockBlur_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryDisplayImageVisualClass = { "GalleryDisplayImageVisualClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryImageVisual, GalleryDisplayImageVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGalleryDisplayImageVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryDisplayImageVisualClass_MetaData), NewProp_GalleryDisplayImageVisualClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGalleryImageVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryImageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_CgDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryPreviewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryLockImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryLockBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryImageVisual_Statics::NewProp_GalleryDisplayImageVisualClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryImageVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGalleryImageVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryImageVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGalleryImageVisual_Statics::ClassParams = {
	&UGalleryImageVisual::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGalleryImageVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryImageVisual_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryImageVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UGalleryImageVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGalleryImageVisual()
{
	if (!Z_Registration_Info_UClass_UGalleryImageVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGalleryImageVisual.OuterSingleton, Z_Construct_UClass_UGalleryImageVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGalleryImageVisual.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UGalleryImageVisual>()
{
	return UGalleryImageVisual::StaticClass();
}
UGalleryImageVisual::UGalleryImageVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGalleryImageVisual);
UGalleryImageVisual::~UGalleryImageVisual() {}
// End Class UGalleryImageVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryImageVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGalleryImageVisual, UGalleryImageVisual::StaticClass, TEXT("UGalleryImageVisual"), &Z_Registration_Info_UClass_UGalleryImageVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGalleryImageVisual), 994268540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryImageVisual_h_3420269969(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryImageVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryImageVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
