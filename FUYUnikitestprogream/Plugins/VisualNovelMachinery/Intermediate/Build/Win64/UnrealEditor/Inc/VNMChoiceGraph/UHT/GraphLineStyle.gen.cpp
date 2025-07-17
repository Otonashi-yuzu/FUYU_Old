// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/Graphs/GraphLineStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphLineStyle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FLineStyle();
// End Cross Module References

// Begin ScriptStruct FLineStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineStyle;
class UScriptStruct* FLineStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineStyle, (UObject*)Z_Construct_UPackage__Script_VNMChoiceGraph(), TEXT("LineStyle"));
	}
	return Z_Registration_Info_UScriptStruct_LineStyle.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UScriptStruct* StaticStruct<FLineStyle>()
{
	return FLineStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLineHasOutline_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOutlineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bLineHasOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOutlineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bLineHasOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLineHasShadow_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bLineHasShadow" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineShadowColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bLineHasShadow" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GraphLineStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static void NewProp_bLineHasOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineHasOutline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOutlineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineOutlineColor;
	static void NewProp_bLineHasShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineHasShadow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineShadowColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
void Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasOutline_SetBit(void* Obj)
{
	((FLineStyle*)Obj)->bLineHasOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasOutline = { "bLineHasOutline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLineStyle), &Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLineHasOutline_MetaData), NewProp_bLineHasOutline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineOutlineThickness = { "LineOutlineThickness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineOutlineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOutlineThickness_MetaData), NewProp_LineOutlineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineOutlineColor = { "LineOutlineColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOutlineColor_MetaData), NewProp_LineOutlineColor_MetaData) };
void Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasShadow_SetBit(void* Obj)
{
	((FLineStyle*)Obj)->bLineHasShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasShadow = { "bLineHasShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLineStyle), &Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLineHasShadow_MetaData), NewProp_bLineHasShadow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineShadowOffset = { "LineShadowOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineShadowOffset_MetaData), NewProp_LineShadowOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineShadowColor = { "LineShadowColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineStyle, LineShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineShadowColor_MetaData), NewProp_LineShadowColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineOutlineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_bLineHasShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineStyle_Statics::NewProp_LineShadowColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
	nullptr,
	&NewStructOps,
	"LineStyle",
	Z_Construct_UScriptStruct_FLineStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineStyle_Statics::PropPointers),
	sizeof(FLineStyle),
	alignof(FLineStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineStyle()
{
	if (!Z_Registration_Info_UScriptStruct_LineStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineStyle.InnerSingleton, Z_Construct_UScriptStruct_FLineStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineStyle.InnerSingleton;
}
// End ScriptStruct FLineStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_GraphLineStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLineStyle::StaticStruct, Z_Construct_UScriptStruct_FLineStyle_Statics::NewStructOps, TEXT("LineStyle"), &Z_Registration_Info_UScriptStruct_LineStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineStyle), 160309223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_GraphLineStyle_h_4002973015(TEXT("/Script/VNMChoiceGraph"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_GraphLineStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_GraphLineStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
