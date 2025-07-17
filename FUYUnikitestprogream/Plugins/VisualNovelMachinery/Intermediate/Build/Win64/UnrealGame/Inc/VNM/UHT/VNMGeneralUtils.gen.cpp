// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Utility/VNMGeneralUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMGeneralUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UCharacterControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogAudioControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogImageControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMemoryControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMGeneralUtils();
VNM_API UClass* Z_Construct_UClass_UVNMGeneralUtils_NoRegister();
// End Cross Module References

// Begin Class UVNMGeneralUtils Function GetCharacter3DControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetCharacter3DControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UCharacter3DControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetCharacter3DControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetCharacter3DControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetCharacter3DControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::VNMGeneralUtils_eventGetCharacter3DControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::VNMGeneralUtils_eventGetCharacter3DControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetCharacter3DControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacter3DControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetCharacter3DControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetCharacter3DControllerComponent

// Begin Class UVNMGeneralUtils Function GetCharacterControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetCharacterControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UCharacterControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetCharacterControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetCharacterControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetCharacterControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::VNMGeneralUtils_eventGetCharacterControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::VNMGeneralUtils_eventGetCharacterControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetCharacterControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetCharacterControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetCharacterControllerComponent

