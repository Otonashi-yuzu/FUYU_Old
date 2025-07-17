// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnUtils/Public/YarnCommandBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnCommandBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_YarnUtils();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnCommandBlueprintLibrary();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnCommandBlueprintLibrary_NoRegister();
// End Cross Module References

// Begin Class UYarnCommandBlueprintLibrary Function wait
struct Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics
{
	struct YarnCommandBlueprintLibrary_eventwait_Parms
	{
		float Delay;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/YarnCommandBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnCommandBlueprintLibrary_eventwait_Parms, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnCommandBlueprintLibrary_eventwait_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnCommandBlueprintLibrary, nullptr, "wait", nullptr, nullptr, Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::YarnCommandBlueprintLibrary_eventwait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::YarnCommandBlueprintLibrary_eventwait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnCommandBlueprintLibrary::execwait)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYarnCommandBlueprintLibrary::wait(Z_Param_Delay,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UYarnCommandBlueprintLibrary Function wait

// Begin Class UYarnCommandBlueprintLibrary
void UYarnCommandBlueprintLibrary::StaticRegisterNativesUYarnCommandBlueprintLibrary()
{
	UClass* Class = UYarnCommandBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "wait", &UYarnCommandBlueprintLibrary::execwait },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYarnCommandBlueprintLibrary);
UClass* Z_Construct_UClass_UYarnCommandBlueprintLibrary_NoRegister()
{
	return UYarnCommandBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "YarnCommandBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YarnCommandBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYarnCommandBlueprintLibrary_wait, "wait" }, // 2178061327
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYarnCommandBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::ClassParams = {
	&UYarnCommandBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYarnCommandBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UYarnCommandBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYarnCommandBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UYarnCommandBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYarnCommandBlueprintLibrary.OuterSingleton;
}
template<> YARNUTILS_API UClass* StaticClass<UYarnCommandBlueprintLibrary>()
{
	return UYarnCommandBlueprintLibrary::StaticClass();
}
UYarnCommandBlueprintLibrary::UYarnCommandBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYarnCommandBlueprintLibrary);
UYarnCommandBlueprintLibrary::~UYarnCommandBlueprintLibrary() {}
// End Class UYarnCommandBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnCommandBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYarnCommandBlueprintLibrary, UYarnCommandBlueprintLibrary::StaticClass, TEXT("UYarnCommandBlueprintLibrary"), &Z_Registration_Info_UClass_UYarnCommandBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYarnCommandBlueprintLibrary), 2041772807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnCommandBlueprintLibrary_h_250067716(TEXT("/Script/YarnUtils"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnCommandBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnCommandBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
