// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveGame/GameSaveSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVNMBaseSaveGame;
enum class EPopUpResult : uint8;
struct FSaveGameMetaData;
struct FSaveGameScreenshot;
#ifdef VNM_GameSaveSubsystem_generated_h
#error "GameSaveSubsystem.generated.h already included, missing '#pragma once' in GameSaveSubsystem.h"
#endif
#define VNM_GameSaveSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_21_DELEGATE \
static void FOnSaveGamePrepared_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGamePrepared, UVNMBaseSaveGame* SaveGame);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_26_DELEGATE \
static void FOnGameSaved_DelegateWrapper(const FMulticastScriptDelegate& OnGameSaved, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_34_DELEGATE \
static void FOnGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnGameLoaded, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_39_DELEGATE \
static void FOnSaveGameDeleted_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGameDeleted, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAutoSaveTick); \
	DECLARE_FUNCTION(execOnSaveGameNameReceived); \
	DECLARE_FUNCTION(execOnConfirmDeleteSavePopUpResult); \
	DECLARE_FUNCTION(execOnOverwritePopUpResult); \
	DECLARE_FUNCTION(execClearLoadingFlag); \
	DECLARE_FUNCTION(execDeleteSaveGame); \
	DECLARE_FUNCTION(execLoadAutoSaveGame); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSavePersistantData); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execAutoSaveGame); \
	DECLARE_FUNCTION(execPrepareSaveGameObject); \
	DECLARE_FUNCTION(execGetLatestSaveGameScreenshot); \
	DECLARE_FUNCTION(execCreateScreenShotForSaveGame); \
	DECLARE_FUNCTION(execGetCurrentlyUsedAutoSaveSlotsCount); \
	DECLARE_FUNCTION(execGetCurrentlyUsedSaveSlotsCount); \
	DECLARE_FUNCTION(execGetAutoSaveGameMetaDataBySlotIndex); \
	DECLARE_FUNCTION(execGetSaveGameMetaDataBySlotIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSaveSubsystem(); \
	friend struct Z_Construct_UClass_UGameSaveSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameSaveSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UGameSaveSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSaveSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameSaveSubsystem(UGameSaveSubsystem&&); \
	UGameSaveSubsystem(const UGameSaveSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSaveSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSaveSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSaveSubsystem) \
	NO_API virtual ~UGameSaveSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UGameSaveSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
