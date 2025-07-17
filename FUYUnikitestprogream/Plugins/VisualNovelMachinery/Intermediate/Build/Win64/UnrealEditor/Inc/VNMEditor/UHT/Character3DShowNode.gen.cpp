// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character3D/Character3DShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter3DShowNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacter3DShowNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacter3DShowNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacter3DShowNode
void UCharacter3DShowNode::StaticRegisterNativesUCharacter3DShowNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacter3DShowNode);
UClass* Z_Construct_UClass_UCharacter3DShowNode_NoRegister()
{
	return UCharacter3DShowNode::StaticClass();
}
struct Z_Construct_UClass_UCharacter3DShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character3D/Character3DShowNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character3D/Character3DShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character3D/Character3DShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character3D/Character3DShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character3D/Character3DShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character3D/Character3DShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacter3DShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DShowNode, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DShowNode, SpawnLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DShowNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DShowNode, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacter3DShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DShowNode_Statics::NewProp_EmotionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacter3DShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacter3DShowNode_Statics::ClassParams = {
	&UCharacter3DShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacter3DShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DShowNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacter3DShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacter3DShowNode()
{
	if (!Z_Registration_Info_UClass_UCharacter3DShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacter3DShowNode.OuterSingleton, Z_Construct_UClass_UCharacter3DShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacter3DShowNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacter3DShowNode>()
{
	return UCharacter3DShowNode::StaticClass();
}
UCharacter3DShowNode::UCharacter3DShowNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacter3DShowNode);
UCharacter3DShowNode::~UCharacter3DShowNode() {}
// End Class UCharacter3DShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character3D_Character3DShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacter3DShowNode, UCharacter3DShowNode::StaticClass, TEXT("UCharacter3DShowNode"), &Z_Registration_Info_UClass_UCharacter3DShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacter3DShowNode), 2300791387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character3D_Character3DShowNode_h_1041066482(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character3D_Character3DShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character3D_Character3DShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
