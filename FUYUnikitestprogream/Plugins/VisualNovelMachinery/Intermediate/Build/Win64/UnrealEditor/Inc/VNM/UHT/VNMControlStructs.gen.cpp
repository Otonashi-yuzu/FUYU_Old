// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Common/VNMControlStructs.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMControlStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseDialogNodeData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogWindowData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogChoicesData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogTextData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCharacter3DData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideDialogSceneData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageLayerInfo();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveRenameCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMoveCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayCgAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayCharacterAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRenameCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCharacter3DData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowDialogSceneData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FStopDialogAudioData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchToCameraData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionableNodeData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetHideData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetShowData();
// End Cross Module References

// Begin ScriptStruct FTransitionableNodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransitionableNodeData;
class UScriptStruct* FTransitionableNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransitionableNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransitionableNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionableNodeData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("TransitionableNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_TransitionableNodeData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FTransitionableNodeData>()
{
	return FTransitionableNodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransitionableNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEvent_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlaybackMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomTransitionName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransitionableNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_TransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_TransitionEvent = { "TransitionEvent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransitionableNodeData, TransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionEvent_MetaData), NewProp_TransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_AnimationPlaybackMultiplier = { "AnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransitionableNodeData, AnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPlaybackMultiplier_MetaData), NewProp_AnimationPlaybackMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_CustomTransitionName = { "CustomTransitionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransitionableNodeData, CustomTransitionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTransitionName_MetaData), NewProp_CustomTransitionName_MetaData) };
void Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((FTransitionableNodeData*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTransitionableNodeData), &Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_TransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_TransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_AnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_CustomTransitionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewProp_bDontWaitForTransitionToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"TransitionableNodeData",
	Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::PropPointers),
	sizeof(FTransitionableNodeData),
	alignof(FTransitionableNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransitionableNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_TransitionableNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransitionableNodeData.InnerSingleton, Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransitionableNodeData.InnerSingleton;
}
// End ScriptStruct FTransitionableNodeData

// Begin ScriptStruct FImageLayerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageLayerInfo;
class UScriptStruct* FImageLayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageLayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageLayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageLayerInfo, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ImageLayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImageLayerInfo.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FImageLayerInfo>()
{
	return FImageLayerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageLayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageLayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImageLayerInfo_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageLayerInfo, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImageLayerInfo_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageLayerInfo, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageLayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerInfo_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerInfo_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageLayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ImageLayerInfo",
	Z_Construct_UScriptStruct_FImageLayerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerInfo_Statics::PropPointers),
	sizeof(FImageLayerInfo),
	alignof(FImageLayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageLayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageLayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ImageLayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageLayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FImageLayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageLayerInfo.InnerSingleton;
}
// End ScriptStruct FImageLayerInfo

// Begin ScriptStruct FBaseDialogNodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseDialogNodeData;
class UScriptStruct* FBaseDialogNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseDialogNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseDialogNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseDialogNodeData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("BaseDialogNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_BaseDialogNodeData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FBaseDialogNodeData>()
{
	return FBaseDialogNodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Dialog Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* Dialog Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseDialogNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseDialogNodeData, NodeGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::NewProp_NodeGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"BaseDialogNodeData",
	Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::PropPointers),
	sizeof(FBaseDialogNodeData),
	alignof(FBaseDialogNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseDialogNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_BaseDialogNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseDialogNodeData.InnerSingleton, Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BaseDialogNodeData.InnerSingleton;
}
// End ScriptStruct FBaseDialogNodeData

// Begin ScriptStruct FDisplayDialogTextData
static_assert(std::is_polymorphic<FDisplayDialogTextData>() == std::is_polymorphic<FBaseDialogNodeData>(), "USTRUCT FDisplayDialogTextData cannot be polymorphic unless super FBaseDialogNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayDialogTextData;
class UScriptStruct* FDisplayDialogTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayDialogTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayDialogTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayDialogTextData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DisplayDialogTextData"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayDialogTextData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDisplayDialogTextData>()
{
	return FDisplayDialogTextData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextToDisplay_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipTypewriting_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypewritingSpeedMultiplier_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextJustification_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameAlignment_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextToDisplay;
	static void NewProp_bSkipTypewriting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipTypewriting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypewritingSpeedMultiplier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextJustification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterNameAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayDialogTextData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TextToDisplay = { "TextToDisplay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogTextData, TextToDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextToDisplay_MetaData), NewProp_TextToDisplay_MetaData) };
void Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_bSkipTypewriting_SetBit(void* Obj)
{
	((FDisplayDialogTextData*)Obj)->bSkipTypewriting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_bSkipTypewriting = { "bSkipTypewriting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayDialogTextData), &Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_bSkipTypewriting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipTypewriting_MetaData), NewProp_bSkipTypewriting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TypewritingSpeedMultiplier = { "TypewritingSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogTextData, TypewritingSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypewritingSpeedMultiplier_MetaData), NewProp_TypewritingSpeedMultiplier_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogTextData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TextJustification = { "TextJustification", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogTextData, TextJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextJustification_MetaData), NewProp_TextJustification_MetaData) }; // 3082493381
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_CharacterNameAlignment = { "CharacterNameAlignment", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogTextData, CharacterNameAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameAlignment_MetaData), NewProp_CharacterNameAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TextToDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_bSkipTypewriting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TypewritingSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_TextJustification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewProp_CharacterNameAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FBaseDialogNodeData,
	&NewStructOps,
	"DisplayDialogTextData",
	Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::PropPointers),
	sizeof(FDisplayDialogTextData),
	alignof(FDisplayDialogTextData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogTextData()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayDialogTextData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayDialogTextData.InnerSingleton, Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DisplayDialogTextData.InnerSingleton;
}
// End ScriptStruct FDisplayDialogTextData

// Begin ScriptStruct FDisplayDialogChoicesData
static_assert(std::is_polymorphic<FDisplayDialogChoicesData>() == std::is_polymorphic<FBaseDialogNodeData>(), "USTRUCT FDisplayDialogChoicesData cannot be polymorphic unless super FBaseDialogNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData;
class UScriptStruct* FDisplayDialogChoicesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayDialogChoicesData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DisplayDialogChoicesData"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDisplayDialogChoicesData>()
{
	return FDisplayDialogChoicesData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesToDisplay_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceConditions_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageChoiceWidgetClass_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIs3DChoice_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ChoicesToDisplay_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoicesToDisplay;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChoiceConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiceConditions;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImageChoiceWidgetClass;
	static void NewProp_bIs3DChoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs3DChoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayDialogChoicesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoicesToDisplay_Inner = { "ChoicesToDisplay", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoicesToDisplay = { "ChoicesToDisplay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogChoicesData, ChoicesToDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesToDisplay_MetaData), NewProp_ChoicesToDisplay_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoiceConditions_Inner = { "ChoiceConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoiceConditions = { "ChoiceConditions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogChoicesData, ChoiceConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceConditions_MetaData), NewProp_ChoiceConditions_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ImageChoiceWidgetClass = { "ImageChoiceWidgetClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayDialogChoicesData, ImageChoiceWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageChoiceWidgetClass_MetaData), NewProp_ImageChoiceWidgetClass_MetaData) };
void Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_bIs3DChoice_SetBit(void* Obj)
{
	((FDisplayDialogChoicesData*)Obj)->bIs3DChoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_bIs3DChoice = { "bIs3DChoice", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayDialogChoicesData), &Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_bIs3DChoice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIs3DChoice_MetaData), NewProp_bIs3DChoice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoicesToDisplay_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoicesToDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoiceConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ChoiceConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_ImageChoiceWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewProp_bIs3DChoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FBaseDialogNodeData,
	&NewStructOps,
	"DisplayDialogChoicesData",
	Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::PropPointers),
	sizeof(FDisplayDialogChoicesData),
	alignof(FDisplayDialogChoicesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogChoicesData()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.InnerSingleton, Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData.InnerSingleton;
}
// End ScriptStruct FDisplayDialogChoicesData

// Begin ScriptStruct FDialogWindowData
static_assert(std::is_polymorphic<FDialogWindowData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FDialogWindowData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogWindowData;
class UScriptStruct* FDialogWindowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogWindowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogWindowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogWindowData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogWindowData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogWindowData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogWindowData>()
{
	return FDialogWindowData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogWindowData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetToAutomatic_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSetToAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetToAutomatic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogWindowData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDialogWindowData_Statics::NewProp_bSetToAutomatic_SetBit(void* Obj)
{
	((FDialogWindowData*)Obj)->bSetToAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogWindowData_Statics::NewProp_bSetToAutomatic = { "bSetToAutomatic", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogWindowData), &Z_Construct_UScriptStruct_FDialogWindowData_Statics::NewProp_bSetToAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetToAutomatic_MetaData), NewProp_bSetToAutomatic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogWindowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogWindowData_Statics::NewProp_bSetToAutomatic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogWindowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogWindowData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"DialogWindowData",
	Z_Construct_UScriptStruct_FDialogWindowData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogWindowData_Statics::PropPointers),
	sizeof(FDialogWindowData),
	alignof(FDialogWindowData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogWindowData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogWindowData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogWindowData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogWindowData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogWindowData.InnerSingleton, Z_Construct_UScriptStruct_FDialogWindowData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogWindowData.InnerSingleton;
}
// End ScriptStruct FDialogWindowData

// Begin ScriptStruct FPlayDialogWindowAnimationData
static_assert(std::is_polymorphic<FPlayDialogWindowAnimationData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FPlayDialogWindowAnimationData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData;
class UScriptStruct* FPlayDialogWindowAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayDialogWindowAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayDialogWindowAnimationData>()
{
	return FPlayDialogWindowAnimationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayBackwards_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayBackwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayBackwards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayDialogWindowAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::NewProp_bPlayBackwards_SetBit(void* Obj)
{
	((FPlayDialogWindowAnimationData*)Obj)->bPlayBackwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::NewProp_bPlayBackwards = { "bPlayBackwards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayDialogWindowAnimationData), &Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::NewProp_bPlayBackwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayBackwards_MetaData), NewProp_bPlayBackwards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::NewProp_bPlayBackwards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"PlayDialogWindowAnimationData",
	Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::PropPointers),
	sizeof(FPlayDialogWindowAnimationData),
	alignof(FPlayDialogWindowAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData.InnerSingleton;
}
// End ScriptStruct FPlayDialogWindowAnimationData

// Begin ScriptStruct FWidgetShowData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetShowData;
class UScriptStruct* FWidgetShowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetShowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetShowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetShowData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("WidgetShowData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetShowData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FWidgetShowData>()
{
	return FWidgetShowData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetShowData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForWidgetToCloseAgain_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
	static void NewProp_bWaitForWidgetToCloseAgain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForWidgetToCloseAgain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetShowData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetShowData, ActivatableWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidgetClass_MetaData), NewProp_ActivatableWidgetClass_MetaData) };
void Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_bWaitForWidgetToCloseAgain_SetBit(void* Obj)
{
	((FWidgetShowData*)Obj)->bWaitForWidgetToCloseAgain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_bWaitForWidgetToCloseAgain = { "bWaitForWidgetToCloseAgain", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWidgetShowData), &Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_bWaitForWidgetToCloseAgain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForWidgetToCloseAgain_MetaData), NewProp_bWaitForWidgetToCloseAgain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetShowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_ActivatableWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewProp_bWaitForWidgetToCloseAgain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetShowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetShowData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"WidgetShowData",
	Z_Construct_UScriptStruct_FWidgetShowData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetShowData_Statics::PropPointers),
	sizeof(FWidgetShowData),
	alignof(FWidgetShowData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetShowData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetShowData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetShowData()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetShowData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetShowData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetShowData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetShowData.InnerSingleton;
}
// End ScriptStruct FWidgetShowData

// Begin ScriptStruct FWidgetHideData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetHideData;
class UScriptStruct* FWidgetHideData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetHideData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetHideData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetHideData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("WidgetHideData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetHideData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FWidgetHideData>()
{
	return FWidgetHideData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetHideData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetHideData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWidgetHideData_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetHideData, ActivatableWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidgetClass_MetaData), NewProp_ActivatableWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetHideData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetHideData_Statics::NewProp_ActivatableWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetHideData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetHideData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"WidgetHideData",
	Z_Construct_UScriptStruct_FWidgetHideData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetHideData_Statics::PropPointers),
	sizeof(FWidgetHideData),
	alignof(FWidgetHideData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetHideData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetHideData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetHideData()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetHideData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetHideData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetHideData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetHideData.InnerSingleton;
}
// End ScriptStruct FWidgetHideData

// Begin ScriptStruct FShowCharacterData
static_assert(std::is_polymorphic<FShowCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FShowCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowCharacterData;
class UScriptStruct* FShowCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ShowCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_ShowCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FShowCharacterData>()
{
	return FShowCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShowCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Character Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* Character Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFlipState_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrderIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFlipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFlipState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrderIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterFlipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterFlipState = { "CharacterFlipState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, CharacterFlipState), Z_Construct_UEnum_VNM_ECharacterFlipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFlipState_MetaData), NewProp_CharacterFlipState_MetaData) }; // 3767235229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImageLayerInfo, METADATA_PARAMS(0, nullptr) }; // 2577477638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 2577477638
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_ZOrderIndex = { "ZOrderIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacterData, ZOrderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrderIndex_MetaData), NewProp_ZOrderIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_EmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterFlipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_CharacterFlipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewProp_ZOrderIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"ShowCharacterData",
	Z_Construct_UScriptStruct_FShowCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacterData_Statics::PropPointers),
	sizeof(FShowCharacterData),
	alignof(FShowCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShowCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShowCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FShowCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShowCharacterData.InnerSingleton;
}
// End ScriptStruct FShowCharacterData

// Begin ScriptStruct FAddLayerToCharacterData
static_assert(std::is_polymorphic<FAddLayerToCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FAddLayerToCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddLayerToCharacterData;
class UScriptStruct* FAddLayerToCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddLayerToCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("AddLayerToCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FAddLayerToCharacterData>()
{
	return FAddLayerToCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddLayerToCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCharacterData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCharacterData, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"AddLayerToCharacterData",
	Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::PropPointers),
	sizeof(FAddLayerToCharacterData),
	alignof(FAddLayerToCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToCharacterData.InnerSingleton;
}
// End ScriptStruct FAddLayerToCharacterData

// Begin ScriptStruct FMoveCharacterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoveCharacterData;
class UScriptStruct* FMoveCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoveCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoveCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("MoveCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_MoveCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FMoveCharacterData>()
{
	return FMoveCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMoveCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveWithAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static void NewProp_bMoveWithAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveWithAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveCharacterData, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveCharacterData, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
void Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_bMoveWithAnimation_SetBit(void* Obj)
{
	((FMoveCharacterData*)Obj)->bMoveWithAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_bMoveWithAnimation = { "bMoveWithAnimation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoveCharacterData), &Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_bMoveWithAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveWithAnimation_MetaData), NewProp_bMoveWithAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewProp_bMoveWithAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"MoveCharacterData",
	Z_Construct_UScriptStruct_FMoveCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveCharacterData_Statics::PropPointers),
	sizeof(FMoveCharacterData),
	alignof(FMoveCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoveCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoveCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_MoveCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoveCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FMoveCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MoveCharacterData.InnerSingleton;
}
// End ScriptStruct FMoveCharacterData

// Begin ScriptStruct FRemoveLayerFromCharacterData
static_assert(std::is_polymorphic<FRemoveLayerFromCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FRemoveLayerFromCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData;
class UScriptStruct* FRemoveLayerFromCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("RemoveLayerFromCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FRemoveLayerFromCharacterData>()
{
	return FRemoveLayerFromCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveLayerFromCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromCharacterData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"RemoveLayerFromCharacterData",
	Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::PropPointers),
	sizeof(FRemoveLayerFromCharacterData),
	alignof(FRemoveLayerFromCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData.InnerSingleton;
}
// End ScriptStruct FRemoveLayerFromCharacterData

// Begin ScriptStruct FHideCharacterData
static_assert(std::is_polymorphic<FHideCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FHideCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideCharacterData;
class UScriptStruct* FHideCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("HideCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_HideCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FHideCharacterData>()
{
	return FHideCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHideCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHideCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHideCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHideCharacterData_Statics::NewProp_CharacterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"HideCharacterData",
	Z_Construct_UScriptStruct_FHideCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacterData_Statics::PropPointers),
	sizeof(FHideCharacterData),
	alignof(FHideCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_HideCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FHideCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideCharacterData.InnerSingleton;
}
// End ScriptStruct FHideCharacterData

// Begin ScriptStruct FPlayCharacterAnimationData
static_assert(std::is_polymorphic<FPlayCharacterAnimationData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FPlayCharacterAnimationData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData;
class UScriptStruct* FPlayCharacterAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayCharacterAnimationData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayCharacterAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayCharacterAnimationData>()
{
	return FPlayCharacterAnimationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayBackwards_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static void NewProp_bPlayBackwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayBackwards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayCharacterAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayCharacterAnimationData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
void Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_bPlayBackwards_SetBit(void* Obj)
{
	((FPlayCharacterAnimationData*)Obj)->bPlayBackwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_bPlayBackwards = { "bPlayBackwards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayCharacterAnimationData), &Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_bPlayBackwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayBackwards_MetaData), NewProp_bPlayBackwards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewProp_bPlayBackwards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"PlayCharacterAnimationData",
	Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::PropPointers),
	sizeof(FPlayCharacterAnimationData),
	alignof(FPlayCharacterAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayCharacterAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData.InnerSingleton;
}
// End ScriptStruct FPlayCharacterAnimationData

// Begin ScriptStruct FRenameCharacterData
static_assert(std::is_polymorphic<FRenameCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FRenameCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenameCharacterData;
class UScriptStruct* FRenameCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenameCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenameCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenameCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("RenameCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_RenameCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FRenameCharacterData>()
{
	return FRenameCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenameCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCharacterName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewCharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenameCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRenameCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenameCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRenameCharacterData_Statics::NewProp_NewCharacterName = { "NewCharacterName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenameCharacterData, NewCharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCharacterName_MetaData), NewProp_NewCharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenameCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenameCharacterData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenameCharacterData_Statics::NewProp_NewCharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenameCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenameCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"RenameCharacterData",
	Z_Construct_UScriptStruct_FRenameCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenameCharacterData_Statics::PropPointers),
	sizeof(FRenameCharacterData),
	alignof(FRenameCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenameCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenameCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenameCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_RenameCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenameCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FRenameCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenameCharacterData.InnerSingleton;
}
// End ScriptStruct FRenameCharacterData

// Begin ScriptStruct FInteractiveRenameCharacterData
static_assert(std::is_polymorphic<FInteractiveRenameCharacterData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FInteractiveRenameCharacterData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData;
class UScriptStruct* FInteractiveRenameCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveRenameCharacterData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("InteractiveRenameCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FInteractiveRenameCharacterData>()
{
	return FInteractiveRenameCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveRenameCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveRenameCharacterData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::NewProp_CharacterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"InteractiveRenameCharacterData",
	Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::PropPointers),
	sizeof(FInteractiveRenameCharacterData),
	alignof(FInteractiveRenameCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractiveRenameCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData.InnerSingleton;
}
// End ScriptStruct FInteractiveRenameCharacterData

// Begin ScriptStruct FShowCgData
static_assert(std::is_polymorphic<FShowCgData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FShowCgData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowCgData;
class UScriptStruct* FShowCgData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCgData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowCgData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowCgData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ShowCgData"));
	}
	return Z_Registration_Info_UScriptStruct_ShowCgData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FShowCgData>()
{
	return FShowCgData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShowCgData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * CG Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* CG Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "Category", "CG" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowCgData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCgData_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCgData, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowCgData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCgData_Statics::NewProp_CgId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCgData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowCgData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"ShowCgData",
	Z_Construct_UScriptStruct_FShowCgData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCgData_Statics::PropPointers),
	sizeof(FShowCgData),
	alignof(FShowCgData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCgData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShowCgData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShowCgData()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCgData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowCgData.InnerSingleton, Z_Construct_UScriptStruct_FShowCgData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShowCgData.InnerSingleton;
}
// End ScriptStruct FShowCgData

// Begin ScriptStruct FAddLayerToCgData
static_assert(std::is_polymorphic<FAddLayerToCgData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FAddLayerToCgData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddLayerToCgData;
class UScriptStruct* FAddLayerToCgData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToCgData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddLayerToCgData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddLayerToCgData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("AddLayerToCgData"));
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToCgData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FAddLayerToCgData>()
{
	return FAddLayerToCgData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddLayerToCgData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "Category", "CG" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddLayerToCgData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCgData, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCgData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToCgData, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"AddLayerToCgData",
	Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::PropPointers),
	sizeof(FAddLayerToCgData),
	alignof(FAddLayerToCgData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCgData()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToCgData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddLayerToCgData.InnerSingleton, Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToCgData.InnerSingleton;
}
// End ScriptStruct FAddLayerToCgData

// Begin ScriptStruct FRemoveLayerFromCgData
static_assert(std::is_polymorphic<FRemoveLayerFromCgData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FRemoveLayerFromCgData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData;
class UScriptStruct* FRemoveLayerFromCgData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveLayerFromCgData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("RemoveLayerFromCgData"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FRemoveLayerFromCgData>()
{
	return FRemoveLayerFromCgData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "Category", "CG" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveLayerFromCgData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromCgData, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromCgData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"RemoveLayerFromCgData",
	Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::PropPointers),
	sizeof(FRemoveLayerFromCgData),
	alignof(FRemoveLayerFromCgData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCgData()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.InnerSingleton, Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData.InnerSingleton;
}
// End ScriptStruct FRemoveLayerFromCgData

// Begin ScriptStruct FHideCgData
static_assert(std::is_polymorphic<FHideCgData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FHideCgData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideCgData;
class UScriptStruct* FHideCgData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideCgData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideCgData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideCgData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("HideCgData"));
	}
	return Z_Registration_Info_UScriptStruct_HideCgData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FHideCgData>()
{
	return FHideCgData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideCgData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "Category", "CG" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideCgData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHideCgData_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHideCgData, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHideCgData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHideCgData_Statics::NewProp_CgId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCgData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideCgData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"HideCgData",
	Z_Construct_UScriptStruct_FHideCgData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCgData_Statics::PropPointers),
	sizeof(FHideCgData),
	alignof(FHideCgData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCgData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideCgData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideCgData()
{
	if (!Z_Registration_Info_UScriptStruct_HideCgData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideCgData.InnerSingleton, Z_Construct_UScriptStruct_FHideCgData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideCgData.InnerSingleton;
}
// End ScriptStruct FHideCgData

// Begin ScriptStruct FPlayCgAnimationData
static_assert(std::is_polymorphic<FPlayCgAnimationData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FPlayCgAnimationData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayCgAnimationData;
class UScriptStruct* FPlayCgAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayCgAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayCgAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayCgAnimationData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayCgAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayCgAnimationData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayCgAnimationData>()
{
	return FPlayCgAnimationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayBackwards_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayBackwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayBackwards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayCgAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::NewProp_bPlayBackwards_SetBit(void* Obj)
{
	((FPlayCgAnimationData*)Obj)->bPlayBackwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::NewProp_bPlayBackwards = { "bPlayBackwards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayCgAnimationData), &Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::NewProp_bPlayBackwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayBackwards_MetaData), NewProp_bPlayBackwards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::NewProp_bPlayBackwards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"PlayCgAnimationData",
	Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::PropPointers),
	sizeof(FPlayCgAnimationData),
	alignof(FPlayCgAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayCgAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayCgAnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayCgAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayCgAnimationData.InnerSingleton;
}
// End ScriptStruct FPlayCgAnimationData

// Begin ScriptStruct FShowSceneBackgroundData
static_assert(std::is_polymorphic<FShowSceneBackgroundData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FShowSceneBackgroundData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData;
class UScriptStruct* FShowSceneBackgroundData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowSceneBackgroundData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ShowSceneBackgroundData"));
	}
	return Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FShowSceneBackgroundData>()
{
	return FShowSceneBackgroundData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * SceneBackground Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* SceneBackground Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowSceneBackgroundData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowSceneBackgroundData, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::NewProp_SceneBackgroundId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"ShowSceneBackgroundData",
	Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::PropPointers),
	sizeof(FShowSceneBackgroundData),
	alignof(FShowSceneBackgroundData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShowSceneBackgroundData()
{
	if (!Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.InnerSingleton, Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData.InnerSingleton;
}
// End ScriptStruct FShowSceneBackgroundData

// Begin ScriptStruct FAddLayerToSceneBackgroundData
static_assert(std::is_polymorphic<FAddLayerToSceneBackgroundData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FAddLayerToSceneBackgroundData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData;
class UScriptStruct* FAddLayerToSceneBackgroundData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("AddLayerToSceneBackgroundData"));
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FAddLayerToSceneBackgroundData>()
{
	return FAddLayerToSceneBackgroundData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddLayerToSceneBackgroundData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToSceneBackgroundData, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToSceneBackgroundData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddLayerToSceneBackgroundData, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"AddLayerToSceneBackgroundData",
	Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::PropPointers),
	sizeof(FAddLayerToSceneBackgroundData),
	alignof(FAddLayerToSceneBackgroundData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData()
{
	if (!Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.InnerSingleton, Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData.InnerSingleton;
}
// End ScriptStruct FAddLayerToSceneBackgroundData

// Begin ScriptStruct FRemoveLayerFromSceneBackgroundData
static_assert(std::is_polymorphic<FRemoveLayerFromSceneBackgroundData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FRemoveLayerFromSceneBackgroundData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData;
class UScriptStruct* FRemoveLayerFromSceneBackgroundData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("RemoveLayerFromSceneBackgroundData"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FRemoveLayerFromSceneBackgroundData>()
{
	return FRemoveLayerFromSceneBackgroundData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveLayerFromSceneBackgroundData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromSceneBackgroundData, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveLayerFromSceneBackgroundData, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"RemoveLayerFromSceneBackgroundData",
	Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::PropPointers),
	sizeof(FRemoveLayerFromSceneBackgroundData),
	alignof(FRemoveLayerFromSceneBackgroundData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.InnerSingleton, Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData.InnerSingleton;
}
// End ScriptStruct FRemoveLayerFromSceneBackgroundData

// Begin ScriptStruct FHideSceneBackgroundData
static_assert(std::is_polymorphic<FHideSceneBackgroundData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FHideSceneBackgroundData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideSceneBackgroundData;
class UScriptStruct* FHideSceneBackgroundData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideSceneBackgroundData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("HideSceneBackgroundData"));
	}
	return Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FHideSceneBackgroundData>()
{
	return FHideSceneBackgroundData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "Category", "Scene Background" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideSceneBackgroundData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHideSceneBackgroundData, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::NewProp_SceneBackgroundId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"HideSceneBackgroundData",
	Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::PropPointers),
	sizeof(FHideSceneBackgroundData),
	alignof(FHideSceneBackgroundData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideSceneBackgroundData()
{
	if (!Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.InnerSingleton, Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideSceneBackgroundData.InnerSingleton;
}
// End ScriptStruct FHideSceneBackgroundData

// Begin ScriptStruct FPlaySceneBackgroundAnimationData
static_assert(std::is_polymorphic<FPlaySceneBackgroundAnimationData>() == std::is_polymorphic<FTransitionableNodeData>(), "USTRUCT FPlaySceneBackgroundAnimationData cannot be polymorphic unless super FTransitionableNodeData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData;
class UScriptStruct* FPlaySceneBackgroundAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlaySceneBackgroundAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlaySceneBackgroundAnimationData>()
{
	return FPlaySceneBackgroundAnimationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayBackwards_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayBackwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayBackwards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaySceneBackgroundAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::NewProp_bPlayBackwards_SetBit(void* Obj)
{
	((FPlaySceneBackgroundAnimationData*)Obj)->bPlayBackwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::NewProp_bPlayBackwards = { "bPlayBackwards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlaySceneBackgroundAnimationData), &Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::NewProp_bPlayBackwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayBackwards_MetaData), NewProp_bPlayBackwards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::NewProp_bPlayBackwards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTransitionableNodeData,
	&NewStructOps,
	"PlaySceneBackgroundAnimationData",
	Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::PropPointers),
	sizeof(FPlaySceneBackgroundAnimationData),
	alignof(FPlaySceneBackgroundAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData.InnerSingleton;
}
// End ScriptStruct FPlaySceneBackgroundAnimationData

// Begin ScriptStruct FShowDialogSceneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowDialogSceneData;
class UScriptStruct* FShowDialogSceneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowDialogSceneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowDialogSceneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowDialogSceneData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ShowDialogSceneData"));
	}
	return Z_Registration_Info_UScriptStruct_ShowDialogSceneData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FShowDialogSceneData>()
{
	return FShowDialogSceneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShowDialogSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Dialog Scene Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* Dialog Scene Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogCameraName_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogCameraName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowDialogSceneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowDialogSceneData, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::NewProp_DialogCameraName = { "DialogCameraName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowDialogSceneData, DialogCameraName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogCameraName_MetaData), NewProp_DialogCameraName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::NewProp_DialogCameraName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ShowDialogSceneData",
	Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::PropPointers),
	sizeof(FShowDialogSceneData),
	alignof(FShowDialogSceneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShowDialogSceneData()
{
	if (!Z_Registration_Info_UScriptStruct_ShowDialogSceneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowDialogSceneData.InnerSingleton, Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShowDialogSceneData.InnerSingleton;
}
// End ScriptStruct FShowDialogSceneData

// Begin ScriptStruct FHideDialogSceneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideDialogSceneData;
class UScriptStruct* FHideDialogSceneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideDialogSceneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideDialogSceneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideDialogSceneData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("HideDialogSceneData"));
	}
	return Z_Registration_Info_UScriptStruct_HideDialogSceneData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FHideDialogSceneData>()
{
	return FHideDialogSceneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideDialogSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideDialogSceneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHideDialogSceneData, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::NewProp_DialogSceneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"HideDialogSceneData",
	Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::PropPointers),
	sizeof(FHideDialogSceneData),
	alignof(FHideDialogSceneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideDialogSceneData()
{
	if (!Z_Registration_Info_UScriptStruct_HideDialogSceneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideDialogSceneData.InnerSingleton, Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideDialogSceneData.InnerSingleton;
}
// End ScriptStruct FHideDialogSceneData

// Begin ScriptStruct FSwitchToCameraData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitchToCameraData;
class UScriptStruct* FSwitchToCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchToCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitchToCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchToCameraData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("SwitchToCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_SwitchToCameraData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FSwitchToCameraData>()
{
	return FSwitchToCameraData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSwitchToCameraData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogCameraName_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionParams_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogCameraName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchToCameraData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchToCameraData, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_DialogCameraName = { "DialogCameraName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchToCameraData, DialogCameraName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogCameraName_MetaData), NewProp_DialogCameraName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchToCameraData, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionParams_MetaData), NewProp_TransitionParams_MetaData) }; // 290970485
void Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((FSwitchToCameraData*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSwitchToCameraData), &Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_DialogCameraName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_TransitionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewProp_bDontWaitForTransitionToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"SwitchToCameraData",
	Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::PropPointers),
	sizeof(FSwitchToCameraData),
	alignof(FSwitchToCameraData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSwitchToCameraData()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchToCameraData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitchToCameraData.InnerSingleton, Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SwitchToCameraData.InnerSingleton;
}
// End ScriptStruct FSwitchToCameraData

// Begin ScriptStruct FShowCharacter3DData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowCharacter3DData;
class UScriptStruct* FShowCharacter3DData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCharacter3DData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowCharacter3DData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowCharacter3DData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ShowCharacter3DData"));
	}
	return Z_Registration_Info_UScriptStruct_ShowCharacter3DData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FShowCharacter3DData>()
{
	return FShowCharacter3DData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShowCharacter3DData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Character 3D Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* Character 3D Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocationName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowCharacter3DData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacter3DData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacter3DData, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_LocationName = { "LocationName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShowCharacter3DData, LocationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationName_MetaData), NewProp_LocationName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_EmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewProp_LocationName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ShowCharacter3DData",
	Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::PropPointers),
	sizeof(FShowCharacter3DData),
	alignof(FShowCharacter3DData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShowCharacter3DData()
{
	if (!Z_Registration_Info_UScriptStruct_ShowCharacter3DData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowCharacter3DData.InnerSingleton, Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShowCharacter3DData.InnerSingleton;
}
// End ScriptStruct FShowCharacter3DData

// Begin ScriptStruct FHideCharacter3DData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideCharacter3DData;
class UScriptStruct* FHideCharacter3DData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideCharacter3DData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideCharacter3DData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideCharacter3DData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("HideCharacter3DData"));
	}
	return Z_Registration_Info_UScriptStruct_HideCharacter3DData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FHideCharacter3DData>()
{
	return FHideCharacter3DData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideCharacter3DData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideCharacter3DData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHideCharacter3DData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::NewProp_CharacterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"HideCharacter3DData",
	Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::PropPointers),
	sizeof(FHideCharacter3DData),
	alignof(FHideCharacter3DData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideCharacter3DData()
{
	if (!Z_Registration_Info_UScriptStruct_HideCharacter3DData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideCharacter3DData.InnerSingleton, Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideCharacter3DData.InnerSingleton;
}
// End ScriptStruct FHideCharacter3DData

// Begin ScriptStruct FPlayDialogAudioData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayDialogAudioData;
class UScriptStruct* FPlayDialogAudioData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayDialogAudioData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayDialogAudioData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayDialogAudioData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayDialogAudioData>()
{
	return FPlayDialogAudioData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Dialog Audio Nodes\n */" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
		{ "ToolTip", "* Dialog Audio Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAudioId_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAudioToFinish_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogAudioId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static void NewProp_bWaitForAudioToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAudioToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayDialogAudioData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_DialogAudioId = { "DialogAudioId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, DialogAudioId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAudioId_MetaData), NewProp_DialogAudioId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, FadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeTime_MetaData), NewProp_FadeTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioData, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
void Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_bWaitForAudioToFinish_SetBit(void* Obj)
{
	((FPlayDialogAudioData*)Obj)->bWaitForAudioToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_bWaitForAudioToFinish = { "bWaitForAudioToFinish", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayDialogAudioData), &Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_bWaitForAudioToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForAudioToFinish_MetaData), NewProp_bWaitForAudioToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_DialogAudioId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_FadeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_AudioFadeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewProp_bWaitForAudioToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"PlayDialogAudioData",
	Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::PropPointers),
	sizeof(FPlayDialogAudioData),
	alignof(FPlayDialogAudioData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayDialogAudioData.InnerSingleton, Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioData.InnerSingleton;
}
// End ScriptStruct FPlayDialogAudioData

// Begin ScriptStruct FPlayDialogAudioDialogVoiceOverData
static_assert(std::is_polymorphic<FPlayDialogAudioDialogVoiceOverData>() == std::is_polymorphic<FPlayDialogAudioData>(), "USTRUCT FPlayDialogAudioDialogVoiceOverData cannot be polymorphic unless super FPlayDialogAudioData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData;
class UScriptStruct* FPlayDialogAudioDialogVoiceOverData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayDialogAudioDialogVoiceOverData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayDialogAudioDialogVoiceOverData>()
{
	return FPlayDialogAudioDialogVoiceOverData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayDialogAudioDialogVoiceOverData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioDialogVoiceOverData, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::NewProp_DialogId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FPlayDialogAudioData,
	&NewStructOps,
	"PlayDialogAudioDialogVoiceOverData",
	Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::PropPointers),
	sizeof(FPlayDialogAudioDialogVoiceOverData),
	alignof(FPlayDialogAudioDialogVoiceOverData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.InnerSingleton, Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData.InnerSingleton;
}
// End ScriptStruct FPlayDialogAudioDialogVoiceOverData

// Begin ScriptStruct FPlayDialogAudioCharacterVoiceOverData
static_assert(std::is_polymorphic<FPlayDialogAudioCharacterVoiceOverData>() == std::is_polymorphic<FPlayDialogAudioData>(), "USTRUCT FPlayDialogAudioCharacterVoiceOverData cannot be polymorphic unless super FPlayDialogAudioData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData;
class UScriptStruct* FPlayDialogAudioCharacterVoiceOverData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayDialogAudioCharacterVoiceOverData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayDialogAudioCharacterVoiceOverData>()
{
	return FPlayDialogAudioCharacterVoiceOverData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayDialogAudioCharacterVoiceOverData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayDialogAudioCharacterVoiceOverData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::NewProp_CharacterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FPlayDialogAudioData,
	&NewStructOps,
	"PlayDialogAudioCharacterVoiceOverData",
	Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::PropPointers),
	sizeof(FPlayDialogAudioCharacterVoiceOverData),
	alignof(FPlayDialogAudioCharacterVoiceOverData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.InnerSingleton, Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData.InnerSingleton;
}
// End ScriptStruct FPlayDialogAudioCharacterVoiceOverData

// Begin ScriptStruct FPlayDialogAudioBackgroundMusicData
static_assert(std::is_polymorphic<FPlayDialogAudioBackgroundMusicData>() == std::is_polymorphic<FPlayDialogAudioData>(), "USTRUCT FPlayDialogAudioBackgroundMusicData cannot be polymorphic unless super FPlayDialogAudioData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData;
class UScriptStruct* FPlayDialogAudioBackgroundMusicData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("PlayDialogAudioBackgroundMusicData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FPlayDialogAudioBackgroundMusicData>()
{
	return FPlayDialogAudioBackgroundMusicData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayDialogAudioBackgroundMusicData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((FPlayDialogAudioBackgroundMusicData*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayDialogAudioBackgroundMusicData), &Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::NewProp_bIsLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FPlayDialogAudioData,
	&NewStructOps,
	"PlayDialogAudioBackgroundMusicData",
	Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::PropPointers),
	sizeof(FPlayDialogAudioBackgroundMusicData),
	alignof(FPlayDialogAudioBackgroundMusicData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.InnerSingleton, Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData.InnerSingleton;
}
// End ScriptStruct FPlayDialogAudioBackgroundMusicData

// Begin ScriptStruct FStopDialogAudioData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StopDialogAudioData;
class UScriptStruct* FStopDialogAudioData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StopDialogAudioData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StopDialogAudioData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStopDialogAudioData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("StopDialogAudioData"));
	}
	return Z_Registration_Info_UScriptStruct_StopDialogAudioData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FStopDialogAudioData>()
{
	return FStopDialogAudioData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStopDialogAudioData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Common/VNMControlStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStopDialogAudioData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStopDialogAudioData, FadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeTime_MetaData), NewProp_FadeTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStopDialogAudioData, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_FadeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewProp_AudioFadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"StopDialogAudioData",
	Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::PropPointers),
	sizeof(FStopDialogAudioData),
	alignof(FStopDialogAudioData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStopDialogAudioData()
{
	if (!Z_Registration_Info_UScriptStruct_StopDialogAudioData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StopDialogAudioData.InnerSingleton, Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StopDialogAudioData.InnerSingleton;
}
// End ScriptStruct FStopDialogAudioData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMControlStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTransitionableNodeData::StaticStruct, Z_Construct_UScriptStruct_FTransitionableNodeData_Statics::NewStructOps, TEXT("TransitionableNodeData"), &Z_Registration_Info_UScriptStruct_TransitionableNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransitionableNodeData), 263661548U) },
		{ FImageLayerInfo::StaticStruct, Z_Construct_UScriptStruct_FImageLayerInfo_Statics::NewStructOps, TEXT("ImageLayerInfo"), &Z_Registration_Info_UScriptStruct_ImageLayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageLayerInfo), 2577477638U) },
		{ FBaseDialogNodeData::StaticStruct, Z_Construct_UScriptStruct_FBaseDialogNodeData_Statics::NewStructOps, TEXT("BaseDialogNodeData"), &Z_Registration_Info_UScriptStruct_BaseDialogNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseDialogNodeData), 949990059U) },
		{ FDisplayDialogTextData::StaticStruct, Z_Construct_UScriptStruct_FDisplayDialogTextData_Statics::NewStructOps, TEXT("DisplayDialogTextData"), &Z_Registration_Info_UScriptStruct_DisplayDialogTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayDialogTextData), 1870991937U) },
		{ FDisplayDialogChoicesData::StaticStruct, Z_Construct_UScriptStruct_FDisplayDialogChoicesData_Statics::NewStructOps, TEXT("DisplayDialogChoicesData"), &Z_Registration_Info_UScriptStruct_DisplayDialogChoicesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayDialogChoicesData), 943711199U) },
		{ FDialogWindowData::StaticStruct, Z_Construct_UScriptStruct_FDialogWindowData_Statics::NewStructOps, TEXT("DialogWindowData"), &Z_Registration_Info_UScriptStruct_DialogWindowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogWindowData), 80077563U) },
		{ FPlayDialogWindowAnimationData::StaticStruct, Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData_Statics::NewStructOps, TEXT("PlayDialogWindowAnimationData"), &Z_Registration_Info_UScriptStruct_PlayDialogWindowAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayDialogWindowAnimationData), 3816072242U) },
		{ FWidgetShowData::StaticStruct, Z_Construct_UScriptStruct_FWidgetShowData_Statics::NewStructOps, TEXT("WidgetShowData"), &Z_Registration_Info_UScriptStruct_WidgetShowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetShowData), 2750612623U) },
		{ FWidgetHideData::StaticStruct, Z_Construct_UScriptStruct_FWidgetHideData_Statics::NewStructOps, TEXT("WidgetHideData"), &Z_Registration_Info_UScriptStruct_WidgetHideData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetHideData), 5765746U) },
		{ FShowCharacterData::StaticStruct, Z_Construct_UScriptStruct_FShowCharacterData_Statics::NewStructOps, TEXT("ShowCharacterData"), &Z_Registration_Info_UScriptStruct_ShowCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowCharacterData), 2268073467U) },
		{ FAddLayerToCharacterData::StaticStruct, Z_Construct_UScriptStruct_FAddLayerToCharacterData_Statics::NewStructOps, TEXT("AddLayerToCharacterData"), &Z_Registration_Info_UScriptStruct_AddLayerToCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddLayerToCharacterData), 2136561642U) },
		{ FMoveCharacterData::StaticStruct, Z_Construct_UScriptStruct_FMoveCharacterData_Statics::NewStructOps, TEXT("MoveCharacterData"), &Z_Registration_Info_UScriptStruct_MoveCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoveCharacterData), 2462438617U) },
		{ FRemoveLayerFromCharacterData::StaticStruct, Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData_Statics::NewStructOps, TEXT("RemoveLayerFromCharacterData"), &Z_Registration_Info_UScriptStruct_RemoveLayerFromCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveLayerFromCharacterData), 625590281U) },
		{ FHideCharacterData::StaticStruct, Z_Construct_UScriptStruct_FHideCharacterData_Statics::NewStructOps, TEXT("HideCharacterData"), &Z_Registration_Info_UScriptStruct_HideCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideCharacterData), 2265326339U) },
		{ FPlayCharacterAnimationData::StaticStruct, Z_Construct_UScriptStruct_FPlayCharacterAnimationData_Statics::NewStructOps, TEXT("PlayCharacterAnimationData"), &Z_Registration_Info_UScriptStruct_PlayCharacterAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayCharacterAnimationData), 3962213498U) },
		{ FRenameCharacterData::StaticStruct, Z_Construct_UScriptStruct_FRenameCharacterData_Statics::NewStructOps, TEXT("RenameCharacterData"), &Z_Registration_Info_UScriptStruct_RenameCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenameCharacterData), 692923232U) },
		{ FInteractiveRenameCharacterData::StaticStruct, Z_Construct_UScriptStruct_FInteractiveRenameCharacterData_Statics::NewStructOps, TEXT("InteractiveRenameCharacterData"), &Z_Registration_Info_UScriptStruct_InteractiveRenameCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveRenameCharacterData), 4196499639U) },
		{ FShowCgData::StaticStruct, Z_Construct_UScriptStruct_FShowCgData_Statics::NewStructOps, TEXT("ShowCgData"), &Z_Registration_Info_UScriptStruct_ShowCgData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowCgData), 255889298U) },
		{ FAddLayerToCgData::StaticStruct, Z_Construct_UScriptStruct_FAddLayerToCgData_Statics::NewStructOps, TEXT("AddLayerToCgData"), &Z_Registration_Info_UScriptStruct_AddLayerToCgData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddLayerToCgData), 1887312471U) },
		{ FRemoveLayerFromCgData::StaticStruct, Z_Construct_UScriptStruct_FRemoveLayerFromCgData_Statics::NewStructOps, TEXT("RemoveLayerFromCgData"), &Z_Registration_Info_UScriptStruct_RemoveLayerFromCgData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveLayerFromCgData), 4080450825U) },
		{ FHideCgData::StaticStruct, Z_Construct_UScriptStruct_FHideCgData_Statics::NewStructOps, TEXT("HideCgData"), &Z_Registration_Info_UScriptStruct_HideCgData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideCgData), 1483313941U) },
		{ FPlayCgAnimationData::StaticStruct, Z_Construct_UScriptStruct_FPlayCgAnimationData_Statics::NewStructOps, TEXT("PlayCgAnimationData"), &Z_Registration_Info_UScriptStruct_PlayCgAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayCgAnimationData), 2175893155U) },
		{ FShowSceneBackgroundData::StaticStruct, Z_Construct_UScriptStruct_FShowSceneBackgroundData_Statics::NewStructOps, TEXT("ShowSceneBackgroundData"), &Z_Registration_Info_UScriptStruct_ShowSceneBackgroundData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowSceneBackgroundData), 1277410757U) },
		{ FAddLayerToSceneBackgroundData::StaticStruct, Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData_Statics::NewStructOps, TEXT("AddLayerToSceneBackgroundData"), &Z_Registration_Info_UScriptStruct_AddLayerToSceneBackgroundData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddLayerToSceneBackgroundData), 1671301730U) },
		{ FRemoveLayerFromSceneBackgroundData::StaticStruct, Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData_Statics::NewStructOps, TEXT("RemoveLayerFromSceneBackgroundData"), &Z_Registration_Info_UScriptStruct_RemoveLayerFromSceneBackgroundData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveLayerFromSceneBackgroundData), 3416998320U) },
		{ FHideSceneBackgroundData::StaticStruct, Z_Construct_UScriptStruct_FHideSceneBackgroundData_Statics::NewStructOps, TEXT("HideSceneBackgroundData"), &Z_Registration_Info_UScriptStruct_HideSceneBackgroundData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideSceneBackgroundData), 1267863955U) },
		{ FPlaySceneBackgroundAnimationData::StaticStruct, Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData_Statics::NewStructOps, TEXT("PlaySceneBackgroundAnimationData"), &Z_Registration_Info_UScriptStruct_PlaySceneBackgroundAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaySceneBackgroundAnimationData), 4154826063U) },
		{ FShowDialogSceneData::StaticStruct, Z_Construct_UScriptStruct_FShowDialogSceneData_Statics::NewStructOps, TEXT("ShowDialogSceneData"), &Z_Registration_Info_UScriptStruct_ShowDialogSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowDialogSceneData), 2880614750U) },
		{ FHideDialogSceneData::StaticStruct, Z_Construct_UScriptStruct_FHideDialogSceneData_Statics::NewStructOps, TEXT("HideDialogSceneData"), &Z_Registration_Info_UScriptStruct_HideDialogSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideDialogSceneData), 248525410U) },
		{ FSwitchToCameraData::StaticStruct, Z_Construct_UScriptStruct_FSwitchToCameraData_Statics::NewStructOps, TEXT("SwitchToCameraData"), &Z_Registration_Info_UScriptStruct_SwitchToCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchToCameraData), 3118781157U) },
		{ FShowCharacter3DData::StaticStruct, Z_Construct_UScriptStruct_FShowCharacter3DData_Statics::NewStructOps, TEXT("ShowCharacter3DData"), &Z_Registration_Info_UScriptStruct_ShowCharacter3DData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowCharacter3DData), 3819998670U) },
		{ FHideCharacter3DData::StaticStruct, Z_Construct_UScriptStruct_FHideCharacter3DData_Statics::NewStructOps, TEXT("HideCharacter3DData"), &Z_Registration_Info_UScriptStruct_HideCharacter3DData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideCharacter3DData), 628649796U) },
		{ FPlayDialogAudioData::StaticStruct, Z_Construct_UScriptStruct_FPlayDialogAudioData_Statics::NewStructOps, TEXT("PlayDialogAudioData"), &Z_Registration_Info_UScriptStruct_PlayDialogAudioData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayDialogAudioData), 1379367647U) },
		{ FPlayDialogAudioDialogVoiceOverData::StaticStruct, Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData_Statics::NewStructOps, TEXT("PlayDialogAudioDialogVoiceOverData"), &Z_Registration_Info_UScriptStruct_PlayDialogAudioDialogVoiceOverData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayDialogAudioDialogVoiceOverData), 3920015262U) },
		{ FPlayDialogAudioCharacterVoiceOverData::StaticStruct, Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData_Statics::NewStructOps, TEXT("PlayDialogAudioCharacterVoiceOverData"), &Z_Registration_Info_UScriptStruct_PlayDialogAudioCharacterVoiceOverData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayDialogAudioCharacterVoiceOverData), 592540491U) },
		{ FPlayDialogAudioBackgroundMusicData::StaticStruct, Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData_Statics::NewStructOps, TEXT("PlayDialogAudioBackgroundMusicData"), &Z_Registration_Info_UScriptStruct_PlayDialogAudioBackgroundMusicData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayDialogAudioBackgroundMusicData), 3795791951U) },
		{ FStopDialogAudioData::StaticStruct, Z_Construct_UScriptStruct_FStopDialogAudioData_Statics::NewStructOps, TEXT("StopDialogAudioData"), &Z_Registration_Info_UScriptStruct_StopDialogAudioData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStopDialogAudioData), 1370051894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMControlStructs_h_2924914146(TEXT("/Script/VNM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMControlStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMControlStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
