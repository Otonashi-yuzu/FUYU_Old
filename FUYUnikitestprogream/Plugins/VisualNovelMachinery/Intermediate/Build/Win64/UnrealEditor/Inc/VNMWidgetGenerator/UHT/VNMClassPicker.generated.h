// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VNMClassPicker.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNMWIDGETGENERATOR_VNMClassPicker_generated_h
#error "VNMClassPicker.generated.h already included, missing '#pragma once' in VNMClassPicker.h"
#endif
#define VNMWIDGETGENERATOR_VNMClassPicker_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_UI_VNMClassPicker_h


#define FOREACH_ENUM_EVNMMENUWIDGET(op) \
	op(EVNMMenuWidget::MenuContentWidget) \
	op(EVNMMenuWidget::MenuTextButtonWidget) \
	op(EVNMMenuWidget::MenuIconButtonWidget) \
	op(EVNMMenuWidget::SliderWidget) \
	op(EVNMMenuWidget::DropdownItemWidget) \
	op(EVNMMenuWidget::DropdownContentWidget) \
	op(EVNMMenuWidget::DropdownWidget) \
	op(EVNMMenuWidget::PagingWidget) \
	op(EVNMMenuWidget::GalleryDisplayImageVisual) \
	op(EVNMMenuWidget::GalleryImageVisual) \
	op(EVNMMenuWidget::GalleryWidget) \
	op(EVNMMenuWidget::SaveGameVisual) \
	op(EVNMMenuWidget::SaveGameWidget) \
	op(EVNMMenuWidget::LoadGameWidget) \
	op(EVNMMenuWidget::BasePopUpWidget) \
	op(EVNMMenuWidget::BaseTextBoxPopUpWidget) \
	op(EVNMMenuWidget::WindowModeVisual) \
	op(EVNMMenuWidget::OptionsWidget) \
	op(EVNMMenuWidget::AboutWidget) \
	op(EVNMMenuWidget::ChoicesWidget) \
	op(EVNMMenuWidget::MainMenuWidget) \
	op(EVNMMenuWidget::PauseMenuWidget) \
	op(EVNMMenuWidget::Count) 

enum class EVNMMenuWidget : uint8;
template<> struct TIsUEnumClass<EVNMMenuWidget> { enum { Value = true }; };
template<> VNMWIDGETGENERATOR_API UEnum* StaticEnum<EVNMMenuWidget>();

#define FOREACH_ENUM_EVNMWIDGET(op) \
	op(EVNMWidget::CgDisplayWidget) \
	op(EVNMWidget::CharacterDisplayWidget) \
	op(EVNMWidget::ChoiceButton) \
	op(EVNMWidget::ChoiceWidget) \
	op(EVNMWidget::ControlButton) \
	op(EVNMWidget::DialogBoxWidget) \
	op(EVNMWidget::ImageChoiceButton) \
	op(EVNMWidget::ImageChoiceWidget) \
	op(EVNMWidget::SceneBackgroundDisplayWidget) \
	op(EVNMWidget::Count) 

enum class EVNMWidget : uint8;
template<> struct TIsUEnumClass<EVNMWidget> { enum { Value = true }; };
template<> VNMWIDGETGENERATOR_API UEnum* StaticEnum<EVNMWidget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
