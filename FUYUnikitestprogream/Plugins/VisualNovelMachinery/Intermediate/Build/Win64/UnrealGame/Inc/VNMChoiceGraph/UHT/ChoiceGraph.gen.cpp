// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/Graphs/ChoiceGraph.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "VNM/Public/UI/Data/ChoiceData.h"
#include "VNMChoiceGraph/Public/Graphs/ChoiceBox.h"
#include "VNMChoiceGraph/Public/Graphs/GraphLineStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChoiceGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EChoiceType();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogData();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UChoiceGraph();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UChoiceGraph_NoRegister();
VNMCHOICEGRAPH_API UFunction* Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FChoiceBoxStyle();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FLineStyle();
// End Cross Module References

// Begin Delegate FOnChoiceClicked
struct Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics
{
	struct ChoiceGraph_eventOnChoiceClicked_Parms
	{
		FString ChoiceId;
		EChoiceType ChoiceType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChoiceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChoiceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceId = { "ChoiceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChoiceGraph_eventOnChoiceClicked_Parms, ChoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceId_MetaData), NewProp_ChoiceId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceType = { "ChoiceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChoiceGraph_eventOnChoiceClicked_Parms, ChoiceType), Z_Construct_UEnum_VNM_EChoiceType, METADATA_PARAMS(0, nullptr) }; // 561712770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::NewProp_ChoiceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoiceGraph, nullptr, "OnChoiceClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::ChoiceGraph_eventOnChoiceClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::ChoiceGraph_eventOnChoiceClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UChoiceGraph::FOnChoiceClicked_DelegateWrapper(const FMulticastScriptDelegate& OnChoiceClicked, const FString& ChoiceId, EChoiceType ChoiceType)
{
	struct ChoiceGraph_eventOnChoiceClicked_Parms
	{
		FString ChoiceId;
		EChoiceType ChoiceType;
	};
	ChoiceGraph_eventOnChoiceClicked_Parms Parms;
	Parms.ChoiceId=ChoiceId;
	Parms.ChoiceType=ChoiceType;
	OnChoiceClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChoiceClicked

// Begin Class UChoiceGraph Function SetChoices
struct Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics
{
	struct ChoiceGraph_eventSetChoices_Parms
	{
		FDialogData InChoices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChoices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChoices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::NewProp_InChoices = { "InChoices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChoiceGraph_eventSetChoices_Parms, InChoices), Z_Construct_UScriptStruct_FDialogData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChoices_MetaData), NewProp_InChoices_MetaData) }; // 817624703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::NewProp_InChoices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoiceGraph, nullptr, "SetChoices", nullptr, nullptr, Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::ChoiceGraph_eventSetChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::ChoiceGraph_eventSetChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChoiceGraph_SetChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChoiceGraph_SetChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChoiceGraph::execSetChoices)
{
	P_GET_STRUCT_REF(FDialogData,Z_Param_Out_InChoices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChoices(Z_Param_Out_InChoices);
	P_NATIVE_END;
}
// End Class UChoiceGraph Function SetChoices

// Begin Class UChoiceGraph
void UChoiceGraph::StaticRegisterNativesUChoiceGraph()
{
	UClass* Class = UChoiceGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetChoices", &UChoiceGraph::execSetChoices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChoiceGraph);
UClass* Z_Construct_UClass_UChoiceGraph_NoRegister()
{
	return UChoiceGraph::StaticClass();
}
struct Z_Construct_UClass_UChoiceGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graphs/ChoiceGraph.h" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChoiceClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayedDialogObjectClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesFont_MetaData[] = {
		{ "Category", "Appearance|Text" },
		{ "Comment", "/** Sets the font used to draw the text */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "ToolTip", "Sets the font used to draw the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceBoxStyles_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "TitleProperty", "Type" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceOutputPinsImage_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceInputPinImage_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalNodeColors_MetaData[] = {
		{ "Category", "Appearance|Images" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxPadding_MetaData[] = {
		{ "Category", "Appearance|Layout" },
		{ "Comment", "/** The amount of padding between the boxes in the choice graph. */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "ToolTip", "The amount of padding between the boxes in the choice graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxMargin_MetaData[] = {
		{ "Category", "Appearance|Layout" },
		{ "Comment", "/** The amount of margin between the boxes in the choice graph. */" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
		{ "ToolTip", "The amount of margin between the boxes in the choice graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineStyle_MetaData[] = {
		{ "Category", "Appearance|Connection Lines" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChoiceClicked;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisplayedDialogObjectClass;
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
		{ &Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature, "OnChoiceClicked__DelegateSignature" }, // 1604769161
		{ &Z_Construct_UFunction_UChoiceGraph_SetChoices, "SetChoices" }, // 1860794412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChoiceGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_OnChoiceClicked = { "OnChoiceClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, OnChoiceClicked), Z_Construct_UDelegateFunction_UChoiceGraph_OnChoiceClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChoiceClicked_MetaData), NewProp_OnChoiceClicked_MetaData) }; // 1604769161
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_DisplayedDialogObjectClass = { "DisplayedDialogObjectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, DisplayedDialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayedDialogObjectClass_MetaData), NewProp_DisplayedDialogObjectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoicesFont = { "ChoicesFont", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, ChoicesFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesFont_MetaData), NewProp_ChoicesFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceBoxStyles_Inner = { "ChoiceBoxStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChoiceBoxStyle, METADATA_PARAMS(0, nullptr) }; // 1959715853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceBoxStyles = { "ChoiceBoxStyles", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, ChoiceBoxStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceBoxStyles_MetaData), NewProp_ChoiceBoxStyles_MetaData) }; // 1959715853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceOutputPinsImage = { "ChoiceOutputPinsImage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, ChoiceOutputPinsImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceOutputPinsImage_MetaData), NewProp_ChoiceOutputPinsImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceInputPinImage = { "ChoiceInputPinImage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, ChoiceInputPinImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceInputPinImage_MetaData), NewProp_ChoiceInputPinImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_PortalNodeColors_Inner = { "PortalNodeColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_PortalNodeColors = { "PortalNodeColors", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, PortalNodeColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalNodeColors_MetaData), NewProp_PortalNodeColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_BoxPadding = { "BoxPadding", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, BoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPadding_MetaData), NewProp_BoxPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_BoxMargin = { "BoxMargin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, BoxMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxMargin_MetaData), NewProp_BoxMargin_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChoiceGraph_Statics::NewProp_LineStyle = { "LineStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChoiceGraph, LineStyle), Z_Construct_UScriptStruct_FLineStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineStyle_MetaData), NewProp_LineStyle_MetaData) }; // 160309223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChoiceGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_OnChoiceClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_DisplayedDialogObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoicesFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceBoxStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceBoxStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceOutputPinsImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_ChoiceInputPinImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_PortalNodeColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_PortalNodeColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_BoxPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_BoxMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChoiceGraph_Statics::NewProp_LineStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChoiceGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChoiceGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChoiceGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChoiceGraph_Statics::ClassParams = {
	&UChoiceGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChoiceGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChoiceGraph_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChoiceGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UChoiceGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChoiceGraph()
{
	if (!Z_Registration_Info_UClass_UChoiceGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChoiceGraph.OuterSingleton, Z_Construct_UClass_UChoiceGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChoiceGraph.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UClass* StaticClass<UChoiceGraph>()
{
	return UChoiceGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChoiceGraph);
UChoiceGraph::~UChoiceGraph() {}
// End Class UChoiceGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChoiceGraph, UChoiceGraph::StaticClass, TEXT("UChoiceGraph"), &Z_Registration_Info_UClass_UChoiceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChoiceGraph), 1130355130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_3141812218(TEXT("/Script/VNMChoiceGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
