// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/DialogTextNode.h"
#include "VNM/Public/Common/VNMControlStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogTextNode() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageLayerInfo();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogTextNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogTextNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogTextNode Function GetCustomCharacterPositions
struct Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics
{
	struct DialogTextNode_eventGetCustomCharacterPositions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogTextNode_eventGetCustomCharacterPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogTextNode, nullptr, "GetCustomCharacterPositions", nullptr, nullptr, Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::DialogTextNode_eventGetCustomCharacterPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::DialogTextNode_eventGetCustomCharacterPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogTextNode::execGetCustomCharacterPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetCustomCharacterPositions();
	P_NATIVE_END;
}
// End Class UDialogTextNode Function GetCustomCharacterPositions

// Begin Class UDialogTextNode Function GetVoiceOverIds
struct Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics
{
	struct DialogTextNode_eventGetVoiceOverIds_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogTextNode_eventGetVoiceOverIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogTextNode, nullptr, "GetVoiceOverIds", nullptr, nullptr, Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::DialogTextNode_eventGetVoiceOverIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::DialogTextNode_eventGetVoiceOverIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogTextNode::execGetVoiceOverIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetVoiceOverIds();
	P_NATIVE_END;
}
// End Class UDialogTextNode Function GetVoiceOverIds

// Begin Class UDialogTextNode
void UDialogTextNode::StaticRegisterNativesUDialogTextNode()
{
	UClass* Class = UDialogTextNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomCharacterPositions", &UDialogTextNode::execGetCustomCharacterPositions },
		{ "GetVoiceOverIds", &UDialogTextNode::execGetVoiceOverIds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogTextNode);
UClass* Z_Construct_UClass_UDialogTextNode_NoRegister()
{
	return UDialogTextNode::StaticClass();
}
struct Z_Construct_UClass_UDialogTextNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/DialogTextNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVoiceOver_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterVoiceOver_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bUseVoiceOver" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDialogVoiceOver_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bUseVoiceOver" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceOverId_MetaData[] = {
		{ "Category", "Audio" },
		{ "GetOptions", "GetVoiceOverIds" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextJustification_MetaData[] = {
		{ "Category", "Dialog Text" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameAlignment_MetaData[] = {
		{ "Category", "Dialog Text" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipTypewriting_MetaData[] = {
		{ "Category", "Dialog Text" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypewritingSpeedMultiplier_MetaData[] = {
		{ "Category", "Dialog Text" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Character Layers" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFlipState_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "EditCondition", "CharacterPositioning==ECharacterPositioning::CUSTOM" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetCustomCharacterPositions" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrderIndex_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEvent_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionEventName_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "EditCondition", "TransitionEvent==ETransitionEvent::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Character Animation" },
		{ "EditCondition", "TransitionEvent!=ETransitionEvent::No_Transition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDialogTextPin_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogTextNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static void NewProp_bUseVoiceOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceOver;
	static void NewProp_bUseCharacterVoiceOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterVoiceOver;
	static void NewProp_bUseDialogVoiceOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDialogVoiceOver;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceOverId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextJustification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterNameAlignment;
	static void NewProp_bSkipTypewriting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipTypewriting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypewritingSpeedMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFlipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFlipState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrderIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlaybackMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomTransitionEventName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static void NewProp_bUseDialogTextPin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDialogTextPin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogTextNode_GetCustomCharacterPositions, "GetCustomCharacterPositions" }, // 1689740074
		{ &Z_Construct_UFunction_UDialogTextNode_GetVoiceOverIds, "GetVoiceOverIds" }, // 3820940374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogTextNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_DialogText = { "DialogText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, DialogText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogText_MetaData), NewProp_DialogText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseVoiceOver_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bUseVoiceOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseVoiceOver = { "bUseVoiceOver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseVoiceOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVoiceOver_MetaData), NewProp_bUseVoiceOver_MetaData) };
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseCharacterVoiceOver_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bUseCharacterVoiceOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseCharacterVoiceOver = { "bUseCharacterVoiceOver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseCharacterVoiceOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCharacterVoiceOver_MetaData), NewProp_bUseCharacterVoiceOver_MetaData) };
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogVoiceOver_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bUseDialogVoiceOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogVoiceOver = { "bUseDialogVoiceOver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogVoiceOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDialogVoiceOver_MetaData), NewProp_bUseDialogVoiceOver_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_VoiceOverId = { "VoiceOverId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, VoiceOverId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceOverId_MetaData), NewProp_VoiceOverId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TextJustification = { "TextJustification", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, TextJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextJustification_MetaData), NewProp_TextJustification_MetaData) }; // 3082493381
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterNameAlignment = { "CharacterNameAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CharacterNameAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameAlignment_MetaData), NewProp_CharacterNameAlignment_MetaData) }; // 1062133256
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bSkipTypewriting_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bSkipTypewriting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bSkipTypewriting = { "bSkipTypewriting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bSkipTypewriting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipTypewriting_MetaData), NewProp_bSkipTypewriting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TypewritingSpeedMultiplier = { "TypewritingSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, TypewritingSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypewritingSpeedMultiplier_MetaData), NewProp_TypewritingSpeedMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImageLayerInfo, METADATA_PARAMS(0, nullptr) }; // 2577477638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 2577477638
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterFlipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterFlipState = { "CharacterFlipState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CharacterFlipState), Z_Construct_UEnum_VNM_ECharacterFlipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFlipState_MetaData), NewProp_CharacterFlipState_MetaData) }; // 3767235229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_ZOrderIndex = { "ZOrderIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, ZOrderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrderIndex_MetaData), NewProp_ZOrderIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TransitionEvent = { "TransitionEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, TransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionEvent_MetaData), NewProp_TransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_AnimationPlaybackMultiplier = { "AnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, AnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPlaybackMultiplier_MetaData), NewProp_AnimationPlaybackMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CustomTransitionEventName = { "CustomTransitionEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogTextNode, CustomTransitionEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTransitionEventName_MetaData), NewProp_CustomTransitionEventName_MetaData) };
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
void Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogTextPin_SetBit(void* Obj)
{
	((UDialogTextNode*)Obj)->bUseDialogTextPin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogTextPin = { "bUseDialogTextPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogTextNode), &Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogTextPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDialogTextPin_MetaData), NewProp_bUseDialogTextPin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogTextNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_DialogText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_EmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseVoiceOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseCharacterVoiceOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogVoiceOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_VoiceOverId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TextJustification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterNameAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bSkipTypewriting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TypewritingSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterFlipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterFlipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_ZOrderIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_TransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_AnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_CustomTransitionEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bDontWaitForTransitionToFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogTextNode_Statics::NewProp_bUseDialogTextPin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogTextNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogTextNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogTextNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogTextNode_Statics::ClassParams = {
	&UDialogTextNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogTextNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogTextNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogTextNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogTextNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogTextNode()
{
	if (!Z_Registration_Info_UClass_UDialogTextNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogTextNode.OuterSingleton, Z_Construct_UClass_UDialogTextNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogTextNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogTextNode>()
{
	return UDialogTextNode::StaticClass();
}
UDialogTextNode::UDialogTextNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogTextNode);
UDialogTextNode::~UDialogTextNode() {}
// End Class UDialogTextNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogTextNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogTextNode, UDialogTextNode::StaticClass, TEXT("UDialogTextNode"), &Z_Registration_Info_UClass_UDialogTextNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogTextNode), 3090784497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogTextNode_h_1085509236(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogTextNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogTextNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
