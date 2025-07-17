// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogScene/DialogSceneHideNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogSceneHideNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneHideNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneHideNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogSceneHideNode
void UDialogSceneHideNode::StaticRegisterNativesUDialogSceneHideNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogSceneHideNode);
UClass* Z_Construct_UClass_UDialogSceneHideNode_NoRegister()
{
	return UDialogSceneHideNode::StaticClass();
}
struct Z_Construct_UClass_UDialogSceneHideNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogScene/DialogSceneHideNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneHideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneHideNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogSceneHideNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneHideNode_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneHideNode, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogSceneHideNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneHideNode_Statics::NewProp_DialogSceneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneHideNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogSceneHideNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneHideNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogSceneHideNode_Statics::ClassParams = {
	&UDialogSceneHideNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogSceneHideNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneHideNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneHideNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogSceneHideNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogSceneHideNode()
{
	if (!Z_Registration_Info_UClass_UDialogSceneHideNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogSceneHideNode.OuterSingleton, Z_Construct_UClass_UDialogSceneHideNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogSceneHideNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogSceneHideNode>()
{
	return UDialogSceneHideNode::StaticClass();
}
UDialogSceneHideNode::UDialogSceneHideNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogSceneHideNode);
UDialogSceneHideNode::~UDialogSceneHideNode() {}
// End Class UDialogSceneHideNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneHideNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogSceneHideNode, UDialogSceneHideNode::StaticClass, TEXT("UDialogSceneHideNode"), &Z_Registration_Info_UClass_UDialogSceneHideNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogSceneHideNode), 3984305985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneHideNode_h_593130503(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneHideNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneHideNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
