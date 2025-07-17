// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/CharacterFlipState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_CharacterFlipState_generated_h
#error "CharacterFlipState.generated.h already included, missing '#pragma once' in CharacterFlipState.h"
#endif
#define VNM_CharacterFlipState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterFlipState_h


#define FOREACH_ENUM_ECHARACTERFLIPSTATE(op) \
	op(ECharacterFlipState::INHERIT) \
	op(ECharacterFlipState::HORIZONTAL) \
	op(ECharacterFlipState::VERTICAL) \
	op(ECharacterFlipState::BOTH) \
	op(ECharacterFlipState::Max) 

enum class ECharacterFlipState : uint8;
template<> struct TIsUEnumClass<ECharacterFlipState> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<ECharacterFlipState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
