// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/CG/CgShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgShowNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgShowNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgShowNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCgShowNode
void UCgShowNode::StaticRegisterNativesUCgShowNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCgShowNode);
UClass* Z_Construct_UClass_UCgShowNode_NoRegister()
{
	return UCgShowNode::StaticClass();
}
struct Z_Construct_UClass_UCgShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/CG/CgShowNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEvent_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionEventName_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent==ETransitionEvent::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent!=ETransitionEvent::No_Transition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlaybackMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomTransitionEventName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgShowNode, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_TransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_TransitionEvent = { "TransitionEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgShowNode, TransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionEvent_MetaData), NewProp_TransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_AnimationPlaybackMultiplier = { "AnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgShowNode, AnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPlaybackMultiplier_MetaData), NewProp_AnimationPlaybackMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_CustomTransitionEventName = { "CustomTransitionEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgShowNode, CustomTransitionEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTransitionEventName_MetaData), NewProp_CustomTransitionEventName_MetaData) };
void Z_Construct_UClass_UCgShowNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((UCgShowNode*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCgShowNode_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCgShowNode), &Z_Construct_UClass_UCgShowNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCgShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_TransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_TransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_AnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_CustomTransitionEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgShowNode_Statics::NewProp_bDontWaitForTransitionToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCgShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCgShowNode_Statics::ClassParams = {
	&UCgShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCgShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCgShowNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCgShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCgShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCgShowNode()
{
	if (!Z_Registration_Info_UClass_UCgShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCgShowNode.OuterSingleton, Z_Construct_UClass_UCgShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCgShowNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCgShowNode>()
{
	return UCgShowNode::StaticClass();
}
UCgShowNode::UCgShowNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCgShowNode);
UCgShowNode::~UCgShowNode() {}
// End Class UCgShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCgShowNode, UCgShowNode::StaticClass, TEXT("UCgShowNode"), &Z_Registration_Info_UClass_UCgShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCgShowNode), 3196488232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgShowNode_h_2465916450(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
