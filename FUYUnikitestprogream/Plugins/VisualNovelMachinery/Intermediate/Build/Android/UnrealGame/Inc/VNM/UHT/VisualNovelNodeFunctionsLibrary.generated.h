// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualNovelNodeFunctionsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAddLayerToCgData;
struct FAddLayerToCharacterData;
struct FAddLayerToSceneBackgroundData;
struct FDialogWindowData;
struct FDisplayDialogChoicesData;
struct FDisplayDialogTextData;
struct FHideCgData;
struct FHideCharacter3DData;
struct FHideCharacterData;
struct FHideDialogSceneData;
struct FHideSceneBackgroundData;
struct FInteractiveRenameCharacterData;
struct FLatentActionInfo;
struct FMoveCharacterData;
struct FPlayCgAnimationData;
struct FPlayCharacterAnimationData;
struct FPlayDialogAudioBackgroundMusicData;
struct FPlayDialogAudioCharacterVoiceOverData;
struct FPlayDialogAudioData;
struct FPlayDialogAudioDialogVoiceOverData;
struct FPlayDialogWindowAnimationData;
struct FPlaySceneBackgroundAnimationData;
struct FRemoveLayerFromCgData;
struct FRemoveLayerFromCharacterData;
struct FRemoveLayerFromSceneBackgroundData;
struct FRenameCharacterData;
struct FShowCgData;
struct FShowCharacter3DData;
struct FShowCharacterData;
struct FShowDialogSceneData;
struct FShowSceneBackgroundData;
struct FStopDialogAudioData;
struct FSwitchToCameraData;
struct FWidgetHideData;
struct FWidgetShowData;
#ifdef VNM_VisualNovelNodeFunctionsLibrary_generated_h
#error "VisualNovelNodeFunctionsLibrary.generated.h already included, missing '#pragma once' in VisualNovelNodeFunctionsLibrary.h"
#endif
#define VNM_VisualNovelNodeFunctionsLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_StringToInt64); \
	DECLARE_FUNCTION(execConv_StringToByte); \
	DECLARE_FUNCTION(execConv_StringToBool); \
	DECLARE_FUNCTION(execStopVoiceOver); \
	DECLARE_FUNCTION(execStopSoundEffect); \
	DECLARE_FUNCTION(execStopBackgroundMusic); \
	DECLARE_FUNCTION(execPlayDialogVoiceOver); \
	DECLARE_FUNCTION(execPlayCharacterVoiceOver); \
	DECLARE_FUNCTION(execPlaySoundEffect); \
	DECLARE_FUNCTION(execPlayBackgroundMusic); \
	DECLARE_FUNCTION(execHideCharacter3D); \
	DECLARE_FUNCTION(execShowCharacter3D); \
	DECLARE_FUNCTION(execSwitchToCamera); \
	DECLARE_FUNCTION(execHideDialogScene); \
	DECLARE_FUNCTION(execShowDialogScene); \
	DECLARE_FUNCTION(execPlaySceneBackgroundAnimation); \
	DECLARE_FUNCTION(execHideSceneBackground); \
	DECLARE_FUNCTION(execRemoveLayerFromSceneBackground); \
	DECLARE_FUNCTION(execAddLayerToSceneBackground); \
	DECLARE_FUNCTION(execShowSceneBackground); \
	DECLARE_FUNCTION(execPlayCgAnimation); \
	DECLARE_FUNCTION(execHideCg); \
	DECLARE_FUNCTION(execRemoveLayerFromCg); \
	DECLARE_FUNCTION(execAddLayerToCg); \
	DECLARE_FUNCTION(execShowCg); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget); \
	DECLARE_FUNCTION(execHideDialogWindow); \
	DECLARE_FUNCTION(execShowDialogWindow); \
	DECLARE_FUNCTION(execInteractiveRenameCharacter); \
	DECLARE_FUNCTION(execRenameCharacter); \
	DECLARE_FUNCTION(execPlayCharacterAnimation); \
	DECLARE_FUNCTION(execHideCharacter); \
	DECLARE_FUNCTION(execRemoveLayerFromCharacter); \
	DECLARE_FUNCTION(execMoveCharacter); \
	DECLARE_FUNCTION(execAddLayerToCharacter); \
	DECLARE_FUNCTION(execShowCharacter); \
	DECLARE_FUNCTION(execPlayDialogWindowAnimation); \
	DECLARE_FUNCTION(execGetDialogPlayerInput); \
	DECLARE_FUNCTION(execDisplayDialogChoices); \
	DECLARE_FUNCTION(execDisplayDialogText);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisualNovelNodeFunctionsLibrary(); \
	friend struct Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UVisualNovelNodeFunctionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UVisualNovelNodeFunctionsLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisualNovelNodeFunctionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisualNovelNodeFunctionsLibrary(UVisualNovelNodeFunctionsLibrary&&); \
	UVisualNovelNodeFunctionsLibrary(const UVisualNovelNodeFunctionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisualNovelNodeFunctionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualNovelNodeFunctionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualNovelNodeFunctionsLibrary) \
	NO_API virtual ~UVisualNovelNodeFunctionsLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UVisualNovelNodeFunctionsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
