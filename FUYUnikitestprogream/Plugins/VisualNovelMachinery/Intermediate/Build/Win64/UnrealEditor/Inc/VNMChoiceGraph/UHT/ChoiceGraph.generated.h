// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graphs/ChoiceGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChoiceType : uint8;
struct FDialogData;
#ifdef VNMCHOICEGRAPH_ChoiceGraph_generated_h
#error "ChoiceGraph.generated.h already included, missing '#pragma once' in ChoiceGraph.h"
#endif
#define VNMCHOICEGRAPH_ChoiceGraph_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_38_DELEGATE \
static void FOnChoiceClicked_DelegateWrapper(const FMulticastScriptDelegate& OnChoiceClicked, const FString& ChoiceId, EChoiceType ChoiceType);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetChoices);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChoiceGraph(); \
	friend struct Z_Construct_UClass_UChoiceGraph_Statics; \
public: \
	DECLARE_CLASS(UChoiceGraph, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VNMChoiceGraph"), NO_API) \
	DECLARE_SERIALIZER(UChoiceGraph)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChoiceGraph(UChoiceGraph&&); \
	UChoiceGraph(const UChoiceGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChoiceGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChoiceGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChoiceGraph) \
	NO_API virtual ~UChoiceGraph();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNMCHOICEGRAPH_API UClass* StaticClass<class UChoiceGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
