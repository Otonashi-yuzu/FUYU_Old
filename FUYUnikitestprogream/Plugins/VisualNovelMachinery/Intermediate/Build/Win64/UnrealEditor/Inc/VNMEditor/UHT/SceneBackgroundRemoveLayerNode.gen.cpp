// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/SceneBackground/SceneBackgroundRemoveLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneBackgroundRemoveLayerNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_USceneBackgroundRemoveLayerNode();
VNMEDITOR_API UClass* Z_Construct_UClass_USceneBackgroundRemoveLayerNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class USceneBackgroundRemoveLayerNode
void USceneBackgroundRemoveLayerNode::StaticRegisterNativesUSceneBackgroundRemoveLayerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneBackgroundRemoveLayerNode);
UClass* Z_Construct_UClass_USceneBackgroundRemoveLayerNode_NoRegister()
{
	return USceneBackgroundRemoveLayerNode::StaticClass();
}
struct Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/SceneBackground/SceneBackgroundRemoveLayerNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundRemoveLayerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneBackgroundRemoveLayerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneBackgroundRemoveLayerNode, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneBackgroundRemoveLayerNode, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::ClassParams = {
	&USceneBackgroundRemoveLayerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USceneBackgroundRemoveLayerNode()
{
	if (!Z_Registration_Info_UClass_USceneBackgroundRemoveLayerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneBackgroundRemoveLayerNode.OuterSingleton, Z_Construct_UClass_USceneBackgroundRemoveLayerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneBackgroundRemoveLayerNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<USceneBackgroundRemoveLayerNode>()
{
	return USceneBackgroundRemoveLayerNode::StaticClass();
}
USceneBackgroundRemoveLayerNode::USceneBackgroundRemoveLayerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USceneBackgroundRemoveLayerNode);
USceneBackgroundRemoveLayerNode::~USceneBackgroundRemoveLayerNode() {}
// End Class USceneBackgroundRemoveLayerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundRemoveLayerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneBackgroundRemoveLayerNode, USceneBackgroundRemoveLayerNode::StaticClass, TEXT("USceneBackgroundRemoveLayerNode"), &Z_Registration_Info_UClass_USceneBackgroundRemoveLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneBackgroundRemoveLayerNode), 2867031665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundRemoveLayerNode_h_2977974467(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundRemoveLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundRemoveLayerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
