// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAudioPlaySoundEffectNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioPlaySoundEffectNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogAudioPlaySoundEffectNode
void UDialogAudioPlaySoundEffectNode::StaticRegisterNativesUDialogAudioPlaySoundEffectNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAudioPlaySoundEffectNode);
UClass* Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_NoRegister()
{
	return UDialogAudioPlaySoundEffectNode::StaticClass();
}
struct Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAudioToFinish_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlaySoundEffectNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundEffectId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static void NewProp_bWaitForAudioToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAudioToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAudioPlaySoundEffectNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_SoundEffectId = { "SoundEffectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, SoundEffectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundEffectId_MetaData), NewProp_SoundEffectId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlaySoundEffectNode, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
void Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_bWaitForAudioToFinish_SetBit(void* Obj)
{
	((UDialogAudioPlaySoundEffectNode*)Obj)->bWaitForAudioToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_bWaitForAudioToFinish = { "bWaitForAudioToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogAudioPlaySoundEffectNode), &Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_bWaitForAudioToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForAudioToFinish_MetaData), NewProp_bWaitForAudioToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_SoundEffectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_AudioFadeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::NewProp_bWaitForAudioToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::ClassParams = {
	&UDialogAudioPlaySoundEffectNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAudioPlaySoundEffectNode()
{
	if (!Z_Registration_Info_UClass_UDialogAudioPlaySoundEffectNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAudioPlaySoundEffectNode.OuterSingleton, Z_Construct_UClass_UDialogAudioPlaySoundEffectNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAudioPlaySoundEffectNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogAudioPlaySoundEffectNode>()
{
	return UDialogAudioPlaySoundEffectNode::StaticClass();
}
UDialogAudioPlaySoundEffectNode::UDialogAudioPlaySoundEffectNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAudioPlaySoundEffectNode);
UDialogAudioPlaySoundEffectNode::~UDialogAudioPlaySoundEffectNode() {}
// End Class UDialogAudioPlaySoundEffectNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlaySoundEffectNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAudioPlaySoundEffectNode, UDialogAudioPlaySoundEffectNode::StaticClass, TEXT("UDialogAudioPlaySoundEffectNode"), &Z_Registration_Info_UClass_UDialogAudioPlaySoundEffectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAudioPlaySoundEffectNode), 3092310479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlaySoundEffectNode_h_4172141548(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlaySoundEffectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlaySoundEffectNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
