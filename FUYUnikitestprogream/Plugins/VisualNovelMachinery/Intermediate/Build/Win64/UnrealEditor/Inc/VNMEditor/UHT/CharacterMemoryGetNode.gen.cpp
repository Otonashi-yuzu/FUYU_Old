// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Character/CharacterMemoryGetNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMemoryGetNode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UEnum* Z_Construct_UEnum_VNM_EMemoryType();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterMemoryGetNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UCharacterMemoryGetNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UCharacterMemoryGetNode
void UCharacterMemoryGetNode::StaticRegisterNativesUCharacterMemoryGetNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMemoryGetNode);
UClass* Z_Construct_UClass_UCharacterMemoryGetNode_NoRegister()
{
	return UCharacterMemoryGetNode::StaticClass();
}
struct Z_Construct_UClass_UCharacterMemoryGetNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Character/CharacterMemoryGetNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMemoryGetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMemoryGetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMemoryValueId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMemoryGetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMemoryGetNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePinsForIds_MetaData[] = {
		{ "Category", "Character Memory" },
		{ "ModuleRelativePath", "Public/Nodes/Character/CharacterMemoryGetNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryValueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bUsePinsForIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePinsForIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMemoryGetNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMemoryGetNode, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_CharacterMemoryValueId = { "CharacterMemoryValueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMemoryGetNode, CharacterMemoryValueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMemoryValueId_MetaData), NewProp_CharacterMemoryValueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMemoryGetNode, Type), Z_Construct_UEnum_VNM_EMemoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3156312681
void Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_bUsePinsForIds_SetBit(void* Obj)
{
	((UCharacterMemoryGetNode*)Obj)->bUsePinsForIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_bUsePinsForIds = { "bUsePinsForIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterMemoryGetNode), &Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_bUsePinsForIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePinsForIds_MetaData), NewProp_bUsePinsForIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterMemoryGetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_CharacterMemoryValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMemoryGetNode_Statics::NewProp_bUsePinsForIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMemoryGetNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterMemoryGetNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMemoryGetNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMemoryGetNode_Statics::ClassParams = {
	&UCharacterMemoryGetNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterMemoryGetNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMemoryGetNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMemoryGetNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMemoryGetNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMemoryGetNode()
{
	if (!Z_Registration_Info_UClass_UCharacterMemoryGetNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMemoryGetNode.OuterSingleton, Z_Construct_UClass_UCharacterMemoryGetNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMemoryGetNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UCharacterMemoryGetNode>()
{
	return UCharacterMemoryGetNode::StaticClass();
}
UCharacterMemoryGetNode::UCharacterMemoryGetNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMemoryGetNode);
UCharacterMemoryGetNode::~UCharacterMemoryGetNode() {}
// End Class UCharacterMemoryGetNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMemoryGetNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMemoryGetNode, UCharacterMemoryGetNode::StaticClass, TEXT("UCharacterMemoryGetNode"), &Z_Registration_Info_UClass_UCharacterMemoryGetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMemoryGetNode), 673235866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMemoryGetNode_h_3168332895(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMemoryGetNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Character_CharacterMemoryGetNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
