// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/DialogChoiceNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogChoiceNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogChoiceNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogChoiceNode_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMBaseNode();
// End Cross Module References

// Begin Class UDialogChoiceNode
void UDialogChoiceNode::StaticRegisterNativesUDialogChoiceNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogChoiceNode);
UClass* Z_Construct_UClass_UDialogChoiceNode_NoRegister()
{
	return UDialogChoiceNode::StaticClass();
}
struct Z_Construct_UClass_UDialogChoiceNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/DialogChoiceNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeChoiceConditional_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsImageChoice_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageChoiceWidgetClass_MetaData[] = {
		{ "Category", "Choices" },
		{ "EditCondition", "bIsImageChoice" },
		{ "EditConditionHide", "" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIs3DChoice_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexOfChoiceRenamed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogChoiceNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static void NewProp_bMakeChoiceConditional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeChoiceConditional;
	static void NewProp_bIsImageChoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImageChoice;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImageChoiceWidgetClass;
	static void NewProp_bIs3DChoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs3DChoice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexOfChoiceRenamed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogChoiceNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogChoiceNode, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) };
void Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bMakeChoiceConditional_SetBit(void* Obj)
{
	((UDialogChoiceNode*)Obj)->bMakeChoiceConditional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bMakeChoiceConditional = { "bMakeChoiceConditional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogChoiceNode), &Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bMakeChoiceConditional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeChoiceConditional_MetaData), NewProp_bMakeChoiceConditional_MetaData) };
void Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIsImageChoice_SetBit(void* Obj)
{
	((UDialogChoiceNode*)Obj)->bIsImageChoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIsImageChoice = { "bIsImageChoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogChoiceNode), &Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIsImageChoice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsImageChoice_MetaData), NewProp_bIsImageChoice_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_ImageChoiceWidgetClass = { "ImageChoiceWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogChoiceNode, ImageChoiceWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageChoiceWidgetClass_MetaData), NewProp_ImageChoiceWidgetClass_MetaData) };
void Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIs3DChoice_SetBit(void* Obj)
{
	((UDialogChoiceNode*)Obj)->bIs3DChoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIs3DChoice = { "bIs3DChoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogChoiceNode), &Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIs3DChoice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIs3DChoice_MetaData), NewProp_bIs3DChoice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_IndexOfChoiceRenamed = { "IndexOfChoiceRenamed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogChoiceNode, IndexOfChoiceRenamed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexOfChoiceRenamed_MetaData), NewProp_IndexOfChoiceRenamed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogChoiceNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bMakeChoiceConditional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIsImageChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_ImageChoiceWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_bIs3DChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogChoiceNode_Statics::NewProp_IndexOfChoiceRenamed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogChoiceNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogChoiceNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogChoiceNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogChoiceNode_Statics::ClassParams = {
	&UDialogChoiceNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogChoiceNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogChoiceNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogChoiceNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogChoiceNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogChoiceNode()
{
	if (!Z_Registration_Info_UClass_UDialogChoiceNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogChoiceNode.OuterSingleton, Z_Construct_UClass_UDialogChoiceNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogChoiceNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogChoiceNode>()
{
	return UDialogChoiceNode::StaticClass();
}
UDialogChoiceNode::UDialogChoiceNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogChoiceNode);
UDialogChoiceNode::~UDialogChoiceNode() {}
// End Class UDialogChoiceNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogChoiceNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogChoiceNode, UDialogChoiceNode::StaticClass, TEXT("UDialogChoiceNode"), &Z_Registration_Info_UClass_UDialogChoiceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogChoiceNode), 2083980622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogChoiceNode_h_891921900(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogChoiceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogChoiceNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
