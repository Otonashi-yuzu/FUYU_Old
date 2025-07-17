// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAudioPlayBGMNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioPlayBGMNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioPlayBGMNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogAudioPlayBGMNode
void UDialogAudioPlayBGMNode::StaticRegisterNativesUDialogAudioPlayBGMNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAudioPlayBGMNode);
UClass* Z_Construct_UClass_UDialogAudioPlayBGMNode_NoRegister()
{
	return UDialogAudioPlayBGMNode::StaticClass();
}
struct Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMusicId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAudioToFinish_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioPlayBGMNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BackgroundMusicId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static void NewProp_bWaitForAudioToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAudioToFinish;
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAudioPlayBGMNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_BackgroundMusicId = { "BackgroundMusicId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, BackgroundMusicId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundMusicId_MetaData), NewProp_BackgroundMusicId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioPlayBGMNode, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
void Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bWaitForAudioToFinish_SetBit(void* Obj)
{
	((UDialogAudioPlayBGMNode*)Obj)->bWaitForAudioToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bWaitForAudioToFinish = { "bWaitForAudioToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogAudioPlayBGMNode), &Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bWaitForAudioToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForAudioToFinish_MetaData), NewProp_bWaitForAudioToFinish_MetaData) };
void Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((UDialogAudioPlayBGMNode*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogAudioPlayBGMNode), &Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_BackgroundMusicId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_AudioFadeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bWaitForAudioToFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::NewProp_bIsLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::ClassParams = {
	&UDialogAudioPlayBGMNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAudioPlayBGMNode()
{
	if (!Z_Registration_Info_UClass_UDialogAudioPlayBGMNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAudioPlayBGMNode.OuterSingleton, Z_Construct_UClass_UDialogAudioPlayBGMNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAudioPlayBGMNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogAudioPlayBGMNode>()
{
	return UDialogAudioPlayBGMNode::StaticClass();
}
UDialogAudioPlayBGMNode::UDialogAudioPlayBGMNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAudioPlayBGMNode);
UDialogAudioPlayBGMNode::~UDialogAudioPlayBGMNode() {}
// End Class UDialogAudioPlayBGMNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlayBGMNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAudioPlayBGMNode, UDialogAudioPlayBGMNode::StaticClass, TEXT("UDialogAudioPlayBGMNode"), &Z_Registration_Info_UClass_UDialogAudioPlayBGMNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAudioPlayBGMNode), 3141714966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlayBGMNode_h_429773317(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlayBGMNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioPlayBGMNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
