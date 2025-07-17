// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMChoiceGraph/Public/Graphs/DialogScenesDataAsset.h"
#include "VNM/Public/UI/Data/ChoiceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogScenesDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_VNMChoiceGraph();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogData();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UDialogScenesDataAsset();
VNMCHOICEGRAPH_API UClass* Z_Construct_UClass_UDialogScenesDataAsset_NoRegister();
// End Cross Module References

// Begin Class UDialogScenesDataAsset Function ConstructScenesData
#if WITH_EDITOR
struct Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogScenesDataAsset, nullptr, "ConstructScenesData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDialogScenesDataAsset::execConstructScenesData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConstructScenesData();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UDialogScenesDataAsset Function ConstructScenesData

// Begin Class UDialogScenesDataAsset
void UDialogScenesDataAsset::StaticRegisterNativesUDialogScenesDataAsset()
{
#if WITH_EDITOR
	UClass* Class = UDialogScenesDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructScenesData", &UDialogScenesDataAsset::execConstructScenesData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogScenesDataAsset);
UClass* Z_Construct_UClass_UDialogScenesDataAsset_NoRegister()
{
	return UDialogScenesDataAsset::StaticClass();
}
struct Z_Construct_UClass_UDialogScenesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graphs/DialogScenesDataAsset.h" },
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScenesData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogScenesDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScenesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogScenesDataAsset_ConstructScenesData, "ConstructScenesData" }, // 4257025548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogScenesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogScenesDataAsset_Statics::NewProp_ScenesData = { "ScenesData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogScenesDataAsset, ScenesData), Z_Construct_UScriptStruct_FDialogData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScenesData_MetaData), NewProp_ScenesData_MetaData) }; // 817624703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogScenesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogScenesDataAsset_Statics::NewProp_ScenesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogScenesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMChoiceGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogScenesDataAsset_Statics::ClassParams = {
	&UDialogScenesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UDialogScenesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogScenesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogScenesDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogScenesDataAsset()
{
	if (!Z_Registration_Info_UClass_UDialogScenesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogScenesDataAsset.OuterSingleton, Z_Construct_UClass_UDialogScenesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogScenesDataAsset.OuterSingleton;
}
template<> VNMCHOICEGRAPH_API UClass* StaticClass<UDialogScenesDataAsset>()
{
	return UDialogScenesDataAsset::StaticClass();
}
UDialogScenesDataAsset::UDialogScenesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogScenesDataAsset);
UDialogScenesDataAsset::~UDialogScenesDataAsset() {}
// End Class UDialogScenesDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogScenesDataAsset, UDialogScenesDataAsset::StaticClass, TEXT("UDialogScenesDataAsset"), &Z_Registration_Info_UClass_UDialogScenesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogScenesDataAsset), 1326168640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesDataAsset_h_544765866(TEXT("/Script/VNMChoiceGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMChoiceGraph_Public_Graphs_DialogScenesDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
