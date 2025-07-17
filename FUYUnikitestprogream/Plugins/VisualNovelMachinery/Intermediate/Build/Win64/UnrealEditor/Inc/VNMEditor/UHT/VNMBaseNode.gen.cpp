// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/VNMBaseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMBaseNode() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode_NoRegister();
// End Cross Module References

// Begin Class UVNMBaseNode
void UVNMBaseNode::StaticRegisterNativesUVNMBaseNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMBaseNode);
UClass* Z_Construct_UClass_UVNMBaseNode_NoRegister()
{
	return UVNMBaseNode::StaticClass();
}
struct Z_Construct_UClass_UVNMBaseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/VNMBaseNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/VNMBaseNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMBaseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVNMBaseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMBaseNode_Statics::ClassParams = {
	&UVNMBaseNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMBaseNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMBaseNode()
{
	if (!Z_Registration_Info_UClass_UVNMBaseNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMBaseNode.OuterSingleton, Z_Construct_UClass_UVNMBaseNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMBaseNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UVNMBaseNode>()
{
	return UVNMBaseNode::StaticClass();
}
UVNMBaseNode::UVNMBaseNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMBaseNode);
UVNMBaseNode::~UVNMBaseNode() {}
// End Class UVNMBaseNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_VNMBaseNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMBaseNode, UVNMBaseNode::StaticClass, TEXT("UVNMBaseNode"), &Z_Registration_Info_UClass_UVNMBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMBaseNode), 3697466045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_VNMBaseNode_h_3355915459(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_VNMBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_VNMBaseNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
