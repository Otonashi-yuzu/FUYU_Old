// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MenuIconButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuIconButtonWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuIconButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuIconButtonWidget_NoRegister();
// End Cross Module References

// Begin Class UMenuIconButtonWidget
void UMenuIconButtonWidget::StaticRegisterNativesUMenuIconButtonWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuIconButtonWidget);
UClass* Z_Construct_UClass_UMenuIconButtonWidget_NoRegister()
{
	return UMenuIconButtonWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuIconButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MenuIconButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuIconButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Icon Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuIconButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuIconButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuIconButtonWidget_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuIconButtonWidget, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuIconButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuIconButtonWidget_Statics::NewProp_IconImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuIconButtonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuIconButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuIconButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuIconButtonWidget_Statics::ClassParams = {
	&UMenuIconButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMenuIconButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuIconButtonWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuIconButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuIconButtonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuIconButtonWidget()
{
	if (!Z_Registration_Info_UClass_UMenuIconButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuIconButtonWidget.OuterSingleton, Z_Construct_UClass_UMenuIconButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuIconButtonWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMenuIconButtonWidget>()
{
	return UMenuIconButtonWidget::StaticClass();
}
UMenuIconButtonWidget::UMenuIconButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuIconButtonWidget);
UMenuIconButtonWidget::~UMenuIconButtonWidget() {}
// End Class UMenuIconButtonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuIconButtonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuIconButtonWidget, UMenuIconButtonWidget::StaticClass, TEXT("UMenuIconButtonWidget"), &Z_Registration_Info_UClass_UMenuIconButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuIconButtonWidget), 3509230556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuIconButtonWidget_h_1333070325(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuIconButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuIconButtonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
