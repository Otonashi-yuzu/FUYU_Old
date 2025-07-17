// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogAudio/DialogAudioStopBGMNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAudioStopBGMNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioStopBGMNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogAudioStopBGMNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogAudioStopBGMNode
void UDialogAudioStopBGMNode::StaticRegisterNativesUDialogAudioStopBGMNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAudioStopBGMNode);
UClass* Z_Construct_UClass_UDialogAudioStopBGMNode_NoRegister()
{
	return UDialogAudioStopBGMNode::StaticClass();
}
struct Z_Construct_UClass_UDialogAudioStopBGMNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogAudio/DialogAudioStopBGMNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopBGMNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFadeCurve_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Nodes/DialogAudio/DialogAudioStopBGMNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAudioStopBGMNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioStopBGMNode, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_AudioFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_AudioFadeCurve = { "AudioFadeCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioStopBGMNode, AudioFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFadeCurve_MetaData), NewProp_AudioFadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_AudioFadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::NewProp_AudioFadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::ClassParams = {
	&UDialogAudioStopBGMNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAudioStopBGMNode()
{
	if (!Z_Registration_Info_UClass_UDialogAudioStopBGMNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAudioStopBGMNode.OuterSingleton, Z_Construct_UClass_UDialogAudioStopBGMNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAudioStopBGMNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogAudioStopBGMNode>()
{
	return UDialogAudioStopBGMNode::StaticClass();
}
UDialogAudioStopBGMNode::UDialogAudioStopBGMNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAudioStopBGMNode);
UDialogAudioStopBGMNode::~UDialogAudioStopBGMNode() {}
// End Class UDialogAudioStopBGMNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopBGMNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAudioStopBGMNode, UDialogAudioStopBGMNode::StaticClass, TEXT("UDialogAudioStopBGMNode"), &Z_Registration_Info_UClass_UDialogAudioStopBGMNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAudioStopBGMNode), 2689922384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopBGMNode_h_3841961037(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopBGMNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogAudio_DialogAudioStopBGMNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
