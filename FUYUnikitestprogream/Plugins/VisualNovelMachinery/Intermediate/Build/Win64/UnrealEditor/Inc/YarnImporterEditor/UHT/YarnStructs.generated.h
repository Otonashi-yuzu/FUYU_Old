// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YarnStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YARNIMPORTEREDITOR_YarnStructs_generated_h
#error "YarnStructs.generated.h already included, missing '#pragma once' in YarnStructs.h"
#endif
#define YARNIMPORTEREDITOR_YarnStructs_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarnHeader_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarnHeader>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarnOperand_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarnOperand>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarnInstruction_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarnInstruction>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarnNode_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarnNode>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarnProgram_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarnProgram>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYarn_Statics; \
	YARNIMPORTEREDITOR_API static class UScriptStruct* StaticStruct();


template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<struct FYarn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h


#define FOREACH_ENUM_EYARNOPERANDTYPE(op) \
	op(EYarnOperandType::StringValue) \
	op(EYarnOperandType::BoolValue) \
	op(EYarnOperandType::FloatValue) \
	op(EYarnOperandType::FunctionResult) 

enum class EYarnOperandType : uint8;
template<> struct TIsUEnumClass<EYarnOperandType> { enum { Value = true }; };
template<> YARNIMPORTEREDITOR_API UEnum* StaticEnum<EYarnOperandType>();

#define FOREACH_ENUM_EYARNOPCODE(op) \
	op(EYarnOpCode::JUMP_TO) \
	op(EYarnOpCode::JUMP) \
	op(EYarnOpCode::RUN_LINE) \
	op(EYarnOpCode::RUN_COMMAND) \
	op(EYarnOpCode::ADD_OPTION) \
	op(EYarnOpCode::SHOW_OPTIONS) \
	op(EYarnOpCode::PUSH_STRING) \
	op(EYarnOpCode::PUSH_FLOAT) \
	op(EYarnOpCode::PUSH_BOOL) \
	op(EYarnOpCode::PUSH_NULL) \
	op(EYarnOpCode::JUMP_IF_FALSE) \
	op(EYarnOpCode::POP) \
	op(EYarnOpCode::CALL_FUNC) \
	op(EYarnOpCode::PUSH_VARIABLE) \
	op(EYarnOpCode::STORE_VARIABLE) \
	op(EYarnOpCode::STOP) \
	op(EYarnOpCode::RUN_NODE) 

enum class EYarnOpCode : uint8;
template<> struct TIsUEnumClass<EYarnOpCode> { enum { Value = true }; };
template<> YARNIMPORTEREDITOR_API UEnum* StaticEnum<EYarnOpCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
