// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/SaveGame/GameSaveSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "VNM/Public/SaveGame/VNMBasePersistantSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSaveSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UGameSaveSubsystem();
VNM_API UClass* Z_Construct_UClass_UGameSaveSubsystem_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBaseSaveGame_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EPopUpResult();
VNM_API UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameMetaData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameScreenshot();
// End Cross Module References

// Begin Delegate FOnSaveGamePrepared
struct Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics
{
	struct GameSaveSubsystem_eventOnSaveGamePrepared_Parms
	{
		UVNMBaseSaveGame* SaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventOnSaveGamePrepared_Parms, SaveGame), Z_Construct_UClass_UVNMBaseSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnSaveGamePrepared__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::GameSaveSubsystem_eventOnSaveGamePrepared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::GameSaveSubsystem_eventOnSaveGamePrepared_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameSaveSubsystem::FOnSaveGamePrepared_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGamePrepared, UVNMBaseSaveGame* SaveGame)
{
	struct GameSaveSubsystem_eventOnSaveGamePrepared_Parms
	{
		UVNMBaseSaveGame* SaveGame;
	};
	GameSaveSubsystem_eventOnSaveGamePrepared_Parms Parms;
	Parms.SaveGame=SaveGame;
	OnSaveGamePrepared.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSaveGamePrepared

// Begin Delegate FOnGameSaved
struct Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics
{
	struct GameSaveSubsystem_eventOnGameSaved_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventOnGameSaved_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventOnGameSaved_Parms), &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnGameSaved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::GameSaveSubsystem_eventOnGameSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::GameSaveSubsystem_eventOnGameSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameSaveSubsystem::FOnGameSaved_DelegateWrapper(const FMulticastScriptDelegate& OnGameSaved, bool bWasSuccessful)
{
	struct GameSaveSubsystem_eventOnGameSaved_Parms
	{
		bool bWasSuccessful;
	};
	GameSaveSubsystem_eventOnGameSaved_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGameSaved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameSaved

// Begin Delegate FOnGameLoaded
struct Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics
{
	struct GameSaveSubsystem_eventOnGameLoaded_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventOnGameLoaded_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventOnGameLoaded_Parms), &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnGameLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::GameSaveSubsystem_eventOnGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::GameSaveSubsystem_eventOnGameLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameSaveSubsystem::FOnGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnGameLoaded, bool bWasSuccessful)
{
	struct GameSaveSubsystem_eventOnGameLoaded_Parms
	{
		bool bWasSuccessful;
	};
	GameSaveSubsystem_eventOnGameLoaded_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGameLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameLoaded

// Begin Delegate FOnSaveGameDeleted
struct Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics
{
	struct GameSaveSubsystem_eventOnSaveGameDeleted_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventOnSaveGameDeleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventOnSaveGameDeleted_Parms), &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnSaveGameDeleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::GameSaveSubsystem_eventOnSaveGameDeleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::GameSaveSubsystem_eventOnSaveGameDeleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameSaveSubsystem::FOnSaveGameDeleted_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGameDeleted, bool bWasSuccessful)
{
	struct GameSaveSubsystem_eventOnSaveGameDeleted_Parms
	{
		bool bWasSuccessful;
	};
	GameSaveSubsystem_eventOnSaveGameDeleted_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSaveGameDeleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSaveGameDeleted

// Begin Class UGameSaveSubsystem Function AutoSaveGame
struct Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics
{
	struct GameSaveSubsystem_eventAutoSaveGame_Parms
	{
		int32 AutoSaveSlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// Saves the current auto save data to disk\n" },
		{ "CPP_Default_AutoSaveSlotIndex", "1" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "Saves the current auto save data to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveSlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_AutoSaveSlotIndex = { "AutoSaveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventAutoSaveGame_Parms, AutoSaveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveSlotIndex_MetaData), NewProp_AutoSaveSlotIndex_MetaData) };
void Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventAutoSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventAutoSaveGame_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_AutoSaveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "AutoSaveGame", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::GameSaveSubsystem_eventAutoSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::GameSaveSubsystem_eventAutoSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execAutoSaveGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AutoSaveSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AutoSaveGame(Z_Param_AutoSaveSlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function AutoSaveGame

// Begin Class UGameSaveSubsystem Function ClearLoadingFlag
struct Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// Used to clear the loading flag after transitioning to a new level after initiating a load\n" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "Used to clear the loading flag after transitioning to a new level after initiating a load" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "ClearLoadingFlag", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execClearLoadingFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearLoadingFlag();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function ClearLoadingFlag

// Begin Class UGameSaveSubsystem Function CreateScreenShotForSaveGame
struct Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "CreateScreenShotForSaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execCreateScreenShotForSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateScreenShotForSaveGame();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function CreateScreenShotForSaveGame

// Begin Class UGameSaveSubsystem Function DeleteSaveGame
struct Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics
{
	struct GameSaveSubsystem_eventDeleteSaveGame_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// loads the current save file\n" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "loads the current save file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventDeleteSaveGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventDeleteSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventDeleteSaveGame_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "DeleteSaveGame", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::GameSaveSubsystem_eventDeleteSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::GameSaveSubsystem_eventDeleteSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execDeleteSaveGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSaveGame(Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function DeleteSaveGame

// Begin Class UGameSaveSubsystem Function GetAutoSaveGameMetaDataBySlotIndex
struct Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics
{
	struct GameSaveSubsystem_eventGetAutoSaveGameMetaDataBySlotIndex_Parms
	{
		int32 SlotIndex;
		FSaveGameMetaData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetAutoSaveGameMetaDataBySlotIndex_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetAutoSaveGameMetaDataBySlotIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveGameMetaData, METADATA_PARAMS(0, nullptr) }; // 2101056009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "GetAutoSaveGameMetaDataBySlotIndex", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::GameSaveSubsystem_eventGetAutoSaveGameMetaDataBySlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::GameSaveSubsystem_eventGetAutoSaveGameMetaDataBySlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execGetAutoSaveGameMetaDataBySlotIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveGameMetaData*)Z_Param__Result=P_THIS->GetAutoSaveGameMetaDataBySlotIndex(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function GetAutoSaveGameMetaDataBySlotIndex

// Begin Class UGameSaveSubsystem Function GetCurrentlyUsedAutoSaveSlotsCount
struct Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics
{
	struct GameSaveSubsystem_eventGetCurrentlyUsedAutoSaveSlotsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetCurrentlyUsedAutoSaveSlotsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "GetCurrentlyUsedAutoSaveSlotsCount", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::GameSaveSubsystem_eventGetCurrentlyUsedAutoSaveSlotsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::GameSaveSubsystem_eventGetCurrentlyUsedAutoSaveSlotsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execGetCurrentlyUsedAutoSaveSlotsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentlyUsedAutoSaveSlotsCount();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function GetCurrentlyUsedAutoSaveSlotsCount

// Begin Class UGameSaveSubsystem Function GetCurrentlyUsedSaveSlotsCount
struct Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics
{
	struct GameSaveSubsystem_eventGetCurrentlyUsedSaveSlotsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetCurrentlyUsedSaveSlotsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "GetCurrentlyUsedSaveSlotsCount", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::GameSaveSubsystem_eventGetCurrentlyUsedSaveSlotsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::GameSaveSubsystem_eventGetCurrentlyUsedSaveSlotsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execGetCurrentlyUsedSaveSlotsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentlyUsedSaveSlotsCount();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function GetCurrentlyUsedSaveSlotsCount

// Begin Class UGameSaveSubsystem Function GetLatestSaveGameScreenshot
struct Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics
{
	struct GameSaveSubsystem_eventGetLatestSaveGameScreenshot_Parms
	{
		FSaveGameScreenshot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetLatestSaveGameScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveGameScreenshot, METADATA_PARAMS(0, nullptr) }; // 2466380031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "GetLatestSaveGameScreenshot", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::GameSaveSubsystem_eventGetLatestSaveGameScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::GameSaveSubsystem_eventGetLatestSaveGameScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execGetLatestSaveGameScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveGameScreenshot*)Z_Param__Result=P_THIS->GetLatestSaveGameScreenshot();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function GetLatestSaveGameScreenshot

// Begin Class UGameSaveSubsystem Function GetSaveGameMetaDataBySlotIndex
struct Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics
{
	struct GameSaveSubsystem_eventGetSaveGameMetaDataBySlotIndex_Parms
	{
		int32 SlotIndex;
		FSaveGameMetaData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetSaveGameMetaDataBySlotIndex_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventGetSaveGameMetaDataBySlotIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveGameMetaData, METADATA_PARAMS(0, nullptr) }; // 2101056009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "GetSaveGameMetaDataBySlotIndex", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::GameSaveSubsystem_eventGetSaveGameMetaDataBySlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::GameSaveSubsystem_eventGetSaveGameMetaDataBySlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execGetSaveGameMetaDataBySlotIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveGameMetaData*)Z_Param__Result=P_THIS->GetSaveGameMetaDataBySlotIndex(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function GetSaveGameMetaDataBySlotIndex

// Begin Class UGameSaveSubsystem Function LoadAutoSaveGame
struct Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics
{
	struct GameSaveSubsystem_eventLoadAutoSaveGame_Parms
	{
		int32 AutoSaveSlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// loads the current save file\n" },
		{ "CPP_Default_AutoSaveSlotIndex", "1" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "loads the current save file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveSlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_AutoSaveSlotIndex = { "AutoSaveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventLoadAutoSaveGame_Parms, AutoSaveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveSlotIndex_MetaData), NewProp_AutoSaveSlotIndex_MetaData) };
void Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventLoadAutoSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventLoadAutoSaveGame_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_AutoSaveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "LoadAutoSaveGame", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::GameSaveSubsystem_eventLoadAutoSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::GameSaveSubsystem_eventLoadAutoSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execLoadAutoSaveGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AutoSaveSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadAutoSaveGame(Z_Param_AutoSaveSlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function LoadAutoSaveGame

// Begin Class UGameSaveSubsystem Function LoadGame
struct Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics
{
	struct GameSaveSubsystem_eventLoadGame_Parms
	{
		int32 SaveSlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// loads the current save file\n" },
		{ "CPP_Default_SaveSlotIndex", "1" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "loads the current save file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveSlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_SaveSlotIndex = { "SaveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventLoadGame_Parms, SaveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotIndex_MetaData), NewProp_SaveSlotIndex_MetaData) };
void Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventLoadGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventLoadGame_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_SaveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "LoadGame", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::GameSaveSubsystem_eventLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::GameSaveSubsystem_eventLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execLoadGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SaveSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadGame(Z_Param_SaveSlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function LoadGame

// Begin Class UGameSaveSubsystem Function OnAutoSaveTick
struct Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnAutoSaveTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execOnAutoSaveTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAutoSaveTick();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function OnAutoSaveTick

// Begin Class UGameSaveSubsystem Function OnConfirmDeleteSavePopUpResult
struct Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics
{
	struct GameSaveSubsystem_eventOnConfirmDeleteSavePopUpResult_Parms
	{
		EPopUpResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventOnConfirmDeleteSavePopUpResult_Parms, Result), Z_Construct_UEnum_VNM_EPopUpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 4080065112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnConfirmDeleteSavePopUpResult", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::GameSaveSubsystem_eventOnConfirmDeleteSavePopUpResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::GameSaveSubsystem_eventOnConfirmDeleteSavePopUpResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execOnConfirmDeleteSavePopUpResult)
{
	P_GET_ENUM(EPopUpResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConfirmDeleteSavePopUpResult(EPopUpResult(Z_Param_Result));
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function OnConfirmDeleteSavePopUpResult

// Begin Class UGameSaveSubsystem Function OnOverwritePopUpResult
struct Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics
{
	struct GameSaveSubsystem_eventOnOverwritePopUpResult_Parms
	{
		EPopUpResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventOnOverwritePopUpResult_Parms, Result), Z_Construct_UEnum_VNM_EPopUpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 4080065112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnOverwritePopUpResult", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::GameSaveSubsystem_eventOnOverwritePopUpResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::GameSaveSubsystem_eventOnOverwritePopUpResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execOnOverwritePopUpResult)
{
	P_GET_ENUM(EPopUpResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverwritePopUpResult(EPopUpResult(Z_Param_Result));
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function OnOverwritePopUpResult

// Begin Class UGameSaveSubsystem Function OnSaveGameNameReceived
struct Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics
{
	struct GameSaveSubsystem_eventOnSaveGameNameReceived_Parms
	{
		FString SaveFileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventOnSaveGameNameReceived_Parms, SaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveFileName_MetaData), NewProp_SaveFileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::NewProp_SaveFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "OnSaveGameNameReceived", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::GameSaveSubsystem_eventOnSaveGameNameReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::GameSaveSubsystem_eventOnSaveGameNameReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execOnSaveGameNameReceived)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveGameNameReceived(Z_Param_SaveFileName);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function OnSaveGameNameReceived

// Begin Class UGameSaveSubsystem Function PrepareSaveGameObject
struct Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics
{
	struct GameSaveSubsystem_eventPrepareSaveGameObject_Parms
	{
		UVNMBaseSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// Prepares the Save Game Object so that it can be filled up with custom data before calling SaveGame()\n" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "Prepares the Save Game Object so that it can be filled up with custom data before calling SaveGame()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventPrepareSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_UVNMBaseSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "PrepareSaveGameObject", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::GameSaveSubsystem_eventPrepareSaveGameObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::GameSaveSubsystem_eventPrepareSaveGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execPrepareSaveGameObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVNMBaseSaveGame**)Z_Param__Result=P_THIS->PrepareSaveGameObject();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function PrepareSaveGameObject

// Begin Class UGameSaveSubsystem Function SaveGame
struct Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics
{
	struct GameSaveSubsystem_eventSaveGame_Parms
	{
		int32 SaveSlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// Saves the current save data to disk\n" },
		{ "CPP_Default_SaveSlotIndex", "1" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "Saves the current save data to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveSlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_SaveSlotIndex = { "SaveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameSaveSubsystem_eventSaveGame_Parms, SaveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotIndex_MetaData), NewProp_SaveSlotIndex_MetaData) };
void Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventSaveGame_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_SaveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "SaveGame", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::GameSaveSubsystem_eventSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::GameSaveSubsystem_eventSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execSaveGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SaveSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveGame(Z_Param_SaveSlotIndex);
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function SaveGame

// Begin Class UGameSaveSubsystem Function SavePersistantData
struct Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics
{
	struct GameSaveSubsystem_eventSavePersistantData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "Comment", "// Saves the persistent save data to disk\n" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
		{ "ToolTip", "Saves the persistent save data to disk" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameSaveSubsystem_eventSavePersistantData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameSaveSubsystem_eventSavePersistantData_Parms), &Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveSubsystem, nullptr, "SavePersistantData", nullptr, nullptr, Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::GameSaveSubsystem_eventSavePersistantData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::GameSaveSubsystem_eventSavePersistantData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameSaveSubsystem::execSavePersistantData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SavePersistantData();
	P_NATIVE_END;
}
// End Class UGameSaveSubsystem Function SavePersistantData

// Begin Class UGameSaveSubsystem
void UGameSaveSubsystem::StaticRegisterNativesUGameSaveSubsystem()
{
	UClass* Class = UGameSaveSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoSaveGame", &UGameSaveSubsystem::execAutoSaveGame },
		{ "ClearLoadingFlag", &UGameSaveSubsystem::execClearLoadingFlag },
		{ "CreateScreenShotForSaveGame", &UGameSaveSubsystem::execCreateScreenShotForSaveGame },
		{ "DeleteSaveGame", &UGameSaveSubsystem::execDeleteSaveGame },
		{ "GetAutoSaveGameMetaDataBySlotIndex", &UGameSaveSubsystem::execGetAutoSaveGameMetaDataBySlotIndex },
		{ "GetCurrentlyUsedAutoSaveSlotsCount", &UGameSaveSubsystem::execGetCurrentlyUsedAutoSaveSlotsCount },
		{ "GetCurrentlyUsedSaveSlotsCount", &UGameSaveSubsystem::execGetCurrentlyUsedSaveSlotsCount },
		{ "GetLatestSaveGameScreenshot", &UGameSaveSubsystem::execGetLatestSaveGameScreenshot },
		{ "GetSaveGameMetaDataBySlotIndex", &UGameSaveSubsystem::execGetSaveGameMetaDataBySlotIndex },
		{ "LoadAutoSaveGame", &UGameSaveSubsystem::execLoadAutoSaveGame },
		{ "LoadGame", &UGameSaveSubsystem::execLoadGame },
		{ "OnAutoSaveTick", &UGameSaveSubsystem::execOnAutoSaveTick },
		{ "OnConfirmDeleteSavePopUpResult", &UGameSaveSubsystem::execOnConfirmDeleteSavePopUpResult },
		{ "OnOverwritePopUpResult", &UGameSaveSubsystem::execOnOverwritePopUpResult },
		{ "OnSaveGameNameReceived", &UGameSaveSubsystem::execOnSaveGameNameReceived },
		{ "PrepareSaveGameObject", &UGameSaveSubsystem::execPrepareSaveGameObject },
		{ "SaveGame", &UGameSaveSubsystem::execSaveGame },
		{ "SavePersistantData", &UGameSaveSubsystem::execSavePersistantData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSaveSubsystem);
UClass* Z_Construct_UClass_UGameSaveSubsystem_NoRegister()
{
	return UGameSaveSubsystem::StaticClass();
}
struct Z_Construct_UClass_UGameSaveSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGame/GameSaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGamePrepared_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAutoGameSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameDeleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoading_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveSlotIndex_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveFileToDelete_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistantSaveGameObject_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/SaveGame/GameSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGamePrepared;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSaved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAutoGameSaved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameDeleted;
	static void NewProp_bIsLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSaveSlotIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileToDelete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersistantSaveGameObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSaveSubsystem_AutoSaveGame, "AutoSaveGame" }, // 2536993016
		{ &Z_Construct_UFunction_UGameSaveSubsystem_ClearLoadingFlag, "ClearLoadingFlag" }, // 606450240
		{ &Z_Construct_UFunction_UGameSaveSubsystem_CreateScreenShotForSaveGame, "CreateScreenShotForSaveGame" }, // 2988248751
		{ &Z_Construct_UFunction_UGameSaveSubsystem_DeleteSaveGame, "DeleteSaveGame" }, // 602731899
		{ &Z_Construct_UFunction_UGameSaveSubsystem_GetAutoSaveGameMetaDataBySlotIndex, "GetAutoSaveGameMetaDataBySlotIndex" }, // 2187636965
		{ &Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedAutoSaveSlotsCount, "GetCurrentlyUsedAutoSaveSlotsCount" }, // 4276864120
		{ &Z_Construct_UFunction_UGameSaveSubsystem_GetCurrentlyUsedSaveSlotsCount, "GetCurrentlyUsedSaveSlotsCount" }, // 740332175
		{ &Z_Construct_UFunction_UGameSaveSubsystem_GetLatestSaveGameScreenshot, "GetLatestSaveGameScreenshot" }, // 3633407116
		{ &Z_Construct_UFunction_UGameSaveSubsystem_GetSaveGameMetaDataBySlotIndex, "GetSaveGameMetaDataBySlotIndex" }, // 3390948171
		{ &Z_Construct_UFunction_UGameSaveSubsystem_LoadAutoSaveGame, "LoadAutoSaveGame" }, // 2551146576
		{ &Z_Construct_UFunction_UGameSaveSubsystem_LoadGame, "LoadGame" }, // 85985188
		{ &Z_Construct_UFunction_UGameSaveSubsystem_OnAutoSaveTick, "OnAutoSaveTick" }, // 2578683613
		{ &Z_Construct_UFunction_UGameSaveSubsystem_OnConfirmDeleteSavePopUpResult, "OnConfirmDeleteSavePopUpResult" }, // 794250960
		{ &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature, "OnGameLoaded__DelegateSignature" }, // 2494853461
		{ &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature, "OnGameSaved__DelegateSignature" }, // 2409956872
		{ &Z_Construct_UFunction_UGameSaveSubsystem_OnOverwritePopUpResult, "OnOverwritePopUpResult" }, // 867610239
		{ &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature, "OnSaveGameDeleted__DelegateSignature" }, // 3093807669
		{ &Z_Construct_UFunction_UGameSaveSubsystem_OnSaveGameNameReceived, "OnSaveGameNameReceived" }, // 4280112825
		{ &Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature, "OnSaveGamePrepared__DelegateSignature" }, // 56683317
		{ &Z_Construct_UFunction_UGameSaveSubsystem_PrepareSaveGameObject, "PrepareSaveGameObject" }, // 1058688121
		{ &Z_Construct_UFunction_UGameSaveSubsystem_SaveGame, "SaveGame" }, // 1640059454
		{ &Z_Construct_UFunction_UGameSaveSubsystem_SavePersistantData, "SavePersistantData" }, // 1877095661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSaveSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnSaveGamePrepared = { "OnSaveGamePrepared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, OnSaveGamePrepared), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGamePrepared__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveGamePrepared_MetaData), NewProp_OnSaveGamePrepared_MetaData) }; // 56683317
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnGameSaved = { "OnGameSaved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, OnGameSaved), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameSaved_MetaData), NewProp_OnGameSaved_MetaData) }; // 2409956872
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnAutoGameSaved = { "OnAutoGameSaved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, OnAutoGameSaved), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameSaved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAutoGameSaved_MetaData), NewProp_OnAutoGameSaved_MetaData) }; // 2409956872
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnGameLoaded = { "OnGameLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, OnGameLoaded), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnGameLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameLoaded_MetaData), NewProp_OnGameLoaded_MetaData) }; // 2494853461
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnSaveGameDeleted = { "OnSaveGameDeleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, OnSaveGameDeleted), Z_Construct_UDelegateFunction_UGameSaveSubsystem_OnSaveGameDeleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveGameDeleted_MetaData), NewProp_OnSaveGameDeleted_MetaData) }; // 3093807669
void Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_bIsLoading_SetBit(void* Obj)
{
	((UGameSaveSubsystem*)Obj)->bIsLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameSaveSubsystem), &Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoading_MetaData), NewProp_bIsLoading_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, SaveGameObject), Z_Construct_UClass_UVNMBaseSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameObject_MetaData), NewProp_SaveGameObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_CurrentSaveSlotIndex = { "CurrentSaveSlotIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, CurrentSaveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveSlotIndex_MetaData), NewProp_CurrentSaveSlotIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_SaveFileToDelete = { "SaveFileToDelete", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, SaveFileToDelete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveFileToDelete_MetaData), NewProp_SaveFileToDelete_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_PersistantSaveGameObject = { "PersistantSaveGameObject", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveSubsystem, PersistantSaveGameObject), Z_Construct_UClass_UVNMBasePersistantSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistantSaveGameObject_MetaData), NewProp_PersistantSaveGameObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSaveSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnSaveGamePrepared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnGameSaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnAutoGameSaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnGameLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_OnSaveGameDeleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_bIsLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_CurrentSaveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_SaveFileToDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveSubsystem_Statics::NewProp_PersistantSaveGameObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameSaveSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSaveSubsystem_Statics::ClassParams = {
	&UGameSaveSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameSaveSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSaveSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSaveSubsystem()
{
	if (!Z_Registration_Info_UClass_UGameSaveSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSaveSubsystem.OuterSingleton, Z_Construct_UClass_UGameSaveSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSaveSubsystem.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UGameSaveSubsystem>()
{
	return UGameSaveSubsystem::StaticClass();
}
UGameSaveSubsystem::UGameSaveSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSaveSubsystem);
UGameSaveSubsystem::~UGameSaveSubsystem() {}
// End Class UGameSaveSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSaveSubsystem, UGameSaveSubsystem::StaticClass, TEXT("UGameSaveSubsystem"), &Z_Registration_Info_UClass_UGameSaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSaveSubsystem), 561159328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_3195548869(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_GameSaveSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
