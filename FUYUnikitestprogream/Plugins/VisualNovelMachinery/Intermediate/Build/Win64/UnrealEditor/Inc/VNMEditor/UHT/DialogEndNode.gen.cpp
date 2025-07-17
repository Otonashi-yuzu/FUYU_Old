// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/DialogEndNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogEndNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogEndNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogEndNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogEndNode
void UDialogEndNode::StaticRegisterNativesUDialogEndNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogEndNode);
UClass* Z_Construct_UClass_UDialogEndNode_NoRegister()
{
	return UDialogEndNode::StaticClass();
}
struct Z_Construct_UClass_UDialogEndNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/DialogEndNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogEndNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextDialogId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogEndNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextDialogId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogEndNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogEndNode_Statics::NewProp_NextDialogId = { "NextDialogId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogEndNode, NextDialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextDialogId_MetaData), NewProp_NextDialogId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogEndNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogEndNode_Statics::NewProp_NextDialogId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogEndNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogEndNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogEndNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogEndNode_Statics::ClassParams = {
	&UDialogEndNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogEndNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogEndNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogEndNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogEndNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogEndNode()
{
	if (!Z_Registration_Info_UClass_UDialogEndNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogEndNode.OuterSingleton, Z_Construct_UClass_UDialogEndNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogEndNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogEndNode>()
{
	return UDialogEndNode::StaticClass();
}
UDialogEndNode::UDialogEndNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogEndNode);
UDialogEndNode::~UDialogEndNode() {}
// End Class UDialogEndNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogEndNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogEndNode, UDialogEndNode::StaticClass, TEXT("UDialogEndNode"), &Z_Registration_Info_UClass_UDialogEndNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogEndNode), 2626943064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogEndNode_h_2405886024(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogEndNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogEndNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
