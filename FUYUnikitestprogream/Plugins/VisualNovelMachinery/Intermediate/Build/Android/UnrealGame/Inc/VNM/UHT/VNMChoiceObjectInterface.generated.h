// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VNMChoiceObjectInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_VNMChoiceObjectInterface_generated_h
#error "VNMChoiceObjectInterface.generated.h already included, missing '#pragma once' in VNMChoiceObjectInterface.h"
#endif
#define VNM_VNMChoiceObjectInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void On3DChoiceSelected_Implementation() {}; \
	virtual void On3DChoices_Implementation(TArray<FText> const& Choices) {}; \
	DECLARE_FUNCTION(execOn3DChoiceSelected); \
	DECLARE_FUNCTION(execOn3DChoices);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VNM_API UVNMChoiceObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVNMChoiceObjectInterface(UVNMChoiceObjectInterface&&); \
	UVNMChoiceObjectInterface(const UVNMChoiceObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VNM_API, UVNMChoiceObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVNMChoiceObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVNMChoiceObjectInterface) \
	VNM_API virtual ~UVNMChoiceObjectInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVNMChoiceObjectInterface(); \
	friend struct Z_Construct_UClass_UVNMChoiceObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UVNMChoiceObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VNM"), VNM_API) \
	DECLARE_SERIALIZER(UVNMChoiceObjectInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVNMChoiceObjectInterface() {} \
public: \
	typedef UVNMChoiceObjectInterface UClassType; \
	typedef IVNMChoiceObjectInterface ThisClass; \
	static void Execute_On3DChoices(UObject* O, TArray<FText> const& Choices); \
	static void Execute_On3DChoiceSelected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNM_API UClass* StaticClass<class UVNMChoiceObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
