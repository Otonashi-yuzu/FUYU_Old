// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/CG/CgAddLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgAddLayerNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgAddLayerNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCgAddLayerNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCgAddLayerNode
void UCgAddLayerNode::StaticRegisterNativesUCgAddLayerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCgAddLayerNode);
UClass* Z_Construct_UClass_UCgAddLayerNode_NoRegister()
{
	return UCgAddLayerNode::StaticClass();
}
struct Z_Construct_UClass_UCgAddLayerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/CG/CgAddLayerNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/CG/CgAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgAddLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/CG/CgAddLayerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgAddLayerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgAddLayerNode, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgAddLayerNode, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCgAddLayerNode, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCgAddLayerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCgAddLayerNode_Statics::NewProp_ImageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgAddLayerNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCgAddLayerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCgAddLayerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCgAddLayerNode_Statics::ClassParams = {
	&UCgAddLayerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCgAddLayerNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCgAddLayerNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCgAddLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCgAddLayerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCgAddLayerNode()
{
	if (!Z_Registration_Info_UClass_UCgAddLayerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCgAddLayerNode.OuterSingleton, Z_Construct_UClass_UCgAddLayerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCgAddLayerNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCgAddLayerNode>()
{
	return UCgAddLayerNode::StaticClass();
}
UCgAddLayerNode::UCgAddLayerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCgAddLayerNode);
UCgAddLayerNode::~UCgAddLayerNode() {}
// End Class UCgAddLayerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgAddLayerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCgAddLayerNode, UCgAddLayerNode::StaticClass, TEXT("UCgAddLayerNode"), &Z_Registration_Info_UClass_UCgAddLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCgAddLayerNode), 522717930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgAddLayerNode_h_897671726(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgAddLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_CG_CgAddLayerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
