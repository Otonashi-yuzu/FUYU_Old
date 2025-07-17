// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/DialogSceneControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogObject;
#ifdef VNM_DialogSceneControllerComponent_generated_h
#error "DialogSceneControllerComponent.generated.h already included, missing '#pragma once' in DialogSceneControllerComponent.h"
#endif
#define VNM_DialogSceneControllerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_43_DELEGATE \
static void FOnDialogSceneChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogSceneChanged, FName const& DialogSceneId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDialogEnded); \
	DECLARE_FUNCTION(execOnDialogStarted); \
	DECLARE_FUNCTION(execOnCameraTransitionComplete); \
	DECLARE_FUNCTION(execOnHideDialogSceneComplete); \
	DECLARE_FUNCTION(execOnShowDialogSceneComplete);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogSceneControllerComponent(); \
	friend struct Z_Construct_UClass_UDialogSceneControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogSceneControllerComponent, UBaseControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UDialogSceneControllerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogSceneControllerComponent(UDialogSceneControllerComponent&&); \
	UDialogSceneControllerComponent(const UDialogSceneControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogSceneControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogSceneControllerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogSceneControllerComponent) \
	NO_API virtual ~UDialogSceneControllerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UDialogSceneControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
