// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMWidgetGenerator/Public/UI/VNMClassPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMClassPicker() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMWidgetGenerator();
VNMWIDGETGENERATOR_API UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget();
VNMWIDGETGENERATOR_API UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget();
// End Cross Module References

// Begin Enum EVNMMenuWidget
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVNMMenuWidget;
static UEnum* EVNMMenuWidget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVNMMenuWidget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVNMMenuWidget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget, (UObject*)Z_Construct_UPackage__Script_VNMWidgetGenerator(), TEXT("EVNMMenuWidget"));
	}
	return Z_Registration_Info_UEnum_EVNMMenuWidget.OuterSingleton;
}
template<> VNMWIDGETGENERATOR_API UEnum* StaticEnum<EVNMMenuWidget>()
{
	return EVNMMenuWidget_StaticEnum();
}
struct Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AboutWidget.Name", "EVNMMenuWidget::AboutWidget" },
		{ "BasePopUpWidget.Name", "EVNMMenuWidget::BasePopUpWidget" },
		{ "BaseTextBoxPopUpWidget.Name", "EVNMMenuWidget::BaseTextBoxPopUpWidget" },
		{ "BlueprintType", "true" },
		{ "ChoicesWidget.Name", "EVNMMenuWidget::ChoicesWidget" },
		{ "Count.Comment", "// Do not add below this\n" },
		{ "Count.Name", "EVNMMenuWidget::Count" },
		{ "Count.ToolTip", "Do not add below this" },
		{ "DropdownContentWidget.Name", "EVNMMenuWidget::DropdownContentWidget" },
		{ "DropdownItemWidget.Name", "EVNMMenuWidget::DropdownItemWidget" },
		{ "DropdownWidget.Name", "EVNMMenuWidget::DropdownWidget" },
		{ "GalleryDisplayImageVisual.Name", "EVNMMenuWidget::GalleryDisplayImageVisual" },
		{ "GalleryImageVisual.Name", "EVNMMenuWidget::GalleryImageVisual" },
		{ "GalleryWidget.Name", "EVNMMenuWidget::GalleryWidget" },
		{ "LoadGameWidget.Name", "EVNMMenuWidget::LoadGameWidget" },
		{ "MainMenuWidget.Name", "EVNMMenuWidget::MainMenuWidget" },
		{ "MenuContentWidget.Name", "EVNMMenuWidget::MenuContentWidget" },
		{ "MenuIconButtonWidget.Name", "EVNMMenuWidget::MenuIconButtonWidget" },
		{ "MenuTextButtonWidget.Name", "EVNMMenuWidget::MenuTextButtonWidget" },
		{ "ModuleRelativePath", "Public/UI/VNMClassPicker.h" },
		{ "OptionsWidget.Name", "EVNMMenuWidget::OptionsWidget" },
		{ "PagingWidget.Name", "EVNMMenuWidget::PagingWidget" },
		{ "PauseMenuWidget.Name", "EVNMMenuWidget::PauseMenuWidget" },
		{ "SaveGameVisual.Name", "EVNMMenuWidget::SaveGameVisual" },
		{ "SaveGameWidget.Name", "EVNMMenuWidget::SaveGameWidget" },
		{ "SliderWidget.Name", "EVNMMenuWidget::SliderWidget" },
		{ "WindowModeVisual.Name", "EVNMMenuWidget::WindowModeVisual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVNMMenuWidget::MenuContentWidget", (int64)EVNMMenuWidget::MenuContentWidget },
		{ "EVNMMenuWidget::MenuTextButtonWidget", (int64)EVNMMenuWidget::MenuTextButtonWidget },
		{ "EVNMMenuWidget::MenuIconButtonWidget", (int64)EVNMMenuWidget::MenuIconButtonWidget },
		{ "EVNMMenuWidget::SliderWidget", (int64)EVNMMenuWidget::SliderWidget },
		{ "EVNMMenuWidget::DropdownItemWidget", (int64)EVNMMenuWidget::DropdownItemWidget },
		{ "EVNMMenuWidget::DropdownContentWidget", (int64)EVNMMenuWidget::DropdownContentWidget },
		{ "EVNMMenuWidget::DropdownWidget", (int64)EVNMMenuWidget::DropdownWidget },
		{ "EVNMMenuWidget::PagingWidget", (int64)EVNMMenuWidget::PagingWidget },
		{ "EVNMMenuWidget::GalleryDisplayImageVisual", (int64)EVNMMenuWidget::GalleryDisplayImageVisual },
		{ "EVNMMenuWidget::GalleryImageVisual", (int64)EVNMMenuWidget::GalleryImageVisual },
		{ "EVNMMenuWidget::GalleryWidget", (int64)EVNMMenuWidget::GalleryWidget },
		{ "EVNMMenuWidget::SaveGameVisual", (int64)EVNMMenuWidget::SaveGameVisual },
		{ "EVNMMenuWidget::SaveGameWidget", (int64)EVNMMenuWidget::SaveGameWidget },
		{ "EVNMMenuWidget::LoadGameWidget", (int64)EVNMMenuWidget::LoadGameWidget },
		{ "EVNMMenuWidget::BasePopUpWidget", (int64)EVNMMenuWidget::BasePopUpWidget },
		{ "EVNMMenuWidget::BaseTextBoxPopUpWidget", (int64)EVNMMenuWidget::BaseTextBoxPopUpWidget },
		{ "EVNMMenuWidget::WindowModeVisual", (int64)EVNMMenuWidget::WindowModeVisual },
		{ "EVNMMenuWidget::OptionsWidget", (int64)EVNMMenuWidget::OptionsWidget },
		{ "EVNMMenuWidget::AboutWidget", (int64)EVNMMenuWidget::AboutWidget },
		{ "EVNMMenuWidget::ChoicesWidget", (int64)EVNMMenuWidget::ChoicesWidget },
		{ "EVNMMenuWidget::MainMenuWidget", (int64)EVNMMenuWidget::MainMenuWidget },
		{ "EVNMMenuWidget::PauseMenuWidget", (int64)EVNMMenuWidget::PauseMenuWidget },
		{ "EVNMMenuWidget::Count", (int64)EVNMMenuWidget::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNMWidgetGenerator,
	nullptr,
	"EVNMMenuWidget",
	"EVNMMenuWidget",
	Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget()
{
	if (!Z_Registration_Info_UEnum_EVNMMenuWidget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVNMMenuWidget.InnerSingleton, Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVNMMenuWidget.InnerSingleton;
}
// End Enum EVNMMenuWidget

// Begin Enum EVNMWidget
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVNMWidget;
static UEnum* EVNMWidget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVNMWidget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVNMWidget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget, (UObject*)Z_Construct_UPackage__Script_VNMWidgetGenerator(), TEXT("EVNMWidget"));
	}
	return Z_Registration_Info_UEnum_EVNMWidget.OuterSingleton;
}
template<> VNMWIDGETGENERATOR_API UEnum* StaticEnum<EVNMWidget>()
{
	return EVNMWidget_StaticEnum();
}
struct Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CgDisplayWidget.Name", "EVNMWidget::CgDisplayWidget" },
		{ "CharacterDisplayWidget.Name", "EVNMWidget::CharacterDisplayWidget" },
		{ "ChoiceButton.Name", "EVNMWidget::ChoiceButton" },
		{ "ChoiceWidget.Name", "EVNMWidget::ChoiceWidget" },
		{ "ControlButton.Name", "EVNMWidget::ControlButton" },
		{ "Count.Comment", "// Do not add below this\n" },
		{ "Count.Name", "EVNMWidget::Count" },
		{ "Count.ToolTip", "Do not add below this" },
		{ "DialogBoxWidget.Name", "EVNMWidget::DialogBoxWidget" },
		{ "ImageChoiceButton.Name", "EVNMWidget::ImageChoiceButton" },
		{ "ImageChoiceWidget.Name", "EVNMWidget::ImageChoiceWidget" },
		{ "ModuleRelativePath", "Public/UI/VNMClassPicker.h" },
		{ "SceneBackgroundDisplayWidget.Name", "EVNMWidget::SceneBackgroundDisplayWidget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVNMWidget::CgDisplayWidget", (int64)EVNMWidget::CgDisplayWidget },
		{ "EVNMWidget::CharacterDisplayWidget", (int64)EVNMWidget::CharacterDisplayWidget },
		{ "EVNMWidget::ChoiceButton", (int64)EVNMWidget::ChoiceButton },
		{ "EVNMWidget::ChoiceWidget", (int64)EVNMWidget::ChoiceWidget },
		{ "EVNMWidget::ControlButton", (int64)EVNMWidget::ControlButton },
		{ "EVNMWidget::DialogBoxWidget", (int64)EVNMWidget::DialogBoxWidget },
		{ "EVNMWidget::ImageChoiceButton", (int64)EVNMWidget::ImageChoiceButton },
		{ "EVNMWidget::ImageChoiceWidget", (int64)EVNMWidget::ImageChoiceWidget },
		{ "EVNMWidget::SceneBackgroundDisplayWidget", (int64)EVNMWidget::SceneBackgroundDisplayWidget },
		{ "EVNMWidget::Count", (int64)EVNMWidget::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNMWidgetGenerator,
	nullptr,
	"EVNMWidget",
	"EVNMWidget",
	Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget()
{
	if (!Z_Registration_Info_UEnum_EVNMWidget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVNMWidget.InnerSingleton, Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVNMWidget.InnerSingleton;
}
// End Enum EVNMWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_UI_VNMClassPicker_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVNMMenuWidget_StaticEnum, TEXT("EVNMMenuWidget"), &Z_Registration_Info_UEnum_EVNMMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 509015781U) },
		{ EVNMWidget_StaticEnum, TEXT("EVNMWidget"), &Z_Registration_Info_UEnum_EVNMWidget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2588184914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_UI_VNMClassPicker_h_515575045(TEXT("/Script/VNMWidgetGenerator"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_UI_VNMClassPicker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_UI_VNMClassPicker_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
