// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/Data/ChoiceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChoiceData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UEnum* Z_Construct_UEnum_VNM_EChoiceType();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FChoiceData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FChoicesColumn();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FOptionData();
// End Cross Module References

// Begin Enum EChoiceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChoiceType;
static UEnum* EChoiceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChoiceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChoiceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EChoiceType, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EChoiceType"));
	}
	return Z_Registration_Info_UEnum_EChoiceType.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EChoiceType>()
{
	return EChoiceType_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EChoiceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BRANCH.Name", "EChoiceType::BRANCH" },
		{ "CHOICE.Name", "EChoiceType::CHOICE" },
		{ "CONNECTOR.Name", "EChoiceType::CONNECTOR" },
		{ "END.Name", "EChoiceType::END" },
		{ "INVALID.Name", "EChoiceType::INVALID" },
		{ "LOOP_PORTAL_END.Name", "EChoiceType::LOOP_PORTAL_END" },
		{ "LOOP_PORTAL_START.Name", "EChoiceType::LOOP_PORTAL_START" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
		{ "SCENE.Name", "EChoiceType::SCENE" },
		{ "START.Name", "EChoiceType::START" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChoiceType::INVALID", (int64)EChoiceType::INVALID },
		{ "EChoiceType::CHOICE", (int64)EChoiceType::CHOICE },
		{ "EChoiceType::END", (int64)EChoiceType::END },
		{ "EChoiceType::BRANCH", (int64)EChoiceType::BRANCH },
		{ "EChoiceType::CONNECTOR", (int64)EChoiceType::CONNECTOR },
		{ "EChoiceType::START", (int64)EChoiceType::START },
		{ "EChoiceType::LOOP_PORTAL_START", (int64)EChoiceType::LOOP_PORTAL_START },
		{ "EChoiceType::LOOP_PORTAL_END", (int64)EChoiceType::LOOP_PORTAL_END },
		{ "EChoiceType::SCENE", (int64)EChoiceType::SCENE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EChoiceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EChoiceType",
	"EChoiceType",
	Z_Construct_UEnum_VNM_EChoiceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EChoiceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EChoiceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EChoiceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EChoiceType()
{
	if (!Z_Registration_Info_UEnum_EChoiceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChoiceType.InnerSingleton, Z_Construct_UEnum_VNM_EChoiceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChoiceType.InnerSingleton;
}
// End Enum EChoiceType

// Begin ScriptStruct FOptionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionData;
class UScriptStruct* FOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("OptionData"));
	}
	return Z_Registration_Info_UScriptStruct_OptionData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FOptionData>()
{
	return FOptionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextChoiceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextChoiceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOptionData_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionData, ChoiceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceText_MetaData), NewProp_ChoiceText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptionData_Statics::NewProp_NextChoiceId = { "NextChoiceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionData, NextChoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextChoiceId_MetaData), NewProp_NextChoiceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionData_Statics::NewProp_ChoiceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionData_Statics::NewProp_NextChoiceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"OptionData",
	Z_Construct_UScriptStruct_FOptionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionData_Statics::PropPointers),
	sizeof(FOptionData),
	alignof(FOptionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptionData()
{
	if (!Z_Registration_Info_UScriptStruct_OptionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionData.InnerSingleton, Z_Construct_UScriptStruct_FOptionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptionData.InnerSingleton;
}
// End ScriptStruct FOptionData

// Begin ScriptStruct FChoiceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChoiceData;
class UScriptStruct* FChoiceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChoiceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChoiceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChoiceData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ChoiceData"));
	}
	return Z_Registration_Info_UScriptStruct_ChoiceData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FChoiceData>()
{
	return FChoiceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChoiceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChoiceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChoiceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChoiceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceId = { "ChoiceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceData, ChoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceId_MetaData), NewProp_ChoiceId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceType = { "ChoiceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceData, ChoiceType), Z_Construct_UEnum_VNM_EChoiceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceType_MetaData), NewProp_ChoiceType_MetaData) }; // 561712770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceData, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptionData, METADATA_PARAMS(0, nullptr) }; // 3250441200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoiceData, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3250441200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChoiceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_ChoiceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoiceData_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChoiceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ChoiceData",
	Z_Construct_UScriptStruct_FChoiceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceData_Statics::PropPointers),
	sizeof(FChoiceData),
	alignof(FChoiceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoiceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChoiceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChoiceData()
{
	if (!Z_Registration_Info_UScriptStruct_ChoiceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChoiceData.InnerSingleton, Z_Construct_UScriptStruct_FChoiceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChoiceData.InnerSingleton;
}
// End ScriptStruct FChoiceData

// Begin ScriptStruct FChoicesColumn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChoicesColumn;
class UScriptStruct* FChoicesColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChoicesColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChoicesColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChoicesColumn, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ChoicesColumn"));
	}
	return Z_Registration_Info_UScriptStruct_ChoicesColumn.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FChoicesColumn>()
{
	return FChoicesColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChoicesColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalEntrances_MetaData[] = {
		{ "Comment", "// Choice Id to Choice Data\n" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
		{ "ToolTip", "Choice Id to Choice Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Choices_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Choices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortalEntrances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PortalEntrances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChoicesColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices_ValueProp = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FChoiceData, METADATA_PARAMS(0, nullptr) }; // 2446020866
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices_Key_KeyProp = { "Choices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoicesColumn, Choices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) }; // 2446020866
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_PortalEntrances_Inner = { "PortalEntrances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChoiceData, METADATA_PARAMS(0, nullptr) }; // 2446020866
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_PortalEntrances = { "PortalEntrances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoicesColumn, PortalEntrances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalEntrances_MetaData), NewProp_PortalEntrances_MetaData) }; // 2446020866
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChoicesColumn, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChoicesColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_PortalEntrances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_PortalEntrances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoicesColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChoicesColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ChoicesColumn",
	Z_Construct_UScriptStruct_FChoicesColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoicesColumn_Statics::PropPointers),
	sizeof(FChoicesColumn),
	alignof(FChoicesColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChoicesColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChoicesColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChoicesColumn()
{
	if (!Z_Registration_Info_UScriptStruct_ChoicesColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChoicesColumn.InnerSingleton, Z_Construct_UScriptStruct_FChoicesColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChoicesColumn.InnerSingleton;
}
// End ScriptStruct FChoicesColumn

// Begin ScriptStruct FDialogData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogData;
class UScriptStruct* FDialogData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogData>()
{
	return FDialogData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesColumns_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalExits_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Data/ChoiceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoicesColumns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoicesColumns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortalExits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PortalExits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_ChoicesColumns_Inner = { "ChoicesColumns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChoicesColumn, METADATA_PARAMS(0, nullptr) }; // 599992908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_ChoicesColumns = { "ChoicesColumns", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogData, ChoicesColumns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesColumns_MetaData), NewProp_ChoicesColumns_MetaData) }; // 599992908
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_PortalExits_Inner = { "PortalExits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChoiceData, METADATA_PARAMS(0, nullptr) }; // 2446020866
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_PortalExits = { "PortalExits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogData, PortalExits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalExits_MetaData), NewProp_PortalExits_MetaData) }; // 2446020866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_ChoicesColumns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_ChoicesColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_PortalExits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogData_Statics::NewProp_PortalExits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"DialogData",
	Z_Construct_UScriptStruct_FDialogData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogData_Statics::PropPointers),
	sizeof(FDialogData),
	alignof(FDialogData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogData.InnerSingleton, Z_Construct_UScriptStruct_FDialogData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogData.InnerSingleton;
}
// End ScriptStruct FDialogData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChoiceType_StaticEnum, TEXT("EChoiceType"), &Z_Registration_Info_UEnum_EChoiceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 561712770U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptionData::StaticStruct, Z_Construct_UScriptStruct_FOptionData_Statics::NewStructOps, TEXT("OptionData"), &Z_Registration_Info_UScriptStruct_OptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionData), 3250441200U) },
		{ FChoiceData::StaticStruct, Z_Construct_UScriptStruct_FChoiceData_Statics::NewStructOps, TEXT("ChoiceData"), &Z_Registration_Info_UScriptStruct_ChoiceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChoiceData), 2446020866U) },
		{ FChoicesColumn::StaticStruct, Z_Construct_UScriptStruct_FChoicesColumn_Statics::NewStructOps, TEXT("ChoicesColumn"), &Z_Registration_Info_UScriptStruct_ChoicesColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChoicesColumn), 599992908U) },
		{ FDialogData::StaticStruct, Z_Construct_UScriptStruct_FDialogData_Statics::NewStructOps, TEXT("DialogData"), &Z_Registration_Info_UScriptStruct_DialogData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogData), 817624703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_1190142806(TEXT("/Script/VNM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ChoiceData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
