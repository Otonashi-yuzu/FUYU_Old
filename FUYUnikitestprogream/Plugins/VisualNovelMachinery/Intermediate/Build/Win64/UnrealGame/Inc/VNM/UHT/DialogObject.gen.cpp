// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/DialogObject.h"
#include "VNM/Public/UI/Data/ChoiceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UDialogObject();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogData();
// End Cross Module References

// Begin Delegate FOnDialogComplete
struct Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics
{
	struct DialogObject_eventOnDialogComplete_Parms
	{
		UDialogObject* DialogObjectThatEnded;
		FName NextDialogObjectId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogObjectThatEnded;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextDialogObjectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::NewProp_DialogObjectThatEnded = { "DialogObjectThatEnded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventOnDialogComplete_Parms, DialogObjectThatEnded), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::NewProp_NextDialogObjectId = { "NextDialogObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventOnDialogComplete_Parms, NextDialogObjectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::NewProp_DialogObjectThatEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::NewProp_NextDialogObjectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogObject, nullptr, "OnDialogComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::DialogObject_eventOnDialogComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::DialogObject_eventOnDialogComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDialogObject::FOnDialogComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDialogComplete, UDialogObject* DialogObjectThatEnded, FName NextDialogObjectId)
{
	struct DialogObject_eventOnDialogComplete_Parms
	{
		UDialogObject* DialogObjectThatEnded;
		FName NextDialogObjectId;
	};
	DialogObject_eventOnDialogComplete_Parms Parms;
	Parms.DialogObjectThatEnded=DialogObjectThatEnded;
	Parms.NextDialogObjectId=NextDialogObjectId;
	OnDialogComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogComplete

// Begin Class UDialogObject Function CreateDialogObjectInstance
struct Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics
{
	struct DialogObject_eventCreateDialogObjectInstance_Parms
	{
		APlayerController* OwningPlayerController;
		TSubclassOf<UDialogObject> DialogObjectClass;
		FName DialogObjectName;
		UDialogObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogObjectClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogObjectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_OwningPlayerController = { "OwningPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventCreateDialogObjectInstance_Parms, OwningPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_DialogObjectClass = { "DialogObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventCreateDialogObjectInstance_Parms, DialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_DialogObjectName = { "DialogObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventCreateDialogObjectInstance_Parms, DialogObjectName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventCreateDialogObjectInstance_Parms, ReturnValue), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_OwningPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_DialogObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_DialogObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogObject, nullptr, "CreateDialogObjectInstance", nullptr, nullptr, Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::DialogObject_eventCreateDialogObjectInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::DialogObject_eventCreateDialogObjectInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogObject::execCreateDialogObjectInstance)
{
	P_GET_OBJECT(APlayerController,Z_Param_OwningPlayerController);
	P_GET_OBJECT(UClass,Z_Param_DialogObjectClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogObjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogObject**)Z_Param__Result=UDialogObject::CreateDialogObjectInstance(Z_Param_OwningPlayerController,Z_Param_DialogObjectClass,Z_Param_DialogObjectName);
	P_NATIVE_END;
}
// End Class UDialogObject Function CreateDialogObjectInstance

// Begin Class UDialogObject Function EndDialog
struct Z_Construct_UFunction_UDialogObject_EndDialog_Statics
{
	struct DialogObject_eventEndDialog_Parms
	{
		FName NextDialogObjectId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextDialogObjectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogObject_EndDialog_Statics::NewProp_NextDialogObjectId = { "NextDialogObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventEndDialog_Parms, NextDialogObjectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogObject_EndDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_EndDialog_Statics::NewProp_NextDialogObjectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_EndDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogObject_EndDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogObject, nullptr, "EndDialog", nullptr, nullptr, Z_Construct_UFunction_UDialogObject_EndDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_EndDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogObject_EndDialog_Statics::DialogObject_eventEndDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_EndDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogObject_EndDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogObject_EndDialog_Statics::DialogObject_eventEndDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogObject_EndDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogObject_EndDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogObject::execEndDialog)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NextDialogObjectId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDialog(Z_Param_NextDialogObjectId);
	P_NATIVE_END;
}
// End Class UDialogObject Function EndDialog

// Begin Class UDialogObject Function GetChoices
struct Z_Construct_UFunction_UDialogObject_GetChoices_Statics
{
	struct DialogObject_eventGetChoices_Parms
	{
		FDialogData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogObject_GetChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogObject_eventGetChoices_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogData, METADATA_PARAMS(0, nullptr) }; // 817624703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogObject_GetChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogObject_GetChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_GetChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogObject_GetChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogObject, nullptr, "GetChoices", nullptr, nullptr, Z_Construct_UFunction_UDialogObject_GetChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_GetChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogObject_GetChoices_Statics::DialogObject_eventGetChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogObject_GetChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogObject_GetChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogObject_GetChoices_Statics::DialogObject_eventGetChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogObject_GetChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogObject_GetChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogObject::execGetChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogData*)Z_Param__Result=P_THIS->GetChoices();
	P_NATIVE_END;
}
// End Class UDialogObject Function GetChoices

// Begin Class UDialogObject
void UDialogObject::StaticRegisterNativesUDialogObject()
{
	UClass* Class = UDialogObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDialogObjectInstance", &UDialogObject::execCreateDialogObjectInstance },
		{ "EndDialog", &UDialogObject::execEndDialog },
		{ "GetChoices", &UDialogObject::execGetChoices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogObject);
UClass* Z_Construct_UClass_UDialogObject_NoRegister()
{
	return UDialogObject::StaticClass();
}
struct Z_Construct_UClass_UDialogObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDialogActive_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/DialogObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogComplete;
	static void NewProp_bIsDialogActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDialogActive;
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogObject_CreateDialogObjectInstance, "CreateDialogObjectInstance" }, // 2803577357
		{ &Z_Construct_UFunction_UDialogObject_EndDialog, "EndDialog" }, // 2512406608
		{ &Z_Construct_UFunction_UDialogObject_GetChoices, "GetChoices" }, // 3493379349
		{ &Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature, "OnDialogComplete__DelegateSignature" }, // 2888380873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogObject_Statics::NewProp_OnDialogComplete = { "OnDialogComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogObject, OnDialogComplete), Z_Construct_UDelegateFunction_UDialogObject_OnDialogComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogComplete_MetaData), NewProp_OnDialogComplete_MetaData) }; // 2888380873
void Z_Construct_UClass_UDialogObject_Statics::NewProp_bIsDialogActive_SetBit(void* Obj)
{
	((UDialogObject*)Obj)->bIsDialogActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogObject_Statics::NewProp_bIsDialogActive = { "bIsDialogActive", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogObject), &Z_Construct_UClass_UDialogObject_Statics::NewProp_bIsDialogActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDialogActive_MetaData), NewProp_bIsDialogActive_MetaData) };
void Z_Construct_UClass_UDialogObject_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((UDialogObject*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogObject_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogObject), &Z_Construct_UClass_UDialogObject_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogObject_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogObject, Choices), Z_Construct_UScriptStruct_FDialogData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) }; // 817624703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObject_Statics::NewProp_OnDialogComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObject_Statics::NewProp_bIsDialogActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObject_Statics::NewProp_bInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObject_Statics::NewProp_Choices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogObject_Statics::ClassParams = {
	&UDialogObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObject_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogObject()
{
	if (!Z_Registration_Info_UClass_UDialogObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogObject.OuterSingleton, Z_Construct_UClass_UDialogObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogObject.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogObject>()
{
	return UDialogObject::StaticClass();
}
UDialogObject::UDialogObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogObject);
UDialogObject::~UDialogObject() {}
// End Class UDialogObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogObject, UDialogObject::StaticClass, TEXT("UDialogObject"), &Z_Registration_Info_UClass_UDialogObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogObject), 4078544132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_885839987(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
