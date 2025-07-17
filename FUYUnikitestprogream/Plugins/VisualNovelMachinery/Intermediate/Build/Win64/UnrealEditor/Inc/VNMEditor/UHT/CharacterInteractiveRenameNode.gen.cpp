// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterInteractiveRenameNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInteractiveRenameNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterInteractiveRenameNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterInteractiveRenameNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterInteractiveRenameNode
void UCharacterInteractiveRenameNode::StaticRegisterNativesUCharacterInteractiveRenameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterInteractiveRenameNode);
UClass* Z_Construct_UClass_UCharacterInteractiveRenameNode_NoRegister()
{
	return UCharacterInteractiveRenameNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterInteractiveRenameNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterInteractiveRenameNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterInteractiveRenameNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterInteractiveRenameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterInteractiveRenameNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::NewProp_CharacterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::ClassParams = {
	&UCharacterInteractiveRenameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterInteractiveRenameNode()
{
	if (!Z_Registration_Info_UClass_UCharacterInteractiveRenameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterInteractiveRenameNode.OuterSingleton, Z_Construct_UClass_UCharacterInteractiveRenameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterInteractiveRenameNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterInteractiveRenameNode>()
{
	return UCharacterInteractiveRenameNode::StaticClass();
}
UCharacterInteractiveRenameNode::UCharacterInteractiveRenameNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInteractiveRenameNode);
UCharacterInteractiveRenameNode::~UCharacterInteractiveRenameNode() {}
// End Class UCharacterInteractiveRenameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterInteractiveRenameNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterInteractiveRenameNode, UCharacterInteractiveRenameNode::StaticClass, TEXT("UCharacterInteractiveRenameNode"), &Z_Registration_Info_UClass_UCharacterInteractiveRenameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterInteractiveRenameNode), 1844313369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterInteractiveRenameNode_h_702018125(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterInteractiveRenameNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterInteractiveRenameNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
