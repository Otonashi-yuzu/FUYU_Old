// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h"
#include "VNM/Public/VNMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSceneBackgroundDisplayWidget() {}

// Begin Cross Module References
ADVANCEDLAYEREDIMAGE_API UClass* Z_Construct_UClass_UAdvancedLayeredImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget();
VNM_API UClass* Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogImageDefinition();
// End Cross Module References

// Begin Class UBaseSceneBackgroundDisplayWidget
void UBaseSceneBackgroundDisplayWidget::StaticRegisterNativesUBaseSceneBackgroundDisplayWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSceneBackgroundDisplayWidget);
UClass* Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_NoRegister()
{
	return UBaseSceneBackgroundDisplayWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundImageForTransition_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundDefinition_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "Comment", "// Layer Id to Image Id\n" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseSceneBackgroundDisplayWidget.h" },
		{ "ToolTip", "Layer Id to Image Id" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneBackgroundImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneBackgroundImageForTransition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SceneBackgroundLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneBackgroundDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSceneBackgroundDisplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSceneBackgroundDisplayWidget, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundImage = { "SceneBackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSceneBackgroundDisplayWidget, SceneBackgroundImage), Z_Construct_UClass_UAdvancedLayeredImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundImage_MetaData), NewProp_SceneBackgroundImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundImageForTransition = { "SceneBackgroundImageForTransition", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSceneBackgroundDisplayWidget, SceneBackgroundImageForTransition), Z_Construct_UClass_UAdvancedLayeredImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundImageForTransition_MetaData), NewProp_SceneBackgroundImageForTransition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers_ValueProp = { "SceneBackgroundLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers_Key_KeyProp = { "SceneBackgroundLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers = { "SceneBackgroundLayers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSceneBackgroundDisplayWidget, SceneBackgroundLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundLayers_MetaData), NewProp_SceneBackgroundLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundDefinition = { "SceneBackgroundDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSceneBackgroundDisplayWidget, SceneBackgroundDefinition), Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundDefinition_MetaData), NewProp_SceneBackgroundDefinition_MetaData) }; // 1970769294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundImageForTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::NewProp_SceneBackgroundDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVNMWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::ClassParams = {
	&UBaseSceneBackgroundDisplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget()
{
	if (!Z_Registration_Info_UClass_UBaseSceneBackgroundDisplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSceneBackgroundDisplayWidget.OuterSingleton, Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseSceneBackgroundDisplayWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseSceneBackgroundDisplayWidget>()
{
	return UBaseSceneBackgroundDisplayWidget::StaticClass();
}
UBaseSceneBackgroundDisplayWidget::UBaseSceneBackgroundDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSceneBackgroundDisplayWidget);
UBaseSceneBackgroundDisplayWidget::~UBaseSceneBackgroundDisplayWidget() {}
// End Class UBaseSceneBackgroundDisplayWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseSceneBackgroundDisplayWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget, UBaseSceneBackgroundDisplayWidget::StaticClass, TEXT("UBaseSceneBackgroundDisplayWidget"), &Z_Registration_Info_UClass_UBaseSceneBackgroundDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSceneBackgroundDisplayWidget), 1728678142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseSceneBackgroundDisplayWidget_h_1753122865(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseSceneBackgroundDisplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseSceneBackgroundDisplayWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
