// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterMoveNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMoveNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterMoveNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterMoveNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterMoveNode
void UCharacterMoveNode::StaticRegisterNativesUCharacterMoveNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMoveNode);
UClass* Z_Construct_UClass_UCharacterMoveNode_NoRegister()
{
	return UCharacterMoveNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterMoveNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterMoveNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMoveNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMoveNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMoveNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMoveNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveWithAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMoveNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static void NewProp_bMoveWithAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveWithAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMoveNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMoveNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMoveNode, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMoveNode, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
void Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_bMoveWithAnimation_SetBit(void* Obj)
{
	((UCharacterMoveNode*)Obj)->bMoveWithAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_bMoveWithAnimation = { "bMoveWithAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterMoveNode), &Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_bMoveWithAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveWithAnimation_MetaData), NewProp_bMoveWithAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterMoveNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoveNode_Statics::NewProp_bMoveWithAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoveNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterMoveNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoveNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMoveNode_Statics::ClassParams = {
	&UCharacterMoveNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterMoveNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoveNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoveNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMoveNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMoveNode()
{
	if (!Z_Registration_Info_UClass_UCharacterMoveNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMoveNode.OuterSingleton, Z_Construct_UClass_UCharacterMoveNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMoveNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterMoveNode>()
{
	return UCharacterMoveNode::StaticClass();
}
UCharacterMoveNode::UCharacterMoveNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMoveNode);
UCharacterMoveNode::~UCharacterMoveNode() {}
// End Class UCharacterMoveNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMoveNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMoveNode, UCharacterMoveNode::StaticClass, TEXT("UCharacterMoveNode"), &Z_Registration_Info_UClass_UCharacterMoveNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMoveNode), 1140279414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMoveNode_h_2636259749(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMoveNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMoveNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
