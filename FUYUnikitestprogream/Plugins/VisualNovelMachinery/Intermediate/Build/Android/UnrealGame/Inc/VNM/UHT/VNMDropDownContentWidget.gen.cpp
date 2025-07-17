// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/VNMDropDownContentWidget.h"
#include "VNM/Public/UI/Data/ButtonStyling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMDropDownContentWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownContentWidget();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownContentWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownItemWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownWidget_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling();
// End Cross Module References

// Begin Class UVNMDropDownContentWidget
void UVNMDropDownContentWidget::StaticRegisterNativesUVNMDropDownContentWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMDropDownContentWidget);
UClass* Z_Construct_UClass_UVNMDropDownContentWidget_NoRegister()
{
	return UVNMDropDownContentWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMDropDownContentWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VNMDropDownContentWidget.h" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHeight_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleRowCount_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeConstrainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dropdown" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dropdown" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyling_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownItemWidgetClass_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDownWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownContentWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleRowCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeConstrainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropdownList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyling;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropdownItemWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropDownWidget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMDropDownContentWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_RowHeight = { "RowHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, RowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHeight_MetaData), NewProp_RowHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_VisibleRowCount = { "VisibleRowCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, VisibleRowCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleRowCount_MetaData), NewProp_VisibleRowCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_SizeConstrainer = { "SizeConstrainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, SizeConstrainer), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeConstrainer_MetaData), NewProp_SizeConstrainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropdownList = { "DropdownList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, DropdownList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownList_MetaData), NewProp_DropdownList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_ButtonStyling = { "ButtonStyling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, ButtonStyling), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyling_MetaData), NewProp_ButtonStyling_MetaData) }; // 2873607832
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropdownItemWidgetClass = { "DropdownItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, DropdownItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMDropDownItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownItemWidgetClass_MetaData), NewProp_DropdownItemWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropDownWidget = { "DropDownWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, DropDownWidget), Z_Construct_UClass_UVNMDropDownWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDownWidget_MetaData), NewProp_DropDownWidget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownContentWidget, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMDropDownContentWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_RowHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_VisibleRowCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_SizeConstrainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropdownList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_ButtonStyling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropdownItemWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_DropDownWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownContentWidget_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownContentWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMDropDownContentWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownContentWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMDropDownContentWidget_Statics::ClassParams = {
	&UVNMDropDownContentWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMDropDownContentWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownContentWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownContentWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMDropDownContentWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMDropDownContentWidget()
{
	if (!Z_Registration_Info_UClass_UVNMDropDownContentWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMDropDownContentWidget.OuterSingleton, Z_Construct_UClass_UVNMDropDownContentWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMDropDownContentWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMDropDownContentWidget>()
{
	return UVNMDropDownContentWidget::StaticClass();
}
UVNMDropDownContentWidget::UVNMDropDownContentWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMDropDownContentWidget);
UVNMDropDownContentWidget::~UVNMDropDownContentWidget() {}
// End Class UVNMDropDownContentWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownContentWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMDropDownContentWidget, UVNMDropDownContentWidget::StaticClass, TEXT("UVNMDropDownContentWidget"), &Z_Registration_Info_UClass_UVNMDropDownContentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMDropDownContentWidget), 2448737405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownContentWidget_h_1356882770(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownContentWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownContentWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
