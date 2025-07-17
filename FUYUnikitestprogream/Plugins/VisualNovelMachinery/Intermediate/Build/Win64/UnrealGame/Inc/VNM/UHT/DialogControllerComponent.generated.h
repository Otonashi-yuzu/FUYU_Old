// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/DialogControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogObject;
#ifdef VNM_DialogControllerComponent_generated_h
#error "DialogControllerComponent.generated.h already included, missing '#pragma once' in DialogControllerComponent.h"
#endif
#define VNM_DialogControllerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics; \
	VNM_API static class UScriptStruct* StaticStruct();


template<> VNM_API UScriptStruct* StaticStruct<struct FDialogLatentExecutor>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_86_DELEGATE \
static void FOnDialogStarted_DelegateWrapper(const FMulticastScriptDelegate& OnDialogStarted, UDialogObject* StartedDialogObject);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_95_DELEGATE \
static void FOnDialogEnded_DelegateWrapper(const FMulticastScriptDelegate& OnDialogEnded, UDialogObject* EndedDialogObject);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDialogBoxTransitionComplete); \
	DECLARE_FUNCTION(execStartNextDialogObject); \
	DECLARE_FUNCTION(execOnActiveDialogComplete); \
	DECLARE_FUNCTION(execOnDialogTextBoxTypeWritingEnd); \
	DECLARE_FUNCTION(execOnDialogInputCommitted); \
	DECLARE_FUNCTION(execStartDialogByClass); \
	DECLARE_FUNCTION(execMoveToNextDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogControllerComponent(); \
	friend struct Z_Construct_UClass_UDialogControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogControllerComponent, UBaseControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VNM"), NO_API) \
	DECLARE_SERIALIZER(UDialogControllerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogControllerComponent(UDialogControllerComponent&&); \
	UDialogControllerComponent(const UDialogControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogControllerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogControllerComponent) \
	NO_API virtual ~UDialogControllerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_45_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UDialogControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h


#define FOREACH_ENUM_EDIALOGSTATE(op) \
	op(EDialogState::NONE) \
	op(EDialogState::DIALOG) \
	op(EDialogState::CHOICE) \
	op(EDialogState::DIALOG_INPUT) 

enum class EDialogState : uint8;
template<> struct TIsUEnumClass<EDialogState> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<EDialogState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
