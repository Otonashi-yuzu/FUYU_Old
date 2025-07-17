// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/VNMGeneralUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacter3DControllerComponent;
class UCharacterControllerComponent;
class UDialogAudioControllerComponent;
class UDialogControllerComponent;
class UDialogImageControllerComponent;
class UDialogSceneControllerComponent;
class UMemoryControllerComponent;
class UObject;
#ifdef VNM_VNMGeneralUtils_generated_h
#error "VNMGeneralUtils.generated.h already included, missing '#pragma once' in VNMGeneralUtils.h"
#endif
#define VNM_VNMGeneralUtils_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDialogAudioControllerComponent); \
	DECLARE_FUNCTION(execGetMemoryControllerComponent); \
	DECLARE_FUNCTION(execGetDialogImageControllerComponent); \
	DECLARE_FUNCTION(execGetDialogSceneControllerComponent); \
	DECLARE_FUNCTION(execGetDialogControllerComponent); \
	DECLARE_FUNCTION(execGetCharacter3DControllerComponent); \
	DECLARE_FUNCTION(execGetCharacterControllerComponent); \
	DECLARE_FUNCTION(execGetVisualNovelMachineryVersion); \
	DECLARE_FUNCTION(execGetCompanyName); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execGetProjectVersion);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVNMGeneralUtils(); \
	friend struct Z_Construct_UClass_UVNMGeneralUtils_Statics; \
public: \
	DECLARE_CLASS(UVNMGeneralUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UVNMGeneralUtils)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVNMGeneralUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVNMGeneralUtils(UVNMGeneralUtils&&); \
	UVNMGeneralUtils(const UVNMGeneralUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVNMGeneralUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVNMGeneralUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVNMGeneralUtils) \
	NO_API virtual ~UVNMGeneralUtils();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UVNMGeneralUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
