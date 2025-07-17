// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InGame/BaseChoiceButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseChoiceButton;
#ifdef VNM_BaseChoiceButton_generated_h
#error "BaseChoiceButton.generated.h already included, missing '#pragma once' in BaseChoiceButton.h"
#endif
#define VNM_BaseChoiceButton_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_29_DELEGATE \
static void FOnChoiceButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnChoiceButtonClicked, UBaseChoiceButton* ClickedChoiceButton);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonClicked);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseChoiceButton(); \
	friend struct Z_Construct_UClass_UBaseChoiceButton_Statics; \
public: \
	DECLARE_CLASS(UBaseChoiceButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UBaseChoiceButton)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseChoiceButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseChoiceButton(UBaseChoiceButton&&); \
	UBaseChoiceButton(const UBaseChoiceButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseChoiceButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseChoiceButton); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseChoiceButton) \
	NO_API virtual ~UBaseChoiceButton();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UBaseChoiceButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
