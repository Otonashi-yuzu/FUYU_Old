// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graphs/ChoiceBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNMCHOICEGRAPH_ChoiceBox_generated_h
#error "ChoiceBox.generated.h already included, missing '#pragma once' in ChoiceBox.h"
#endif
#define VNMCHOICEGRAPH_ChoiceBox_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics; \
	VNMCHOICEGRAPH_API static class UScriptStruct* StaticStruct();


template<> VNMCHOICEGRAPH_API UScriptStruct* StaticStruct<struct FChoiceBoxStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h


#define FOREACH_ENUM_ECHOICEBOXSTATE(op) \
	op(EChoiceBoxState::IDLE) \
	op(EChoiceBoxState::HOVERED) \
	op(EChoiceBoxState::PRESSED) 

enum class EChoiceBoxState : uint8;
template<> struct TIsUEnumClass<EChoiceBoxState> { enum { Value = true }; };
template<> VNMCHOICEGRAPH_API UEnum* StaticEnum<EChoiceBoxState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
