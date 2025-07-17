// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/WidgetHideNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetHideNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UWidgetHideNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UWidgetHideNode_NoRegister();
// End Cross Module References

// Begin Class UWidgetHideNode
void UWidgetHideNode::StaticRegisterNativesUWidgetHideNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetHideNode);
UClass* Z_Construct_UClass_UWidgetHideNode_NoRegister()
{
	return UWidgetHideNode::StaticClass();
}
struct Z_Construct_UClass_UWidgetHideNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/WidgetHideNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/WidgetHideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/WidgetHideNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetHideNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetHideNode_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetHideNode, ActivatableWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidgetClass_MetaData), NewProp_ActivatableWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetHideNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetHideNode_Statics::NewProp_ActivatableWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHideNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetHideNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHideNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetHideNode_Statics::ClassParams = {
	&UWidgetHideNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetHideNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHideNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHideNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetHideNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetHideNode()
{
	if (!Z_Registration_Info_UClass_UWidgetHideNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetHideNode.OuterSingleton, Z_Construct_UClass_UWidgetHideNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetHideNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UWidgetHideNode>()
{
	return UWidgetHideNode::StaticClass();
}
UWidgetHideNode::UWidgetHideNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetHideNode);
UWidgetHideNode::~UWidgetHideNode() {}
// End Class UWidgetHideNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetHideNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetHideNode, UWidgetHideNode::StaticClass, TEXT("UWidgetHideNode"), &Z_Registration_Info_UClass_UWidgetHideNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetHideNode), 487192263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetHideNode_h_1219328583(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetHideNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_WidgetHideNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
