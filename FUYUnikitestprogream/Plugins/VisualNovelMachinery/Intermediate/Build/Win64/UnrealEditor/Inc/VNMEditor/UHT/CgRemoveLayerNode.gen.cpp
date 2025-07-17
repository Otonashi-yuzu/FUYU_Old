// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/CG/CgRemoveLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgRemoveLayerNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgRemoveLayerNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgRemoveLayerNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCgRemoveLayerNode
void UCgRemoveLayerNode::StaticRegisterNativesUCgRemoveLayerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCgRemoveLayerNode);
UClass* Z_Construct_UClass_UCgRemoveLayerNode_NoRegister()
{
	return UCgRemoveLayerNode::StaticClass();
}
struct Z_Construct_UClass_UCgRemoveLayerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/CG/CgRemoveLayerNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgRemoveLayerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgRemoveLayerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgRemoveLayerNode_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgRemoveLayerNode, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgRemoveLayerNode_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgRemoveLayerNode, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCgRemoveLayerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgRemoveLayerNode_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgRemoveLayerNode_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgRemoveLayerNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCgRemoveLayerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgRemoveLayerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCgRemoveLayerNode_Statics::ClassParams = {
	&UCgRemoveLayerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCgRemoveLayerNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCgRemoveLayerNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCgRemoveLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCgRemoveLayerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCgRemoveLayerNode()
{
	if (!Z_Registration_Info_UClass_UCgRemoveLayerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCgRemoveLayerNode.OuterSingleton, Z_Construct_UClass_UCgRemoveLayerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCgRemoveLayerNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCgRemoveLayerNode>()
{
	return UCgRemoveLayerNode::StaticClass();
}
UCgRemoveLayerNode::UCgRemoveLayerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCgRemoveLayerNode);
UCgRemoveLayerNode::~UCgRemoveLayerNode() {}
// End Class UCgRemoveLayerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgRemoveLayerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCgRemoveLayerNode, UCgRemoveLayerNode::StaticClass, TEXT("UCgRemoveLayerNode"), &Z_Registration_Info_UClass_UCgRemoveLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCgRemoveLayerNode), 1474222345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgRemoveLayerNode_h_613098479(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgRemoveLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgRemoveLayerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
