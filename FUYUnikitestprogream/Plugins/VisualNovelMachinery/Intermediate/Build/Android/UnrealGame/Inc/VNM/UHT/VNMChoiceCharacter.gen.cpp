// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMChoiceCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMChoiceCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMChoiceCharacter();
VNM_API UClass* Z_Construct_UClass_AVNMChoiceCharacter_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister();
// End Cross Module References

// Begin Class AVNMChoiceCharacter
void AVNMChoiceCharacter::StaticRegisterNativesAVNMChoiceCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVNMChoiceCharacter);
UClass* Z_Construct_UClass_AVNMChoiceCharacter_NoRegister()
{
	return AVNMChoiceCharacter::StaticClass();
}
struct Z_Construct_UClass_AVNMChoiceCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/VNMChoiceCharacter.h" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceId_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideIfNotAvailable_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChoiceId;
	static void NewProp_bHideIfNotAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideIfNotAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNMChoiceCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_ChoiceId = { "ChoiceId", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMChoiceCharacter, ChoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceId_MetaData), NewProp_ChoiceId_MetaData) };
void Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_bHideIfNotAvailable_SetBit(void* Obj)
{
	((AVNMChoiceCharacter*)Obj)->bHideIfNotAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_bHideIfNotAvailable = { "bHideIfNotAvailable", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVNMChoiceCharacter), &Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_bHideIfNotAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideIfNotAvailable_MetaData), NewProp_bHideIfNotAvailable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVNMChoiceCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_ChoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMChoiceCharacter_Statics::NewProp_bHideIfNotAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVNMChoiceCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVNMChoiceCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AVNMChoiceCharacter, IVNMChoiceObjectInterface), false },  // 1799983501
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVNMChoiceCharacter_Statics::ClassParams = {
	&AVNMChoiceCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVNMChoiceCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMChoiceCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVNMChoiceCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVNMChoiceCharacter()
{
	if (!Z_Registration_Info_UClass_AVNMChoiceCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVNMChoiceCharacter.OuterSingleton, Z_Construct_UClass_AVNMChoiceCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVNMChoiceCharacter.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<AVNMChoiceCharacter>()
{
	return AVNMChoiceCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVNMChoiceCharacter);
AVNMChoiceCharacter::~AVNMChoiceCharacter() {}
// End Class AVNMChoiceCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVNMChoiceCharacter, AVNMChoiceCharacter::StaticClass, TEXT("AVNMChoiceCharacter"), &Z_Registration_Info_UClass_AVNMChoiceCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVNMChoiceCharacter), 1320814608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceCharacter_h_3599763587(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
