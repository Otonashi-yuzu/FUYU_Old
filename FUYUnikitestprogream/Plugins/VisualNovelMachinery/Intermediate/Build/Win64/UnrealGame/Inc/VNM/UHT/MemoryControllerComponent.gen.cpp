// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/MemoryControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryControllerComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UMemoryControllerComponent();
VNM_API UClass* Z_Construct_UClass_UMemoryControllerComponent_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EMemoryType();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryObject();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryValue();
// End Cross Module References

// Begin ScriptStruct FMemoryValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemoryValue;
class UScriptStruct* FMemoryValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemoryValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryValue, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("MemoryValue"));
	}
	return Z_Registration_Info_UScriptStruct_MemoryValue.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FMemoryValue>()
{
	return FMemoryValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemoryValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryValue, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryValue, Type), Z_Construct_UEnum_VNM_EMemoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3156312681
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryValue_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"MemoryValue",
	Z_Construct_UScriptStruct_FMemoryValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryValue_Statics::PropPointers),
	sizeof(FMemoryValue),
	alignof(FMemoryValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemoryValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemoryValue()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemoryValue.InnerSingleton, Z_Construct_UScriptStruct_FMemoryValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemoryValue.InnerSingleton;
}
// End ScriptStruct FMemoryValue

// Begin ScriptStruct FMemoryObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemoryObject;
class UScriptStruct* FMemoryObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemoryObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryObject, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("MemoryObject"));
	}
	return Z_Registration_Info_UScriptStruct_MemoryObject.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FMemoryObject>()
{
	return FMemoryObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemoryObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemoryObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryObject, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryObject_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"MemoryObject",
	Z_Construct_UScriptStruct_FMemoryObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryObject_Statics::PropPointers),
	sizeof(FMemoryObject),
	alignof(FMemoryObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemoryObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemoryObject()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemoryObject.InnerSingleton, Z_Construct_UScriptStruct_FMemoryObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemoryObject.InnerSingleton;
}
// End ScriptStruct FMemoryObject

// Begin Class UMemoryControllerComponent
void UMemoryControllerComponent::StaticRegisterNativesUMemoryControllerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryControllerComponent);
UClass* Z_Construct_UClass_UMemoryControllerComponent_NoRegister()
{
	return UMemoryControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UMemoryControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/MemoryControllerComponent.h" },
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMemories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogMemories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/MemoryControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMemories_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterMemories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogMemories_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories_ValueProp = { "CharacterMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMemoryObject, METADATA_PARAMS(0, nullptr) }; // 1097430436
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories_Key_KeyProp = { "CharacterMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories = { "CharacterMemories", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemoryControllerComponent, CharacterMemories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMemories_MetaData), NewProp_CharacterMemories_MetaData) }; // 1097430436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories_ValueProp = { "DialogMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMemoryObject, METADATA_PARAMS(0, nullptr) }; // 1097430436
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories_Key_KeyProp = { "DialogMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories = { "DialogMemories", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemoryControllerComponent, DialogMemories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogMemories_MetaData), NewProp_DialogMemories_MetaData) }; // 1097430436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemoryControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_CharacterMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryControllerComponent_Statics::NewProp_DialogMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMemoryControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryControllerComponent_Statics::ClassParams = {
	&UMemoryControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMemoryControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemoryControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemoryControllerComponent()
{
	if (!Z_Registration_Info_UClass_UMemoryControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryControllerComponent.OuterSingleton, Z_Construct_UClass_UMemoryControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemoryControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMemoryControllerComponent>()
{
	return UMemoryControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryControllerComponent);
UMemoryControllerComponent::~UMemoryControllerComponent() {}
// End Class UMemoryControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMemoryValue::StaticStruct, Z_Construct_UScriptStruct_FMemoryValue_Statics::NewStructOps, TEXT("MemoryValue"), &Z_Registration_Info_UScriptStruct_MemoryValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemoryValue), 2039452519U) },
		{ FMemoryObject::StaticStruct, Z_Construct_UScriptStruct_FMemoryObject_Statics::NewStructOps, TEXT("MemoryObject"), &Z_Registration_Info_UScriptStruct_MemoryObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemoryObject), 1097430436U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryControllerComponent, UMemoryControllerComponent::StaticClass, TEXT("UMemoryControllerComponent"), &Z_Registration_Info_UClass_UMemoryControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryControllerComponent), 1874658236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_3396264795(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_MemoryControllerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
