// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogSceneSwitchCameraNode() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneSwitchCameraNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneSwitchCameraNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogSceneSwitchCameraNode
void UDialogSceneSwitchCameraNode::StaticRegisterNativesUDialogSceneSwitchCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogSceneSwitchCameraNode);
UClass* Z_Construct_UClass_UDialogSceneSwitchCameraNode_NoRegister()
{
	return UDialogSceneSwitchCameraNode::StaticClass();
}
struct Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontWaitForTransitionToFinish_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionParams_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneSwitchCameraNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraName;
	static void NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontWaitForTransitionToFinish;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogSceneSwitchCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneSwitchCameraNode, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneSwitchCameraNode, CameraName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraName_MetaData), NewProp_CameraName_MetaData) };
void Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit(void* Obj)
{
	((UDialogSceneSwitchCameraNode*)Obj)->bDontWaitForTransitionToFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_bDontWaitForTransitionToFinish = { "bDontWaitForTransitionToFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogSceneSwitchCameraNode), &Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_bDontWaitForTransitionToFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontWaitForTransitionToFinish_MetaData), NewProp_bDontWaitForTransitionToFinish_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneSwitchCameraNode, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionParams_MetaData), NewProp_TransitionParams_MetaData) }; // 290970485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_CameraName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_bDontWaitForTransitionToFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::NewProp_TransitionParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::ClassParams = {
	&UDialogSceneSwitchCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogSceneSwitchCameraNode()
{
	if (!Z_Registration_Info_UClass_UDialogSceneSwitchCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogSceneSwitchCameraNode.OuterSingleton, Z_Construct_UClass_UDialogSceneSwitchCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogSceneSwitchCameraNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogSceneSwitchCameraNode>()
{
	return UDialogSceneSwitchCameraNode::StaticClass();
}
UDialogSceneSwitchCameraNode::UDialogSceneSwitchCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogSceneSwitchCameraNode);
UDialogSceneSwitchCameraNode::~UDialogSceneSwitchCameraNode() {}
// End Class UDialogSceneSwitchCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneSwitchCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogSceneSwitchCameraNode, UDialogSceneSwitchCameraNode::StaticClass, TEXT("UDialogSceneSwitchCameraNode"), &Z_Registration_Info_UClass_UDialogSceneSwitchCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogSceneSwitchCameraNode), 2794460965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneSwitchCameraNode_h_2868954918(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneSwitchCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneSwitchCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
