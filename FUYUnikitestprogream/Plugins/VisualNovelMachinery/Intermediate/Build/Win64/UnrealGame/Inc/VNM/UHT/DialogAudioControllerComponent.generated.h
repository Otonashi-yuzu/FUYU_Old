// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/DialogAudioControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_DialogAudioControllerComponent_generated_h
#error "DialogAudioControllerComponent.generated.h already included, missing '#pragma once' in DialogAudioControllerComponent.h"
#endif
#define VNM_DialogAudioControllerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogAudioControllerComponent(); \
	friend struct Z_Construct_UClass_UDialogAudioControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogAudioControllerComponent, UBaseControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UDialogAudioControllerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogAudioControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogAudioControllerComponent(UDialogAudioControllerComponent&&); \
	UDialogAudioControllerComponent(const UDialogAudioControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogAudioControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogAudioControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogAudioControllerComponent) \
	NO_API virtual ~UDialogAudioControllerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UDialogAudioControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h


#define FOREACH_ENUM_EDIALOGAUDIOTYPE(op) \
	op(EDialogAudioType::Invalid) \
	op(EDialogAudioType::Background_Music) \
	op(EDialogAudioType::Sound_Effect) \
	op(EDialogAudioType::Voice_Over) 

enum class EDialogAudioType : uint8;
template<> struct TIsUEnumClass<EDialogAudioType> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<EDialogAudioType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
