// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/SceneBackground/SceneBackgroundAddLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneBackgroundAddLayerNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_USceneBackgroundAddLayerNode();
VNMEDITOR_API UClass* Z_Construct_UClass_USceneBackgroundAddLayerNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class USceneBackgroundAddLayerNode
void USceneBackgroundAddLayerNode::StaticRegisterNativesUSceneBackgroundAddLayerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneBackgroundAddLayerNode);
UClass* Z_Construct_UClass_USceneBackgroundAddLayerNode_NoRegister()
{
	return USceneBackgroundAddLayerNode::StaticClass();
}
struct Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/SceneBackground/SceneBackgroundAddLayerNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SceneBackground/SceneBackgroundAddLayerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneBackgroundAddLayerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneBackgroundAddLayerNode, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneBackgroundAddLayerNode, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneBackgroundAddLayerNode, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::ClassParams = {
	&USceneBackgroundAddLayerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USceneBackgroundAddLayerNode()
{
	if (!Z_Registration_Info_UClass_USceneBackgroundAddLayerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneBackgroundAddLayerNode.OuterSingleton, Z_Construct_UClass_USceneBackgroundAddLayerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneBackgroundAddLayerNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<USceneBackgroundAddLayerNode>()
{
	return USceneBackgroundAddLayerNode::StaticClass();
}
USceneBackgroundAddLayerNode::USceneBackgroundAddLayerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USceneBackgroundAddLayerNode);
USceneBackgroundAddLayerNode::~USceneBackgroundAddLayerNode() {}
// End Class USceneBackgroundAddLayerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundAddLayerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneBackgroundAddLayerNode, USceneBackgroundAddLayerNode::StaticClass, TEXT("USceneBackgroundAddLayerNode"), &Z_Registration_Info_UClass_USceneBackgroundAddLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneBackgroundAddLayerNode), 1590836528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundAddLayerNode_h_83423508(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundAddLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_SceneBackground_SceneBackgroundAddLayerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