// Begin Class UVNMGeneralUtils Function GetCompanyName
struct Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics
{
	struct VNMGeneralUtils_eventGetCompanyName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetCompanyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetCompanyName", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::VNMGeneralUtils_eventGetCompanyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::VNMGeneralUtils_eventGetCompanyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetCompanyName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVNMGeneralUtils::GetCompanyName();
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetCompanyName

// Begin Class UVNMGeneralUtils Function GetDialogAudioControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetDialogAudioControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UDialogAudioControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogAudioControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogAudioControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UDialogAudioControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetDialogAudioControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::VNMGeneralUtils_eventGetDialogAudioControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::VNMGeneralUtils_eventGetDialogAudioControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetDialogAudioControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogAudioControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetDialogAudioControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetDialogAudioControllerComponent

// Begin Class UVNMGeneralUtils Function GetDialogControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetDialogControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UDialogControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UDialogControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetDialogControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::VNMGeneralUtils_eventGetDialogControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::VNMGeneralUtils_eventGetDialogControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetDialogControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetDialogControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetDialogControllerComponent

// Begin Class UVNMGeneralUtils Function GetDialogImageControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetDialogImageControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UDialogImageControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogImageControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogImageControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UDialogImageControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetDialogImageControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::VNMGeneralUtils_eventGetDialogImageControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::VNMGeneralUtils_eventGetDialogImageControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetDialogImageControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogImageControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetDialogImageControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetDialogImageControllerComponent

// Begin Class UVNMGeneralUtils Function GetDialogSceneControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetDialogSceneControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UDialogSceneControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogSceneControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetDialogSceneControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetDialogSceneControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::VNMGeneralUtils_eventGetDialogSceneControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::VNMGeneralUtils_eventGetDialogSceneControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetDialogSceneControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogSceneControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetDialogSceneControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetDialogSceneControllerComponent

// Begin Class UVNMGeneralUtils Function GetMemoryControllerComponent
struct Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics
{
	struct VNMGeneralUtils_eventGetMemoryControllerComponent_Parms
	{
		UObject* WorldContextObject;
		UMemoryControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetMemoryControllerComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetMemoryControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UMemoryControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetMemoryControllerComponent", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::VNMGeneralUtils_eventGetMemoryControllerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::VNMGeneralUtils_eventGetMemoryControllerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetMemoryControllerComponent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMemoryControllerComponent**)Z_Param__Result=UVNMGeneralUtils::GetMemoryControllerComponent(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetMemoryControllerComponent

// Begin Class UVNMGeneralUtils Function GetProjectName
struct Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics
{
	struct VNMGeneralUtils_eventGetProjectName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetProjectName", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::VNMGeneralUtils_eventGetProjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::VNMGeneralUtils_eventGetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetProjectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVNMGeneralUtils::GetProjectName();
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetProjectName

// Begin Class UVNMGeneralUtils Function GetProjectVersion
struct Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics
{
	struct VNMGeneralUtils_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetProjectVersion", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::VNMGeneralUtils_eventGetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::VNMGeneralUtils_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVNMGeneralUtils::GetProjectVersion();
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetProjectVersion

// Begin Class UVNMGeneralUtils Function GetVisualNovelMachineryVersion
struct Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics
{
	struct VNMGeneralUtils_eventGetVisualNovelMachineryVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VNM General Utils" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMGeneralUtils_eventGetVisualNovelMachineryVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMGeneralUtils, nullptr, "GetVisualNovelMachineryVersion", nullptr, nullptr, Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::VNMGeneralUtils_eventGetVisualNovelMachineryVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::VNMGeneralUtils_eventGetVisualNovelMachineryVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMGeneralUtils::execGetVisualNovelMachineryVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVNMGeneralUtils::GetVisualNovelMachineryVersion();
	P_NATIVE_END;
}
// End Class UVNMGeneralUtils Function GetVisualNovelMachineryVersion

// Begin Class UVNMGeneralUtils
void UVNMGeneralUtils::StaticRegisterNativesUVNMGeneralUtils()
{
	UClass* Class = UVNMGeneralUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacter3DControllerComponent", &UVNMGeneralUtils::execGetCharacter3DControllerComponent },
		{ "GetCharacterControllerComponent", &UVNMGeneralUtils::execGetCharacterControllerComponent },
		{ "GetCompanyName", &UVNMGeneralUtils::execGetCompanyName },
		{ "GetDialogAudioControllerComponent", &UVNMGeneralUtils::execGetDialogAudioControllerComponent },
		{ "GetDialogControllerComponent", &UVNMGeneralUtils::execGetDialogControllerComponent },
		{ "GetDialogImageControllerComponent", &UVNMGeneralUtils::execGetDialogImageControllerComponent },
		{ "GetDialogSceneControllerComponent", &UVNMGeneralUtils::execGetDialogSceneControllerComponent },
		{ "GetMemoryControllerComponent", &UVNMGeneralUtils::execGetMemoryControllerComponent },
		{ "GetProjectName", &UVNMGeneralUtils::execGetProjectName },
		{ "GetProjectVersion", &UVNMGeneralUtils::execGetProjectVersion },
		{ "GetVisualNovelMachineryVersion", &UVNMGeneralUtils::execGetVisualNovelMachineryVersion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMGeneralUtils);
UClass* Z_Construct_UClass_UVNMGeneralUtils_NoRegister()
{
	return UVNMGeneralUtils::StaticClass();
}
struct Z_Construct_UClass_UVNMGeneralUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utility/VNMGeneralUtils.h" },
		{ "ModuleRelativePath", "Public/Utility/VNMGeneralUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetCharacter3DControllerComponent, "GetCharacter3DControllerComponent" }, // 4023316276
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetCharacterControllerComponent, "GetCharacterControllerComponent" }, // 1979712686
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetCompanyName, "GetCompanyName" }, // 2604715960
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetDialogAudioControllerComponent, "GetDialogAudioControllerComponent" }, // 1327295590
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetDialogControllerComponent, "GetDialogControllerComponent" }, // 266717921
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetDialogImageControllerComponent, "GetDialogImageControllerComponent" }, // 3797355035
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetDialogSceneControllerComponent, "GetDialogSceneControllerComponent" }, // 941302562
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetMemoryControllerComponent, "GetMemoryControllerComponent" }, // 1384711060
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetProjectName, "GetProjectName" }, // 3749867738
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetProjectVersion, "GetProjectVersion" }, // 674834640
		{ &Z_Construct_UFunction_UVNMGeneralUtils_GetVisualNovelMachineryVersion, "GetVisualNovelMachineryVersion" }, // 2458227407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMGeneralUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVNMGeneralUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMGeneralUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMGeneralUtils_Statics::ClassParams = {
	&UVNMGeneralUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMGeneralUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMGeneralUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMGeneralUtils()
{
	if (!Z_Registration_Info_UClass_UVNMGeneralUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMGeneralUtils.OuterSingleton, Z_Construct_UClass_UVNMGeneralUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMGeneralUtils.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMGeneralUtils>()
{
	return UVNMGeneralUtils::StaticClass();
}
UVNMGeneralUtils::UVNMGeneralUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMGeneralUtils);
UVNMGeneralUtils::~UVNMGeneralUtils() {}
// End Class UVNMGeneralUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMGeneralUtils, UVNMGeneralUtils::StaticClass, TEXT("UVNMGeneralUtils"), &Z_Registration_Info_UClass_UVNMGeneralUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMGeneralUtils), 2724418753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_4071112199(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_VNMGeneralUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
