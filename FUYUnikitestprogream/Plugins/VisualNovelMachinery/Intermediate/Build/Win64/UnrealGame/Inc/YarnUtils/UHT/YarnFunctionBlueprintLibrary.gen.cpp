// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnUtils/Public/YarnFunctionBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnFunctionBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_YarnUtils();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnFunctionBlueprintLibrary();
YARNUTILS_API UClass* Z_Construct_UClass_UYarnFunctionBlueprintLibrary_NoRegister();
// End Cross Module References

// Begin Class UYarnFunctionBlueprintLibrary Function ceil
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics
{
	struct YarnFunctionBlueprintLibrary_eventceil_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventceil_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventceil_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "ceil", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::YarnFunctionBlueprintLibrary_eventceil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::YarnFunctionBlueprintLibrary_eventceil_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execceil)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::ceil(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function ceil

// Begin Class UYarnFunctionBlueprintLibrary Function dec
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics
{
	struct YarnFunctionBlueprintLibrary_eventdec_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdec_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdec_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "dec", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::YarnFunctionBlueprintLibrary_eventdec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::YarnFunctionBlueprintLibrary_eventdec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execdec)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::dec(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function dec

// Begin Class UYarnFunctionBlueprintLibrary Function decimal
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics
{
	struct YarnFunctionBlueprintLibrary_eventdecimal_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdecimal_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdecimal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "decimal", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::YarnFunctionBlueprintLibrary_eventdecimal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::YarnFunctionBlueprintLibrary_eventdecimal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execdecimal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::decimal(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function decimal

// Begin Class UYarnFunctionBlueprintLibrary Function dice
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics
{
	struct YarnFunctionBlueprintLibrary_eventdice_Parms
	{
		float sides;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::NewProp_sides = { "sides", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdice_Parms, sides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sides_MetaData), NewProp_sides_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventdice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::NewProp_sides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "dice", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::YarnFunctionBlueprintLibrary_eventdice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::YarnFunctionBlueprintLibrary_eventdice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execdice)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_sides);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::dice(Z_Param_sides);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function dice

// Begin Class UYarnFunctionBlueprintLibrary Function floor
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics
{
	struct YarnFunctionBlueprintLibrary_eventfloor_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventfloor_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventfloor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "floor", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::YarnFunctionBlueprintLibrary_eventfloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::YarnFunctionBlueprintLibrary_eventfloor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execfloor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::floor(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function floor

// Begin Class UYarnFunctionBlueprintLibrary Function inc
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics
{
	struct YarnFunctionBlueprintLibrary_eventinc_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventinc_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventinc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "inc", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::YarnFunctionBlueprintLibrary_eventinc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::YarnFunctionBlueprintLibrary_eventinc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execinc)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::inc(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function inc

// Begin Class UYarnFunctionBlueprintLibrary Function integer
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics
{
	struct YarnFunctionBlueprintLibrary_eventinteger_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "DisplayName", "int" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventinteger_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventinteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "integer", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::YarnFunctionBlueprintLibrary_eventinteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::YarnFunctionBlueprintLibrary_eventinteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execinteger)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::integer(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function integer

// Begin Class UYarnFunctionBlueprintLibrary Function random
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics
{
	struct YarnFunctionBlueprintLibrary_eventrandom_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventrandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "random", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::YarnFunctionBlueprintLibrary_eventrandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::YarnFunctionBlueprintLibrary_eventrandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execrandom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::random();
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function random

// Begin Class UYarnFunctionBlueprintLibrary Function random_range
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics
{
	struct YarnFunctionBlueprintLibrary_eventrandom_range_Parms
	{
		float a;
		float b;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_b;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventrandom_range_Parms, a), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_MetaData), NewProp_a_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventrandom_range_Parms, b), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b_MetaData), NewProp_b_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventrandom_range_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "random_range", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::YarnFunctionBlueprintLibrary_eventrandom_range_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::YarnFunctionBlueprintLibrary_eventrandom_range_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execrandom_range)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_a);
	P_GET_PROPERTY(FFloatProperty,Z_Param_b);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::random_range(Z_Param_a,Z_Param_b);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function random_range

// Begin Class UYarnFunctionBlueprintLibrary Function round
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics
{
	struct YarnFunctionBlueprintLibrary_eventround_Parms
	{
		float n;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventround_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventround_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "round", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::YarnFunctionBlueprintLibrary_eventround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::YarnFunctionBlueprintLibrary_eventround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execround)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::round(Z_Param_n);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function round

// Begin Class UYarnFunctionBlueprintLibrary Function round_places
struct Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics
{
	struct YarnFunctionBlueprintLibrary_eventround_places_Parms
	{
		float n;
		float places;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_places_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_n;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_places;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventround_places_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_n_MetaData), NewProp_n_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_places = { "places", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventround_places_Parms, places), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_places_MetaData), NewProp_places_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YarnFunctionBlueprintLibrary_eventround_places_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_n,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_places,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYarnFunctionBlueprintLibrary, nullptr, "round_places", nullptr, nullptr, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::YarnFunctionBlueprintLibrary_eventround_places_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::YarnFunctionBlueprintLibrary_eventround_places_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYarnFunctionBlueprintLibrary::execround_places)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_n);
	P_GET_PROPERTY(FFloatProperty,Z_Param_places);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYarnFunctionBlueprintLibrary::round_places(Z_Param_n,Z_Param_places);
	P_NATIVE_END;
}
// End Class UYarnFunctionBlueprintLibrary Function round_places

// Begin Class UYarnFunctionBlueprintLibrary
void UYarnFunctionBlueprintLibrary::StaticRegisterNativesUYarnFunctionBlueprintLibrary()
{
	UClass* Class = UYarnFunctionBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ceil", &UYarnFunctionBlueprintLibrary::execceil },
		{ "dec", &UYarnFunctionBlueprintLibrary::execdec },
		{ "decimal", &UYarnFunctionBlueprintLibrary::execdecimal },
		{ "dice", &UYarnFunctionBlueprintLibrary::execdice },
		{ "floor", &UYarnFunctionBlueprintLibrary::execfloor },
		{ "inc", &UYarnFunctionBlueprintLibrary::execinc },
		{ "integer", &UYarnFunctionBlueprintLibrary::execinteger },
		{ "random", &UYarnFunctionBlueprintLibrary::execrandom },
		{ "random_range", &UYarnFunctionBlueprintLibrary::execrandom_range },
		{ "round", &UYarnFunctionBlueprintLibrary::execround },
		{ "round_places", &UYarnFunctionBlueprintLibrary::execround_places },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYarnFunctionBlueprintLibrary);
UClass* Z_Construct_UClass_UYarnFunctionBlueprintLibrary_NoRegister()
{
	return UYarnFunctionBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "YarnFunctionBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YarnFunctionBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_ceil, "ceil" }, // 482608809
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dec, "dec" }, // 607515948
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_decimal, "decimal" }, // 763063625
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_dice, "dice" }, // 1017400346
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_floor, "floor" }, // 1032155824
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_inc, "inc" }, // 2620933167
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_integer, "integer" }, // 2976839420
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random, "random" }, // 2908690331
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_random_range, "random_range" }, // 440971282
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round, "round" }, // 3495193883
		{ &Z_Construct_UFunction_UYarnFunctionBlueprintLibrary_round_places, "round_places" }, // 1399717740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYarnFunctionBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::ClassParams = {
	&UYarnFunctionBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYarnFunctionBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UYarnFunctionBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYarnFunctionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UYarnFunctionBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYarnFunctionBlueprintLibrary.OuterSingleton;
}
template<> YARNUTILS_API UClass* StaticClass<UYarnFunctionBlueprintLibrary>()
{
	return UYarnFunctionBlueprintLibrary::StaticClass();
}
UYarnFunctionBlueprintLibrary::UYarnFunctionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYarnFunctionBlueprintLibrary);
UYarnFunctionBlueprintLibrary::~UYarnFunctionBlueprintLibrary() {}
// End Class UYarnFunctionBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnFunctionBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYarnFunctionBlueprintLibrary, UYarnFunctionBlueprintLibrary::StaticClass, TEXT("UYarnFunctionBlueprintLibrary"), &Z_Registration_Info_UClass_UYarnFunctionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYarnFunctionBlueprintLibrary), 4013420095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnFunctionBlueprintLibrary_h_4094007521(TEXT("/Script/YarnUtils"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnFunctionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnUtils_Public_YarnFunctionBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
