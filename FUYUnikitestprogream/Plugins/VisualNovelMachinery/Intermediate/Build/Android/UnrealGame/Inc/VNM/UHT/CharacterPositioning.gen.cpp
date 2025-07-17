// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Common/CharacterPositioning.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPositioning() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
// End Cross Module References

// Begin Enum ECharacterPositioning
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterPositioning;
static UEnum* ECharacterPositioning_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterPositioning.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterPositioning.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_ECharacterPositioning, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ECharacterPositioning"));
	}
	return Z_Registration_Info_UEnum_ECharacterPositioning.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<ECharacterPositioning>()
{
	return ECharacterPositioning_StaticEnum();
}
struct Z_Construct_UEnum_VNM_ECharacterPositioning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CENTER.Name", "ECharacterPositioning::CENTER" },
		{ "CUSTOM.Name", "ECharacterPositioning::CUSTOM" },
		{ "INHERIT.Name", "ECharacterPositioning::INHERIT" },
		{ "LEFT.Name", "ECharacterPositioning::LEFT" },
		{ "Max.Comment", "// Don't add anything after this\n" },
		{ "Max.Name", "ECharacterPositioning::Max" },
		{ "Max.ToolTip", "Don't add anything after this" },
		{ "ModuleRelativePath", "Public/Common/CharacterPositioning.h" },
		{ "RIGHT.Name", "ECharacterPositioning::RIGHT" },
		{ "TRUE_CENTER.Name", "ECharacterPositioning::TRUE_CENTER" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterPositioning::INHERIT", (int64)ECharacterPositioning::INHERIT },
		{ "ECharacterPositioning::CENTER", (int64)ECharacterPositioning::CENTER },
		{ "ECharacterPositioning::LEFT", (int64)ECharacterPositioning::LEFT },
		{ "ECharacterPositioning::RIGHT", (int64)ECharacterPositioning::RIGHT },
		{ "ECharacterPositioning::TRUE_CENTER", (int64)ECharacterPositioning::TRUE_CENTER },
		{ "ECharacterPositioning::CUSTOM", (int64)ECharacterPositioning::CUSTOM },
		{ "ECharacterPositioning::Max", (int64)ECharacterPositioning::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"ECharacterPositioning",
	"ECharacterPositioning",
	Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning()
{
	if (!Z_Registration_Info_UEnum_ECharacterPositioning.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterPositioning.InnerSingleton, Z_Construct_UEnum_VNM_ECharacterPositioning_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterPositioning.InnerSingleton;
}
// End Enum ECharacterPositioning

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterPositioning_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterPositioning_StaticEnum, TEXT("ECharacterPositioning"), &Z_Registration_Info_UEnum_ECharacterPositioning, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2277953573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterPositioning_h_2241318747(TEXT("/Script/VNM"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterPositioning_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_CharacterPositioning_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
