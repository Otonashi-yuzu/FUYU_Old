// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterRenameNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterRenameNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterRenameNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterRenameNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterRenameNode
void UCharacterRenameNode::StaticRegisterNativesUCharacterRenameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterRenameNode);
UClass* Z_Construct_UClass_UCharacterRenameNode_NoRegister()
{
	return UCharacterRenameNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterRenameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterRenameNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRenameNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRenameNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterRenameNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewCharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterRenameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterRenameNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterRenameNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterRenameNode_Statics::NewProp_NewCharacterName = { "NewCharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterRenameNode, NewCharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCharacterName_MetaData), NewProp_NewCharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterRenameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterRenameNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterRenameNode_Statics::NewProp_NewCharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRenameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterRenameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRenameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterRenameNode_Statics::ClassParams = {
	&UCharacterRenameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterRenameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRenameNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterRenameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterRenameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterRenameNode()
{
	if (!Z_Registration_Info_UClass_UCharacterRenameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterRenameNode.OuterSingleton, Z_Construct_UClass_UCharacterRenameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterRenameNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterRenameNode>()
{
	return UCharacterRenameNode::StaticClass();
}
UCharacterRenameNode::UCharacterRenameNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterRenameNode);
UCharacterRenameNode::~UCharacterRenameNode() {}
// End Class UCharacterRenameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRenameNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterRenameNode, UCharacterRenameNode::StaticClass, TEXT("UCharacterRenameNode"), &Z_Registration_Info_UClass_UCharacterRenameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterRenameNode), 4231070130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRenameNode_h_4017948611(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRenameNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterRenameNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
