// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/TransitionEvent.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNM_TransitionEvent_generated_h
#error "TransitionEvent.generated.h already included, missing '#pragma once' in TransitionEvent.h"
#endif
#define VNM_TransitionEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_TransitionEvent_h


#define FOREACH_ENUM_ETRANSITIONEVENT(op) \
	op(ETransitionEvent::No_Transition) \
	op(ETransitionEvent::Fade) \
	op(ETransitionEvent::Dissolve) \
	op(ETransitionEvent::Zoom) \
	op(ETransitionEvent::Punch) \
	op(ETransitionEvent::VPunch) \
	op(ETransitionEvent::HPunch) \
	op(ETransitionEvent::Custom) \
	op(ETransitionEvent::Max) 

enum class ETransitionEvent : uint8;
template<> struct TIsUEnumClass<ETransitionEvent> { enum { Value = true }; };
template<> VNM_API UEnum* StaticEnum<ETransitionEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
