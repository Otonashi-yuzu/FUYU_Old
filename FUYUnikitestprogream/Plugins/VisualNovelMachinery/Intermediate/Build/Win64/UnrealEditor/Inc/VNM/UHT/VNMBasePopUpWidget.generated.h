// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MainMenu/VNMBasePopUpWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMenuButtonWidget;
enum class EPopUpResult : uint8;
#ifdef VNM_VNMBasePopUpWidget_generated_h
#error "VNMBasePopUpWidget.generated.h already included, missing '#pragma once' in VNMBasePopUpWidget.h"
#endif
#define VNM_VNMBasePopUpWidget_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_36_DELEGATE \
static void FOnPopUpClose_DelegateWrapper(const FMulticastScriptDelegate& OnPopUpClose, const EPopUpResult Result);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPopUpResultCancel); \
	DECLARE_FUNCTION(execOnPopUpResultConfirm); \
	DECLARE_FUNCTION(execShowPopUp); \
	DECLARE_FUNCTION(execSetupPopUp);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVNMBasePopUpWidget(); \
	friend struct Z_Construct_UClass_UVNMBasePopUpWidget_Statics; \
public: \
	DECLARE_CLASS(UVNMBasePopUpWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UVNMBasePopUpWidget)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVNMBasePopUpWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVNMBasePopUpWidget(UVNMBasePopUpWidget&&); \
	UVNMBasePopUpWidget(const UVNMBasePopUpWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVNMBasePopUpWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVNMBasePopUpWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVNMBasePopUpWidget) \
	NO_API virtual ~UVNMBasePopUpWidget();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_23_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UVNMBasePopUpWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h


#define FOREACH_ENUM_EPOPUPRESULT(op) \
	op(EPopUpResult::Unknown) \
	op(EPopUpResult::Confirm) \
	op(EPopUpResult::Cancel) 

enum class EPopUpResult : uint8;
template<> struct TIsUEnumClass<EPopUpResult> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<EPopUpResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
