// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Common/VNMDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMDataStructs() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseCharacterDisplayedData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FCharacter3DDisplayedData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDisplayedData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogImageData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogSceneData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FGameSnapshot();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FVNMBaseData();
// End Cross Module References

// Begin ScriptStruct FBaseCharacterDisplayedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData;
class UScriptStruct* FBaseCharacterDisplayedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseCharacterDisplayedData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("BaseCharacterDisplayedData"));
	}
	return Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FBaseCharacterDisplayedData>()
{
	return FBaseCharacterDisplayedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseCharacterDisplayedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseCharacterDisplayedData, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseCharacterDisplayedData, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::NewProp_EmotionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"BaseCharacterDisplayedData",
	Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::PropPointers),
	sizeof(FBaseCharacterDisplayedData),
	alignof(FBaseCharacterDisplayedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseCharacterDisplayedData()
{
	if (!Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.InnerSingleton, Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData.InnerSingleton;
}
// End ScriptStruct FBaseCharacterDisplayedData

// Begin ScriptStruct FCharacterDisplayedData
static_assert(std::is_polymorphic<FCharacterDisplayedData>() == std::is_polymorphic<FBaseCharacterDisplayedData>(), "USTRUCT FCharacterDisplayedData cannot be polymorphic unless super FBaseCharacterDisplayedData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterDisplayedData;
class UScriptStruct* FCharacterDisplayedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDisplayedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterDisplayedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDisplayedData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("CharacterDisplayedData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterDisplayedData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FCharacterDisplayedData>()
{
	return FCharacterDisplayedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFlipState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrderIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFlipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFlipState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrderIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDisplayedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDisplayedData, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDisplayedData, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterFlipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterFlipState = { "CharacterFlipState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDisplayedData, CharacterFlipState), Z_Construct_UEnum_VNM_ECharacterFlipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFlipState_MetaData), NewProp_CharacterFlipState_MetaData) }; // 3767235229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_ZOrderIndex = { "ZOrderIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDisplayedData, ZOrderIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrderIndex_MetaData), NewProp_ZOrderIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers_ValueProp = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers_Key_KeyProp = { "Layers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDisplayedData, Layers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterFlipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_CharacterFlipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_ZOrderIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FBaseCharacterDisplayedData,
	&NewStructOps,
	"CharacterDisplayedData",
	Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::PropPointers),
	sizeof(FCharacterDisplayedData),
	alignof(FCharacterDisplayedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterDisplayedData()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDisplayedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterDisplayedData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterDisplayedData.InnerSingleton;
}
// End ScriptStruct FCharacterDisplayedData

// Begin ScriptStruct FCharacter3DDisplayedData
static_assert(std::is_polymorphic<FCharacter3DDisplayedData>() == std::is_polymorphic<FBaseCharacterDisplayedData>(), "USTRUCT FCharacter3DDisplayedData cannot be polymorphic unless super FBaseCharacterDisplayedData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Character3DDisplayedData;
class UScriptStruct* FCharacter3DDisplayedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Character3DDisplayedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Character3DDisplayedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacter3DDisplayedData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("Character3DDisplayedData"));
	}
	return Z_Registration_Info_UScriptStruct_Character3DDisplayedData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FCharacter3DDisplayedData>()
{
	return FCharacter3DDisplayedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacter3DDisplayedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacter3DDisplayedData, SpawnLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::NewProp_SpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FBaseCharacterDisplayedData,
	&NewStructOps,
	"Character3DDisplayedData",
	Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::PropPointers),
	sizeof(FCharacter3DDisplayedData),
	alignof(FCharacter3DDisplayedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacter3DDisplayedData()
{
	if (!Z_Registration_Info_UScriptStruct_Character3DDisplayedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Character3DDisplayedData.InnerSingleton, Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Character3DDisplayedData.InnerSingleton;
}
// End ScriptStruct FCharacter3DDisplayedData

// Begin ScriptStruct FDialogSceneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogSceneData;
class UScriptStruct* FDialogSceneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogSceneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogSceneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogSceneData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogSceneData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogSceneData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogSceneData>()
{
	return FDialogSceneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogSceneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogSceneData_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneData, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogSceneData_Statics::NewProp_ActiveCamera = { "ActiveCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneData, ActiveCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCamera_MetaData), NewProp_ActiveCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneData_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneData_Statics::NewProp_ActiveCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogSceneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"DialogSceneData",
	Z_Construct_UScriptStruct_FDialogSceneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneData_Statics::PropPointers),
	sizeof(FDialogSceneData),
	alignof(FDialogSceneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogSceneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogSceneData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogSceneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogSceneData.InnerSingleton, Z_Construct_UScriptStruct_FDialogSceneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogSceneData.InnerSingleton;
}
// End ScriptStruct FDialogSceneData

// Begin ScriptStruct FDialogImageData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogImageData;
class UScriptStruct* FDialogImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogImageData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogImageData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogImageData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogImageData>()
{
	return FDialogImageData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogImageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImageId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogImageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageData, ImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageId_MetaData), NewProp_ImageId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers_ValueProp = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers_Key_KeyProp = { "Layers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageData, Layers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogImageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_ImageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageData_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogImageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"DialogImageData",
	Z_Construct_UScriptStruct_FDialogImageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageData_Statics::PropPointers),
	sizeof(FDialogImageData),
	alignof(FDialogImageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogImageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogImageData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogImageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogImageData.InnerSingleton, Z_Construct_UScriptStruct_FDialogImageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogImageData.InnerSingleton;
}
// End ScriptStruct FDialogImageData

// Begin ScriptStruct FVNMBaseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VNMBaseData;
class UScriptStruct* FVNMBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VNMBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VNMBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVNMBaseData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("VNMBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_VNMBaseData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FVNMBaseData>()
{
	return FVNMBaseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVNMBaseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogObjectToContinueIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeToContinueGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Characters3DDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogScene_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDialogTextDisplayedAtChoice_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTalkingCharacterIdAtChoice_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDialogBoxVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDialogBoxVisibilityInAutoMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVariablesValuesJson_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogObjectToContinueIn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeToContinueGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharactersDisplayed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersDisplayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Characters3DDisplayed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters3DDisplayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDialogScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CgDisplayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneBackgroundDisplayed;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LastDialogTextDisplayedAtChoice;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastTalkingCharacterIdAtChoice;
	static void NewProp_bIsDialogBoxVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDialogBoxVisible;
	static void NewProp_bIsDialogBoxVisibilityInAutoMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDialogBoxVisibilityInAutoMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalVariablesValuesJson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVNMBaseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_DialogObjectToContinueIn = { "DialogObjectToContinueIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, DialogObjectToContinueIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogObjectToContinueIn_MetaData), NewProp_DialogObjectToContinueIn_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_NodeToContinueGUID = { "NodeToContinueGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, NodeToContinueGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeToContinueGUID_MetaData), NewProp_NodeToContinueGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CharactersDisplayed_Inner = { "CharactersDisplayed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterDisplayedData, METADATA_PARAMS(0, nullptr) }; // 2387782287
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CharactersDisplayed = { "CharactersDisplayed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, CharactersDisplayed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersDisplayed_MetaData), NewProp_CharactersDisplayed_MetaData) }; // 2387782287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_Characters3DDisplayed_Inner = { "Characters3DDisplayed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacter3DDisplayedData, METADATA_PARAMS(0, nullptr) }; // 2001177688
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_Characters3DDisplayed = { "Characters3DDisplayed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, Characters3DDisplayed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Characters3DDisplayed_MetaData), NewProp_Characters3DDisplayed_MetaData) }; // 2001177688
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CurrentDialogScene = { "CurrentDialogScene", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, CurrentDialogScene), Z_Construct_UScriptStruct_FDialogSceneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogScene_MetaData), NewProp_CurrentDialogScene_MetaData) }; // 225937691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CgDisplayed = { "CgDisplayed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, CgDisplayed), Z_Construct_UScriptStruct_FDialogImageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDisplayed_MetaData), NewProp_CgDisplayed_MetaData) }; // 1953812645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_SceneBackgroundDisplayed = { "SceneBackgroundDisplayed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, SceneBackgroundDisplayed), Z_Construct_UScriptStruct_FDialogImageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundDisplayed_MetaData), NewProp_SceneBackgroundDisplayed_MetaData) }; // 1953812645
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LastDialogTextDisplayedAtChoice = { "LastDialogTextDisplayedAtChoice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, LastDialogTextDisplayedAtChoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDialogTextDisplayedAtChoice_MetaData), NewProp_LastDialogTextDisplayedAtChoice_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LastTalkingCharacterIdAtChoice = { "LastTalkingCharacterIdAtChoice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, LastTalkingCharacterIdAtChoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTalkingCharacterIdAtChoice_MetaData), NewProp_LastTalkingCharacterIdAtChoice_MetaData) };
void Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisible_SetBit(void* Obj)
{
	((FVNMBaseData*)Obj)->bIsDialogBoxVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisible = { "bIsDialogBoxVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVNMBaseData), &Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDialogBoxVisible_MetaData), NewProp_bIsDialogBoxVisible_MetaData) };
void Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisibilityInAutoMode_SetBit(void* Obj)
{
	((FVNMBaseData*)Obj)->bIsDialogBoxVisibilityInAutoMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisibilityInAutoMode = { "bIsDialogBoxVisibilityInAutoMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVNMBaseData), &Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisibilityInAutoMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDialogBoxVisibilityInAutoMode_MetaData), NewProp_bIsDialogBoxVisibilityInAutoMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LocalVariablesValuesJson = { "LocalVariablesValuesJson", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVNMBaseData, LocalVariablesValuesJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVariablesValuesJson_MetaData), NewProp_LocalVariablesValuesJson_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVNMBaseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_DialogObjectToContinueIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_NodeToContinueGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CharactersDisplayed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CharactersDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_Characters3DDisplayed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_Characters3DDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CurrentDialogScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_CgDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_SceneBackgroundDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LastDialogTextDisplayedAtChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LastTalkingCharacterIdAtChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_bIsDialogBoxVisibilityInAutoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewProp_LocalVariablesValuesJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVNMBaseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVNMBaseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"VNMBaseData",
	Z_Construct_UScriptStruct_FVNMBaseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVNMBaseData_Statics::PropPointers),
	sizeof(FVNMBaseData),
	alignof(FVNMBaseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVNMBaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVNMBaseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVNMBaseData()
{
	if (!Z_Registration_Info_UScriptStruct_VNMBaseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VNMBaseData.InnerSingleton, Z_Construct_UScriptStruct_FVNMBaseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VNMBaseData.InnerSingleton;
}
// End ScriptStruct FVNMBaseData

// Begin ScriptStruct FMemoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemoryData;
class UScriptStruct* FMemoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("MemoryData"));
	}
	return Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FMemoryData>()
{
	return FMemoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MemoryValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues_ValueProp = { "MemoryValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues_Key_KeyProp = { "MemoryValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues = { "MemoryValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, MemoryValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryValues_MetaData), NewProp_MemoryValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"MemoryData",
	Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers),
	sizeof(FMemoryData),
	alignof(FMemoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemoryData()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton, Z_Construct_UScriptStruct_FMemoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton;
}
// End ScriptStruct FMemoryData

// Begin ScriptStruct FGameSnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameSnapshot;
class UScriptStruct* FGameSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSnapshot, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("GameSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_GameSnapshot.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FGameSnapshot>()
{
	return FGameSnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMemories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogMemories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[] = {
		{ "Category", "GameSnapshot" },
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenamedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Common/VNMDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMemories_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterMemories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogMemories_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogMemories;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenamedCharacters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RenamedCharacters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RenamedCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_ActiveDialogData = { "ActiveDialogData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSnapshot, ActiveDialogData), Z_Construct_UScriptStruct_FVNMBaseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogData_MetaData), NewProp_ActiveDialogData_MetaData) }; // 2204327068
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories_ValueProp = { "CharacterMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMemoryData, METADATA_PARAMS(0, nullptr) }; // 3249818882
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories_Key_KeyProp = { "CharacterMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories = { "CharacterMemories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSnapshot, CharacterMemories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMemories_MetaData), NewProp_CharacterMemories_MetaData) }; // 3249818882
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories_ValueProp = { "DialogMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMemoryData, METADATA_PARAMS(0, nullptr) }; // 3249818882
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories_Key_KeyProp = { "DialogMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories = { "DialogMemories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSnapshot, DialogMemories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogMemories_MetaData), NewProp_DialogMemories_MetaData) }; // 3249818882
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSnapshot, AdditionalData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalData_MetaData), NewProp_AdditionalData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters_ValueProp = { "RenamedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters_Key_KeyProp = { "RenamedCharacters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters = { "RenamedCharacters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSnapshot, RenamedCharacters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenamedCharacters_MetaData), NewProp_RenamedCharacters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_ActiveDialogData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_CharacterMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_DialogMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_AdditionalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewProp_RenamedCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"GameSnapshot",
	Z_Construct_UScriptStruct_FGameSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSnapshot_Statics::PropPointers),
	sizeof(FGameSnapshot),
	alignof(FGameSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_GameSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FGameSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameSnapshot.InnerSingleton;
}
// End ScriptStruct FGameSnapshot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMDataStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBaseCharacterDisplayedData::StaticStruct, Z_Construct_UScriptStruct_FBaseCharacterDisplayedData_Statics::NewStructOps, TEXT("BaseCharacterDisplayedData"), &Z_Registration_Info_UScriptStruct_BaseCharacterDisplayedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseCharacterDisplayedData), 686956847U) },
		{ FCharacterDisplayedData::StaticStruct, Z_Construct_UScriptStruct_FCharacterDisplayedData_Statics::NewStructOps, TEXT("CharacterDisplayedData"), &Z_Registration_Info_UScriptStruct_CharacterDisplayedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterDisplayedData), 2387782287U) },
		{ FCharacter3DDisplayedData::StaticStruct, Z_Construct_UScriptStruct_FCharacter3DDisplayedData_Statics::NewStructOps, TEXT("Character3DDisplayedData"), &Z_Registration_Info_UScriptStruct_Character3DDisplayedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacter3DDisplayedData), 2001177688U) },
		{ FDialogSceneData::StaticStruct, Z_Construct_UScriptStruct_FDialogSceneData_Statics::NewStructOps, TEXT("DialogSceneData"), &Z_Registration_Info_UScriptStruct_DialogSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogSceneData), 225937691U) },
		{ FDialogImageData::StaticStruct, Z_Construct_UScriptStruct_FDialogImageData_Statics::NewStructOps, TEXT("DialogImageData"), &Z_Registration_Info_UScriptStruct_DialogImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogImageData), 1953812645U) },
		{ FVNMBaseData::StaticStruct, Z_Construct_UScriptStruct_FVNMBaseData_Statics::NewStructOps, TEXT("VNMBaseData"), &Z_Registration_Info_UScriptStruct_VNMBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVNMBaseData), 2204327068U) },
		{ FMemoryData::StaticStruct, Z_Construct_UScriptStruct_FMemoryData_Statics::NewStructOps, TEXT("MemoryData"), &Z_Registration_Info_UScriptStruct_MemoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemoryData), 3249818882U) },
		{ FGameSnapshot::StaticStruct, Z_Construct_UScriptStruct_FGameSnapshot_Statics::NewStructOps, TEXT("GameSnapshot"), &Z_Registration_Info_UScriptStruct_GameSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameSnapshot), 1892054901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMDataStructs_h_3101604855(TEXT("/Script/VNM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMDataStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Common_VNMDataStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
