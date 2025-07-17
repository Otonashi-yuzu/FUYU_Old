// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UDialogObject;
struct FDialogData;
#ifdef VNM_DialogObject_generated_h
#error "DialogObject.generated.h already included, missing '#pragma once' in DialogObject.h"
#endif
#define VNM_DialogObject_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_22_DELEGATE \
static void FOnDialogComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDialogComplete, UDialogObject* DialogObjectThatEnded, FName NextDialogObjectId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChoices); \
	DECLARE_FUNCTION(execEndDialog); \
	DECLARE_FUNCTION(execCreateDialogObjectInstance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogObject(); \
	friend struct Z_Construct_UClass_UDialogObject_Statics; \
public: \
	DECLARE_CLASS(UDialogObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UDialogObject)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogObject(UDialogObject&&); \
	UDialogObject(const UDialogObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogObject) \
	NO_API virtual ~UDialogObject();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UDialogObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
