// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseCgDisplayWidget.h"
#include "VNM/Public/VNMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCgDisplayWidget() {}

// Begin Cross Module References
ADVANCEDLAYEREDIMAGE_API UClass* Z_Construct_UClass_UAdvancedLayeredImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseCgDisplayWidget();
VNM_API UClass* Z_Construct_UClass_UBaseCgDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogImageDefinition();
// End Cross Module References

// Begin Class UBaseCgDisplayWidget
void UBaseCgDisplayWidget::StaticRegisterNativesUBaseCgDisplayWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCgDisplayWidget);
UClass* Z_Construct_UClass_UBaseCgDisplayWidget_NoRegister()
{
	return UBaseCgDisplayWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseCgDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseCgDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "Category", "CG" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgImageForTransition_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDefinition_MetaData[] = {
		{ "Category", "CG" },
		{ "Comment", "//Layer Id to Image Id\n" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCgDisplayWidget.h" },
		{ "ToolTip", "Layer Id to Image Id" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CgImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CgImageForTransition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CgLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CgDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCgDisplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCgDisplayWidget, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgImage = { "CgImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCgDisplayWidget, CgImage), Z_Construct_UClass_UAdvancedLayeredImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgImage_MetaData), NewProp_CgImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgImageForTransition = { "CgImageForTransition", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCgDisplayWidget, CgImageForTransition), Z_Construct_UClass_UAdvancedLayeredImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgImageForTransition_MetaData), NewProp_CgImageForTransition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers_ValueProp = { "CgLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers_Key_KeyProp = { "CgLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers = { "CgLayers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCgDisplayWidget, CgLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgLayers_MetaData), NewProp_CgLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgDefinition = { "CgDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCgDisplayWidget, CgDefinition), Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDefinition_MetaData), NewProp_CgDefinition_MetaData) }; // 1970769294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCgDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgImageForTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCgDisplayWidget_Statics::NewProp_CgDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCgDisplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCgDisplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVNMWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCgDisplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCgDisplayWidget_Statics::ClassParams = {
	&UBaseCgDisplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseCgDisplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCgDisplayWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCgDisplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCgDisplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCgDisplayWidget()
{
	if (!Z_Registration_Info_UClass_UBaseCgDisplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCgDisplayWidget.OuterSingleton, Z_Construct_UClass_UBaseCgDisplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCgDisplayWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseCgDisplayWidget>()
{
	return UBaseCgDisplayWidget::StaticClass();
}
UBaseCgDisplayWidget::UBaseCgDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCgDisplayWidget);
UBaseCgDisplayWidget::~UBaseCgDisplayWidget() {}
// End Class UBaseCgDisplayWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCgDisplayWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCgDisplayWidget, UBaseCgDisplayWidget::StaticClass, TEXT("UBaseCgDisplayWidget"), &Z_Registration_Info_UClass_UBaseCgDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCgDisplayWidget), 181975208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCgDisplayWidget_h_219085953(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCgDisplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCgDisplayWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
