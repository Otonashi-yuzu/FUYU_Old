// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/Graphs/DialogScenesGraph.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "VNMChoiceGraph/Public/Graphs/ChoiceBox.h"
#include "VNMChoiceGraph/Public/Graphs/GraphLineStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogScenesGraph() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UDialogScenesGraph();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UDialogScenesGraph_NoRegister();
VNMCHOICEGRAPH_API UFunction* Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FChoiceBoxStyle();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FLineStyle();
// End Cross Module References

// Begin Delegate FOnSceneClicked
struct Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics
{
	struct DialogScenesGraph_eventOnSceneClicked_Parms
	{
		FString DialogId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogScenesGraph_eventOnSceneClicked_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::NewProp_DialogId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogScenesGraph, nullptr, "OnSceneClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::DialogScenesGraph_eventOnSceneClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::DialogScenesGraph_eventOnSceneClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDialogScenesGraph::FOnSceneClicked_DelegateWrapper(const FMulticastScriptDelegate& OnSceneClicked, const FString& DialogId)
{
	struct DialogScenesGraph_eventOnSceneClicked_Parms
	{
		FString DialogId;
	};
	DialogScenesGraph_eventOnSceneClicked_Parms Parms;
	Parms.DialogId=DialogId;
	OnSceneClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSceneClicked

// Begin Class UDialogScenesGraph
void UDialogScenesGraph::StaticRegisterNativesUDialogScenesGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogScenesGraph);
UClass* Z_Construct_UClass_UDialogScenesGraph_NoRegister()
{
	return UDialogScenesGraph::StaticClass();
}
struct Z_Construct_UClass_UDialogScenesGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graphs/DialogScenesGraph.h" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesFont_MetaData[] = {
		{ "Category", "Appearance|Text" },
		{ "Comment", "/** Sets the font used to draw the text */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "ToolTip", "Sets the font used to draw the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceBoxStyles_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "TitleProperty", "Type" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceOutputPinsImage_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceInputPinImage_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalNodeColors_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxPadding_MetaData[] = {
		{ "Category", "Appearance|Layout" },
		{ "Comment", "/** The amount of padding between the boxes in the choice graph. */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "ToolTip", "The amount of padding between the boxes in the choice graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxMargin_MetaData[] = {
		{ "Category", "Appearance|Layout" },
		{ "Comment", "/** The amount of margin between the boxes in the choice graph. */" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
		{ "ToolTip", "The amount of margin between the boxes in the choice graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineStyle_MetaData[] = {
		{ "Category", "Appearance|Connection Lines" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSceneClicked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoicesFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceBoxStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiceBoxStyles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceOutputPinsImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceInputPinImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortalNodeColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PortalNodeColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature, "OnSceneClicked__DelegateSignature" }, // 526196642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogScenesGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_OnSceneClicked = { "OnSceneClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, OnSceneClicked), Z_Construct_UDelegateFunction_UDialogScenesGraph_OnSceneClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSceneClicked_MetaData), NewProp_OnSceneClicked_MetaData) }; // 526196642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoicesFont = { "ChoicesFont", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, ChoicesFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesFont_MetaData), NewProp_ChoicesFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceBoxStyles_Inner = { "ChoiceBoxStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChoiceBoxStyle, METADATA_PARAMS(0, nullptr) }; // 1959715853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceBoxStyles = { "ChoiceBoxStyles", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, ChoiceBoxStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceBoxStyles_MetaData), NewProp_ChoiceBoxStyles_MetaData) }; // 1959715853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceOutputPinsImage = { "ChoiceOutputPinsImage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, ChoiceOutputPinsImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceOutputPinsImage_MetaData), NewProp_ChoiceOutputPinsImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceInputPinImage = { "ChoiceInputPinImage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, ChoiceInputPinImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceInputPinImage_MetaData), NewProp_ChoiceInputPinImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_PortalNodeColors_Inner = { "PortalNodeColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_PortalNodeColors = { "PortalNodeColors", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, PortalNodeColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalNodeColors_MetaData), NewProp_PortalNodeColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_BoxPadding = { "BoxPadding", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, BoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPadding_MetaData), NewProp_BoxPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_BoxMargin = { "BoxMargin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, BoxMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxMargin_MetaData), NewProp_BoxMargin_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_LineStyle = { "LineStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesGraph, LineStyle), Z_Construct_UScriptStruct_FLineStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineStyle_MetaData), NewProp_LineStyle_MetaData) }; // 160309223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogScenesGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_OnSceneClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoicesFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceBoxStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceBoxStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceOutputPinsImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_ChoiceInputPinImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_PortalNodeColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_PortalNodeColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_BoxPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_BoxMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesGraph_Statics::NewProp_LineStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogScenesGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogScenesGraph_Statics::ClassParams = {
	&UDialogScenesGraph::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogScenesGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesGraph_Statics::PropPointers),
	0,
	0x00B000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogScenesGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogScenesGraph()
{
	if (!Z_Registration_Info_UClass_UDialogScenesGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogScenesGraph.OuterSingleton, Z_Construct_UClass_UDialogScenesGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogScenesGraph.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UClass* StaticClass<UDialogScenesGraph>()
{
	return UDialogScenesGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogScenesGraph);
UDialogScenesGraph::~UDialogScenesGraph() {}
// End Class UDialogScenesGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogScenesGraph, UDialogScenesGraph::StaticClass, TEXT("UDialogScenesGraph"), &Z_Registration_Info_UClass_UDialogScenesGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogScenesGraph), 581021354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesGraph_h_533454375(TEXT("/Script/VNMChoiceGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
