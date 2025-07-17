// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/CG/CgHideNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgHideNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgHideNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgHideNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCgHideNode
void UCgHideNode::StaticRegisterNativesUCgHideNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCgHideNode);
UClass* Z_Construct_UClass_UCgHideNode_NoRegister()
{
	return UCgHideNode::StaticClass();
}
struct Z_Construct_UClass_UCgHideNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/CG/CgHideNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgHideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEvent_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//K2Node implementation\n" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgHideNode.h" },
		{ "ToolTip", "K2Node implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgHideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionEventName_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent==ETransitionEvent::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgHideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "TransitionEvent!=ETransitionEvent::No_Transition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgHideNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlaybackMultiplier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomTransitionEventName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgHideNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCgHideNode_Statics::NewProp_TransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCgHideNode_Statics::NewProp_TransitionEvent = { "TransitionEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgHideNode, TransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionEvent_MetaData), NewProp_TransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCgHideNode_Statics::NewProp_AnimationPlaybackMultiplier = { "AnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgHideNode, AnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPlaybackMultiplier_MetaData), NewProp_AnimationPlaybackMultiplier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCgHideNode_Statics::NewProp_CustomTransitionEventName = { "CustomTransitionEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgHideNode, CustomTransitionEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTransitionEventName_MetaData), NewProp_CustomTransitionEventName_MetaData) };
void Z_Construct_UClass_UCgHideNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((UCgHideNode*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCgHideNode_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCgHideNode), &Z_Construct_UClass_UCgHideNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCgHideNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgHideNode_Statics::NewProp_TransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgHideNode_Statics::NewProp_TransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgHideNode_Statics::NewProp_AnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgHideNode_Statics::NewProp_CustomTransitionEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgHideNode_Statics::NewProp_bDontWaitForTransitionToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgHideNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCgHideNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgHideNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCgHideNode_Statics::ClassParams = {
	&UCgHideNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCgHideNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCgHideNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCgHideNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCgHideNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCgHideNode()
{
	if (!Z_Registration_Info_UClass_UCgHideNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCgHideNode.OuterSingleton, Z_Construct_UClass_UCgHideNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCgHideNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCgHideNode>()
{
	return UCgHideNode::StaticClass();
}
UCgHideNode::UCgHideNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCgHideNode);
UCgHideNode::~UCgHideNode() {}
// End Class UCgHideNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgHideNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCgHideNode, UCgHideNode::StaticClass, TEXT("UCgHideNode"), &Z_Registration_Info_UClass_UCgHideNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCgHideNode), 3708859265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgHideNode_h_3573800033(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgHideNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgHideNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
