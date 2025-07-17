// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MainMenu/MenuButtonWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMenuButtonWidget;
struct FButtonStyling;
#ifdef VNM_MenuButtonWidget_generated_h
#error "MenuButtonWidget.generated.h already included, missing '#pragma once' in MenuButtonWidget.h"
#endif
#define VNM_MenuButtonWidget_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_25_DELEGATE \
static void FOnMenuButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonEvent, UMenuButtonWidget* ClickedButton);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_42_DELEGATE \
static void FOnMenuButtonFlagEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonFlagEvent, UMenuButtonWidget* ClickedButton, bool FlagChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMenuButtonReleased); \
	DECLARE_FUNCTION(execOnMenuButtonPressed); \
	DECLARE_FUNCTION(execOnMenuButtonUnhovered); \
	DECLARE_FUNCTION(execOnMenuButtonHovered); \
	DECLARE_FUNCTION(execOnMenuButtonClicked); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetButtonStyling);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuButtonWidget(); \
	friend struct Z_Construct_UClass_UMenuButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuButtonWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UMenuButtonWidget)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenuButtonWidget(UMenuButtonWidget&&); \
	UMenuButtonWidget(const UMenuButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuButtonWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuButtonWidget) \
	NO_API virtual ~UMenuButtonWidget();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UMenuButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
