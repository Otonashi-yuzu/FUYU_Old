// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/MemoryInternalFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryInternalFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMemoryInternalFunctions();
VNM_API UClass* Z_Construct_UClass_UMemoryInternalFunctions_NoRegister();
// End Cross Module References

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryBoolValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "// Character Memory\n" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "ToolTip", "Character Memory" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms), &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryBoolValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryBoolValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryBoolValue

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryByteValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryByteValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryByteValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryByteValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryByteValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryByteValue

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryFloatValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryFloatValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryFloatValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryFloatValue

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryInteger64Value
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryInteger64Value", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::MemoryInternalFunctions_eventGetCharacterMemoryInteger64Value_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryInteger64Value)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryInteger64Value(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryInteger64Value

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryIntegerValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryIntegerValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryIntegerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryIntegerValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryIntegerValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryIntegerValue

// Begin Class UMemoryInternalFunctions Function GetCharacterMemoryStringValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics
{
	struct MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetCharacterMemoryStringValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::MemoryInternalFunctions_eventGetCharacterMemoryStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetCharacterMemoryStringValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetCharacterMemoryStringValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetCharacterMemoryStringValue

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryBoolValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "Comment", "// Dialog Memory\n" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "ToolTip", "Dialog Memory" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms), &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryBoolValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryBoolValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryBoolValue

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryByteValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryByteValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryByteValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryByteValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryByteValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryByteValue

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryFloatValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryFloatValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryFloatValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryFloatValue

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryInteger64Value
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryInteger64Value", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::MemoryInternalFunctions_eventGetDialogMemoryInteger64Value_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryInteger64Value)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryInteger64Value(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryInteger64Value

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryIntegerValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryIntegerValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryIntegerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryIntegerValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryIntegerValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryIntegerValue

// Begin Class UMemoryInternalFunctions Function GetDialogMemoryStringValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics
{
	struct MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "GetDialogMemoryStringValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::MemoryInternalFunctions_eventGetDialogMemoryStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execGetDialogMemoryStringValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::GetDialogMemoryStringValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function GetDialogMemoryStringValue

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryBoolValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms), &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryBoolValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryBoolValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryBoolValue

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryByteValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryByteValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryByteValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryByteValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryByteValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryByteValue

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryFloatValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryFloatValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryFloatValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryFloatValue

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryInteger64Value
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryInteger64Value", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::MemoryInternalFunctions_eventSetCharacterMemoryInteger64Value_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryInteger64Value)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryInteger64Value(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryInteger64Value

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryIntegerValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryIntegerValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryIntegerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryIntegerValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryIntegerValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryIntegerValue

