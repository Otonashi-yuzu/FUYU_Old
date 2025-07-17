// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/DialogInputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogInputNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogInputNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogInputNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogInputNode
void UDialogInputNode::StaticRegisterNativesUDialogInputNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogInputNode);
UClass* Z_Construct_UClass_UDialogInputNode_NoRegister()
{
	return UDialogInputNode::StaticClass();
}
struct Z_Construct_UClass_UDialogInputNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/DialogInputNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogInputNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogInputNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogInputNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogInputNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogInputNode_Statics::ClassParams = {
	&UDialogInputNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogInputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogInputNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogInputNode()
{
	if (!Z_Registration_Info_UClass_UDialogInputNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogInputNode.OuterSingleton, Z_Construct_UClass_UDialogInputNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogInputNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogInputNode>()
{
	return UDialogInputNode::StaticClass();
}
UDialogInputNode::UDialogInputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogInputNode);
UDialogInputNode::~UDialogInputNode() {}
// End Class UDialogInputNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogInputNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogInputNode, UDialogInputNode::StaticClass, TEXT("UDialogInputNode"), &Z_Registration_Info_UClass_UDialogInputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogInputNode), 1019817610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogInputNode_h_2860498277(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogInputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogInputNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
