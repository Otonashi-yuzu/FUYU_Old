// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Data/ChoiceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_ChoiceData_generated_h
#error "ChoiceData.generated.h already included, missing '#pragma once' in ChoiceData.h"
#endif
#define VNM_ChoiceData_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionData_Statics; \
	VNM_API static class UScriptStruct* StaticStruct();


template<> VNM_API UScriptStruct* StaticStruct<struct FOptionData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChoiceData_Statics; \
	VNM_API static class UScriptStruct* StaticStruct();


template<> VNM_API UScriptStruct* StaticStruct<struct FChoiceData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChoicesColumn_Statics; \
	VNM_API static class UScriptStruct* StaticStruct();


template<> VNM_API UScriptStruct* StaticStruct<struct FChoicesColumn>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogData_Statics; \
	VNM_API static class UScriptStruct* StaticStruct();


template<> VNM_API UScriptStruct* StaticStruct<struct FDialogData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h


#define FOREACH_ENUM_ECHOICETYPE(op) \
	op(EChoiceType::INVALID) \
	op(EChoiceType::CHOICE) \
	op(EChoiceType::END) \
	op(EChoiceType::BRANCH) \
	op(EChoiceType::CONNECTOR) \
	op(EChoiceType::START) \
	op(EChoiceType::LOOP_PORTAL_START) \
	op(EChoiceType::LOOP_PORTAL_END) \
	op(EChoiceType::SCENE) 

enum class EChoiceType : uint8;
template<> struct TIsUEnumClass<EChoiceType> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<EChoiceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
