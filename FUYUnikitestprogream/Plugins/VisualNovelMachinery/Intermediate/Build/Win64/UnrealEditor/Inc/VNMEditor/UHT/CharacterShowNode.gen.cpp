// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterShowNode.h"
#include "VNM/Public/Common/VNMControlStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterShowNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageLayerInfo();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterShowNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterShowNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterShowNode Function GetCustomCharacterPositions
struct Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics
{
	struct CharacterShowNode_eventGetCustomCharacterPositions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterShowNode_eventGetCustomCharacterPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterShowNode, nullptr, "GetCustomCharacterPositions", nullptr, nullptr, Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::CharacterShowNode_eventGetCustomCharacterPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::CharacterShowNode_eventGetCustomCharacterPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterShowNode::execGetCustomCharacterPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetCustomCharacterPositions();
	P_NATIVE_END;
}
// End Class UCharacterShowNode Function GetCustomCharacterPositions

// Begin Class UCharacterShowNode
void UCharacterShowNode::StaticRegisterNativesUCharacterShowNode()
{
	UClass* Class = UCharacterShowNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomCharacterPositions", &UCharacterShowNode::execGetCustomCharacterPositions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterShowNode);
UClass* Z_Construct_UClass_UCharacterShowNode_NoRegister()
{
	return UCharacterShowNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterShowNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "Category", "Positioning" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "Category", "Positioning" },
		{ "EditCondition", "CharacterPositioning==ECharacterPositioning::CUSTOM" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetCustomCharacterPositions" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFlipState_MetaData[] = {
		{ "Category", "Positioning" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrderIndex_MetaData[] = {
		{ "Category", "Positioning" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEvent_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionEventName_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent==ETransitionEvent::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent!=ETransitionEvent::No_Transition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFlipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFlipState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrderIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlaybackMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomTransitionEventName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterShowNode_GetCustomCharacterPositions, "GetCustomCharacterPositions" }, // 1559249132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImageLayerInfo, METADATA_PARAMS(0, nullptr) }; // 2577477638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 2577477638
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterFlipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterFlipState = { "CharacterFlipState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, CharacterFlipState), Z_Construct_UEnum_VNM_ECharacterFlipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFlipState_MetaData), NewProp_CharacterFlipState_MetaData) }; // 3767235229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_ZOrderIndex = { "ZOrderIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, ZOrderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrderIndex_MetaData), NewProp_ZOrderIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_TransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_TransitionEvent = { "TransitionEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, TransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionEvent_MetaData), NewProp_TransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_AnimationPlaybackMultiplier = { "AnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, AnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPlaybackMultiplier_MetaData), NewProp_AnimationPlaybackMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CustomTransitionEventName = { "CustomTransitionEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShowNode, CustomTransitionEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTransitionEventName_MetaData), NewProp_CustomTransitionEventName_MetaData) };
void Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((UCharacterShowNode*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterShowNode), &Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_EmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterFlipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CharacterFlipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_ZOrderIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_TransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_TransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_AnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_CustomTransitionEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShowNode_Statics::NewProp_bDontWaitForTransitionToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterShowNode_Statics::ClassParams = {
	&UCharacterShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShowNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterShowNode()
{
	if (!Z_Registration_Info_UClass_UCharacterShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterShowNode.OuterSingleton, Z_Construct_UClass_UCharacterShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterShowNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterShowNode>()
{
	return UCharacterShowNode::StaticClass();
}
UCharacterShowNode::UCharacterShowNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterShowNode);
UCharacterShowNode::~UCharacterShowNode() {}
// End Class UCharacterShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterShowNode, UCharacterShowNode::StaticClass, TEXT("UCharacterShowNode"), &Z_Registration_Info_UClass_UCharacterShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterShowNode), 4046168026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterShowNode_h_1370802081(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
