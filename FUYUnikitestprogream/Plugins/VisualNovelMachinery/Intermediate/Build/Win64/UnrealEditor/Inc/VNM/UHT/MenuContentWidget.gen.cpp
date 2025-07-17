// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MenuContentWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuContentWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuContentWidget();
VNM_API UClass* Z_Construct_UClass_UMenuContentWidget_NoRegister();
// End Cross Module References

// Begin Class UMenuContentWidget
void UMenuContentWidget::StaticRegisterNativesUMenuContentWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuContentWidget);
UClass* Z_Construct_UClass_UMenuContentWidget_NoRegister()
{
	return UMenuContentWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuContentWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MenuContentWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Content" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuContentWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuContentWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuContentWidget_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuContentWidget, Content), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuContentWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuContentWidget_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuContentWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuContentWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuContentWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuContentWidget_Statics::ClassParams = {
	&UMenuContentWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMenuContentWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuContentWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuContentWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuContentWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuContentWidget()
{
	if (!Z_Registration_Info_UClass_UMenuContentWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuContentWidget.OuterSingleton, Z_Construct_UClass_UMenuContentWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuContentWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMenuContentWidget>()
{
	return UMenuContentWidget::StaticClass();
}
UMenuContentWidget::UMenuContentWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuContentWidget);
UMenuContentWidget::~UMenuContentWidget() {}
// End Class UMenuContentWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuContentWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuContentWidget, UMenuContentWidget::StaticClass, TEXT("UMenuContentWidget"), &Z_Registration_Info_UClass_UMenuContentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuContentWidget), 1303513648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuContentWidget_h_3024953926(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuContentWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuContentWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
