// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/VNMSettings.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBaseSaveGame_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMSettings();
VNM_API UClass* Z_Construct_UClass_UVNMSettings_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EAutoSaveType();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UEnum* Z_Construct_UEnum_VNM_EDialogAudioType();
VNM_API UEnum* Z_Construct_UEnum_VNM_EMemoryType();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FActorIdentifier();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogAudioDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogImageDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogSceneDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageLayerDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FVisualNovelMachinerySettings();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverDefinition();
// End Cross Module References

// Begin ScriptStruct FActorIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorIdentifier;
class UScriptStruct* FActorIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorIdentifier, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ActorIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_ActorIdentifier.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FActorIdentifier>()
{
	return FActorIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInternalName_MetaData[] = {
		{ "Category", "Actor Identifier" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLabel_MetaData[] = {
		{ "Category", "Actor Identifier" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorInternalName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorIdentifier_Statics::NewProp_ActorInternalName = { "ActorInternalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorIdentifier, ActorInternalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInternalName_MetaData), NewProp_ActorInternalName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorIdentifier_Statics::NewProp_ActorLabel = { "ActorLabel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorIdentifier, ActorLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLabel_MetaData), NewProp_ActorLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorIdentifier_Statics::NewProp_ActorInternalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorIdentifier_Statics::NewProp_ActorLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ActorIdentifier",
	Z_Construct_UScriptStruct_FActorIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorIdentifier_Statics::PropPointers),
	sizeof(FActorIdentifier),
	alignof(FActorIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_ActorIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FActorIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorIdentifier.InnerSingleton;
}
// End ScriptStruct FActorIdentifier

// Begin Enum EMemoryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMemoryType;
static UEnum* EMemoryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMemoryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMemoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EMemoryType, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EMemoryType"));
	}
	return Z_Registration_Info_UEnum_EMemoryType.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EMemoryType>()
{
	return EMemoryType_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EMemoryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EMemoryType::Bool" },
		{ "Byte.Name", "EMemoryType::Byte" },
		{ "Float.Name", "EMemoryType::Float" },
		{ "Integer.Name", "EMemoryType::Integer" },
		{ "Integer64.Name", "EMemoryType::Integer64" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "String.Name", "EMemoryType::String" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMemoryType::Bool", (int64)EMemoryType::Bool },
		{ "EMemoryType::Integer", (int64)EMemoryType::Integer },
		{ "EMemoryType::Integer64", (int64)EMemoryType::Integer64 },
		{ "EMemoryType::Float", (int64)EMemoryType::Float },
		{ "EMemoryType::String", (int64)EMemoryType::String },
		{ "EMemoryType::Byte", (int64)EMemoryType::Byte },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EMemoryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EMemoryType",
	"EMemoryType",
	Z_Construct_UEnum_VNM_EMemoryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EMemoryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EMemoryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EMemoryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EMemoryType()
{
	if (!Z_Registration_Info_UEnum_EMemoryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMemoryType.InnerSingleton, Z_Construct_UEnum_VNM_EMemoryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMemoryType.InnerSingleton;
}
// End Enum EMemoryType

// Begin ScriptStruct FImageDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageDefinition;
class UScriptStruct* FImageDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ImageDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ImageDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FImageDefinition>()
{
	return FImageDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "AllowedClasses", "Texture2D,MaterialInterface" },
		{ "Category", "Image" },
		{ "DisallowedClasses", "MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageDefinition, Image), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageDefinition, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageSize_MetaData), NewProp_ImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageDefinition, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_ImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageDefinition_Statics::NewProp_ColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ImageDefinition",
	Z_Construct_UScriptStruct_FImageDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDefinition_Statics::PropPointers),
	sizeof(FImageDefinition),
	alignof(FImageDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ImageDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageDefinition.InnerSingleton, Z_Construct_UScriptStruct_FImageDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageDefinition.InnerSingleton;
}
// End ScriptStruct FImageDefinition

// Begin ScriptStruct FMemoryDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemoryDefinition;
class UScriptStruct* FMemoryDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemoryDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("MemoryDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_MemoryDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FMemoryDefinition>()
{
	return FMemoryDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemoryDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryId_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_MemoryId = { "MemoryId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryDefinition, MemoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryId_MetaData), NewProp_MemoryId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryDefinition, Type), Z_Construct_UEnum_VNM_EMemoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3156312681
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_MemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"MemoryDefinition",
	Z_Construct_UScriptStruct_FMemoryDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryDefinition_Statics::PropPointers),
	sizeof(FMemoryDefinition),
	alignof(FMemoryDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemoryDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemoryDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemoryDefinition.InnerSingleton, Z_Construct_UScriptStruct_FMemoryDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemoryDefinition.InnerSingleton;
}
// End ScriptStruct FMemoryDefinition

// Begin ScriptStruct FImageLayerDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageLayerDefinition;
class UScriptStruct* FImageLayerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageLayerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageLayerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageLayerDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ImageLayerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ImageLayerDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FImageLayerDefinition>()
{
	return FImageLayerDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageLayerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerImagePerId_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerImagePerId_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerImagePerId_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerImagePerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageLayerDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageLayerDefinition, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageLayerDefinition, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId_ValueProp = { "LayerImagePerId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(0, nullptr) }; // 2338445570
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId_Key_KeyProp = { "LayerImagePerId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId = { "LayerImagePerId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageLayerDefinition, LayerImagePerId), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerImagePerId_MetaData), NewProp_LayerImagePerId_MetaData) }; // 2338445570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewProp_LayerImagePerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ImageLayerDefinition",
	Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::PropPointers),
	sizeof(FImageLayerDefinition),
	alignof(FImageLayerDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageLayerDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ImageLayerDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageLayerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageLayerDefinition.InnerSingleton;
}
// End ScriptStruct FImageLayerDefinition

// Begin ScriptStruct FDialogAudioDefinition
static_assert(std::is_polymorphic<FDialogAudioDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogAudioDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogAudioDefinition;
class UScriptStruct* FDialogAudioDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogAudioDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogAudioDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogAudioDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogAudioDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DialogAudioDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogAudioDefinition>()
{
	return FDialogAudioDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAudioId_MetaData[] = {
		{ "Category", "Dialog Audio" },
		{ "Comment", "// The internal ID identifying the audio\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying the audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioType_MetaData[] = {
		{ "Category", "Dialog Audio" },
		{ "Comment", "// The audio type\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The audio type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioObject_MetaData[] = {
		{ "Category", "Dialog Audio" },
		{ "Comment", "// The actual audio object\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual audio object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogAudioId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogAudioDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_DialogAudioId = { "DialogAudioId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogAudioDefinition, DialogAudioId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAudioId_MetaData), NewProp_DialogAudioId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioType = { "AudioType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogAudioDefinition, AudioType), Z_Construct_UEnum_VNM_EDialogAudioType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioType_MetaData), NewProp_AudioType_MetaData) }; // 138817942
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioObject = { "AudioObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogAudioDefinition, AudioObject), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioObject_MetaData), NewProp_AudioObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_DialogAudioId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewProp_AudioObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogAudioDefinition",
	Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::PropPointers),
	sizeof(FDialogAudioDefinition),
	alignof(FDialogAudioDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogAudioDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_DialogAudioDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogAudioDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogAudioDefinition.InnerSingleton;
}
// End ScriptStruct FDialogAudioDefinition

// Begin ScriptStruct FVoiceOverDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceOverDefinition;
class UScriptStruct* FVoiceOverDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceOverDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceOverDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceOverDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("VoiceOverDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceOverDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FVoiceOverDefinition>()
{
	return FVoiceOverDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAudioId_MetaData[] = {
		{ "Category", "Dialog Audio" },
		{ "Comment", "// The internal ID identifying the audio\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying the audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioObject_MetaData[] = {
		{ "Category", "Dialog Audio" },
		{ "Comment", "// The actual audio object\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual audio object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogAudioId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceOverDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::NewProp_DialogAudioId = { "DialogAudioId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceOverDefinition, DialogAudioId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAudioId_MetaData), NewProp_DialogAudioId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::NewProp_AudioObject = { "AudioObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceOverDefinition, AudioObject), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioObject_MetaData), NewProp_AudioObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::NewProp_DialogAudioId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::NewProp_AudioObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"VoiceOverDefinition",
	Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::PropPointers),
	sizeof(FVoiceOverDefinition),
	alignof(FVoiceOverDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceOverDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceOverDefinition.InnerSingleton, Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoiceOverDefinition.InnerSingleton;
}
// End ScriptStruct FVoiceOverDefinition

// Begin ScriptStruct FCharacterDefinition
static_assert(std::is_polymorphic<FCharacterDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterDefinition;
class UScriptStruct* FCharacterDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("CharacterDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FCharacterDefinition>()
{
	return FCharacterDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// The internal ID identifying the character \n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayName_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// The friendly name of the character\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The friendly name of the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayColor_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// The color of the character name text in the dialog box widget\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The color of the character name text in the dialog box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogBackgroundOverride_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Override the dialog box background when this character is talking\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Override the dialog box background when this character is talking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDescription_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// A friendly description of the character, or your notes about the character\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "A friendly description of the character, or your notes about the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterImagePerEmotion_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// The actual texture used by the character for a specific emotion ID\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual texture used by the character for a specific emotion ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterImageLayers_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Array of Layer information for this specific character\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "TitleProperty", "LayerId" },
		{ "ToolTip", "Array of Layer information for this specific character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Skeletal Mesh displayed in 3D world\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Skeletal Mesh displayed in 3D world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimationPerEmotion_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Animation asset used with skeletal mesh in 3D world\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Animation asset used with skeletal mesh in 3D world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMemoryDefinitions_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Array of Memories that are relevant to this character\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Array of Memories that are relevant to this character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceOverDefinitions_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterDisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDisplayColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogBackgroundOverride;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterImagePerEmotion_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterImagePerEmotion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterImagePerEmotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterImageLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterImageLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterImageLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimationPerEmotion_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterAnimationPerEmotion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterAnimationPerEmotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMemoryDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterMemoryDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceOverDefinitions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceOverDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VoiceOverDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDisplayName = { "CharacterDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDisplayName_MetaData), NewProp_CharacterDisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDisplayColor = { "CharacterDisplayColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterDisplayColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDisplayColor_MetaData), NewProp_CharacterDisplayColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_DialogBackgroundOverride = { "DialogBackgroundOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, DialogBackgroundOverride), Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogBackgroundOverride_MetaData), NewProp_DialogBackgroundOverride_MetaData) }; // 2338445570
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDescription = { "CharacterDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDescription_MetaData), NewProp_CharacterDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion_ValueProp = { "CharacterImagePerEmotion", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(0, nullptr) }; // 2338445570
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion_Key_KeyProp = { "CharacterImagePerEmotion_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion = { "CharacterImagePerEmotion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterImagePerEmotion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterImagePerEmotion_MetaData), NewProp_CharacterImagePerEmotion_MetaData) }; // 2338445570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers_ValueProp = { "CharacterImageLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FImageLayerDefinition, METADATA_PARAMS(0, nullptr) }; // 4053354881
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers_Key_KeyProp = { "CharacterImageLayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers = { "CharacterImageLayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterImageLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterImageLayers_MetaData), NewProp_CharacterImageLayers_MetaData) }; // 4053354881
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMesh_MetaData), NewProp_CharacterMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion_ValueProp = { "CharacterAnimationPerEmotion", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion_Key_KeyProp = { "CharacterAnimationPerEmotion_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion = { "CharacterAnimationPerEmotion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterAnimationPerEmotion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimationPerEmotion_MetaData), NewProp_CharacterAnimationPerEmotion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMemoryDefinitions_Inner = { "CharacterMemoryDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMemoryDefinitions = { "CharacterMemoryDefinitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, CharacterMemoryDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMemoryDefinitions_MetaData), NewProp_CharacterMemoryDefinitions_MetaData) }; // 392111201
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions_ValueProp = { "VoiceOverDefinitions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVoiceOverDefinition, METADATA_PARAMS(0, nullptr) }; // 3156937202
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions_Key_KeyProp = { "VoiceOverDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions = { "VoiceOverDefinitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefinition, VoiceOverDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceOverDefinitions_MetaData), NewProp_VoiceOverDefinitions_MetaData) }; // 3156937202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDisplayColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_DialogBackgroundOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImagePerEmotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterImageLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterAnimationPerEmotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMemoryDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_CharacterMemoryDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewProp_VoiceOverDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CharacterDefinition",
	Z_Construct_UScriptStruct_FCharacterDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefinition_Statics::PropPointers),
	sizeof(FCharacterDefinition),
	alignof(FCharacterDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCharacterDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterDefinition.InnerSingleton;
}
// End ScriptStruct FCharacterDefinition

// Begin ScriptStruct FDialogImageDefinition
static_assert(std::is_polymorphic<FDialogImageDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogImageDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogImageDefinition;
class UScriptStruct* FDialogImageDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogImageDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogImageDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogImageDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogImageDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DialogImageDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogImageDefinition>()
{
	return FDialogImageDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogImageDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogImageId_MetaData[] = {
		{ "Category", "Dialog Image" },
		{ "Comment", "// The internal ID identifying the image\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying the image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogImage_MetaData[] = {
		{ "Category", "Dialog Image" },
		{ "Comment", "// The actual image texture\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual image texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogImageGroupId_MetaData[] = {
		{ "Category", "Dialog Image" },
		{ "Comment", "// The group id of the dialog image\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The group id of the dialog image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogImageLayers_MetaData[] = {
		{ "Category", "Dialog Image" },
		{ "Comment", "// Array of Layer information for this specific image\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "TitleProperty", "LayerId" },
		{ "ToolTip", "Array of Layer information for this specific image" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogImageId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogImage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogImageGroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogImageLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogImageLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogImageLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogImageDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageId = { "DialogImageId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageDefinition, DialogImageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogImageId_MetaData), NewProp_DialogImageId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImage = { "DialogImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageDefinition, DialogImage), Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogImage_MetaData), NewProp_DialogImage_MetaData) }; // 2338445570
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageGroupId = { "DialogImageGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageDefinition, DialogImageGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogImageGroupId_MetaData), NewProp_DialogImageGroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers_ValueProp = { "DialogImageLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FImageLayerDefinition, METADATA_PARAMS(0, nullptr) }; // 4053354881
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers_Key_KeyProp = { "DialogImageLayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers = { "DialogImageLayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogImageDefinition, DialogImageLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogImageLayers_MetaData), NewProp_DialogImageLayers_MetaData) }; // 4053354881
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageGroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewProp_DialogImageLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogImageDefinition",
	Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::PropPointers),
	sizeof(FDialogImageDefinition),
	alignof(FDialogImageDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogImageDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_DialogImageDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogImageDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogImageDefinition.InnerSingleton;
}
// End ScriptStruct FDialogImageDefinition

// Begin ScriptStruct FDialogSceneDefinition
static_assert(std::is_polymorphic<FDialogSceneDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogSceneDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogSceneDefinition;
class UScriptStruct* FDialogSceneDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogSceneDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogSceneDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogSceneDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogSceneDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DialogSceneDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogSceneDefinition>()
{
	return FDialogSceneDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "Comment", "// The internal ID identifying the scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying the scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogScene_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "Comment", "// The actual level\n// IMPORTANT: YOU HAVE TO ADD THIS LEVEL TO YOUR INGAME LEVEL AS A SUBLEVEL, OTHERWISE IT CAN'T BE STREAMED IN\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual level\nIMPORTANT: YOU HAVE TO ADD THIS LEVEL TO YOUR INGAME LEVEL AS A SUBLEVEL, OTHERWISE IT CAN'T BE STREAMED IN" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogCameraNames_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "Comment", "// Cameras in the dialog scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Cameras in the dialog scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSpawnLocationNames_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "Comment", "// Spawn Locations for 3D characters in the dialog scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Spawn Locations for 3D characters in the dialog scene" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogCameraNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogCameraNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogSpawnLocationNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogSpawnLocationNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogSceneDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneDefinition, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogScene = { "DialogScene", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneDefinition, DialogScene), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogScene_MetaData), NewProp_DialogScene_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogCameraNames_Inner = { "DialogCameraNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogCameraNames = { "DialogCameraNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneDefinition, DialogCameraNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogCameraNames_MetaData), NewProp_DialogCameraNames_MetaData) }; // 1794987361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSpawnLocationNames_Inner = { "DialogSpawnLocationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSpawnLocationNames = { "DialogSpawnLocationNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogSceneDefinition, DialogSpawnLocationNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSpawnLocationNames_MetaData), NewProp_DialogSpawnLocationNames_MetaData) }; // 1794987361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogCameraNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogCameraNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSpawnLocationNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewProp_DialogSpawnLocationNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogSceneDefinition",
	Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::PropPointers),
	sizeof(FDialogSceneDefinition),
	alignof(FDialogSceneDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogSceneDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_DialogSceneDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogSceneDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogSceneDefinition.InnerSingleton;
}
// End ScriptStruct FDialogSceneDefinition

// Begin ScriptStruct FDialogDefinition
static_assert(std::is_polymorphic<FDialogDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogDefinition;
class UScriptStruct* FDialogDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogDefinition, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DialogDefinition.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogDefinition>()
{
	return FDialogDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueId_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// The internal ID identifying this dialog scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The internal ID identifying this dialog scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// The friendly name of the dialog scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The friendly name of the dialog scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueObjectClass_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// The actual Dialog Blueprint\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "The actual Dialog Blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueDescription_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// Text to describe what is happening in the scene, or even your notes about this scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Text to describe what is happening in the scene, or even your notes about this scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogBackgroundOverride_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// Override the default dialog box background when this dialog is active\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Override the default dialog box background when this dialog is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogMemoryDefinitions_MetaData[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// Array of Memories that are relevant to this dialog scene\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Array of Memories that are relevant to this dialog scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceOverDefinitions_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueObjectClass;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogBackgroundOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogMemoryDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogMemoryDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceOverDefinitions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceOverDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VoiceOverDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueId = { "DialogueId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueId_MetaData), NewProp_DialogueId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueObjectClass = { "DialogueObjectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogueObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueObjectClass_MetaData), NewProp_DialogueObjectClass_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueDescription = { "DialogueDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogueDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueDescription_MetaData), NewProp_DialogueDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogBackgroundOverride = { "DialogBackgroundOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogBackgroundOverride), Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogBackgroundOverride_MetaData), NewProp_DialogBackgroundOverride_MetaData) }; // 2338445570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogMemoryDefinitions_Inner = { "DialogMemoryDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogMemoryDefinitions = { "DialogMemoryDefinitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, DialogMemoryDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogMemoryDefinitions_MetaData), NewProp_DialogMemoryDefinitions_MetaData) }; // 392111201
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions_ValueProp = { "VoiceOverDefinitions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVoiceOverDefinition, METADATA_PARAMS(0, nullptr) }; // 3156937202
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions_Key_KeyProp = { "VoiceOverDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions = { "VoiceOverDefinitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogDefinition, VoiceOverDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceOverDefinitions_MetaData), NewProp_VoiceOverDefinitions_MetaData) }; // 3156937202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogueDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogBackgroundOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogMemoryDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_DialogMemoryDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewProp_VoiceOverDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogDefinition",
	Z_Construct_UScriptStruct_FDialogDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogDefinition_Statics::PropPointers),
	sizeof(FDialogDefinition),
	alignof(FDialogDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_DialogDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDialogDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogDefinition.InnerSingleton;
}
// End ScriptStruct FDialogDefinition

// Begin Enum EAutoSaveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoSaveType;
static UEnum* EAutoSaveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoSaveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoSaveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EAutoSaveType, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EAutoSaveType"));
	}
	return Z_Registration_Info_UEnum_EAutoSaveType.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EAutoSaveType>()
{
	return EAutoSaveType_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EAutoSaveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AUTOMATIC.Name", "EAutoSaveType::AUTOMATIC" },
		{ "BlueprintType", "true" },
		{ "MANUAL.Name", "EAutoSaveType::MANUAL" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoSaveType::MANUAL", (int64)EAutoSaveType::MANUAL },
		{ "EAutoSaveType::AUTOMATIC", (int64)EAutoSaveType::AUTOMATIC },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EAutoSaveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EAutoSaveType",
	"EAutoSaveType",
	Z_Construct_UEnum_VNM_EAutoSaveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EAutoSaveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EAutoSaveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EAutoSaveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EAutoSaveType()
{
	if (!Z_Registration_Info_UEnum_EAutoSaveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoSaveType.InnerSingleton, Z_Construct_UEnum_VNM_EAutoSaveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoSaveType.InnerSingleton;
}
// End Enum EAutoSaveType

// Begin ScriptStruct FVisualNovelMachinerySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings;
class UScriptStruct* FVisualNovelMachinerySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisualNovelMachinerySettings, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("VisualNovelMachinerySettings"));
	}
	return Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FVisualNovelMachinerySettings>()
{
	return FVisualNovelMachinerySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinitonsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDefinitonsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundDefinitonsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneDefinitionsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAudioDefinitionsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogDefinitonsTable_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameLevelName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuLevelName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistantSaveGameClass_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSaveFileName_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConfirmBeforeDeletingSaveFile_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[] = {
		{ "Category", "Dialog Scene" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositionValues_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Values need to be between 0.0 and 1.0\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Values need to be between 0.0 and 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPositionValues_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "// Values need to be between 0.0 and 1.0\n" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ToolTip", "Values need to be between 0.0 and 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTypewriterEffectActive_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeWritingSpeed_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoForwardTime_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutostartDialog_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutostartFirstDialogIfNoDialogIsFound_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveType_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveIntervalInSeconds_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinitonsTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CgDefinitonsTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneBackgroundDefinitonsTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogSceneDefinitionsTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogAudioDefinitionsTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogDefinitonsTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGameLevelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MainMenuLevelName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PersistantSaveGameClass;
	static void NewProp_bGenerateSaveFileName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSaveFileName;
	static void NewProp_bConfirmBeforeDeletingSaveFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConfirmBeforeDeletingSaveFile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterPositionValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositionValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositionValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterPositionValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCharacterPositionValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPositionValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomCharacterPositionValues;
	static void NewProp_bTypewriterEffectActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTypewriterEffectActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeWritingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoForwardTime;
	static void NewProp_bAutostartDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutostartDialog;
	static void NewProp_bAutostartFirstDialogIfNoDialogIsFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutostartFirstDialogIfNoDialogIsFound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoSaveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoSaveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSaveIntervalInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisualNovelMachinerySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterDefinitonsTable = { "CharacterDefinitonsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, CharacterDefinitonsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinitonsTable_MetaData), NewProp_CharacterDefinitonsTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CgDefinitonsTable = { "CgDefinitonsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, CgDefinitonsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDefinitonsTable_MetaData), NewProp_CgDefinitonsTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_SceneBackgroundDefinitonsTable = { "SceneBackgroundDefinitonsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, SceneBackgroundDefinitonsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundDefinitonsTable_MetaData), NewProp_SceneBackgroundDefinitonsTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogSceneDefinitionsTable = { "DialogSceneDefinitionsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, DialogSceneDefinitionsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneDefinitionsTable_MetaData), NewProp_DialogSceneDefinitionsTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogAudioDefinitionsTable = { "DialogAudioDefinitionsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, DialogAudioDefinitionsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAudioDefinitionsTable_MetaData), NewProp_DialogAudioDefinitionsTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogDefinitonsTable = { "DialogDefinitonsTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, DialogDefinitonsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogDefinitonsTable_MetaData), NewProp_DialogDefinitonsTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_InGameLevelName = { "InGameLevelName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, InGameLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameLevelName_MetaData), NewProp_InGameLevelName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_MainMenuLevelName = { "MainMenuLevelName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, MainMenuLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuLevelName_MetaData), NewProp_MainMenuLevelName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMBaseSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameClass_MetaData), NewProp_SaveGameClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_PersistantSaveGameClass = { "PersistantSaveGameClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, PersistantSaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistantSaveGameClass_MetaData), NewProp_PersistantSaveGameClass_MetaData) };
void Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bGenerateSaveFileName_SetBit(void* Obj)
{
	((FVisualNovelMachinerySettings*)Obj)->bGenerateSaveFileName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bGenerateSaveFileName = { "bGenerateSaveFileName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVisualNovelMachinerySettings), &Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bGenerateSaveFileName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateSaveFileName_MetaData), NewProp_bGenerateSaveFileName_MetaData) };
void Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bConfirmBeforeDeletingSaveFile_SetBit(void* Obj)
{
	((FVisualNovelMachinerySettings*)Obj)->bConfirmBeforeDeletingSaveFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bConfirmBeforeDeletingSaveFile = { "bConfirmBeforeDeletingSaveFile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVisualNovelMachinerySettings), &Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bConfirmBeforeDeletingSaveFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConfirmBeforeDeletingSaveFile_MetaData), NewProp_bConfirmBeforeDeletingSaveFile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, CameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraClass_MetaData), NewProp_CameraClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_ValueProp = { "CharacterPositionValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_Key_KeyProp = { "CharacterPositionValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(0, nullptr) }; // 2277953573
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues = { "CharacterPositionValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, CharacterPositionValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositionValues_MetaData), NewProp_CharacterPositionValues_MetaData) }; // 2277953573
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues_ValueProp = { "CustomCharacterPositionValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues_Key_KeyProp = { "CustomCharacterPositionValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues = { "CustomCharacterPositionValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, CustomCharacterPositionValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPositionValues_MetaData), NewProp_CustomCharacterPositionValues_MetaData) };
void Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bTypewriterEffectActive_SetBit(void* Obj)
{
	((FVisualNovelMachinerySettings*)Obj)->bTypewriterEffectActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bTypewriterEffectActive = { "bTypewriterEffectActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVisualNovelMachinerySettings), &Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bTypewriterEffectActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTypewriterEffectActive_MetaData), NewProp_bTypewriterEffectActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_TypeWritingSpeed = { "TypeWritingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, TypeWritingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeWritingSpeed_MetaData), NewProp_TypeWritingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoForwardTime = { "AutoForwardTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, AutoForwardTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoForwardTime_MetaData), NewProp_AutoForwardTime_MetaData) };
void Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartDialog_SetBit(void* Obj)
{
	((FVisualNovelMachinerySettings*)Obj)->bAutostartDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartDialog = { "bAutostartDialog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVisualNovelMachinerySettings), &Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutostartDialog_MetaData), NewProp_bAutostartDialog_MetaData) };
void Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartFirstDialogIfNoDialogIsFound_SetBit(void* Obj)
{
	((FVisualNovelMachinerySettings*)Obj)->bAutostartFirstDialogIfNoDialogIsFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartFirstDialogIfNoDialogIsFound = { "bAutostartFirstDialogIfNoDialogIsFound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVisualNovelMachinerySettings), &Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartFirstDialogIfNoDialogIsFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutostartFirstDialogIfNoDialogIsFound_MetaData), NewProp_bAutostartFirstDialogIfNoDialogIsFound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveType = { "AutoSaveType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, AutoSaveType), Z_Construct_UEnum_VNM_EAutoSaveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveType_MetaData), NewProp_AutoSaveType_MetaData) }; // 4282590865
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveIntervalInSeconds = { "AutoSaveIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisualNovelMachinerySettings, AutoSaveIntervalInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveIntervalInSeconds_MetaData), NewProp_AutoSaveIntervalInSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterDefinitonsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CgDefinitonsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_SceneBackgroundDefinitonsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogSceneDefinitionsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogAudioDefinitionsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_DialogDefinitonsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_InGameLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_MainMenuLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_PersistantSaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bGenerateSaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bConfirmBeforeDeletingSaveFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CameraClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CharacterPositionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_CustomCharacterPositionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bTypewriterEffectActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_TypeWritingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoForwardTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_bAutostartFirstDialogIfNoDialogIsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewProp_AutoSaveIntervalInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"VisualNovelMachinerySettings",
	Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::PropPointers),
	sizeof(FVisualNovelMachinerySettings),
	alignof(FVisualNovelMachinerySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVisualNovelMachinerySettings()
{
	if (!Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.InnerSingleton, Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings.InnerSingleton;
}
// End ScriptStruct FVisualNovelMachinerySettings

// Begin Class UVNMSettings Function GetBackgroundMusicIds
struct Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics
{
	struct VNMSettings_eventGetBackgroundMusicIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetBackgroundMusicIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetBackgroundMusicIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::VNMSettings_eventGetBackgroundMusicIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::VNMSettings_eventGetBackgroundMusicIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetBackgroundMusicIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetBackgroundMusicIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetBackgroundMusicIds

// Begin Class UVNMSettings Function GetBackgroundMusicIdsAsString
struct Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics
{
	struct VNMSettings_eventGetBackgroundMusicIdsAsString_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetBackgroundMusicIdsAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetBackgroundMusicIdsAsString", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::VNMSettings_eventGetBackgroundMusicIdsAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::VNMSettings_eventGetBackgroundMusicIdsAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetBackgroundMusicIdsAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetBackgroundMusicIdsAsString();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetBackgroundMusicIdsAsString

// Begin Class UVNMSettings Function GetCgDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics
{
	struct VNMSettings_eventGetCgDefinitionById_Parms
	{
		FName CgId;
		FDialogImageDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgDefinitionById_Parms, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(0, nullptr) }; // 1970769294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::VNMSettings_eventGetCgDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::VNMSettings_eventGetCgDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CgId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogImageDefinition*)Z_Param__Result=P_THIS->GetCgDefinitionById(Z_Param_Out_CgId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgDefinitionById

// Begin Class UVNMSettings Function GetCgDefinitions
struct Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics
{
	struct VNMSettings_eventGetCgDefinitions_Parms
	{
		TArray<FDialogImageDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(0, nullptr) }; // 1970769294
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgDefinitions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1970769294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgDefinitions", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::VNMSettings_eventGetCgDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::VNMSettings_eventGetCgDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogImageDefinition>*)Z_Param__Result=P_THIS->GetCgDefinitions();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgDefinitions

// Begin Class UVNMSettings Function GetCgGroupIds
struct Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics
{
	struct VNMSettings_eventGetCgGroupIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgGroupIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgGroupIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::VNMSettings_eventGetCgGroupIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::VNMSettings_eventGetCgGroupIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgGroupIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgGroupIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgGroupIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCgGroupIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgGroupIds

// Begin Class UVNMSettings Function GetCgIds
struct Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics
{
	struct VNMSettings_eventGetCgIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::VNMSettings_eventGetCgIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::VNMSettings_eventGetCgIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCgIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgIds

// Begin Class UVNMSettings Function GetCgIdsByGroupId
struct Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics
{
	struct VNMSettings_eventGetCgIdsByGroupId_Parms
	{
		FName CgGroupId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgGroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgGroupId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_CgGroupId = { "CgGroupId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgIdsByGroupId_Parms, CgGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgGroupId_MetaData), NewProp_CgGroupId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgIdsByGroupId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_CgGroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgIdsByGroupId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::VNMSettings_eventGetCgIdsByGroupId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::VNMSettings_eventGetCgIdsByGroupId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgIdsByGroupId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CgGroupId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCgIdsByGroupId(Z_Param_Out_CgGroupId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgIdsByGroupId

// Begin Class UVNMSettings Function GetCgLayerImagesById
struct Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics
{
	struct VNMSettings_eventGetCgLayerImagesById_Parms
	{
		FName CgId;
		FName LayerId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgLayerImagesById_Parms, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgLayerImagesById_Parms, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgLayerImagesById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgLayerImagesById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::VNMSettings_eventGetCgLayerImagesById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::VNMSettings_eventGetCgLayerImagesById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgLayerImagesById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CgId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCgLayerImagesById(Z_Param_Out_CgId,Z_Param_Out_LayerId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgLayerImagesById

// Begin Class UVNMSettings Function GetCgLayersById
struct Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics
{
	struct VNMSettings_eventGetCgLayersById_Parms
	{
		FName CgId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_CgId = { "CgId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgLayersById_Parms, CgId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgId_MetaData), NewProp_CgId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCgLayersById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_CgId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCgLayersById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::VNMSettings_eventGetCgLayersById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::VNMSettings_eventGetCgLayersById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCgLayersById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCgLayersById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCgLayersById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CgId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCgLayersById(Z_Param_Out_CgId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCgLayersById

// Begin Class UVNMSettings Function GetCharacter3DEmotionsById
struct Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics
{
	struct VNMSettings_eventGetCharacter3DEmotionsById_Parms
	{
		FName CharacterId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacter3DEmotionsById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacter3DEmotionsById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacter3DEmotionsById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::VNMSettings_eventGetCharacter3DEmotionsById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::VNMSettings_eventGetCharacter3DEmotionsById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacter3DEmotionsById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacter3DEmotionsById(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacter3DEmotionsById

// Begin Class UVNMSettings Function GetCharacterDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics
{
	struct VNMSettings_eventGetCharacterDefinitionById_Parms
	{
		FName CharacterId;
		FCharacterDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterDefinitionById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterDefinition, METADATA_PARAMS(0, nullptr) }; // 904350531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::VNMSettings_eventGetCharacterDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::VNMSettings_eventGetCharacterDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCharacterDefinition*)Z_Param__Result=P_THIS->GetCharacterDefinitionById(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterDefinitionById

// Begin Class UVNMSettings Function GetCharacterDefinitionMap
struct Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics
{
	struct VNMSettings_eventGetCharacterDefinitionMap_Parms
	{
		TMap<FName,FCharacterDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterDefinition, METADATA_PARAMS(0, nullptr) }; // 904350531
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterDefinitionMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 904350531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterDefinitionMap", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::VNMSettings_eventGetCharacterDefinitionMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::VNMSettings_eventGetCharacterDefinitionMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterDefinitionMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FCharacterDefinition>*)Z_Param__Result=P_THIS->GetCharacterDefinitionMap();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterDefinitionMap

// Begin Class UVNMSettings Function GetCharacterEmotionsById
struct Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics
{
	struct VNMSettings_eventGetCharacterEmotionsById_Parms
	{
		FName CharacterId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterEmotionsById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterEmotionsById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterEmotionsById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::VNMSettings_eventGetCharacterEmotionsById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::VNMSettings_eventGetCharacterEmotionsById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterEmotionsById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacterEmotionsById(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterEmotionsById

// Begin Class UVNMSettings Function GetCharacterIds
struct Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics
{
	struct VNMSettings_eventGetCharacterIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::VNMSettings_eventGetCharacterIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::VNMSettings_eventGetCharacterIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacterIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterIds

// Begin Class UVNMSettings Function GetCharacterLayerImagesById
struct Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics
{
	struct VNMSettings_eventGetCharacterLayerImagesById_Parms
	{
		FName CharacterId;
		FName LayerId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterLayerImagesById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterLayerImagesById_Parms, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterLayerImagesById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterLayerImagesById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::VNMSettings_eventGetCharacterLayerImagesById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::VNMSettings_eventGetCharacterLayerImagesById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterLayerImagesById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacterLayerImagesById(Z_Param_Out_CharacterId,Z_Param_Out_LayerId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterLayerImagesById

// Begin Class UVNMSettings Function GetCharacterLayersById
struct Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics
{
	struct VNMSettings_eventGetCharacterLayersById_Parms
	{
		FName CharacterId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterLayersById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterLayersById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterLayersById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::VNMSettings_eventGetCharacterLayersById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::VNMSettings_eventGetCharacterLayersById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterLayersById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacterLayersById(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterLayersById

// Begin Class UVNMSettings Function GetCharacterMemoryDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics
{
	struct VNMSettings_eventGetCharacterMemoryDefinitionById_Parms
	{
		FName CharacterId;
		FName MemoryId;
		FMemoryDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryDefinitionById_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_MemoryId = { "MemoryId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryDefinitionById_Parms, MemoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryId_MetaData), NewProp_MemoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_MemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterMemoryDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::VNMSettings_eventGetCharacterMemoryDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::VNMSettings_eventGetCharacterMemoryDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterMemoryDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MemoryId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMemoryDefinition*)Z_Param__Result=P_THIS->GetCharacterMemoryDefinitionById(Z_Param_Out_CharacterId,Z_Param_Out_MemoryId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterMemoryDefinitionById

// Begin Class UVNMSettings Function GetCharacterMemoryDefinitionsByCharacterId
struct Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics
{
	struct VNMSettings_eventGetCharacterMemoryDefinitionsByCharacterId_Parms
	{
		FName CharacterId;
		TArray<FMemoryDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryDefinitionsByCharacterId_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryDefinitionsByCharacterId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterMemoryDefinitionsByCharacterId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::VNMSettings_eventGetCharacterMemoryDefinitionsByCharacterId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::VNMSettings_eventGetCharacterMemoryDefinitionsByCharacterId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterMemoryDefinitionsByCharacterId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMemoryDefinition>*)Z_Param__Result=P_THIS->GetCharacterMemoryDefinitionsByCharacterId(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterMemoryDefinitionsByCharacterId

// Begin Class UVNMSettings Function GetCharacterMemoryIdsByCharacterId
struct Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics
{
	struct VNMSettings_eventGetCharacterMemoryIdsByCharacterId_Parms
	{
		FName CharacterId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryIdsByCharacterId_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCharacterMemoryIdsByCharacterId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCharacterMemoryIdsByCharacterId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::VNMSettings_eventGetCharacterMemoryIdsByCharacterId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::VNMSettings_eventGetCharacterMemoryIdsByCharacterId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCharacterMemoryIdsByCharacterId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCharacterMemoryIdsByCharacterId(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCharacterMemoryIdsByCharacterId

// Begin Class UVNMSettings Function GetCustomCharacterPositions
struct Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics
{
	struct VNMSettings_eventGetCustomCharacterPositions_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetCustomCharacterPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetCustomCharacterPositions", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::VNMSettings_eventGetCustomCharacterPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::VNMSettings_eventGetCustomCharacterPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetCustomCharacterPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetCustomCharacterPositions();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetCustomCharacterPositions

// Begin Class UVNMSettings Function GetDialogDefinitionByClass
struct Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics
{
	struct VNMSettings_eventGetDialogDefinitionByClass_Parms
	{
		const TSubclassOf<UDialogObject> DialogObjectClass;
		FDialogDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogObjectClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogObjectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::NewProp_DialogObjectClass = { "DialogObjectClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogDefinitionByClass_Parms, DialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogObjectClass_MetaData), NewProp_DialogObjectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogDefinitionByClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogDefinition, METADATA_PARAMS(0, nullptr) }; // 387936331
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::NewProp_DialogObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogDefinitionByClass", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::VNMSettings_eventGetDialogDefinitionByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::VNMSettings_eventGetDialogDefinitionByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogDefinitionByClass)
{
	P_GET_OBJECT(UClass,Z_Param_DialogObjectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogDefinition*)Z_Param__Result=P_THIS->GetDialogDefinitionByClass(Z_Param_DialogObjectClass);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogDefinitionByClass

// Begin Class UVNMSettings Function GetDialogDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics
{
	struct VNMSettings_eventGetDialogDefinitionById_Parms
	{
		FName DialogId;
		FDialogDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogDefinitionById_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogDefinition, METADATA_PARAMS(0, nullptr) }; // 387936331
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::VNMSettings_eventGetDialogDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::VNMSettings_eventGetDialogDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogDefinition*)Z_Param__Result=P_THIS->GetDialogDefinitionById(Z_Param_Out_DialogId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogDefinitionById

// Begin Class UVNMSettings Function GetDialogDefinitions
struct Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics
{
	struct VNMSettings_eventGetDialogDefinitions_Parms
	{
		TArray<FDialogDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogDefinition, METADATA_PARAMS(0, nullptr) }; // 387936331
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogDefinitions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 387936331
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogDefinitions", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::VNMSettings_eventGetDialogDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::VNMSettings_eventGetDialogDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogDefinition>*)Z_Param__Result=P_THIS->GetDialogDefinitions();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogDefinitions

// Begin Class UVNMSettings Function GetDialogIds
struct Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics
{
	struct VNMSettings_eventGetDialogIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::VNMSettings_eventGetDialogIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::VNMSettings_eventGetDialogIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetDialogIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogIds

// Begin Class UVNMSettings Function GetDialogMemoryDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics
{
	struct VNMSettings_eventGetDialogMemoryDefinitionById_Parms
	{
		FName DialogId;
		FName MemoryId;
		FMemoryDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryDefinitionById_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_MemoryId = { "MemoryId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryDefinitionById_Parms, MemoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryId_MetaData), NewProp_MemoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_MemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogMemoryDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::VNMSettings_eventGetDialogMemoryDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::VNMSettings_eventGetDialogMemoryDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogMemoryDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MemoryId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMemoryDefinition*)Z_Param__Result=P_THIS->GetDialogMemoryDefinitionById(Z_Param_Out_DialogId,Z_Param_Out_MemoryId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogMemoryDefinitionById

// Begin Class UVNMSettings Function GetDialogMemoryDefinitionsByDialogId
struct Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics
{
	struct VNMSettings_eventGetDialogMemoryDefinitionsByDialogId_Parms
	{
		FName DialogId;
		TArray<FMemoryDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryDefinitionsByDialogId_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMemoryDefinition, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryDefinitionsByDialogId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 392111201
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogMemoryDefinitionsByDialogId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::VNMSettings_eventGetDialogMemoryDefinitionsByDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::VNMSettings_eventGetDialogMemoryDefinitionsByDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogMemoryDefinitionsByDialogId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMemoryDefinition>*)Z_Param__Result=P_THIS->GetDialogMemoryDefinitionsByDialogId(Z_Param_Out_DialogId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogMemoryDefinitionsByDialogId

// Begin Class UVNMSettings Function GetDialogMemoryIdsByDialogId
struct Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics
{
	struct VNMSettings_eventGetDialogMemoryIdsByDialogId_Parms
	{
		FName DialogId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryIdsByDialogId_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogMemoryIdsByDialogId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogMemoryIdsByDialogId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::VNMSettings_eventGetDialogMemoryIdsByDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::VNMSettings_eventGetDialogMemoryIdsByDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogMemoryIdsByDialogId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetDialogMemoryIdsByDialogId(Z_Param_Out_DialogId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogMemoryIdsByDialogId

// Begin Class UVNMSettings Function GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics
{
	struct VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms
	{
		FName DialogSceneId;
		FString CameraLabel;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraLabel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_CameraLabel = { "CameraLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms, CameraLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLabel_MetaData), NewProp_CameraLabel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_CameraLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::VNMSettings_eventGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_GET_PROPERTY(FStrProperty,Z_Param_CameraLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel(Z_Param_Out_DialogSceneId,Z_Param_CameraLabel);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel

// Begin Class UVNMSettings Function GetDialogSceneCameraNamesByDialogSceneId
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics
{
	struct VNMSettings_eventGetDialogSceneCameraNamesByDialogSceneId_Parms
	{
		FName DialogSceneId;
		TArray<FActorIdentifier> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneCameraNamesByDialogSceneId_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneCameraNamesByDialogSceneId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneCameraNamesByDialogSceneId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::VNMSettings_eventGetDialogSceneCameraNamesByDialogSceneId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::VNMSettings_eventGetDialogSceneCameraNamesByDialogSceneId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneCameraNamesByDialogSceneId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActorIdentifier>*)Z_Param__Result=P_THIS->GetDialogSceneCameraNamesByDialogSceneId(Z_Param_Out_DialogSceneId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneCameraNamesByDialogSceneId

// Begin Class UVNMSettings Function GetDialogSceneDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics
{
	struct VNMSettings_eventGetDialogSceneDefinitionById_Parms
	{
		FName DialogSceneId;
		FDialogSceneDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneDefinitionById_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogSceneDefinition, METADATA_PARAMS(0, nullptr) }; // 398640510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::VNMSettings_eventGetDialogSceneDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::VNMSettings_eventGetDialogSceneDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogSceneDefinition*)Z_Param__Result=P_THIS->GetDialogSceneDefinitionById(Z_Param_Out_DialogSceneId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneDefinitionById

// Begin Class UVNMSettings Function GetDialogSceneDefinitions
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics
{
	struct VNMSettings_eventGetDialogSceneDefinitions_Parms
	{
		TArray<FDialogSceneDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogSceneDefinition, METADATA_PARAMS(0, nullptr) }; // 398640510
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneDefinitions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 398640510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneDefinitions", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::VNMSettings_eventGetDialogSceneDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::VNMSettings_eventGetDialogSceneDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogSceneDefinition>*)Z_Param__Result=P_THIS->GetDialogSceneDefinitions();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneDefinitions

// Begin Class UVNMSettings Function GetDialogSceneIds
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics
{
	struct VNMSettings_eventGetDialogSceneIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::VNMSettings_eventGetDialogSceneIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::VNMSettings_eventGetDialogSceneIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetDialogSceneIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneIds

// Begin Class UVNMSettings Function GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics
{
	struct VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms
	{
		FName DialogSceneId;
		FString LocationLabel;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationLabel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_LocationLabel = { "LocationLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms, LocationLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationLabel_MetaData), NewProp_LocationLabel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_LocationLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::VNMSettings_eventGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_GET_PROPERTY(FStrProperty,Z_Param_LocationLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel(Z_Param_Out_DialogSceneId,Z_Param_LocationLabel);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel

// Begin Class UVNMSettings Function GetDialogSceneSpawnLocationNamesByDialogSceneId
struct Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics
{
	struct VNMSettings_eventGetDialogSceneSpawnLocationNamesByDialogSceneId_Parms
	{
		FName DialogSceneId;
		TArray<FActorIdentifier> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneSpawnLocationNamesByDialogSceneId_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetDialogSceneSpawnLocationNamesByDialogSceneId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1794987361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_DialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetDialogSceneSpawnLocationNamesByDialogSceneId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::VNMSettings_eventGetDialogSceneSpawnLocationNamesByDialogSceneId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::VNMSettings_eventGetDialogSceneSpawnLocationNamesByDialogSceneId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetDialogSceneSpawnLocationNamesByDialogSceneId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActorIdentifier>*)Z_Param__Result=P_THIS->GetDialogSceneSpawnLocationNamesByDialogSceneId(Z_Param_Out_DialogSceneId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetDialogSceneSpawnLocationNamesByDialogSceneId

// Begin Class UVNMSettings Function GetSceneBackgroundDefinitionById
struct Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics
{
	struct VNMSettings_eventGetSceneBackgroundDefinitionById_Parms
	{
		FName SceneBackgroundId;
		FDialogImageDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundDefinitionById_Parms, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundDefinitionById_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogImageDefinition, METADATA_PARAMS(0, nullptr) }; // 1970769294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSceneBackgroundDefinitionById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::VNMSettings_eventGetSceneBackgroundDefinitionById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::VNMSettings_eventGetSceneBackgroundDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSceneBackgroundDefinitionById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SceneBackgroundId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogImageDefinition*)Z_Param__Result=P_THIS->GetSceneBackgroundDefinitionById(Z_Param_Out_SceneBackgroundId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSceneBackgroundDefinitionById

// Begin Class UVNMSettings Function GetSceneBackgroundIds
struct Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics
{
	struct VNMSettings_eventGetSceneBackgroundIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSceneBackgroundIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::VNMSettings_eventGetSceneBackgroundIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::VNMSettings_eventGetSceneBackgroundIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSceneBackgroundIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSceneBackgroundIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSceneBackgroundIds

// Begin Class UVNMSettings Function GetSceneBackgroundLayerImagesById
struct Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics
{
	struct VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms
	{
		FName SceneBackgroundId;
		FName LayerId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_LayerId = { "LayerId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms, LayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerId_MetaData), NewProp_LayerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_LayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSceneBackgroundLayerImagesById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::VNMSettings_eventGetSceneBackgroundLayerImagesById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSceneBackgroundLayerImagesById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SceneBackgroundId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSceneBackgroundLayerImagesById(Z_Param_Out_SceneBackgroundId,Z_Param_Out_LayerId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSceneBackgroundLayerImagesById

// Begin Class UVNMSettings Function GetSceneBackgroundLayersById
struct Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics
{
	struct VNMSettings_eventGetSceneBackgroundLayersById_Parms
	{
		FName SceneBackgroundId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SceneBackgroundId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_SceneBackgroundId = { "SceneBackgroundId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundLayersById_Parms, SceneBackgroundId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundId_MetaData), NewProp_SceneBackgroundId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSceneBackgroundLayersById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_SceneBackgroundId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSceneBackgroundLayersById", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::VNMSettings_eventGetSceneBackgroundLayersById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::VNMSettings_eventGetSceneBackgroundLayersById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSceneBackgroundLayersById)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SceneBackgroundId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSceneBackgroundLayersById(Z_Param_Out_SceneBackgroundId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSceneBackgroundLayersById

// Begin Class UVNMSettings Function GetSoundEffectIds
struct Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics
{
	struct VNMSettings_eventGetSoundEffectIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSoundEffectIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSoundEffectIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::VNMSettings_eventGetSoundEffectIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::VNMSettings_eventGetSoundEffectIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSoundEffectIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSoundEffectIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSoundEffectIds

// Begin Class UVNMSettings Function GetSoundEffectIdsAsString
struct Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics
{
	struct VNMSettings_eventGetSoundEffectIdsAsString_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetSoundEffectIdsAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetSoundEffectIdsAsString", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::VNMSettings_eventGetSoundEffectIdsAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::VNMSettings_eventGetSoundEffectIdsAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetSoundEffectIdsAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSoundEffectIdsAsString();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetSoundEffectIdsAsString

// Begin Class UVNMSettings Function GetVNMSettings
struct Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics
{
	struct VNMSettings_eventGetVNMSettings_Parms
	{
		UVNMSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVNMSettings_Parms, ReturnValue), Z_Construct_UClass_UVNMSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVNMSettings", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::VNMSettings_eventGetVNMSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::VNMSettings_eventGetVNMSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVNMSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVNMSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVNMSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVNMSettings**)Z_Param__Result=UVNMSettings::GetVNMSettings();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVNMSettings

// Begin Class UVNMSettings Function GetVoiceOverDefintionByCharacterId
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics
{
	struct VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms
	{
		FName CharacterId;
		FName VoiceOverId;
		FVoiceOverDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceOverId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceOverId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_VoiceOverId = { "VoiceOverId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms, VoiceOverId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceOverId_MetaData), NewProp_VoiceOverId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoiceOverDefinition, METADATA_PARAMS(0, nullptr) }; // 3156937202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_VoiceOverId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverDefintionByCharacterId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::VNMSettings_eventGetVoiceOverDefintionByCharacterId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverDefintionByCharacterId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VoiceOverId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoiceOverDefinition*)Z_Param__Result=P_THIS->GetVoiceOverDefintionByCharacterId(Z_Param_Out_CharacterId,Z_Param_Out_VoiceOverId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverDefintionByCharacterId

// Begin Class UVNMSettings Function GetVoiceOverDefintionByDialogId
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics
{
	struct VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms
	{
		FName DialogId;
		FName VoiceOverId;
		FVoiceOverDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceOverId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceOverId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_VoiceOverId = { "VoiceOverId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms, VoiceOverId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceOverId_MetaData), NewProp_VoiceOverId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoiceOverDefinition, METADATA_PARAMS(0, nullptr) }; // 3156937202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_VoiceOverId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverDefintionByDialogId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::VNMSettings_eventGetVoiceOverDefintionByDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverDefintionByDialogId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VoiceOverId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoiceOverDefinition*)Z_Param__Result=P_THIS->GetVoiceOverDefintionByDialogId(Z_Param_Out_DialogId,Z_Param_Out_VoiceOverId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverDefintionByDialogId

// Begin Class UVNMSettings Function GetVoiceOverIds
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics
{
	struct VNMSettings_eventGetVoiceOverIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIds", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::VNMSettings_eventGetVoiceOverIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::VNMSettings_eventGetVoiceOverIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetVoiceOverIds();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIds

// Begin Class UVNMSettings Function GetVoiceOverIdsAsString
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsAsString_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsAsString", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::VNMSettings_eventGetVoiceOverIdsAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::VNMSettings_eventGetVoiceOverIdsAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetVoiceOverIdsAsString();
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsAsString

// Begin Class UVNMSettings Function GetVoiceOverIdsByCharacterId
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsByCharacterId_Parms
	{
		FName CharacterId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByCharacterId_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByCharacterId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsByCharacterId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::VNMSettings_eventGetVoiceOverIdsByCharacterId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::VNMSettings_eventGetVoiceOverIdsByCharacterId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsByCharacterId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetVoiceOverIdsByCharacterId(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsByCharacterId

// Begin Class UVNMSettings Function GetVoiceOverIdsByCharacterIdAsString
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsByCharacterIdAsString_Parms
	{
		FName CharacterId;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByCharacterIdAsString_Parms, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByCharacterIdAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsByCharacterIdAsString", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::VNMSettings_eventGetVoiceOverIdsByCharacterIdAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::VNMSettings_eventGetVoiceOverIdsByCharacterIdAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsByCharacterIdAsString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetVoiceOverIdsByCharacterIdAsString(Z_Param_Out_CharacterId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsByCharacterIdAsString

// Begin Class UVNMSettings Function GetVoiceOverIdsByDialogClass
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsByDialogClass_Parms
	{
		const TSubclassOf<UDialogObject> DialogObjectClass;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogObjectClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogObjectClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_DialogObjectClass = { "DialogObjectClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogClass_Parms, DialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogObjectClass_MetaData), NewProp_DialogObjectClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_DialogObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsByDialogClass", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::VNMSettings_eventGetVoiceOverIdsByDialogClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::VNMSettings_eventGetVoiceOverIdsByDialogClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsByDialogClass)
{
	P_GET_OBJECT(UClass,Z_Param_DialogObjectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetVoiceOverIdsByDialogClass(Z_Param_DialogObjectClass);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsByDialogClass

// Begin Class UVNMSettings Function GetVoiceOverIdsByDialogId
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsByDialogId_Parms
	{
		FName DialogId;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogId_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsByDialogId", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::VNMSettings_eventGetVoiceOverIdsByDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::VNMSettings_eventGetVoiceOverIdsByDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsByDialogId)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetVoiceOverIdsByDialogId(Z_Param_Out_DialogId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsByDialogId

// Begin Class UVNMSettings Function GetVoiceOverIdsByDialogIdAsString
struct Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics
{
	struct VNMSettings_eventGetVoiceOverIdsByDialogIdAsString_Parms
	{
		FName DialogId;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogIdAsString_Parms, DialogId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogId_MetaData), NewProp_DialogId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSettings_eventGetVoiceOverIdsByDialogIdAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSettings, nullptr, "GetVoiceOverIdsByDialogIdAsString", nullptr, nullptr, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::VNMSettings_eventGetVoiceOverIdsByDialogIdAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::VNMSettings_eventGetVoiceOverIdsByDialogIdAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSettings::execGetVoiceOverIdsByDialogIdAsString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetVoiceOverIdsByDialogIdAsString(Z_Param_Out_DialogId);
	P_NATIVE_END;
}
// End Class UVNMSettings Function GetVoiceOverIdsByDialogIdAsString

// Begin Class UVNMSettings
void UVNMSettings::StaticRegisterNativesUVNMSettings()
{
	UClass* Class = UVNMSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBackgroundMusicIds", &UVNMSettings::execGetBackgroundMusicIds },
		{ "GetBackgroundMusicIdsAsString", &UVNMSettings::execGetBackgroundMusicIdsAsString },
		{ "GetCgDefinitionById", &UVNMSettings::execGetCgDefinitionById },
		{ "GetCgDefinitions", &UVNMSettings::execGetCgDefinitions },
		{ "GetCgGroupIds", &UVNMSettings::execGetCgGroupIds },
		{ "GetCgIds", &UVNMSettings::execGetCgIds },
		{ "GetCgIdsByGroupId", &UVNMSettings::execGetCgIdsByGroupId },
		{ "GetCgLayerImagesById", &UVNMSettings::execGetCgLayerImagesById },
		{ "GetCgLayersById", &UVNMSettings::execGetCgLayersById },
		{ "GetCharacter3DEmotionsById", &UVNMSettings::execGetCharacter3DEmotionsById },
		{ "GetCharacterDefinitionById", &UVNMSettings::execGetCharacterDefinitionById },
		{ "GetCharacterDefinitionMap", &UVNMSettings::execGetCharacterDefinitionMap },
		{ "GetCharacterEmotionsById", &UVNMSettings::execGetCharacterEmotionsById },
		{ "GetCharacterIds", &UVNMSettings::execGetCharacterIds },
		{ "GetCharacterLayerImagesById", &UVNMSettings::execGetCharacterLayerImagesById },
		{ "GetCharacterLayersById", &UVNMSettings::execGetCharacterLayersById },
		{ "GetCharacterMemoryDefinitionById", &UVNMSettings::execGetCharacterMemoryDefinitionById },
		{ "GetCharacterMemoryDefinitionsByCharacterId", &UVNMSettings::execGetCharacterMemoryDefinitionsByCharacterId },
		{ "GetCharacterMemoryIdsByCharacterId", &UVNMSettings::execGetCharacterMemoryIdsByCharacterId },
		{ "GetCustomCharacterPositions", &UVNMSettings::execGetCustomCharacterPositions },
		{ "GetDialogDefinitionByClass", &UVNMSettings::execGetDialogDefinitionByClass },
		{ "GetDialogDefinitionById", &UVNMSettings::execGetDialogDefinitionById },
		{ "GetDialogDefinitions", &UVNMSettings::execGetDialogDefinitions },
		{ "GetDialogIds", &UVNMSettings::execGetDialogIds },
		{ "GetDialogMemoryDefinitionById", &UVNMSettings::execGetDialogMemoryDefinitionById },
		{ "GetDialogMemoryDefinitionsByDialogId", &UVNMSettings::execGetDialogMemoryDefinitionsByDialogId },
		{ "GetDialogMemoryIdsByDialogId", &UVNMSettings::execGetDialogMemoryIdsByDialogId },
		{ "GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel", &UVNMSettings::execGetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel },
		{ "GetDialogSceneCameraNamesByDialogSceneId", &UVNMSettings::execGetDialogSceneCameraNamesByDialogSceneId },
		{ "GetDialogSceneDefinitionById", &UVNMSettings::execGetDialogSceneDefinitionById },
		{ "GetDialogSceneDefinitions", &UVNMSettings::execGetDialogSceneDefinitions },
		{ "GetDialogSceneIds", &UVNMSettings::execGetDialogSceneIds },
		{ "GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel", &UVNMSettings::execGetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel },
		{ "GetDialogSceneSpawnLocationNamesByDialogSceneId", &UVNMSettings::execGetDialogSceneSpawnLocationNamesByDialogSceneId },
		{ "GetSceneBackgroundDefinitionById", &UVNMSettings::execGetSceneBackgroundDefinitionById },
		{ "GetSceneBackgroundIds", &UVNMSettings::execGetSceneBackgroundIds },
		{ "GetSceneBackgroundLayerImagesById", &UVNMSettings::execGetSceneBackgroundLayerImagesById },
		{ "GetSceneBackgroundLayersById", &UVNMSettings::execGetSceneBackgroundLayersById },
		{ "GetSoundEffectIds", &UVNMSettings::execGetSoundEffectIds },
		{ "GetSoundEffectIdsAsString", &UVNMSettings::execGetSoundEffectIdsAsString },
		{ "GetVNMSettings", &UVNMSettings::execGetVNMSettings },
		{ "GetVoiceOverDefintionByCharacterId", &UVNMSettings::execGetVoiceOverDefintionByCharacterId },
		{ "GetVoiceOverDefintionByDialogId", &UVNMSettings::execGetVoiceOverDefintionByDialogId },
		{ "GetVoiceOverIds", &UVNMSettings::execGetVoiceOverIds },
		{ "GetVoiceOverIdsAsString", &UVNMSettings::execGetVoiceOverIdsAsString },
		{ "GetVoiceOverIdsByCharacterId", &UVNMSettings::execGetVoiceOverIdsByCharacterId },
		{ "GetVoiceOverIdsByCharacterIdAsString", &UVNMSettings::execGetVoiceOverIdsByCharacterIdAsString },
		{ "GetVoiceOverIdsByDialogClass", &UVNMSettings::execGetVoiceOverIdsByDialogClass },
		{ "GetVoiceOverIdsByDialogId", &UVNMSettings::execGetVoiceOverIdsByDialogId },
		{ "GetVoiceOverIdsByDialogIdAsString", &UVNMSettings::execGetVoiceOverIdsByDialogIdAsString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMSettings);
UClass* Z_Construct_UClass_UVNMSettings_NoRegister()
{
	return UVNMSettings::StaticClass();
}
struct Z_Construct_UClass_UVNMSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the Visual Novel Machinery plugin.\n*/" },
		{ "IncludePath", "VNMSettings.h" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for the Visual Novel Machinery plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VNMSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIds, "GetBackgroundMusicIds" }, // 3283813796
		{ &Z_Construct_UFunction_UVNMSettings_GetBackgroundMusicIdsAsString, "GetBackgroundMusicIdsAsString" }, // 408699520
		{ &Z_Construct_UFunction_UVNMSettings_GetCgDefinitionById, "GetCgDefinitionById" }, // 3119057125
		{ &Z_Construct_UFunction_UVNMSettings_GetCgDefinitions, "GetCgDefinitions" }, // 2341688098
		{ &Z_Construct_UFunction_UVNMSettings_GetCgGroupIds, "GetCgGroupIds" }, // 3242322024
		{ &Z_Construct_UFunction_UVNMSettings_GetCgIds, "GetCgIds" }, // 3834784256
		{ &Z_Construct_UFunction_UVNMSettings_GetCgIdsByGroupId, "GetCgIdsByGroupId" }, // 189975336
		{ &Z_Construct_UFunction_UVNMSettings_GetCgLayerImagesById, "GetCgLayerImagesById" }, // 3557275740
		{ &Z_Construct_UFunction_UVNMSettings_GetCgLayersById, "GetCgLayersById" }, // 3587761208
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacter3DEmotionsById, "GetCharacter3DEmotionsById" }, // 3999026491
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionById, "GetCharacterDefinitionById" }, // 1853343245
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterDefinitionMap, "GetCharacterDefinitionMap" }, // 4271922662
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterEmotionsById, "GetCharacterEmotionsById" }, // 2332633943
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterIds, "GetCharacterIds" }, // 3541066715
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterLayerImagesById, "GetCharacterLayerImagesById" }, // 1877216080
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterLayersById, "GetCharacterLayersById" }, // 3867767256
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionById, "GetCharacterMemoryDefinitionById" }, // 2668551740
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryDefinitionsByCharacterId, "GetCharacterMemoryDefinitionsByCharacterId" }, // 1027864174
		{ &Z_Construct_UFunction_UVNMSettings_GetCharacterMemoryIdsByCharacterId, "GetCharacterMemoryIdsByCharacterId" }, // 2446721932
		{ &Z_Construct_UFunction_UVNMSettings_GetCustomCharacterPositions, "GetCustomCharacterPositions" }, // 468174464
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionByClass, "GetDialogDefinitionByClass" }, // 4221476267
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogDefinitionById, "GetDialogDefinitionById" }, // 2685235798
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogDefinitions, "GetDialogDefinitions" }, // 3692993622
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogIds, "GetDialogIds" }, // 2559012535
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionById, "GetDialogMemoryDefinitionById" }, // 3465977964
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogMemoryDefinitionsByDialogId, "GetDialogMemoryDefinitionsByDialogId" }, // 2214091415
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogMemoryIdsByDialogId, "GetDialogMemoryIdsByDialogId" }, // 422956483
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel, "GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel" }, // 979524985
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneCameraNamesByDialogSceneId, "GetDialogSceneCameraNamesByDialogSceneId" }, // 3311892428
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitionById, "GetDialogSceneDefinitionById" }, // 12807932
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneDefinitions, "GetDialogSceneDefinitions" }, // 2813917377
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneIds, "GetDialogSceneIds" }, // 2271381359
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel, "GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel" }, // 3745385083
		{ &Z_Construct_UFunction_UVNMSettings_GetDialogSceneSpawnLocationNamesByDialogSceneId, "GetDialogSceneSpawnLocationNamesByDialogSceneId" }, // 252369786
		{ &Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundDefinitionById, "GetSceneBackgroundDefinitionById" }, // 3388592894
		{ &Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundIds, "GetSceneBackgroundIds" }, // 2555023303
		{ &Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayerImagesById, "GetSceneBackgroundLayerImagesById" }, // 2338687731
		{ &Z_Construct_UFunction_UVNMSettings_GetSceneBackgroundLayersById, "GetSceneBackgroundLayersById" }, // 782595508
		{ &Z_Construct_UFunction_UVNMSettings_GetSoundEffectIds, "GetSoundEffectIds" }, // 3976868106
		{ &Z_Construct_UFunction_UVNMSettings_GetSoundEffectIdsAsString, "GetSoundEffectIdsAsString" }, // 2862368640
		{ &Z_Construct_UFunction_UVNMSettings_GetVNMSettings, "GetVNMSettings" }, // 1739076760
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByCharacterId, "GetVoiceOverDefintionByCharacterId" }, // 3882108287
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverDefintionByDialogId, "GetVoiceOverDefintionByDialogId" }, // 598055615
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIds, "GetVoiceOverIds" }, // 2092191642
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsAsString, "GetVoiceOverIdsAsString" }, // 2163596607
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterId, "GetVoiceOverIdsByCharacterId" }, // 3764647179
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByCharacterIdAsString, "GetVoiceOverIdsByCharacterIdAsString" }, // 122478389
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogClass, "GetVoiceOverIdsByDialogClass" }, // 823254920
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogId, "GetVoiceOverIdsByDialogId" }, // 1780467905
		{ &Z_Construct_UFunction_UVNMSettings_GetVoiceOverIdsByDialogIdAsString, "GetVoiceOverIdsByDialogIdAsString" }, // 1223038126
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSettings, Settings), Z_Construct_UScriptStruct_FVisualNovelMachinerySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1789470319
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMSettings_Statics::ClassParams = {
	&UVNMSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMSettings()
{
	if (!Z_Registration_Info_UClass_UVNMSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMSettings.OuterSingleton, Z_Construct_UClass_UVNMSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMSettings.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMSettings>()
{
	return UVNMSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMSettings);
UVNMSettings::~UVNMSettings() {}
// End Class UVNMSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMemoryType_StaticEnum, TEXT("EMemoryType"), &Z_Registration_Info_UEnum_EMemoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3156312681U) },
		{ EAutoSaveType_StaticEnum, TEXT("EAutoSaveType"), &Z_Registration_Info_UEnum_EAutoSaveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4282590865U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorIdentifier::StaticStruct, Z_Construct_UScriptStruct_FActorIdentifier_Statics::NewStructOps, TEXT("ActorIdentifier"), &Z_Registration_Info_UScriptStruct_ActorIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorIdentifier), 1794987361U) },
		{ FImageDefinition::StaticStruct, Z_Construct_UScriptStruct_FImageDefinition_Statics::NewStructOps, TEXT("ImageDefinition"), &Z_Registration_Info_UScriptStruct_ImageDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageDefinition), 2338445570U) },
		{ FMemoryDefinition::StaticStruct, Z_Construct_UScriptStruct_FMemoryDefinition_Statics::NewStructOps, TEXT("MemoryDefinition"), &Z_Registration_Info_UScriptStruct_MemoryDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemoryDefinition), 392111201U) },
		{ FImageLayerDefinition::StaticStruct, Z_Construct_UScriptStruct_FImageLayerDefinition_Statics::NewStructOps, TEXT("ImageLayerDefinition"), &Z_Registration_Info_UScriptStruct_ImageLayerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageLayerDefinition), 4053354881U) },
		{ FDialogAudioDefinition::StaticStruct, Z_Construct_UScriptStruct_FDialogAudioDefinition_Statics::NewStructOps, TEXT("DialogAudioDefinition"), &Z_Registration_Info_UScriptStruct_DialogAudioDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogAudioDefinition), 384056349U) },
		{ FVoiceOverDefinition::StaticStruct, Z_Construct_UScriptStruct_FVoiceOverDefinition_Statics::NewStructOps, TEXT("VoiceOverDefinition"), &Z_Registration_Info_UScriptStruct_VoiceOverDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceOverDefinition), 3156937202U) },
		{ FCharacterDefinition::StaticStruct, Z_Construct_UScriptStruct_FCharacterDefinition_Statics::NewStructOps, TEXT("CharacterDefinition"), &Z_Registration_Info_UScriptStruct_CharacterDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterDefinition), 904350531U) },
		{ FDialogImageDefinition::StaticStruct, Z_Construct_UScriptStruct_FDialogImageDefinition_Statics::NewStructOps, TEXT("DialogImageDefinition"), &Z_Registration_Info_UScriptStruct_DialogImageDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogImageDefinition), 1970769294U) },
		{ FDialogSceneDefinition::StaticStruct, Z_Construct_UScriptStruct_FDialogSceneDefinition_Statics::NewStructOps, TEXT("DialogSceneDefinition"), &Z_Registration_Info_UScriptStruct_DialogSceneDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogSceneDefinition), 398640510U) },
		{ FDialogDefinition::StaticStruct, Z_Construct_UScriptStruct_FDialogDefinition_Statics::NewStructOps, TEXT("DialogDefinition"), &Z_Registration_Info_UScriptStruct_DialogDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogDefinition), 387936331U) },
		{ FVisualNovelMachinerySettings::StaticStruct, Z_Construct_UScriptStruct_FVisualNovelMachinerySettings_Statics::NewStructOps, TEXT("VisualNovelMachinerySettings"), &Z_Registration_Info_UScriptStruct_VisualNovelMachinerySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisualNovelMachinerySettings), 1789470319U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMSettings, UVNMSettings::StaticClass, TEXT("UVNMSettings"), &Z_Registration_Info_UClass_UVNMSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMSettings), 3019484134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_720019062(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VNMSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
