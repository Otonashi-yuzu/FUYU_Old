// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/VNMChoiceGraphSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMChoiceGraphSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UDialogScenesDataAsset_NoRegister();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UVNMChoiceGraphSettings();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UVNMChoiceGraphSettings_NoRegister();
VNMCHOICEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings();
// End Cross Module References

// Begin ScriptStruct FVisualNovelMachineryChoiceGraphSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings;
class UScriptStruct* FVisualNovelMachineryChoiceGraphSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings, (UObject*)Z_Construct_UPackage__Script_VNMChoiceGraph(), TEXT("VisualNovelMachineryChoiceGraphSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UScriptStruct* StaticStruct<FVisualNovelMachineryChoiceGraphSettings>()
{
	return FVisualNovelMachineryChoiceGraphSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMChoiceGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogScenesData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/VNMChoiceGraphSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogScenesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisualNovelMachineryChoiceGraphSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::NewProp_DialogScenesData = { "DialogScenesData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachineryChoiceGraphSettings, DialogScenesData), Z_Construct_UClass_UDialogScenesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogScenesData_MetaData), NewProp_DialogScenesData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::NewProp_DialogScenesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
	nullptr,
	&NewStructOps,
	"VisualNovelMachineryChoiceGraphSettings",
	Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::PropPointers),
	sizeof(FVisualNovelMachineryChoiceGraphSettings),
	alignof(FVisualNovelMachineryChoiceGraphSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings()
{
	if (!Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.InnerSingleton, Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings.InnerSingleton;
}
// End ScriptStruct FVisualNovelMachineryChoiceGraphSettings

// Begin Class UVNMChoiceGraphSettings Function GetVNMChoiceGraphSettings
struct Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics
{
	struct VNMChoiceGraphSettings_eventGetVNMChoiceGraphSettings_Parms
	{
		UVNMChoiceGraphSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMChoiceGraphSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMChoiceGraphSettings_eventGetVNMChoiceGraphSettings_Parms, ReturnValue), Z_Construct_UClass_UVNMChoiceGraphSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMChoiceGraphSettings, nullptr, "GetVNMChoiceGraphSettings", nullptr, nullptr, Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::VNMChoiceGraphSettings_eventGetVNMChoiceGraphSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::VNMChoiceGraphSettings_eventGetVNMChoiceGraphSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMChoiceGraphSettings::execGetVNMChoiceGraphSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVNMChoiceGraphSettings**)Z_Param__Result=UVNMChoiceGraphSettings::GetVNMChoiceGraphSettings();
	P_NATIVE_END;
}
// End Class UVNMChoiceGraphSettings Function GetVNMChoiceGraphSettings

// Begin Class UVNMChoiceGraphSettings
void UVNMChoiceGraphSettings::StaticRegisterNativesUVNMChoiceGraphSettings()
{
	UClass* Class = UVNMChoiceGraphSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVNMChoiceGraphSettings", &UVNMChoiceGraphSettings::execGetVNMChoiceGraphSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMChoiceGraphSettings);
UClass* Z_Construct_UClass_UVNMChoiceGraphSettings_NoRegister()
{
	return UVNMChoiceGraphSettings::StaticClass();
}
struct Z_Construct_UClass_UVNMChoiceGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the Visual Novel Machinery Choice Graph\n*/" },
		{ "IncludePath", "VNMChoiceGraphSettings.h" },
		{ "ModuleRelativePath", "Public/VNMChoiceGraphSettings.h" },
		{ "ToolTip", "Implements the settings for the Visual Novel Machinery Choice Graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMChoiceGraphSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMChoiceGraphSettings_GetVNMChoiceGraphSettings, "GetVNMChoiceGraphSettings" }, // 3961090955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMChoiceGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMChoiceGraphSettings, Settings), Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 146643528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::ClassParams = {
	&UVNMChoiceGraphSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMChoiceGraphSettings()
{
	if (!Z_Registration_Info_UClass_UVNMChoiceGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMChoiceGraphSettings.OuterSingleton, Z_Construct_UClass_UVNMChoiceGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMChoiceGraphSettings.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UClass* StaticClass<UVNMChoiceGraphSettings>()
{
	return UVNMChoiceGraphSettings::StaticClass();
}
UVNMChoiceGraphSettings::UVNMChoiceGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMChoiceGraphSettings);
UVNMChoiceGraphSettings::~UVNMChoiceGraphSettings() {}
// End Class UVNMChoiceGraphSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVisualNovelMachineryChoiceGraphSettings::StaticStruct, Z_Construct_UScriptStruct_FVisualNovelMachineryChoiceGraphSettings_Statics::NewStructOps, TEXT("VisualNovelMachineryChoiceGraphSettings"), &Z_Registration_Info_UScriptStruct_VisualNovelMachineryChoiceGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisualNovelMachineryChoiceGraphSettings), 146643528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMChoiceGraphSettings, UVNMChoiceGraphSettings::StaticClass, TEXT("UVNMChoiceGraphSettings"), &Z_Registration_Info_UClass_UVNMChoiceGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMChoiceGraphSettings), 4131330818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_124913667(TEXT("/Script/VNMChoiceGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_VNMChoiceGraphSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
