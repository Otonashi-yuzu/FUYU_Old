// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMCharacterSpawnLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMCharacterSpawnLocation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMCharacterSpawnLocation();
VNM_API UClass* Z_Construct_UClass_AVNMCharacterSpawnLocation_NoRegister();
// End Cross Module References

// Begin Class AVNMCharacterSpawnLocation
void AVNMCharacterSpawnLocation::StaticRegisterNativesAVNMCharacterSpawnLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVNMCharacterSpawnLocation);
UClass* Z_Construct_UClass_AVNMCharacterSpawnLocation_NoRegister()
{
	return AVNMCharacterSpawnLocation::StaticClass();
}
struct Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/VNMCharacterSpawnLocation.h" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimation_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Actors/VNMCharacterSpawnLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSkeletalMeshComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNMCharacterSpawnLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewAnimation = { "PreviewAnimation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, PreviewAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAnimation_MetaData), NewProp_PreviewAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewSkeletalMeshComponent = { "PreviewSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0020080800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, PreviewSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeletalMeshComponent_MetaData), NewProp_PreviewSkeletalMeshComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVNMCharacterSpawnLocation, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_SkeletalMeshComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_PreviewSkeletalMeshComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::NewProp_EmotionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::ClassParams = {
	&AVNMCharacterSpawnLocation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVNMCharacterSpawnLocation()
{
	if (!Z_Registration_Info_UClass_AVNMCharacterSpawnLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVNMCharacterSpawnLocation.OuterSingleton, Z_Construct_UClass_AVNMCharacterSpawnLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVNMCharacterSpawnLocation.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<AVNMCharacterSpawnLocation>()
{
	return AVNMCharacterSpawnLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVNMCharacterSpawnLocation);
AVNMCharacterSpawnLocation::~AVNMCharacterSpawnLocation() {}
// End Class AVNMCharacterSpawnLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCharacterSpawnLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVNMCharacterSpawnLocation, AVNMCharacterSpawnLocation::StaticClass, TEXT("AVNMCharacterSpawnLocation"), &Z_Registration_Info_UClass_AVNMCharacterSpawnLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVNMCharacterSpawnLocation), 136606311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCharacterSpawnLocation_h_302648518(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCharacterSpawnLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCharacterSpawnLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
