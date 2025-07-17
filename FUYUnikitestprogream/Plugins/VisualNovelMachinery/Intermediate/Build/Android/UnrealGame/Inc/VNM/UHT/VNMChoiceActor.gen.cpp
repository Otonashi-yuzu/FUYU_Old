// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMChoiceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMChoiceActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMChoiceActor();
VNM_API UClass* Z_Construct_UClass_AVNMChoiceActor_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister();
// End Cross Module References

// Begin Class AVNMChoiceActor
void AVNMChoiceActor::StaticRegisterNativesAVNMChoiceActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVNMChoiceActor);
UClass* Z_Construct_UClass_AVNMChoiceActor_NoRegister()
{
	return AVNMChoiceActor::StaticClass();
}
struct Z_Construct_UClass_AVNMChoiceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/VNMChoiceActor.h" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceId_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideIfNotAvailable_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChoiceId;
	static void NewProp_bHideIfNotAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideIfNotAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNMChoiceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_ChoiceId = { "ChoiceId", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMChoiceActor, ChoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceId_MetaData), NewProp_ChoiceId_MetaData) };
void Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_bHideIfNotAvailable_SetBit(void* Obj)
{
	((AVNMChoiceActor*)Obj)->bHideIfNotAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_bHideIfNotAvailable = { "bHideIfNotAvailable", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVNMChoiceActor), &Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_bHideIfNotAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideIfNotAvailable_MetaData), NewProp_bHideIfNotAvailable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVNMChoiceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_ChoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMChoiceActor_Statics::NewProp_bHideIfNotAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVNMChoiceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVNMChoiceActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AVNMChoiceActor, IVNMChoiceObjectInterface), false },  // 1799983501
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVNMChoiceActor_Statics::ClassParams = {
	&AVNMChoiceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVNMChoiceActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVNMChoiceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVNMChoiceActor()
{
	if (!Z_Registration_Info_UClass_AVNMChoiceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVNMChoiceActor.OuterSingleton, Z_Construct_UClass_AVNMChoiceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVNMChoiceActor.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<AVNMChoiceActor>()
{
	return AVNMChoiceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVNMChoiceActor);
AVNMChoiceActor::~AVNMChoiceActor() {}
// End Class AVNMChoiceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVNMChoiceActor, AVNMChoiceActor::StaticClass, TEXT("AVNMChoiceActor"), &Z_Registration_Info_UClass_AVNMChoiceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVNMChoiceActor), 1974415646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceActor_h_3587303840(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
