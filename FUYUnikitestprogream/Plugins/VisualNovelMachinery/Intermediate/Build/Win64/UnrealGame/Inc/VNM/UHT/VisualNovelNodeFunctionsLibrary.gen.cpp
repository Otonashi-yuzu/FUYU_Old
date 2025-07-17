// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/VisualNovelNodeFunctionsLibrary.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "VNM/Public/Common/VNMControlStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualNovelNodeFunctionsLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary();
VNM_API UClass* Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogWindowData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogChoicesData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogTextData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCharacter3DData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideDialogSceneData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FHideSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveRenameCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FMoveCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayCgAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayCharacterAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FRenameCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCgData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCharacter3DData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowCharacterData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowDialogSceneData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FShowSceneBackgroundData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FStopDialogAudioData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchToCameraData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetHideData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetShowData();
// End Cross Module References

// Begin Class UVisualNovelNodeFunctionsLibrary Function AddLayerToCg
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms
	{
		UObject* WorldContextObject;
		FAddLayerToCgData AddLayerToCgData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddLayerToCgData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_AddLayerToCgData = { "AddLayerToCgData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms, AddLayerToCgData), Z_Construct_UScriptStruct_FAddLayerToCgData, METADATA_PARAMS(0, nullptr) }; // 1887312471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_AddLayerToCgData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "AddLayerToCg", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToCg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execAddLayerToCg)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FAddLayerToCgData,Z_Param_AddLayerToCgData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::AddLayerToCg(Z_Param_WorldContextObject,Z_Param_AddLayerToCgData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function AddLayerToCg

// Begin Class UVisualNovelNodeFunctionsLibrary Function AddLayerToCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms
	{
		UObject* WorldContextObject;
		FAddLayerToCharacterData AddLayerToCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddLayerToCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_AddLayerToCharacterData = { "AddLayerToCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms, AddLayerToCharacterData), Z_Construct_UScriptStruct_FAddLayerToCharacterData, METADATA_PARAMS(0, nullptr) }; // 2136561642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_AddLayerToCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "AddLayerToCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execAddLayerToCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FAddLayerToCharacterData,Z_Param_AddLayerToCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::AddLayerToCharacter(Z_Param_WorldContextObject,Z_Param_AddLayerToCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function AddLayerToCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function AddLayerToSceneBackground
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms
	{
		UObject* WorldContextObject;
		FAddLayerToSceneBackgroundData AddLayerToSceneBackgroundData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddLayerToSceneBackgroundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_AddLayerToSceneBackgroundData = { "AddLayerToSceneBackgroundData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms, AddLayerToSceneBackgroundData), Z_Construct_UScriptStruct_FAddLayerToSceneBackgroundData, METADATA_PARAMS(0, nullptr) }; // 1671301730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_AddLayerToSceneBackgroundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "AddLayerToSceneBackground", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventAddLayerToSceneBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execAddLayerToSceneBackground)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FAddLayerToSceneBackgroundData,Z_Param_AddLayerToSceneBackgroundData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::AddLayerToSceneBackground(Z_Param_WorldContextObject,Z_Param_AddLayerToSceneBackgroundData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function AddLayerToSceneBackground

// Begin Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToBool
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms
	{
		FString InString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a string to a  value, either 'true' or 'false' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Boolean)" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "Converts a string to a  value, either 'true' or 'false'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
void Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms), &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "Conv_StringToBool", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execConv_StringToBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVisualNovelNodeFunctionsLibrary::Conv_StringToBool(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToBool

// Begin Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToByte
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventConv_StringToByte_Parms
	{
		FString InString;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a byte value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Byte)" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "Converts a byte value to a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventConv_StringToByte_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventConv_StringToByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "Conv_StringToByte", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execConv_StringToByte)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UVisualNovelNodeFunctionsLibrary::Conv_StringToByte(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToByte

// Begin Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToInt64
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventConv_StringToInt64_Parms
	{
		FString InString;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a int64 value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Integer64)" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "Converts a int64 value to a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventConv_StringToInt64_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventConv_StringToInt64_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "Conv_StringToInt64", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::VisualNovelNodeFunctionsLibrary_eventConv_StringToInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execConv_StringToInt64)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UVisualNovelNodeFunctionsLibrary::Conv_StringToInt64(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function Conv_StringToInt64

// Begin Class UVisualNovelNodeFunctionsLibrary Function DisplayDialogChoices
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms
	{
		UObject* WorldContextObject;
		FDisplayDialogChoicesData DisplayDialogChoicesData;
		FLatentActionInfo LatentInfo;
		FName SelectedChoice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayDialogChoicesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedChoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_DisplayDialogChoicesData = { "DisplayDialogChoicesData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms, DisplayDialogChoicesData), Z_Construct_UScriptStruct_FDisplayDialogChoicesData, METADATA_PARAMS(0, nullptr) }; // 943711199
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_SelectedChoice = { "SelectedChoice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms, SelectedChoice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_DisplayDialogChoicesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::NewProp_SelectedChoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "DisplayDialogChoices", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::VisualNovelNodeFunctionsLibrary_eventDisplayDialogChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execDisplayDialogChoices)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FDisplayDialogChoicesData,Z_Param_DisplayDialogChoicesData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SelectedChoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::DisplayDialogChoices(Z_Param_WorldContextObject,Z_Param_DisplayDialogChoicesData,Z_Param_LatentInfo,Z_Param_Out_SelectedChoice);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function DisplayDialogChoices

// Begin Class UVisualNovelNodeFunctionsLibrary Function DisplayDialogText
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms
	{
		UObject* WorldContextObject;
		FDisplayDialogTextData DisplayDialogTextData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Dialog Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Dialog Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayDialogTextData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_DisplayDialogTextData = { "DisplayDialogTextData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms, DisplayDialogTextData), Z_Construct_UScriptStruct_FDisplayDialogTextData, METADATA_PARAMS(0, nullptr) }; // 1870991937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_DisplayDialogTextData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "DisplayDialogText", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::VisualNovelNodeFunctionsLibrary_eventDisplayDialogText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execDisplayDialogText)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FDisplayDialogTextData,Z_Param_DisplayDialogTextData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::DisplayDialogText(Z_Param_WorldContextObject,Z_Param_DisplayDialogTextData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function DisplayDialogText

// Begin Class UVisualNovelNodeFunctionsLibrary Function GetDialogPlayerInput
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FString PlayerInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms, PlayerInput), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::NewProp_PlayerInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "GetDialogPlayerInput", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::VisualNovelNodeFunctionsLibrary_eventGetDialogPlayerInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execGetDialogPlayerInput)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PlayerInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::GetDialogPlayerInput(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_PlayerInput);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function GetDialogPlayerInput

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideCg
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideCg_Parms
	{
		UObject* WorldContextObject;
		FHideCgData HideCgData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HideCgData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCg_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_HideCgData = { "HideCgData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCg_Parms, HideCgData), Z_Construct_UScriptStruct_FHideCgData, METADATA_PARAMS(0, nullptr) }; // 1483313941
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCg_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_HideCgData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideCg", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::VisualNovelNodeFunctionsLibrary_eventHideCg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::VisualNovelNodeFunctionsLibrary_eventHideCg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideCg)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FHideCgData,Z_Param_HideCgData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideCg(Z_Param_WorldContextObject,Z_Param_HideCgData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideCg

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms
	{
		UObject* WorldContextObject;
		FHideCharacterData HideCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HideCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_HideCharacterData = { "HideCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms, HideCharacterData), Z_Construct_UScriptStruct_FHideCharacterData, METADATA_PARAMS(0, nullptr) }; // 2265326339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_HideCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventHideCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FHideCharacterData,Z_Param_HideCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideCharacter(Z_Param_WorldContextObject,Z_Param_HideCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideCharacter3D
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms
	{
		UObject* WorldContextObject;
		FHideCharacter3DData HideCharacter3DData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HideCharacter3DData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_HideCharacter3DData = { "HideCharacter3DData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms, HideCharacter3DData), Z_Construct_UScriptStruct_FHideCharacter3DData, METADATA_PARAMS(0, nullptr) }; // 628649796
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_HideCharacter3DData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideCharacter3D", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::VisualNovelNodeFunctionsLibrary_eventHideCharacter3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideCharacter3D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FHideCharacter3DData,Z_Param_HideCharacter3DData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideCharacter3D(Z_Param_WorldContextObject,Z_Param_HideCharacter3DData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideCharacter3D

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideDialogScene
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms
	{
		UObject* WorldContextObject;
		FHideDialogSceneData HideDialogSceneData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HideDialogSceneData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_HideDialogSceneData = { "HideDialogSceneData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms, HideDialogSceneData), Z_Construct_UScriptStruct_FHideDialogSceneData, METADATA_PARAMS(0, nullptr) }; // 248525410
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_HideDialogSceneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideDialogScene", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::VisualNovelNodeFunctionsLibrary_eventHideDialogScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideDialogScene)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FHideDialogSceneData,Z_Param_HideDialogSceneData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideDialogScene(Z_Param_WorldContextObject,Z_Param_HideDialogSceneData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideDialogScene

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideDialogWindow
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms
	{
		UObject* WorldContextObject;
		FDialogWindowData DialogWindowData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogWindowData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_DialogWindowData = { "DialogWindowData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms, DialogWindowData), Z_Construct_UScriptStruct_FDialogWindowData, METADATA_PARAMS(0, nullptr) }; // 80077563
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_DialogWindowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideDialogWindow", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::VisualNovelNodeFunctionsLibrary_eventHideDialogWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideDialogWindow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FDialogWindowData,Z_Param_DialogWindowData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideDialogWindow(Z_Param_WorldContextObject,Z_Param_DialogWindowData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideDialogWindow

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideSceneBackground
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms
	{
		UObject* WorldContextObject;
		FHideSceneBackgroundData HideSceneBackgroundData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HideSceneBackgroundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_HideSceneBackgroundData = { "HideSceneBackgroundData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms, HideSceneBackgroundData), Z_Construct_UScriptStruct_FHideSceneBackgroundData, METADATA_PARAMS(0, nullptr) }; // 1267863955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_HideSceneBackgroundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideSceneBackground", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventHideSceneBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideSceneBackground)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FHideSceneBackgroundData,Z_Param_HideSceneBackgroundData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideSceneBackground(Z_Param_WorldContextObject,Z_Param_HideSceneBackgroundData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideSceneBackground

// Begin Class UVisualNovelNodeFunctionsLibrary Function HideWidget
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms
	{
		UObject* WorldContextObject;
		FWidgetHideData WidgetHideData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetHideData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_WidgetHideData = { "WidgetHideData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms, WidgetHideData), Z_Construct_UScriptStruct_FWidgetHideData, METADATA_PARAMS(0, nullptr) }; // 5765746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_WidgetHideData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "HideWidget", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::VisualNovelNodeFunctionsLibrary_eventHideWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execHideWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FWidgetHideData,Z_Param_WidgetHideData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::HideWidget(Z_Param_WorldContextObject,Z_Param_WidgetHideData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function HideWidget

// Begin Class UVisualNovelNodeFunctionsLibrary Function InteractiveRenameCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms
	{
		UObject* WorldContextObject;
		FInteractiveRenameCharacterData InteractiveRenameCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractiveRenameCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_InteractiveRenameCharacterData = { "InteractiveRenameCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms, InteractiveRenameCharacterData), Z_Construct_UScriptStruct_FInteractiveRenameCharacterData, METADATA_PARAMS(0, nullptr) }; // 4196499639
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_InteractiveRenameCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "InteractiveRenameCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventInteractiveRenameCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execInteractiveRenameCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FInteractiveRenameCharacterData,Z_Param_InteractiveRenameCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::InteractiveRenameCharacter(Z_Param_WorldContextObject,Z_Param_InteractiveRenameCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function InteractiveRenameCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function MoveCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms
	{
		UObject* WorldContextObject;
		FMoveCharacterData MoveCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_MoveCharacterData = { "MoveCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms, MoveCharacterData), Z_Construct_UScriptStruct_FMoveCharacterData, METADATA_PARAMS(0, nullptr) }; // 2462438617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_MoveCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "MoveCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventMoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execMoveCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FMoveCharacterData,Z_Param_MoveCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::MoveCharacter(Z_Param_WorldContextObject,Z_Param_MoveCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function MoveCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayBackgroundMusic
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms
	{
		UObject* WorldContextObject;
		FPlayDialogAudioBackgroundMusicData PlayDialogAudioBackgroundMusicData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Dialog Audio\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Dialog Audio" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayDialogAudioBackgroundMusicData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_PlayDialogAudioBackgroundMusicData = { "PlayDialogAudioBackgroundMusicData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms, PlayDialogAudioBackgroundMusicData), Z_Construct_UScriptStruct_FPlayDialogAudioBackgroundMusicData, METADATA_PARAMS(0, nullptr) }; // 3795791951
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_PlayDialogAudioBackgroundMusicData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayBackgroundMusic", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::VisualNovelNodeFunctionsLibrary_eventPlayBackgroundMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayBackgroundMusic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayDialogAudioBackgroundMusicData,Z_Param_PlayDialogAudioBackgroundMusicData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayBackgroundMusic(Z_Param_WorldContextObject,Z_Param_PlayDialogAudioBackgroundMusicData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayBackgroundMusic

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayCgAnimation
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms
	{
		UObject* WorldContextObject;
		FPlayCgAnimationData PlayCgAnimationData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayCgAnimationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_PlayCgAnimationData = { "PlayCgAnimationData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms, PlayCgAnimationData), Z_Construct_UScriptStruct_FPlayCgAnimationData, METADATA_PARAMS(0, nullptr) }; // 2175893155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_PlayCgAnimationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayCgAnimation", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCgAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayCgAnimation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayCgAnimationData,Z_Param_PlayCgAnimationData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayCgAnimation(Z_Param_WorldContextObject,Z_Param_PlayCgAnimationData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayCgAnimation

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayCharacterAnimation
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms
	{
		UObject* WorldContextObject;
		FPlayCharacterAnimationData PlayCharacterAnimationData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayCharacterAnimationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_PlayCharacterAnimationData = { "PlayCharacterAnimationData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms, PlayCharacterAnimationData), Z_Construct_UScriptStruct_FPlayCharacterAnimationData, METADATA_PARAMS(0, nullptr) }; // 3962213498
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_PlayCharacterAnimationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayCharacterAnimation", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCharacterAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayCharacterAnimation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayCharacterAnimationData,Z_Param_PlayCharacterAnimationData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayCharacterAnimation(Z_Param_WorldContextObject,Z_Param_PlayCharacterAnimationData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayCharacterAnimation

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayCharacterVoiceOver
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms
	{
		UObject* WorldContextObject;
		FPlayDialogAudioCharacterVoiceOverData PlayDialogAudioCharacterVoiceOverData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayDialogAudioCharacterVoiceOverData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_PlayDialogAudioCharacterVoiceOverData = { "PlayDialogAudioCharacterVoiceOverData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms, PlayDialogAudioCharacterVoiceOverData), Z_Construct_UScriptStruct_FPlayDialogAudioCharacterVoiceOverData, METADATA_PARAMS(0, nullptr) }; // 592540491
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_PlayDialogAudioCharacterVoiceOverData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayCharacterVoiceOver", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventPlayCharacterVoiceOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayCharacterVoiceOver)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayDialogAudioCharacterVoiceOverData,Z_Param_PlayDialogAudioCharacterVoiceOverData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayCharacterVoiceOver(Z_Param_WorldContextObject,Z_Param_PlayDialogAudioCharacterVoiceOverData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayCharacterVoiceOver

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayDialogVoiceOver
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms
	{
		UObject* WorldContextObject;
		FPlayDialogAudioDialogVoiceOverData PlayDialogAudioDialogVoiceOverData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayDialogAudioDialogVoiceOverData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_PlayDialogAudioDialogVoiceOverData = { "PlayDialogAudioDialogVoiceOverData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms, PlayDialogAudioDialogVoiceOverData), Z_Construct_UScriptStruct_FPlayDialogAudioDialogVoiceOverData, METADATA_PARAMS(0, nullptr) }; // 3920015262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_PlayDialogAudioDialogVoiceOverData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayDialogVoiceOver", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventPlayDialogVoiceOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayDialogVoiceOver)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayDialogAudioDialogVoiceOverData,Z_Param_PlayDialogAudioDialogVoiceOverData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayDialogVoiceOver(Z_Param_WorldContextObject,Z_Param_PlayDialogAudioDialogVoiceOverData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayDialogVoiceOver

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlayDialogWindowAnimation
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms
	{
		UObject* WorldContextObject;
		FPlayDialogWindowAnimationData PlayDialogWindowAnimationData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayDialogWindowAnimationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_PlayDialogWindowAnimationData = { "PlayDialogWindowAnimationData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms, PlayDialogWindowAnimationData), Z_Construct_UScriptStruct_FPlayDialogWindowAnimationData, METADATA_PARAMS(0, nullptr) }; // 3816072242
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_PlayDialogWindowAnimationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlayDialogWindowAnimation", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlayDialogWindowAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlayDialogWindowAnimation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayDialogWindowAnimationData,Z_Param_PlayDialogWindowAnimationData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlayDialogWindowAnimation(Z_Param_WorldContextObject,Z_Param_PlayDialogWindowAnimationData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlayDialogWindowAnimation

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlaySceneBackgroundAnimation
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms
	{
		UObject* WorldContextObject;
		FPlaySceneBackgroundAnimationData PlaySceneBackgroundAnimationData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaySceneBackgroundAnimationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_PlaySceneBackgroundAnimationData = { "PlaySceneBackgroundAnimationData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms, PlaySceneBackgroundAnimationData), Z_Construct_UScriptStruct_FPlaySceneBackgroundAnimationData, METADATA_PARAMS(0, nullptr) }; // 4154826063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_PlaySceneBackgroundAnimationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlaySceneBackgroundAnimation", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::VisualNovelNodeFunctionsLibrary_eventPlaySceneBackgroundAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlaySceneBackgroundAnimation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlaySceneBackgroundAnimationData,Z_Param_PlaySceneBackgroundAnimationData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlaySceneBackgroundAnimation(Z_Param_WorldContextObject,Z_Param_PlaySceneBackgroundAnimationData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlaySceneBackgroundAnimation

// Begin Class UVisualNovelNodeFunctionsLibrary Function PlaySoundEffect
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms
	{
		UObject* WorldContextObject;
		FPlayDialogAudioData PlayDialogAudioData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayDialogAudioData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_PlayDialogAudioData = { "PlayDialogAudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms, PlayDialogAudioData), Z_Construct_UScriptStruct_FPlayDialogAudioData, METADATA_PARAMS(0, nullptr) }; // 1379367647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_PlayDialogAudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "PlaySoundEffect", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::VisualNovelNodeFunctionsLibrary_eventPlaySoundEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execPlaySoundEffect)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPlayDialogAudioData,Z_Param_PlayDialogAudioData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::PlaySoundEffect(Z_Param_WorldContextObject,Z_Param_PlayDialogAudioData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function PlaySoundEffect

// Begin Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromCg
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms
	{
		UObject* WorldContextObject;
		FRemoveLayerFromCgData RemoveLayerFromCgData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveLayerFromCgData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_RemoveLayerFromCgData = { "RemoveLayerFromCgData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms, RemoveLayerFromCgData), Z_Construct_UScriptStruct_FRemoveLayerFromCgData, METADATA_PARAMS(0, nullptr) }; // 4080450825
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_RemoveLayerFromCgData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "RemoveLayerFromCg", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromCg)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRemoveLayerFromCgData,Z_Param_RemoveLayerFromCgData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCg(Z_Param_WorldContextObject,Z_Param_RemoveLayerFromCgData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromCg

// Begin Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms
	{
		UObject* WorldContextObject;
		FRemoveLayerFromCharacterData RemoveLayerFromCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveLayerFromCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_RemoveLayerFromCharacterData = { "RemoveLayerFromCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms, RemoveLayerFromCharacterData), Z_Construct_UScriptStruct_FRemoveLayerFromCharacterData, METADATA_PARAMS(0, nullptr) }; // 625590281
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_RemoveLayerFromCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "RemoveLayerFromCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRemoveLayerFromCharacterData,Z_Param_RemoveLayerFromCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::RemoveLayerFromCharacter(Z_Param_WorldContextObject,Z_Param_RemoveLayerFromCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromSceneBackground
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms
	{
		UObject* WorldContextObject;
		FRemoveLayerFromSceneBackgroundData RemoveLayerFromSceneBackgroundData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveLayerFromSceneBackgroundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_RemoveLayerFromSceneBackgroundData = { "RemoveLayerFromSceneBackgroundData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms, RemoveLayerFromSceneBackgroundData), Z_Construct_UScriptStruct_FRemoveLayerFromSceneBackgroundData, METADATA_PARAMS(0, nullptr) }; // 3416998320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_RemoveLayerFromSceneBackgroundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "RemoveLayerFromSceneBackground", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventRemoveLayerFromSceneBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromSceneBackground)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRemoveLayerFromSceneBackgroundData,Z_Param_RemoveLayerFromSceneBackgroundData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::RemoveLayerFromSceneBackground(Z_Param_WorldContextObject,Z_Param_RemoveLayerFromSceneBackgroundData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function RemoveLayerFromSceneBackground

// Begin Class UVisualNovelNodeFunctionsLibrary Function RenameCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms
	{
		UObject* WorldContextObject;
		FRenameCharacterData RenameCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenameCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_RenameCharacterData = { "RenameCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms, RenameCharacterData), Z_Construct_UScriptStruct_FRenameCharacterData, METADATA_PARAMS(0, nullptr) }; // 692923232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_RenameCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "RenameCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventRenameCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execRenameCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRenameCharacterData,Z_Param_RenameCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::RenameCharacter(Z_Param_WorldContextObject,Z_Param_RenameCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function RenameCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowCg
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowCg_Parms
	{
		UObject* WorldContextObject;
		FShowCgData ShowCgData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * CG Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* CG Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowCgData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCg_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_ShowCgData = { "ShowCgData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCg_Parms, ShowCgData), Z_Construct_UScriptStruct_FShowCgData, METADATA_PARAMS(0, nullptr) }; // 255889298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCg_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_ShowCgData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowCg", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::VisualNovelNodeFunctionsLibrary_eventShowCg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::VisualNovelNodeFunctionsLibrary_eventShowCg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowCg)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FShowCgData,Z_Param_ShowCgData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowCg(Z_Param_WorldContextObject,Z_Param_ShowCgData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowCg

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowCharacter
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms
	{
		UObject* WorldContextObject;
		FShowCharacterData ShowCharacterData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Character Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Character Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_ShowCharacterData = { "ShowCharacterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms, ShowCharacterData), Z_Construct_UScriptStruct_FShowCharacterData, METADATA_PARAMS(0, nullptr) }; // 2268073467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_ShowCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowCharacter", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::VisualNovelNodeFunctionsLibrary_eventShowCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowCharacter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FShowCharacterData,Z_Param_ShowCharacterData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowCharacter(Z_Param_WorldContextObject,Z_Param_ShowCharacterData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowCharacter

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowCharacter3D
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms
	{
		UObject* WorldContextObject;
		FShowCharacter3DData ShowCharacter3DData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Character 3D Nodes\n\x09*/" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Character 3D Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowCharacter3DData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_ShowCharacter3DData = { "ShowCharacter3DData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms, ShowCharacter3DData), Z_Construct_UScriptStruct_FShowCharacter3DData, METADATA_PARAMS(0, nullptr) }; // 3819998670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_ShowCharacter3DData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowCharacter3D", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::VisualNovelNodeFunctionsLibrary_eventShowCharacter3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowCharacter3D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FShowCharacter3DData,Z_Param_ShowCharacter3DData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowCharacter3D(Z_Param_WorldContextObject,Z_Param_ShowCharacter3DData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowCharacter3D

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowDialogScene
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms
	{
		UObject* WorldContextObject;
		FShowDialogSceneData ShowDialogSceneData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Dialog Scene Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Dialog Scene Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowDialogSceneData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_ShowDialogSceneData = { "ShowDialogSceneData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms, ShowDialogSceneData), Z_Construct_UScriptStruct_FShowDialogSceneData, METADATA_PARAMS(0, nullptr) }; // 2880614750
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_ShowDialogSceneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowDialogScene", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::VisualNovelNodeFunctionsLibrary_eventShowDialogScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowDialogScene)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FShowDialogSceneData,Z_Param_ShowDialogSceneData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowDialogScene(Z_Param_WorldContextObject,Z_Param_ShowDialogSceneData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowDialogScene

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowDialogWindow
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms
	{
		UObject* WorldContextObject;
		FDialogWindowData DialogWindowData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * Dialog Window Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* Dialog Window Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogWindowData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_DialogWindowData = { "DialogWindowData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms, DialogWindowData), Z_Construct_UScriptStruct_FDialogWindowData, METADATA_PARAMS(0, nullptr) }; // 80077563
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_DialogWindowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowDialogWindow", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::VisualNovelNodeFunctionsLibrary_eventShowDialogWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowDialogWindow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FDialogWindowData,Z_Param_DialogWindowData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowDialogWindow(Z_Param_WorldContextObject,Z_Param_DialogWindowData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowDialogWindow

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowSceneBackground
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms
	{
		UObject* WorldContextObject;
		FShowSceneBackgroundData ShowSceneBackgroundData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "/*\n\x09 * SceneBackground Nodes\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "ToolTip", "* SceneBackground Nodes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowSceneBackgroundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_ShowSceneBackgroundData = { "ShowSceneBackgroundData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms, ShowSceneBackgroundData), Z_Construct_UScriptStruct_FShowSceneBackgroundData, METADATA_PARAMS(0, nullptr) }; // 1277410757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_ShowSceneBackgroundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowSceneBackground", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::VisualNovelNodeFunctionsLibrary_eventShowSceneBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowSceneBackground)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FShowSceneBackgroundData,Z_Param_ShowSceneBackgroundData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowSceneBackground(Z_Param_WorldContextObject,Z_Param_ShowSceneBackgroundData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowSceneBackground

// Begin Class UVisualNovelNodeFunctionsLibrary Function ShowWidget
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms
	{
		UObject* WorldContextObject;
		FWidgetShowData WidgetShowData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetShowData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_WidgetShowData = { "WidgetShowData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms, WidgetShowData), Z_Construct_UScriptStruct_FWidgetShowData, METADATA_PARAMS(0, nullptr) }; // 2750612623
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_WidgetShowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "ShowWidget", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::VisualNovelNodeFunctionsLibrary_eventShowWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execShowWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FWidgetShowData,Z_Param_WidgetShowData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::ShowWidget(Z_Param_WorldContextObject,Z_Param_WidgetShowData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function ShowWidget

// Begin Class UVisualNovelNodeFunctionsLibrary Function StopBackgroundMusic
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventStopBackgroundMusic_Parms
	{
		UObject* WorldContextObject;
		FStopDialogAudioData StopDialogAudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StopDialogAudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopBackgroundMusic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::NewProp_StopDialogAudioData = { "StopDialogAudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopBackgroundMusic_Parms, StopDialogAudioData), Z_Construct_UScriptStruct_FStopDialogAudioData, METADATA_PARAMS(0, nullptr) }; // 1370051894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::NewProp_StopDialogAudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "StopBackgroundMusic", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::VisualNovelNodeFunctionsLibrary_eventStopBackgroundMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::VisualNovelNodeFunctionsLibrary_eventStopBackgroundMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execStopBackgroundMusic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FStopDialogAudioData,Z_Param_StopDialogAudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::StopBackgroundMusic(Z_Param_WorldContextObject,Z_Param_StopDialogAudioData);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function StopBackgroundMusic

// Begin Class UVisualNovelNodeFunctionsLibrary Function StopSoundEffect
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventStopSoundEffect_Parms
	{
		UObject* WorldContextObject;
		FStopDialogAudioData StopDialogAudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StopDialogAudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopSoundEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::NewProp_StopDialogAudioData = { "StopDialogAudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopSoundEffect_Parms, StopDialogAudioData), Z_Construct_UScriptStruct_FStopDialogAudioData, METADATA_PARAMS(0, nullptr) }; // 1370051894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::NewProp_StopDialogAudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "StopSoundEffect", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::VisualNovelNodeFunctionsLibrary_eventStopSoundEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::VisualNovelNodeFunctionsLibrary_eventStopSoundEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execStopSoundEffect)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FStopDialogAudioData,Z_Param_StopDialogAudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::StopSoundEffect(Z_Param_WorldContextObject,Z_Param_StopDialogAudioData);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function StopSoundEffect

// Begin Class UVisualNovelNodeFunctionsLibrary Function StopVoiceOver
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventStopVoiceOver_Parms
	{
		UObject* WorldContextObject;
		FStopDialogAudioData StopDialogAudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StopDialogAudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopVoiceOver_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::NewProp_StopDialogAudioData = { "StopDialogAudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventStopVoiceOver_Parms, StopDialogAudioData), Z_Construct_UScriptStruct_FStopDialogAudioData, METADATA_PARAMS(0, nullptr) }; // 1370051894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::NewProp_StopDialogAudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "StopVoiceOver", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventStopVoiceOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::VisualNovelNodeFunctionsLibrary_eventStopVoiceOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execStopVoiceOver)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FStopDialogAudioData,Z_Param_StopDialogAudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::StopVoiceOver(Z_Param_WorldContextObject,Z_Param_StopDialogAudioData);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function StopVoiceOver

// Begin Class UVisualNovelNodeFunctionsLibrary Function SwitchToCamera
struct Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics
{
	struct VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms
	{
		UObject* WorldContextObject;
		FSwitchToCameraData SwitchToCameraData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchToCameraData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_SwitchToCameraData = { "SwitchToCameraData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms, SwitchToCameraData), Z_Construct_UScriptStruct_FSwitchToCameraData, METADATA_PARAMS(0, nullptr) }; // 3118781157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_SwitchToCameraData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, nullptr, "SwitchToCamera", nullptr, nullptr, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::VisualNovelNodeFunctionsLibrary_eventSwitchToCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualNovelNodeFunctionsLibrary::execSwitchToCamera)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSwitchToCameraData,Z_Param_SwitchToCameraData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualNovelNodeFunctionsLibrary::SwitchToCamera(Z_Param_WorldContextObject,Z_Param_SwitchToCameraData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UVisualNovelNodeFunctionsLibrary Function SwitchToCamera

// Begin Class UVisualNovelNodeFunctionsLibrary
void UVisualNovelNodeFunctionsLibrary::StaticRegisterNativesUVisualNovelNodeFunctionsLibrary()
{
	UClass* Class = UVisualNovelNodeFunctionsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLayerToCg", &UVisualNovelNodeFunctionsLibrary::execAddLayerToCg },
		{ "AddLayerToCharacter", &UVisualNovelNodeFunctionsLibrary::execAddLayerToCharacter },
		{ "AddLayerToSceneBackground", &UVisualNovelNodeFunctionsLibrary::execAddLayerToSceneBackground },
		{ "Conv_StringToBool", &UVisualNovelNodeFunctionsLibrary::execConv_StringToBool },
		{ "Conv_StringToByte", &UVisualNovelNodeFunctionsLibrary::execConv_StringToByte },
		{ "Conv_StringToInt64", &UVisualNovelNodeFunctionsLibrary::execConv_StringToInt64 },
		{ "DisplayDialogChoices", &UVisualNovelNodeFunctionsLibrary::execDisplayDialogChoices },
		{ "DisplayDialogText", &UVisualNovelNodeFunctionsLibrary::execDisplayDialogText },
		{ "GetDialogPlayerInput", &UVisualNovelNodeFunctionsLibrary::execGetDialogPlayerInput },
		{ "HideCg", &UVisualNovelNodeFunctionsLibrary::execHideCg },
		{ "HideCharacter", &UVisualNovelNodeFunctionsLibrary::execHideCharacter },
		{ "HideCharacter3D", &UVisualNovelNodeFunctionsLibrary::execHideCharacter3D },
		{ "HideDialogScene", &UVisualNovelNodeFunctionsLibrary::execHideDialogScene },
		{ "HideDialogWindow", &UVisualNovelNodeFunctionsLibrary::execHideDialogWindow },
		{ "HideSceneBackground", &UVisualNovelNodeFunctionsLibrary::execHideSceneBackground },
		{ "HideWidget", &UVisualNovelNodeFunctionsLibrary::execHideWidget },
		{ "InteractiveRenameCharacter", &UVisualNovelNodeFunctionsLibrary::execInteractiveRenameCharacter },
		{ "MoveCharacter", &UVisualNovelNodeFunctionsLibrary::execMoveCharacter },
		{ "PlayBackgroundMusic", &UVisualNovelNodeFunctionsLibrary::execPlayBackgroundMusic },
		{ "PlayCgAnimation", &UVisualNovelNodeFunctionsLibrary::execPlayCgAnimation },
		{ "PlayCharacterAnimation", &UVisualNovelNodeFunctionsLibrary::execPlayCharacterAnimation },
		{ "PlayCharacterVoiceOver", &UVisualNovelNodeFunctionsLibrary::execPlayCharacterVoiceOver },
		{ "PlayDialogVoiceOver", &UVisualNovelNodeFunctionsLibrary::execPlayDialogVoiceOver },
		{ "PlayDialogWindowAnimation", &UVisualNovelNodeFunctionsLibrary::execPlayDialogWindowAnimation },
		{ "PlaySceneBackgroundAnimation", &UVisualNovelNodeFunctionsLibrary::execPlaySceneBackgroundAnimation },
		{ "PlaySoundEffect", &UVisualNovelNodeFunctionsLibrary::execPlaySoundEffect },
		{ "RemoveLayerFromCg", &UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromCg },
		{ "RemoveLayerFromCharacter", &UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromCharacter },
		{ "RemoveLayerFromSceneBackground", &UVisualNovelNodeFunctionsLibrary::execRemoveLayerFromSceneBackground },
		{ "RenameCharacter", &UVisualNovelNodeFunctionsLibrary::execRenameCharacter },
		{ "ShowCg", &UVisualNovelNodeFunctionsLibrary::execShowCg },
		{ "ShowCharacter", &UVisualNovelNodeFunctionsLibrary::execShowCharacter },
		{ "ShowCharacter3D", &UVisualNovelNodeFunctionsLibrary::execShowCharacter3D },
		{ "ShowDialogScene", &UVisualNovelNodeFunctionsLibrary::execShowDialogScene },
		{ "ShowDialogWindow", &UVisualNovelNodeFunctionsLibrary::execShowDialogWindow },
		{ "ShowSceneBackground", &UVisualNovelNodeFunctionsLibrary::execShowSceneBackground },
		{ "ShowWidget", &UVisualNovelNodeFunctionsLibrary::execShowWidget },
		{ "StopBackgroundMusic", &UVisualNovelNodeFunctionsLibrary::execStopBackgroundMusic },
		{ "StopSoundEffect", &UVisualNovelNodeFunctionsLibrary::execStopSoundEffect },
		{ "StopVoiceOver", &UVisualNovelNodeFunctionsLibrary::execStopVoiceOver },
		{ "SwitchToCamera", &UVisualNovelNodeFunctionsLibrary::execSwitchToCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualNovelNodeFunctionsLibrary);
UClass* Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_NoRegister()
{
	return UVisualNovelNodeFunctionsLibrary::StaticClass();
}
struct Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VisualNovelNodeFunctionsLibrary.h" },
		{ "ModuleRelativePath", "Public/VisualNovelNodeFunctionsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCg, "AddLayerToCg" }, // 1411202990
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToCharacter, "AddLayerToCharacter" }, // 2562113733
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_AddLayerToSceneBackground, "AddLayerToSceneBackground" }, // 1018301438
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToBool, "Conv_StringToBool" }, // 3317494198
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToByte, "Conv_StringToByte" }, // 468483670
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_Conv_StringToInt64, "Conv_StringToInt64" }, // 1198513442
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogChoices, "DisplayDialogChoices" }, // 789538892
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_DisplayDialogText, "DisplayDialogText" }, // 1002513912
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_GetDialogPlayerInput, "GetDialogPlayerInput" }, // 1525497060
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCg, "HideCg" }, // 1089565882
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter, "HideCharacter" }, // 2736462547
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideCharacter3D, "HideCharacter3D" }, // 4242998777
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogScene, "HideDialogScene" }, // 1086200851
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideDialogWindow, "HideDialogWindow" }, // 1383380512
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideSceneBackground, "HideSceneBackground" }, // 1660171842
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_HideWidget, "HideWidget" }, // 2216084728
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_InteractiveRenameCharacter, "InteractiveRenameCharacter" }, // 1329206979
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_MoveCharacter, "MoveCharacter" }, // 910974752
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayBackgroundMusic, "PlayBackgroundMusic" }, // 3803917957
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCgAnimation, "PlayCgAnimation" }, // 2333998559
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterAnimation, "PlayCharacterAnimation" }, // 1076342964
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayCharacterVoiceOver, "PlayCharacterVoiceOver" }, // 3018292124
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogVoiceOver, "PlayDialogVoiceOver" }, // 3044533939
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlayDialogWindowAnimation, "PlayDialogWindowAnimation" }, // 1510235407
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySceneBackgroundAnimation, "PlaySceneBackgroundAnimation" }, // 1808106429
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_PlaySoundEffect, "PlaySoundEffect" }, // 2373032521
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCg, "RemoveLayerFromCg" }, // 1908096798
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromCharacter, "RemoveLayerFromCharacter" }, // 2503563464
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RemoveLayerFromSceneBackground, "RemoveLayerFromSceneBackground" }, // 1404257779
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_RenameCharacter, "RenameCharacter" }, // 1349387020
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCg, "ShowCg" }, // 3648272730
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter, "ShowCharacter" }, // 509325670
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowCharacter3D, "ShowCharacter3D" }, // 2059390958
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogScene, "ShowDialogScene" }, // 1821327633
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowDialogWindow, "ShowDialogWindow" }, // 482362230
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowSceneBackground, "ShowSceneBackground" }, // 2199526080
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_ShowWidget, "ShowWidget" }, // 1402432501
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopBackgroundMusic, "StopBackgroundMusic" }, // 1439458584
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopSoundEffect, "StopSoundEffect" }, // 2846316938
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_StopVoiceOver, "StopVoiceOver" }, // 3673951628
		{ &Z_Construct_UFunction_UVisualNovelNodeFunctionsLibrary_SwitchToCamera, "SwitchToCamera" }, // 435577154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualNovelNodeFunctionsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::ClassParams = {
	&UVisualNovelNodeFunctionsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary()
{
	if (!Z_Registration_Info_UClass_UVisualNovelNodeFunctionsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualNovelNodeFunctionsLibrary.OuterSingleton, Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisualNovelNodeFunctionsLibrary.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVisualNovelNodeFunctionsLibrary>()
{
	return UVisualNovelNodeFunctionsLibrary::StaticClass();
}
UVisualNovelNodeFunctionsLibrary::UVisualNovelNodeFunctionsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualNovelNodeFunctionsLibrary);
UVisualNovelNodeFunctionsLibrary::~UVisualNovelNodeFunctionsLibrary() {}
// End Class UVisualNovelNodeFunctionsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisualNovelNodeFunctionsLibrary, UVisualNovelNodeFunctionsLibrary::StaticClass, TEXT("UVisualNovelNodeFunctionsLibrary"), &Z_Registration_Info_UClass_UVisualNovelNodeFunctionsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualNovelNodeFunctionsLibrary), 4258299231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_831733349(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_VisualNovelNodeFunctionsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
