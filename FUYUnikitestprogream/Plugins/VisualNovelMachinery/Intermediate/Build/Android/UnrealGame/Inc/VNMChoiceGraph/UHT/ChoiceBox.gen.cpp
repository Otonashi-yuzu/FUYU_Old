// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/Graphs/ChoiceBox.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChoiceBox() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNM_API UEnum* Z_Construct_UEnum_VNM_EChoiceType();
VNMCHOICEGRAPH_API UEnum* Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FChoiceBoxStyle();
// End Cross Module References

// Begin Enum EChoiceBoxState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChoiceBoxState;
static UEnum* EChoiceBoxState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChoiceBoxState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChoiceBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState, (UObject*)Z_Construct_UPackage__Script_VNMChoiceGraph(), TEXT("EChoiceBoxState"));
	}
	return Z_Registration_Info_UEnum_EChoiceBoxState.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UEnum* StaticEnum<EChoiceBoxState>()
{
	return EChoiceBoxState_StaticEnum();
}
struct Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOVERED.Name", "EChoiceBoxState::HOVERED" },
		{ "IDLE.Name", "EChoiceBoxState::IDLE" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceBox.h" },
		{ "PRESSED.Name", "EChoiceBoxState::PRESSED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChoiceBoxState::IDLE", (int64)EChoiceBoxState::IDLE },
		{ "EChoiceBoxState::HOVERED", (int64)EChoiceBoxState::HOVERED },
		{ "EChoiceBoxState::PRESSED", (int64)EChoiceBoxState::PRESSED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
	nullptr,
	"EChoiceBoxState",
	"EChoiceBoxState",
	Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState()
{
	if (!Z_Registration_Info_UEnum_EChoiceBoxState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChoiceBoxState.InnerSingleton, Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChoiceBoxState.InnerSingleton;
}
// End Enum EChoiceBoxState

// Begin ScriptStruct FChoiceBoxStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChoiceBoxStyle;
class UScriptStruct* FChoiceBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChoiceBoxStyle, (UObject*)Z_Construct_UPackage__Script_VNMChoiceGraph(), TEXT("ChoiceBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UScriptStruct* StaticStruct<FChoiceBoxStyle>()
{
	return FChoiceBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StylePerState_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Graphs/ChoiceBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StylePerState_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StylePerState_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StylePerState_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StylePerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChoiceBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceBoxStyle, Type), Z_Construct_UEnum_VNM_EChoiceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 561712770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_ValueProp = { "StylePerState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_Key_KeyProp = { "StylePerState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VNMChoiceGraph_EChoiceBoxState, METADATA_PARAMS(0, nullptr) }; // 2387780765
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState = { "StylePerState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceBoxStyle, StylePerState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StylePerState_MetaData), NewProp_StylePerState_MetaData) }; // 2387780765 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_DefaultStyle = { "DefaultStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceBoxStyle, DefaultStyle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStyle_MetaData), NewProp_DefaultStyle_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_StylePerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewProp_DefaultStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
	nullptr,
	&NewStructOps,
	"ChoiceBoxStyle",
	Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::PropPointers),
	sizeof(FChoiceBoxStyle),
	alignof(FChoiceBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChoiceBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChoiceBoxStyle.InnerSingleton;
}
// End ScriptStruct FChoiceBoxStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChoiceBoxState_StaticEnum, TEXT("EChoiceBoxState"), &Z_Registration_Info_UEnum_EChoiceBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2387780765U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChoiceBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FChoiceBoxStyle_Statics::NewStructOps, TEXT("ChoiceBoxStyle"), &Z_Registration_Info_UScriptStruct_ChoiceBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChoiceBoxStyle), 1959715853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_4149152414(TEXT("/Script/VNMChoiceGraph"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_ChoiceBox_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
