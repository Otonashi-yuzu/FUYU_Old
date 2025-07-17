// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Common/TransitionEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransitionEvent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
// End Cross Module References

// Begin Enum ETransitionEvent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionEvent;
static UEnum* ETransitionEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransitionEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransitionEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_ETransitionEvent, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ETransitionEvent"));
	}
	return Z_Registration_Info_UEnum_ETransitionEvent.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<ETransitionEvent>()
{
	return ETransitionEvent_StaticEnum();
}
struct Z_Construct_UEnum_VNM_ETransitionEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "// Custom\n" },
		{ "Custom.Name", "ETransitionEvent::Custom" },
		{ "Custom.ToolTip", "Custom" },
		{ "Dissolve.Name", "ETransitionEvent::Dissolve" },
		{ "Fade.Name", "ETransitionEvent::Fade" },
		{ "HPunch.Name", "ETransitionEvent::HPunch" },
		{ "Max.Comment", "// Don't add anything after this\n" },
		{ "Max.Name", "ETransitionEvent::Max" },
		{ "Max.ToolTip", "Don't add anything after this" },
		{ "ModuleRelativePath", "Public/Common/TransitionEvent.h" },
		{ "No_Transition.Name", "ETransitionEvent::No_Transition" },
		{ "Punch.Name", "ETransitionEvent::Punch" },
		{ "VPunch.Name", "ETransitionEvent::VPunch" },
		{ "Zoom.Name", "ETransitionEvent::Zoom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransitionEvent::No_Transition", (int64)ETransitionEvent::No_Transition },
		{ "ETransitionEvent::Fade", (int64)ETransitionEvent::Fade },
		{ "ETransitionEvent::Dissolve", (int64)ETransitionEvent::Dissolve },
		{ "ETransitionEvent::Zoom", (int64)ETransitionEvent::Zoom },
		{ "ETransitionEvent::Punch", (int64)ETransitionEvent::Punch },
		{ "ETransitionEvent::VPunch", (int64)ETransitionEvent::VPunch },
		{ "ETransitionEvent::HPunch", (int64)ETransitionEvent::HPunch },
		{ "ETransitionEvent::Custom", (int64)ETransitionEvent::Custom },
		{ "ETransitionEvent::Max", (int64)ETransitionEvent::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_ETransitionEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"ETransitionEvent",
	"ETransitionEvent",
	Z_Construct_UEnum_VNM_ETransitionEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ETransitionEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_ETransitionEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_ETransitionEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_ETransitionEvent()
{
	if (!Z_Registration_Info_UEnum_ETransitionEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionEvent.InnerSingleton, Z_Construct_UEnum_VNM_ETransitionEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransitionEvent.InnerSingleton;
}
// End Enum ETransitionEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_TransitionEvent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETransitionEvent_StaticEnum, TEXT("ETransitionEvent"), &Z_Registration_Info_UEnum_ETransitionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35133603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_TransitionEvent_h_2619696910(TEXT("/Script/VNM"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_TransitionEvent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_TransitionEvent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
