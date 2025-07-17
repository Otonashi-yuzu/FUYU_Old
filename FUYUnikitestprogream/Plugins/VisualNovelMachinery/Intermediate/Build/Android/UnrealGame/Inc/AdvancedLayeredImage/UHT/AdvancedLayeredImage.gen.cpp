// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedLayeredImage/Public/AdvancedLayeredImage.h"
#include "AdvancedLayeredImage/Public/AdvancedImageLayer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedLayeredImage() {}

// Begin Cross Module References
ADVANCEDLAYEREDIMAGE_API UClass* Z_Construct_UClass_UAdvancedLayeredImage();
ADVANCEDLAYEREDIMAGE_API UClass* Z_Construct_UClass_UAdvancedLayeredImage_NoRegister();
ADVANCEDLAYEREDIMAGE_API UFunction* Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature();
ADVANCEDLAYEREDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedImageLayer();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UImage();
UPackage* Z_Construct_UPackage__Script_AdvancedLayeredImage();
// End Cross Module References

// Begin Delegate FOnImageStreamingCompleteDelegate
struct Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OnImageStreamingCompleteDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAdvancedLayeredImage::FOnImageStreamingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnImageStreamingCompleteDelegate)
{
	OnImageStreamingCompleteDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnImageStreamingCompleteDelegate

// Begin Class UAdvancedLayeredImage Function AddImageLayer
struct Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics
{
	struct AdvancedLayeredImage_eventAddImageLayer_Parms
	{
		FSlateBrush InBrush;
		FSlateColor InColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Add an Image Layer\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Add an Image Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColorAndOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventAddImageLayer_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventAddImageLayer_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColorAndOpacity_MetaData), NewProp_InColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::NewProp_InBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::NewProp_InColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "AddImageLayer", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::AdvancedLayeredImage_eventAddImageLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::AdvancedLayeredImage_eventAddImageLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execAddImageLayer)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_InColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImageLayer(Z_Param_Out_InBrush,Z_Param_Out_InColorAndOpacity);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function AddImageLayer

// Begin Class UAdvancedLayeredImage Function AddImageLayerWithStruct
struct Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics
{
	struct AdvancedLayeredImage_eventAddImageLayerWithStruct_Parms
	{
		FAdvancedImageLayer InImageLayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Add an Image Layer using a struct\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Add an Image Layer using a struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InImageLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::NewProp_InImageLayer = { "InImageLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventAddImageLayerWithStruct_Parms, InImageLayer), Z_Construct_UScriptStruct_FAdvancedImageLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageLayer_MetaData), NewProp_InImageLayer_MetaData) }; // 82183262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::NewProp_InImageLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "AddImageLayerWithStruct", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::AdvancedLayeredImage_eventAddImageLayerWithStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::AdvancedLayeredImage_eventAddImageLayerWithStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execAddImageLayerWithStruct)
{
	P_GET_STRUCT_REF(FAdvancedImageLayer,Z_Param_Out_InImageLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImageLayerWithStruct(Z_Param_Out_InImageLayer);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function AddImageLayerWithStruct

// Begin Class UAdvancedLayeredImage Function GetImageLayerDynamicMaterialAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics
{
	struct AdvancedLayeredImage_eventGetImageLayerDynamicMaterialAtIndex_Parms
	{
		int32 InIndex;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventGetImageLayerDynamicMaterialAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventGetImageLayerDynamicMaterialAtIndex_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "GetImageLayerDynamicMaterialAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::AdvancedLayeredImage_eventGetImageLayerDynamicMaterialAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::AdvancedLayeredImage_eventGetImageLayerDynamicMaterialAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execGetImageLayerDynamicMaterialAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetImageLayerDynamicMaterialAtIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function GetImageLayerDynamicMaterialAtIndex

// Begin Class UAdvancedLayeredImage Function InitializeImageLayers
struct Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics
{
	struct AdvancedLayeredImage_eventInitializeImageLayers_Parms
	{
		int32 Size;
		FSlateBrush InBrush;
		FSlateColor InColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Initializes the Image Layers Array with a certain Size and sets all layers to be provided values\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Initializes the Image Layers Array with a certain Size and sets all layers to be provided values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColorAndOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventInitializeImageLayers_Parms, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventInitializeImageLayers_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventInitializeImageLayers_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColorAndOpacity_MetaData), NewProp_InColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_InBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::NewProp_InColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "InitializeImageLayers", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::AdvancedLayeredImage_eventInitializeImageLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::AdvancedLayeredImage_eventInitializeImageLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execInitializeImageLayers)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Size);
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_InColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeImageLayers(Z_Param_Size,Z_Param_Out_InBrush,Z_Param_Out_InColorAndOpacity);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function InitializeImageLayers

// Begin Class UAdvancedLayeredImage Function IsValidLayerIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics
{
	struct AdvancedLayeredImage_eventIsValidLayerIndex_Parms
	{
		int32 InImageLayerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "// Is a valid layer index\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Is a valid layer index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageLayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InImageLayerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_InImageLayerIndex = { "InImageLayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventIsValidLayerIndex_Parms, InImageLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageLayerIndex_MetaData), NewProp_InImageLayerIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventIsValidLayerIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventIsValidLayerIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_InImageLayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "IsValidLayerIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::AdvancedLayeredImage_eventIsValidLayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::AdvancedLayeredImage_eventIsValidLayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execIsValidLayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InImageLayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidLayerIndex(Z_Param_InImageLayerIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function IsValidLayerIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms
	{
		FAdvancedImageLayer InImageLayer;
		int32 InIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Override an Image Layer at the given Index\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Override an Image Layer at the given Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InImageLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_InImageLayer = { "InImageLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms, InImageLayer), Z_Construct_UScriptStruct_FAdvancedImageLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageLayer_MetaData), NewProp_InImageLayer_MetaData) }; // 82183262
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_InImageLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerAtIndex)
{
	P_GET_STRUCT_REF(FAdvancedImageLayer,Z_Param_Out_InImageLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverrideImageLayerAtIndex(Z_Param_Out_InImageLayer,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms
	{
		FSlateBrush InBrush;
		int32 InIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Override an Image Layer Brush at the given Index\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Override an Image Layer Brush at the given Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_InBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushAtIndex)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverrideImageLayerBrushAtIndex(Z_Param_Out_InBrush,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromAssetAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromAssetAtIndex_Parms
	{
		USlateBrushAsset* Asset;
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromAssetAtIndex_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromAssetAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromAssetAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromAssetAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromAssetAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromAssetAtIndex)
{
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromAssetAtIndex(Z_Param_Asset,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromAssetAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromAtlasInterfaceAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms
	{
		TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
		int32 InIndex;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Overrides the Brush to the specified Atlas Region.\n\x09*\n\x09*   @param AtlasRegion Region of the Atlas to use to override on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Overrides the Brush to the specified Atlas Region.\n\n  @param AtlasRegion Region of the Atlas to use to override on Brush.\n      @param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AtlasRegion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_AtlasRegion = { "AtlasRegion", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms, AtlasRegion), Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_AtlasRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromAtlasInterfaceAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromAtlasInterfaceAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromAtlasInterfaceAtIndex)
{
	P_GET_TINTERFACE(ISlateTextureAtlasInterface,Z_Param_AtlasRegion);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromAtlasInterfaceAtIndex(Z_Param_AtlasRegion,Z_Param_InIndex,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromAtlasInterfaceAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromMaterialAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromMaterialAtIndex_Parms
	{
		UMaterialInterface* Material;
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromMaterialAtIndex_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromMaterialAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromMaterialAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromMaterialAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromMaterialAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromMaterialAtIndex)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromMaterialAtIndex(Z_Param_Material,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromMaterialAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromSoftMaterialAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftMaterialAtIndex_Parms
	{
		TSoftObjectPtr<UMaterialInterface> SoftMaterial;
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::NewProp_SoftMaterial = { "SoftMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftMaterialAtIndex_Parms, SoftMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftMaterialAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::NewProp_SoftMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromSoftMaterialAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftMaterialAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftMaterialAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromSoftMaterialAtIndex)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_SoftMaterial);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromSoftMaterialAtIndex(Z_Param_SoftMaterial,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromSoftMaterialAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromSoftTextureAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftTexture;
		int32 InIndex;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Overrides the Brush to the specified Soft Texture.\n\x09*\n\x09*   @param SoftTexture Soft Texture to use to override on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Overrides the Brush to the specified Soft Texture.\n\n  @param SoftTexture Soft Texture to use to override on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_SoftTexture = { "SoftTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms, SoftTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_SoftTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromSoftTextureAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromSoftTextureAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromSoftTextureAtIndex)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_SoftTexture);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromSoftTextureAtIndex(Z_Param_SoftTexture,Z_Param_InIndex,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromSoftTextureAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromTextureAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms
	{
		UTexture2D* Texture;
		int32 InIndex;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Overrides the Brush to the specified Texture.\n\x09*\n\x09*   @param Texture Texture to use to override on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Overrides the Brush to the specified Texture.\n\n  @param Texture Texture to use to override on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromTextureAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromTextureAtIndex)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromTextureAtIndex(Z_Param_Texture,Z_Param_InIndex,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromTextureAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromTextureDynamicAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms
	{
		UTexture2DDynamic* Texture;
		int32 InIndex;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Overrides the Brush to the specified Dynamic Texture.\n\x09*\n\x09*   @param Texture Dynamic Texture to use to override on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Overrides the Brush to the specified Dynamic Texture.\n\n  @param Texture Dynamic Texture to use to override on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerBrushFromTextureDynamicAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerBrushFromTextureDynamicAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerBrushFromTextureDynamicAtIndex)
{
	P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideImageLayerBrushFromTextureDynamicAtIndex(Z_Param_Texture,Z_Param_InIndex,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerBrushFromTextureDynamicAtIndex

// Begin Class UAdvancedLayeredImage Function OverrideImageLayerColorAndOpacityAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics
{
	struct AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms
	{
		FSlateColor InColorAndOpacity;
		int32 InIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Override an Image Layer Color at the given Index\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Override an Image Layer Color at the given Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColorAndOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColorAndOpacity_MetaData), NewProp_InColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
void Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms), &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_InColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "OverrideImageLayerColorAndOpacityAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::AdvancedLayeredImage_eventOverrideImageLayerColorAndOpacityAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execOverrideImageLayerColorAndOpacityAtIndex)
{
	P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_InColorAndOpacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverrideImageLayerColorAndOpacityAtIndex(Z_Param_Out_InColorAndOpacity,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function OverrideImageLayerColorAndOpacityAtIndex

// Begin Class UAdvancedLayeredImage Function RemoveImageLayerAtIndex
struct Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics
{
	struct AdvancedLayeredImage_eventRemoveImageLayerAtIndex_Parms
	{
		int32 InImageLayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "// Remove an Image Layer at Index\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Remove an Image Layer at Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageLayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InImageLayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::NewProp_InImageLayerIndex = { "InImageLayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventRemoveImageLayerAtIndex_Parms, InImageLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageLayerIndex_MetaData), NewProp_InImageLayerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::NewProp_InImageLayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "RemoveImageLayerAtIndex", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::AdvancedLayeredImage_eventRemoveImageLayerAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::AdvancedLayeredImage_eventRemoveImageLayerAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execRemoveImageLayerAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InImageLayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveImageLayerAtIndex(Z_Param_InImageLayerIndex);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function RemoveImageLayerAtIndex

// Begin Class UAdvancedLayeredImage Function SetImageLayers
struct Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics
{
	struct AdvancedLayeredImage_eventSetImageLayers_Parms
	{
		TArray<FAdvancedImageLayer> InImageLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Override the current Image Layers Array\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "Override the current Image Layers Array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InImageLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InImageLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::NewProp_InImageLayers_Inner = { "InImageLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAdvancedImageLayer, METADATA_PARAMS(0, nullptr) }; // 82183262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::NewProp_InImageLayers = { "InImageLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedLayeredImage_eventSetImageLayers_Parms, InImageLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageLayers_MetaData), NewProp_InImageLayers_MetaData) }; // 82183262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::NewProp_InImageLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::NewProp_InImageLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedLayeredImage, nullptr, "SetImageLayers", nullptr, nullptr, Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::AdvancedLayeredImage_eventSetImageLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::AdvancedLayeredImage_eventSetImageLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedLayeredImage::execSetImageLayers)
{
	P_GET_TARRAY_REF(FAdvancedImageLayer,Z_Param_Out_InImageLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImageLayers(Z_Param_Out_InImageLayers);
	P_NATIVE_END;
}
// End Class UAdvancedLayeredImage Function SetImageLayers

// Begin Class UAdvancedLayeredImage
void UAdvancedLayeredImage::StaticRegisterNativesUAdvancedLayeredImage()
{
	UClass* Class = UAdvancedLayeredImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddImageLayer", &UAdvancedLayeredImage::execAddImageLayer },
		{ "AddImageLayerWithStruct", &UAdvancedLayeredImage::execAddImageLayerWithStruct },
		{ "GetImageLayerDynamicMaterialAtIndex", &UAdvancedLayeredImage::execGetImageLayerDynamicMaterialAtIndex },
		{ "InitializeImageLayers", &UAdvancedLayeredImage::execInitializeImageLayers },
		{ "IsValidLayerIndex", &UAdvancedLayeredImage::execIsValidLayerIndex },
		{ "OverrideImageLayerAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerAtIndex },
		{ "OverrideImageLayerBrushAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushAtIndex },
		{ "OverrideImageLayerBrushFromAssetAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromAssetAtIndex },
		{ "OverrideImageLayerBrushFromAtlasInterfaceAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromAtlasInterfaceAtIndex },
		{ "OverrideImageLayerBrushFromMaterialAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromMaterialAtIndex },
		{ "OverrideImageLayerBrushFromSoftMaterialAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromSoftMaterialAtIndex },
		{ "OverrideImageLayerBrushFromSoftTextureAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromSoftTextureAtIndex },
		{ "OverrideImageLayerBrushFromTextureAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromTextureAtIndex },
		{ "OverrideImageLayerBrushFromTextureDynamicAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerBrushFromTextureDynamicAtIndex },
		{ "OverrideImageLayerColorAndOpacityAtIndex", &UAdvancedLayeredImage::execOverrideImageLayerColorAndOpacityAtIndex },
		{ "RemoveImageLayerAtIndex", &UAdvancedLayeredImage::execRemoveImageLayerAtIndex },
		{ "SetImageLayers", &UAdvancedLayeredImage::execSetImageLayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedLayeredImage);
UClass* Z_Construct_UClass_UAdvancedLayeredImage_NoRegister()
{
	return UAdvancedLayeredImage::StaticClass();
}
struct Z_Construct_UClass_UAdvancedLayeredImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AdvancedLayeredImage.h" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImageStreamingCompleteDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "Comment", "// End of UImage Interface\n" },
		{ "ModuleRelativePath", "Public/AdvancedLayeredImage.h" },
		{ "ToolTip", "End of UImage Interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageStreamingCompleteDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayer, "AddImageLayer" }, // 1247203340
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_AddImageLayerWithStruct, "AddImageLayerWithStruct" }, // 2738154299
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_GetImageLayerDynamicMaterialAtIndex, "GetImageLayerDynamicMaterialAtIndex" }, // 2603273460
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_InitializeImageLayers, "InitializeImageLayers" }, // 4068842255
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_IsValidLayerIndex, "IsValidLayerIndex" }, // 683013139
		{ &Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature, "OnImageStreamingCompleteDelegate__DelegateSignature" }, // 3057671073
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerAtIndex, "OverrideImageLayerAtIndex" }, // 3039632740
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushAtIndex, "OverrideImageLayerBrushAtIndex" }, // 3695161196
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAssetAtIndex, "OverrideImageLayerBrushFromAssetAtIndex" }, // 1632278319
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromAtlasInterfaceAtIndex, "OverrideImageLayerBrushFromAtlasInterfaceAtIndex" }, // 3561605227
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromMaterialAtIndex, "OverrideImageLayerBrushFromMaterialAtIndex" }, // 801128872
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftMaterialAtIndex, "OverrideImageLayerBrushFromSoftMaterialAtIndex" }, // 3414390507
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromSoftTextureAtIndex, "OverrideImageLayerBrushFromSoftTextureAtIndex" }, // 671922184
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureAtIndex, "OverrideImageLayerBrushFromTextureAtIndex" }, // 1394731871
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerBrushFromTextureDynamicAtIndex, "OverrideImageLayerBrushFromTextureDynamicAtIndex" }, // 3389768041
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_OverrideImageLayerColorAndOpacityAtIndex, "OverrideImageLayerColorAndOpacityAtIndex" }, // 1336628836
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_RemoveImageLayerAtIndex, "RemoveImageLayerAtIndex" }, // 737506433
		{ &Z_Construct_UFunction_UAdvancedLayeredImage_SetImageLayers, "SetImageLayers" }, // 1233379140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedLayeredImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_OnImageStreamingCompleteDelegate = { "OnImageStreamingCompleteDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedLayeredImage, OnImageStreamingCompleteDelegate), Z_Construct_UDelegateFunction_UAdvancedLayeredImage_OnImageStreamingCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImageStreamingCompleteDelegate_MetaData), NewProp_OnImageStreamingCompleteDelegate_MetaData) }; // 3057671073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_ImageLayers_Inner = { "ImageLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAdvancedImageLayer, METADATA_PARAMS(0, nullptr) }; // 82183262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_ImageLayers = { "ImageLayers", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedLayeredImage, ImageLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageLayers_MetaData), NewProp_ImageLayers_MetaData) }; // 82183262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedLayeredImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_OnImageStreamingCompleteDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_ImageLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedLayeredImage_Statics::NewProp_ImageLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedLayeredImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedLayeredImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImage,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedLayeredImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedLayeredImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedLayeredImage_Statics::ClassParams = {
	&UAdvancedLayeredImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAdvancedLayeredImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedLayeredImage_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedLayeredImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedLayeredImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedLayeredImage()
{
	if (!Z_Registration_Info_UClass_UAdvancedLayeredImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedLayeredImage.OuterSingleton, Z_Construct_UClass_UAdvancedLayeredImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedLayeredImage.OuterSingleton;
}
template<> ADVANCEDLAYEREDIMAGE_API UClass* StaticClass<UAdvancedLayeredImage>()
{
	return UAdvancedLayeredImage::StaticClass();
}
UAdvancedLayeredImage::UAdvancedLayeredImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedLayeredImage);
UAdvancedLayeredImage::~UAdvancedLayeredImage() {}
// End Class UAdvancedLayeredImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedLayeredImage, UAdvancedLayeredImage::StaticClass, TEXT("UAdvancedLayeredImage"), &Z_Registration_Info_UClass_UAdvancedLayeredImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedLayeredImage), 641926256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_1756272635(TEXT("/Script/AdvancedLayeredImage"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
