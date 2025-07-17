// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/DialogAudioControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAudioControllerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogAudioControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogAudioControllerComponent_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EDialogAudioType();
// End Cross Module References

// Begin Enum EDialogAudioType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogAudioType;
static UEnum* EDialogAudioType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogAudioType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogAudioType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EDialogAudioType, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EDialogAudioType"));
	}
	return Z_Registration_Info_UEnum_EDialogAudioType.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EDialogAudioType>()
{
	return EDialogAudioType_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EDialogAudioType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Background_Music.Name", "EDialogAudioType::Background_Music" },
		{ "Invalid.Name", "EDialogAudioType::Invalid" },
		{ "ModuleRelativePath", "Public/Component/DialogAudioControllerComponent.h" },
		{ "Sound_Effect.Name", "EDialogAudioType::Sound_Effect" },
		{ "Voice_Over.Hidden", "" },
		{ "Voice_Over.Name", "EDialogAudioType::Voice_Over" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogAudioType::Invalid", (int64)EDialogAudioType::Invalid },
		{ "EDialogAudioType::Background_Music", (int64)EDialogAudioType::Background_Music },
		{ "EDialogAudioType::Sound_Effect", (int64)EDialogAudioType::Sound_Effect },
		{ "EDialogAudioType::Voice_Over", (int64)EDialogAudioType::Voice_Over },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EDialogAudioType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EDialogAudioType",
	"EDialogAudioType",
	Z_Construct_UEnum_VNM_EDialogAudioType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EDialogAudioType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EDialogAudioType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EDialogAudioType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EDialogAudioType()
{
	if (!Z_Registration_Info_UEnum_EDialogAudioType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogAudioType.InnerSingleton, Z_Construct_UEnum_VNM_EDialogAudioType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogAudioType.InnerSingleton;
}
// End Enum EDialogAudioType

// Begin Class UDialogAudioControllerComponent
void UDialogAudioControllerComponent::StaticRegisterNativesUDialogAudioControllerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAudioControllerComponent);
UClass* Z_Construct_UClass_UDialogAudioControllerComponent_NoRegister()
{
	return UDialogAudioControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogAudioControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DialogAudioControllerComponent.h" },
		{ "ModuleRelativePath", "Public/Component/DialogAudioControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogAudioControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioComponents_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AudioComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAudioControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_ValueProp = { "AudioComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_Key_KeyProp = { "AudioComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VNM_EDialogAudioType, METADATA_PARAMS(0, nullptr) }; // 138817942
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents = { "AudioComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAudioControllerComponent, AudioComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponents_MetaData), NewProp_AudioComponents_MetaData) }; // 138817942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAudioControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAudioControllerComponent_Statics::NewProp_AudioComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAudioControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAudioControllerComponent_Statics::ClassParams = {
	&UDialogAudioControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogAudioControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAudioControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAudioControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAudioControllerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogAudioControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAudioControllerComponent.OuterSingleton, Z_Construct_UClass_UDialogAudioControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAudioControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogAudioControllerComponent>()
{
	return UDialogAudioControllerComponent::StaticClass();
}
UDialogAudioControllerComponent::UDialogAudioControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAudioControllerComponent);
UDialogAudioControllerComponent::~UDialogAudioControllerComponent() {}
// End Class UDialogAudioControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogAudioType_StaticEnum, TEXT("EDialogAudioType"), &Z_Registration_Info_UEnum_EDialogAudioType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 138817942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAudioControllerComponent, UDialogAudioControllerComponent::StaticClass, TEXT("UDialogAudioControllerComponent"), &Z_Registration_Info_UClass_UDialogAudioControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAudioControllerComponent), 1116531818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_3404428689(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogAudioControllerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