// Begin Class UMemoryInternalFunctions Function SetCharacterMemoryStringValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics
{
	struct MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms
	{
		UObject* WorldContextObject;
		FName CharacterId;
		FName CharacterMemoryId;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterMemoryId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms, CharacterId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_CharacterMemoryId = { "CharacterMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms, CharacterMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_CharacterMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetCharacterMemoryStringValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::MemoryInternalFunctions_eventSetCharacterMemoryStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetCharacterMemoryStringValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterId);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterMemoryId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetCharacterMemoryStringValue(Z_Param_WorldContextObject,Z_Param_CharacterId,Z_Param_CharacterMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetCharacterMemoryStringValue

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryBoolValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms), &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryBoolValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryBoolValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryBoolValue

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryByteValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryByteValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryByteValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryByteValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryByteValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryByteValue

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryFloatValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryFloatValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryFloatValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryFloatValue

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryInteger64Value
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		int64 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryInteger64Value", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::MemoryInternalFunctions_eventSetDialogMemoryInteger64Value_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryInteger64Value)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryInteger64Value(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryInteger64Value

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryIntegerValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryIntegerValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryIntegerValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryIntegerValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryIntegerValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryIntegerValue

// Begin Class UMemoryInternalFunctions Function SetDialogMemoryStringValue
struct Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics
{
	struct MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms
	{
		UObject* WorldContextObject;
		FName DialogId;
		FName DialogMemoryId;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Visual Novel Machinery" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogMemoryId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_DialogId = { "DialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms, DialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_DialogMemoryId = { "DialogMemoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms, DialogMemoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_DialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_DialogMemoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryInternalFunctions, nullptr, "SetDialogMemoryStringValue", nullptr, nullptr, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::MemoryInternalFunctions_eventSetDialogMemoryStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryInternalFunctions::execSetDialogMemoryStringValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogId);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogMemoryId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMemoryInternalFunctions::SetDialogMemoryStringValue(Z_Param_WorldContextObject,Z_Param_DialogId,Z_Param_DialogMemoryId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMemoryInternalFunctions Function SetDialogMemoryStringValue

// Begin Class UMemoryInternalFunctions
void UMemoryInternalFunctions::StaticRegisterNativesUMemoryInternalFunctions()
{
	UClass* Class = UMemoryInternalFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterMemoryBoolValue", &UMemoryInternalFunctions::execGetCharacterMemoryBoolValue },
		{ "GetCharacterMemoryByteValue", &UMemoryInternalFunctions::execGetCharacterMemoryByteValue },
		{ "GetCharacterMemoryFloatValue", &UMemoryInternalFunctions::execGetCharacterMemoryFloatValue },
		{ "GetCharacterMemoryInteger64Value", &UMemoryInternalFunctions::execGetCharacterMemoryInteger64Value },
		{ "GetCharacterMemoryIntegerValue", &UMemoryInternalFunctions::execGetCharacterMemoryIntegerValue },
		{ "GetCharacterMemoryStringValue", &UMemoryInternalFunctions::execGetCharacterMemoryStringValue },
		{ "GetDialogMemoryBoolValue", &UMemoryInternalFunctions::execGetDialogMemoryBoolValue },
		{ "GetDialogMemoryByteValue", &UMemoryInternalFunctions::execGetDialogMemoryByteValue },
		{ "GetDialogMemoryFloatValue", &UMemoryInternalFunctions::execGetDialogMemoryFloatValue },
		{ "GetDialogMemoryInteger64Value", &UMemoryInternalFunctions::execGetDialogMemoryInteger64Value },
		{ "GetDialogMemoryIntegerValue", &UMemoryInternalFunctions::execGetDialogMemoryIntegerValue },
		{ "GetDialogMemoryStringValue", &UMemoryInternalFunctions::execGetDialogMemoryStringValue },
		{ "SetCharacterMemoryBoolValue", &UMemoryInternalFunctions::execSetCharacterMemoryBoolValue },
		{ "SetCharacterMemoryByteValue", &UMemoryInternalFunctions::execSetCharacterMemoryByteValue },
		{ "SetCharacterMemoryFloatValue", &UMemoryInternalFunctions::execSetCharacterMemoryFloatValue },
		{ "SetCharacterMemoryInteger64Value", &UMemoryInternalFunctions::execSetCharacterMemoryInteger64Value },
		{ "SetCharacterMemoryIntegerValue", &UMemoryInternalFunctions::execSetCharacterMemoryIntegerValue },
		{ "SetCharacterMemoryStringValue", &UMemoryInternalFunctions::execSetCharacterMemoryStringValue },
		{ "SetDialogMemoryBoolValue", &UMemoryInternalFunctions::execSetDialogMemoryBoolValue },
		{ "SetDialogMemoryByteValue", &UMemoryInternalFunctions::execSetDialogMemoryByteValue },
		{ "SetDialogMemoryFloatValue", &UMemoryInternalFunctions::execSetDialogMemoryFloatValue },
		{ "SetDialogMemoryInteger64Value", &UMemoryInternalFunctions::execSetDialogMemoryInteger64Value },
		{ "SetDialogMemoryIntegerValue", &UMemoryInternalFunctions::execSetDialogMemoryIntegerValue },
		{ "SetDialogMemoryStringValue", &UMemoryInternalFunctions::execSetDialogMemoryStringValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryInternalFunctions);
UClass* Z_Construct_UClass_UMemoryInternalFunctions_NoRegister()
{
	return UMemoryInternalFunctions::StaticClass();
}
struct Z_Construct_UClass_UMemoryInternalFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MemoryInternalFunctions.h" },
		{ "ModuleRelativePath", "Public/MemoryInternalFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryBoolValue, "GetCharacterMemoryBoolValue" }, // 2613811396
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryByteValue, "GetCharacterMemoryByteValue" }, // 235656367
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryFloatValue, "GetCharacterMemoryFloatValue" }, // 3032634755
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryInteger64Value, "GetCharacterMemoryInteger64Value" }, // 841053951
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryIntegerValue, "GetCharacterMemoryIntegerValue" }, // 2926350230
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetCharacterMemoryStringValue, "GetCharacterMemoryStringValue" }, // 116830137
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryBoolValue, "GetDialogMemoryBoolValue" }, // 1635796512
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryByteValue, "GetDialogMemoryByteValue" }, // 1343849007
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryFloatValue, "GetDialogMemoryFloatValue" }, // 1336620204
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryInteger64Value, "GetDialogMemoryInteger64Value" }, // 3930552998
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryIntegerValue, "GetDialogMemoryIntegerValue" }, // 4027935340
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_GetDialogMemoryStringValue, "GetDialogMemoryStringValue" }, // 1397201467
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryBoolValue, "SetCharacterMemoryBoolValue" }, // 2710161967
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryByteValue, "SetCharacterMemoryByteValue" }, // 1648360356
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryFloatValue, "SetCharacterMemoryFloatValue" }, // 2747252757
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryInteger64Value, "SetCharacterMemoryInteger64Value" }, // 1328698373
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryIntegerValue, "SetCharacterMemoryIntegerValue" }, // 914517551
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetCharacterMemoryStringValue, "SetCharacterMemoryStringValue" }, // 3359753361
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryBoolValue, "SetDialogMemoryBoolValue" }, // 3246204206
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryByteValue, "SetDialogMemoryByteValue" }, // 989576806
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryFloatValue, "SetDialogMemoryFloatValue" }, // 3114274031
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryInteger64Value, "SetDialogMemoryInteger64Value" }, // 410673335
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryIntegerValue, "SetDialogMemoryIntegerValue" }, // 1434185737
		{ &Z_Construct_UFunction_UMemoryInternalFunctions_SetDialogMemoryStringValue, "SetDialogMemoryStringValue" }, // 3320813282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryInternalFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMemoryInternalFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryInternalFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryInternalFunctions_Statics::ClassParams = {
	&UMemoryInternalFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryInternalFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemoryInternalFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemoryInternalFunctions()
{
	if (!Z_Registration_Info_UClass_UMemoryInternalFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryInternalFunctions.OuterSingleton, Z_Construct_UClass_UMemoryInternalFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemoryInternalFunctions.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMemoryInternalFunctions>()
{
	return UMemoryInternalFunctions::StaticClass();
}
UMemoryInternalFunctions::UMemoryInternalFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryInternalFunctions);
UMemoryInternalFunctions::~UMemoryInternalFunctions() {}
// End Class UMemoryInternalFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_MemoryInternalFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryInternalFunctions, UMemoryInternalFunctions::StaticClass, TEXT("UMemoryInternalFunctions"), &Z_Registration_Info_UClass_UMemoryInternalFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryInternalFunctions), 3601457695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_MemoryInternalFunctions_h_2663461638(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_MemoryInternalFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_MemoryInternalFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
