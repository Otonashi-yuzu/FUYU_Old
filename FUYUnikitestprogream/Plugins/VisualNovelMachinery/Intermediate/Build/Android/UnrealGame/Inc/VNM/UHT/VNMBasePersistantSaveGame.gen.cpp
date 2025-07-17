// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/SaveGame/VNMBasePersistantSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMBasePersistantSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame();
VNM_API UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameMetaData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameScreenshot();
// End Cross Module References

// Begin ScriptStruct FSaveGameScreenshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveGameScreenshot;
class UScriptStruct* FSaveGameScreenshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveGameScreenshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveGameScreenshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameScreenshot, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("SaveGameScreenshot"));
	}
	return Z_Registration_Info_UScriptStruct_SaveGameScreenshot.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FSaveGameScreenshot>()
{
	return FSaveGameScreenshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameScreenshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameScreenshot, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameScreenshot, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameScreenshot, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"SaveGameScreenshot",
	Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::PropPointers),
	sizeof(FSaveGameScreenshot),
	alignof(FSaveGameScreenshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveGameScreenshot()
{
	if (!Z_Registration_Info_UScriptStruct_SaveGameScreenshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveGameScreenshot.InnerSingleton, Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveGameScreenshot.InnerSingleton;
}
// End ScriptStruct FSaveGameScreenshot

// Begin ScriptStruct FSaveGameMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveGameMetaData;
class UScriptStruct* FSaveGameMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveGameMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveGameMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameMetaData, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("SaveGameMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveGameMetaData.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FSaveGameMetaData>()
{
	return FSaveGameMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveGameMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Screenshot_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveFileName_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Screenshot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_Screenshot = { "Screenshot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameMetaData, Screenshot), Z_Construct_UScriptStruct_FSaveGameScreenshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Screenshot_MetaData), NewProp_Screenshot_MetaData) }; // 2466380031
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameMetaData, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameMetaData, SaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveFileName_MetaData), NewProp_SaveFileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveGameMetaData, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_Screenshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"SaveGameMetaData",
	Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::PropPointers),
	sizeof(FSaveGameMetaData),
	alignof(FSaveGameMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveGameMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveGameMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveGameMetaData.InnerSingleton, Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveGameMetaData.InnerSingleton;
}
// End ScriptStruct FSaveGameMetaData

// Begin Class UVNMBasePersistantSaveGame
void UVNMBasePersistantSaveGame::StaticRegisterNativesUVNMBasePersistantSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMBasePersistantSaveGame);
UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister()
{
	return UVNMBasePersistantSaveGame::StaticClass();
}
struct Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGame/VNMBasePersistantSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeenChoiceIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeenCgIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameMetaDatas_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveGameMetaDatas_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBasePersistantSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SeenChoiceIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeenChoiceIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SeenCgIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeenCgIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveGameMetaDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveGameMetaDatas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoSaveGameMetaDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoSaveGameMetaDatas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMBasePersistantSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenChoiceIds_Inner = { "SeenChoiceIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenChoiceIds = { "SeenChoiceIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePersistantSaveGame, SeenChoiceIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeenChoiceIds_MetaData), NewProp_SeenChoiceIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenCgIds_Inner = { "SeenCgIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenCgIds = { "SeenCgIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePersistantSaveGame, SeenCgIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeenCgIds_MetaData), NewProp_SeenCgIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SaveGameMetaDatas_Inner = { "SaveGameMetaDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSaveGameMetaData, METADATA_PARAMS(0, nullptr) }; // 2101056009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SaveGameMetaDatas = { "SaveGameMetaDatas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePersistantSaveGame, SaveGameMetaDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameMetaDatas_MetaData), NewProp_SaveGameMetaDatas_MetaData) }; // 2101056009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_AutoSaveGameMetaDatas_Inner = { "AutoSaveGameMetaDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSaveGameMetaData, METADATA_PARAMS(0, nullptr) }; // 2101056009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_AutoSaveGameMetaDatas = { "AutoSaveGameMetaDatas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePersistantSaveGame, AutoSaveGameMetaDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveGameMetaDatas_MetaData), NewProp_AutoSaveGameMetaDatas_MetaData) }; // 2101056009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenChoiceIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenChoiceIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenCgIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SeenCgIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SaveGameMetaDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_SaveGameMetaDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_AutoSaveGameMetaDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::NewProp_AutoSaveGameMetaDatas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::ClassParams = {
	&UVNMBasePersistantSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame()
{
	if (!Z_Registration_Info_UClass_UVNMBasePersistantSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMBasePersistantSaveGame.OuterSingleton, Z_Construct_UClass_UVNMBasePersistantSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMBasePersistantSaveGame.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMBasePersistantSaveGame>()
{
	return UVNMBasePersistantSaveGame::StaticClass();
}
UVNMBasePersistantSaveGame::UVNMBasePersistantSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMBasePersistantSaveGame);
UVNMBasePersistantSaveGame::~UVNMBasePersistantSaveGame() {}
// End Class UVNMBasePersistantSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveGameScreenshot::StaticStruct, Z_Construct_UScriptStruct_FSaveGameScreenshot_Statics::NewStructOps, TEXT("SaveGameScreenshot"), &Z_Registration_Info_UScriptStruct_SaveGameScreenshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveGameScreenshot), 2466380031U) },
		{ FSaveGameMetaData::StaticStruct, Z_Construct_UScriptStruct_FSaveGameMetaData_Statics::NewStructOps, TEXT("SaveGameMetaData"), &Z_Registration_Info_UScriptStruct_SaveGameMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveGameMetaData), 2101056009U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMBasePersistantSaveGame, UVNMBasePersistantSaveGame::StaticClass, TEXT("UVNMBasePersistantSaveGame"), &Z_Registration_Info_UClass_UVNMBasePersistantSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMBasePersistantSaveGame), 4285491626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_3777224643(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBasePersistantSaveGame_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
