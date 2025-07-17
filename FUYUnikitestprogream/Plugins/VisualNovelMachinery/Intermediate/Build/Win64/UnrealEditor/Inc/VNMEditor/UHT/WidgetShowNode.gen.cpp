// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/WidgetShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetShowNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UWidgetShowNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UWidgetShowNode_NoRegister();
// End Cross Module References

// Begin Class UWidgetShowNode
void UWidgetShowNode::StaticRegisterNativesUWidgetShowNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetShowNode);
UClass* Z_Construct_UClass_UWidgetShowNode_NoRegister()
{
	return UWidgetShowNode::StaticClass();
}
struct Z_Construct_UClass_UWidgetShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/WidgetShowNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/WidgetShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/WidgetShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForWidgetToCloseAgain_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/WidgetShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
	static void NewProp_bWaitForWidgetToCloseAgain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForWidgetToCloseAgain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetShowNode, ActivatableWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidgetClass_MetaData), NewProp_ActivatableWidgetClass_MetaData) };
void Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_bWaitForWidgetToCloseAgain_SetBit(void* Obj)
{
	((UWidgetShowNode*)Obj)->bWaitForWidgetToCloseAgain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_bWaitForWidgetToCloseAgain = { "bWaitForWidgetToCloseAgain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetShowNode), &Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_bWaitForWidgetToCloseAgain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForWidgetToCloseAgain_MetaData), NewProp_bWaitForWidgetToCloseAgain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_ActivatableWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetShowNode_Statics::NewProp_bWaitForWidgetToCloseAgain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetShowNode_Statics::ClassParams = {
	&UWidgetShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetShowNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetShowNode()
{
	if (!Z_Registration_Info_UClass_UWidgetShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetShowNode.OuterSingleton, Z_Construct_UClass_UWidgetShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetShowNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UWidgetShowNode>()
{
	return UWidgetShowNode::StaticClass();
}
UWidgetShowNode::UWidgetShowNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetShowNode);
UWidgetShowNode::~UWidgetShowNode() {}
// End Class UWidgetShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetShowNode, UWidgetShowNode::StaticClass, TEXT("UWidgetShowNode"), &Z_Registration_Info_UClass_UWidgetShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetShowNode), 1843054310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetShowNode_h_1111973735(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
