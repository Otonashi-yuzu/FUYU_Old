// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogAudio/DialogAudioStopVoiceOverNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAudioStopVoiceOverNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioStopVoiceOverNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioStopVoiceOverNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogAudioStopVoiceOverNode
void UDialogAudioStopVoiceOverNode::StaticRegisterNativesUDialogAudioStopVoiceOverNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAudioStopVoiceOverNode);
UClass* Z_Construct_UClass_UDialogAudioStopVoiceOverNode_NoRegister()
{
	return UDialogAudioStopVoiceOverNode::StaticClass();
}
struct Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogAudio/DialogAudioStopVoiceOverNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopVoiceOverNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopVoiceOverNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopVoiceOverNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAudioStopVoiceOverNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioStopVoiceOverNode, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioStopVoiceOverNode, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::NewProp_AudioFadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::ClassParams = {
	&UDialogAudioStopVoiceOverNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAudioStopVoiceOverNode()
{
	if (!Z_Registration_Info_UClass_UDialogAudioStopVoiceOverNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAudioStopVoiceOverNode.OuterSingleton, Z_Construct_UClass_UDialogAudioStopVoiceOverNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAudioStopVoiceOverNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogAudioStopVoiceOverNode>()
{
	return UDialogAudioStopVoiceOverNode::StaticClass();
}
UDialogAudioStopVoiceOverNode::UDialogAudioStopVoiceOverNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAudioStopVoiceOverNode);
UDialogAudioStopVoiceOverNode::~UDialogAudioStopVoiceOverNode() {}
// End Class UDialogAudioStopVoiceOverNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopVoiceOverNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAudioStopVoiceOverNode, UDialogAudioStopVoiceOverNode::StaticClass, TEXT("UDialogAudioStopVoiceOverNode"), &Z_Registration_Info_UClass_UDialogAudioStopVoiceOverNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAudioStopVoiceOverNode), 2291416445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopVoiceOverNode_h_3896771483(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopVoiceOverNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopVoiceOverNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
