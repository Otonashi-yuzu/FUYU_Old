// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/DialogScene/DialogSceneShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogSceneShowNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneShowNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogSceneShowNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogSceneShowNode
void UDialogSceneShowNode::StaticRegisterNativesUDialogSceneShowNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogSceneShowNode);
UClass* Z_Construct_UClass_UDialogSceneShowNode_NoRegister()
{
	return UDialogSceneShowNode::StaticClass();
}
struct Z_Construct_UClass_UDialogSceneShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/DialogScene/DialogSceneShowNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DialogScene/DialogSceneShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogSceneShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneShowNode_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneShowNode, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneShowNode_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneShowNode, CameraName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraName_MetaData), NewProp_CameraName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogSceneShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneShowNode_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneShowNode_Statics::NewProp_CameraName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogSceneShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogSceneShowNode_Statics::ClassParams = {
	&UDialogSceneShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogSceneShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneShowNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogSceneShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogSceneShowNode()
{
	if (!Z_Registration_Info_UClass_UDialogSceneShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogSceneShowNode.OuterSingleton, Z_Construct_UClass_UDialogSceneShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogSceneShowNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogSceneShowNode>()
{
	return UDialogSceneShowNode::StaticClass();
}
UDialogSceneShowNode::UDialogSceneShowNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogSceneShowNode);
UDialogSceneShowNode::~UDialogSceneShowNode() {}
// End Class UDialogSceneShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogSceneShowNode, UDialogSceneShowNode::StaticClass, TEXT("UDialogSceneShowNode"), &Z_Registration_Info_UClass_UDialogSceneShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogSceneShowNode), 932508119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneShowNode_h_1351835763(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_DialogScene_DialogSceneShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
