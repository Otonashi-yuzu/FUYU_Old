// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Common/CharacterFlipState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterFlipState() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
// End Cross Module References

// Begin Enum ECharacterFlipState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterFlipState;
static UEnum* ECharacterFlipState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterFlipState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterFlipState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_ECharacterFlipState, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ECharacterFlipState"));
	}
	return Z_Registration_Info_UEnum_ECharacterFlipState.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<ECharacterFlipState>()
{
	return ECharacterFlipState_StaticEnum();
}
struct Z_Construct_UEnum_VNM_ECharacterFlipState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOTH.Name", "ECharacterFlipState::BOTH" },
		{ "HORIZONTAL.Name", "ECharacterFlipState::HORIZONTAL" },
		{ "INHERIT.Name", "ECharacterFlipState::INHERIT" },
		{ "Max.Comment", "// Don't add anything after this\n" },
		{ "Max.Name", "ECharacterFlipState::Max" },
		{ "Max.ToolTip", "Don't add anything after this" },
		{ "ModuleRelativePath", "Public/Common/CharacterFlipState.h" },
		{ "VERTICAL.Name", "ECharacterFlipState::VERTICAL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterFlipState::INHERIT", (int64)ECharacterFlipState::INHERIT },
		{ "ECharacterFlipState::HORIZONTAL", (int64)ECharacterFlipState::HORIZONTAL },
		{ "ECharacterFlipState::VERTICAL", (int64)ECharacterFlipState::VERTICAL },
		{ "ECharacterFlipState::BOTH", (int64)ECharacterFlipState::BOTH },
		{ "ECharacterFlipState::Max", (int64)ECharacterFlipState::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"ECharacterFlipState",
	"ECharacterFlipState",
	Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState()
{
	if (!Z_Registration_Info_UEnum_ECharacterFlipState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterFlipState.InnerSingleton, Z_Construct_UEnum_VNM_ECharacterFlipState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterFlipState.InnerSingleton;
}
// End Enum ECharacterFlipState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterFlipState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterFlipState_StaticEnum, TEXT("ECharacterFlipState"), &Z_Registration_Info_UEnum_ECharacterFlipState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3767235229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterFlipState_h_2866371878(TEXT("/Script/VNM"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterFlipState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterFlipState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
