// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedLayeredImage/Public/AdvancedImageLayer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedImageLayer() {}

// Begin Cross Module References
ADVANCEDLAYEREDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedImageLayer();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UPackage* Z_Construct_UPackage__Script_AdvancedLayeredImage();
// End Cross Module References

// Begin ScriptStruct FAdvancedImageLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvancedImageLayer;
class UScriptStruct* FAdvancedImageLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancedImageLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvancedImageLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancedImageLayer, (UObject*)Z_Construct_UPackage__Script_AdvancedLayeredImage(), TEXT("AdvancedImageLayer"));
	}
	return Z_Registration_Info_UScriptStruct_AdvancedImageLayer.OuterSingleton;
}
template<> ADVANCEDLAYEREDIMAGE_API UScriptStruct* StaticStruct<FAdvancedImageLayer>()
{
	return FAdvancedImageLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvancedImageLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AdvancedImageLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearanc" },
		{ "ModuleRelativePath", "Public/AdvancedImageLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancedImageLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdvancedImageLayer, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdvancedImageLayer, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::NewProp_ColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedLayeredImage,
	nullptr,
	&NewStructOps,
	"AdvancedImageLayer",
	Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::PropPointers),
	sizeof(FAdvancedImageLayer),
	alignof(FAdvancedImageLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAdvancedImageLayer()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancedImageLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvancedImageLayer.InnerSingleton, Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AdvancedImageLayer.InnerSingleton;
}
// End ScriptStruct FAdvancedImageLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedImageLayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAdvancedImageLayer::StaticStruct, Z_Construct_UScriptStruct_FAdvancedImageLayer_Statics::NewStructOps, TEXT("AdvancedImageLayer"), &Z_Registration_Info_UScriptStruct_AdvancedImageLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvancedImageLayer), 82183262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedImageLayer_h_3451247262(TEXT("/Script/AdvancedLayeredImage"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedImageLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedImageLayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
