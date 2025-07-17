// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterRemoveLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterRemoveLayerNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterRemoveLayerNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterRemoveLayerNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterRemoveLayerNode
void UCharacterRemoveLayerNode::StaticRegisterNativesUCharacterRemoveLayerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterRemoveLayerNode);
UClass* Z_Construct_UClass_UCharacterRemoveLayerNode_NoRegister()
{
	return UCharacterRemoveLayerNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterRemoveLayerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterRemoveLayerNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRemoveLayerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRemoveLayerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterRemoveLayerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterRemoveLayerNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterRemoveLayerNode, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::NewProp_LayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::ClassParams = {
	&UCharacterRemoveLayerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterRemoveLayerNode()
{
	if (!Z_Registration_Info_UClass_UCharacterRemoveLayerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterRemoveLayerNode.OuterSingleton, Z_Construct_UClass_UCharacterRemoveLayerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterRemoveLayerNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterRemoveLayerNode>()
{
	return UCharacterRemoveLayerNode::StaticClass();
}
UCharacterRemoveLayerNode::UCharacterRemoveLayerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterRemoveLayerNode);
UCharacterRemoveLayerNode::~UCharacterRemoveLayerNode() {}
// End Class UCharacterRemoveLayerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRemoveLayerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterRemoveLayerNode, UCharacterRemoveLayerNode::StaticClass, TEXT("UCharacterRemoveLayerNode"), &Z_Registration_Info_UClass_UCharacterRemoveLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterRemoveLayerNode), 1934867647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRemoveLayerNode_h_582217880(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRemoveLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRemoveLayerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
