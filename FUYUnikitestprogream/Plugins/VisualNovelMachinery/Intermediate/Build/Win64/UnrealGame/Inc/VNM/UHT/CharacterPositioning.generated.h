// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/CharacterPositioning.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_CharacterPositioning_generated_h
#error "CharacterPositioning.generated.h already included, missing '#pragma once' in CharacterPositioning.h"
#endif
#define VNM_CharacterPositioning_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterPositioning_h


#define FOREACH_ENUM_ECHARACTERPOSITIONING(op) \
	op(ECharacterPositioning::INHERIT) \
	op(ECharacterPositioning::CENTER) \
	op(ECharacterPositioning::LEFT) \
	op(ECharacterPositioning::RIGHT) \
	op(ECharacterPositioning::TRUE_CENTER) \
	op(ECharacterPositioning::CUSTOM) \
	op(ECharacterPositioning::Max) 

enum class ECharacterPositioning : uint8;
template<> struct TIsUEnumClass<ECharacterPositioning> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<ECharacterPositioning>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
