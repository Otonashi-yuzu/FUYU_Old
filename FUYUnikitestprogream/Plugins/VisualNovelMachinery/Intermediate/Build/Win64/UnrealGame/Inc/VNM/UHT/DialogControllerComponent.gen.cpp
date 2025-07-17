// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/DialogControllerComponent.h"
#include "VNM/Public/Common/VNMControlStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UBaseDialogBoxWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UClass* Z_Construct_UClass_UGameSaveSubsystem_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EDialogState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNM_API UFunction* Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogLatentExecutor();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogTextData();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveRenameCharacterData();
// End Cross Module References

// Begin ScriptStruct FDialogLatentExecutor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogLatentExecutor;
class UScriptStruct* FDialogLatentExecutor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogLatentExecutor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogLatentExecutor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogLatentExecutor, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("DialogLatentExecutor"));
	}
	return Z_Registration_Info_UScriptStruct_DialogLatentExecutor.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FDialogLatentExecutor>()
{
	return FDialogLatentExecutor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogLatentExecutor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"DialogLatentExecutor",
	nullptr,
	0,
	sizeof(FDialogLatentExecutor),
	alignof(FDialogLatentExecutor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogLatentExecutor()
{
	if (!Z_Registration_Info_UScriptStruct_DialogLatentExecutor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogLatentExecutor.InnerSingleton, Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogLatentExecutor.InnerSingleton;
}
// End ScriptStruct FDialogLatentExecutor

// Begin Enum EDialogState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogState;
static UEnum* EDialogState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EDialogState, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EDialogState"));
	}
	return Z_Registration_Info_UEnum_EDialogState.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EDialogState>()
{
	return EDialogState_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EDialogState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CHOICE.Name", "EDialogState::CHOICE" },
		{ "DIALOG.Name", "EDialogState::DIALOG" },
		{ "DIALOG_INPUT.Name", "EDialogState::DIALOG_INPUT" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
		{ "NONE.Name", "EDialogState::NONE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogState::NONE", (int64)EDialogState::NONE },
		{ "EDialogState::DIALOG", (int64)EDialogState::DIALOG },
		{ "EDialogState::CHOICE", (int64)EDialogState::CHOICE },
		{ "EDialogState::DIALOG_INPUT", (int64)EDialogState::DIALOG_INPUT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EDialogState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EDialogState",
	"EDialogState",
	Z_Construct_UEnum_VNM_EDialogState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EDialogState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EDialogState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EDialogState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EDialogState()
{
	if (!Z_Registration_Info_UEnum_EDialogState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogState.InnerSingleton, Z_Construct_UEnum_VNM_EDialogState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogState.InnerSingleton;
}
// End Enum EDialogState

// Begin Delegate FOnDialogStarted
struct Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics
{
	struct DialogControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* StartedDialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartedDialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::NewProp_StartedDialogObject = { "StartedDialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventOnDialogStarted_Parms, StartedDialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::NewProp_StartedDialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnDialogStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::DialogControllerComponent_eventOnDialogStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::DialogControllerComponent_eventOnDialogStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDialogControllerComponent::FOnDialogStarted_DelegateWrapper(const FMulticastScriptDelegate& OnDialogStarted, UDialogObject* StartedDialogObject)
{
	struct DialogControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* StartedDialogObject;
	};
	DialogControllerComponent_eventOnDialogStarted_Parms Parms;
	Parms.StartedDialogObject=StartedDialogObject;
	OnDialogStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogStarted

// Begin Delegate FOnDialogEnded
struct Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics
{
	struct DialogControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* EndedDialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedDialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::NewProp_EndedDialogObject = { "EndedDialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventOnDialogEnded_Parms, EndedDialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::NewProp_EndedDialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnDialogEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::DialogControllerComponent_eventOnDialogEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::DialogControllerComponent_eventOnDialogEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDialogControllerComponent::FOnDialogEnded_DelegateWrapper(const FMulticastScriptDelegate& OnDialogEnded, UDialogObject* EndedDialogObject)
{
	struct DialogControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* EndedDialogObject;
	};
	DialogControllerComponent_eventOnDialogEnded_Parms Parms;
	Parms.EndedDialogObject=EndedDialogObject;
	OnDialogEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogEnded

// Begin Class UDialogControllerComponent Function MoveToNextDialog
struct Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// Called to continue in the dialog after the player is done reading the currently displayed text\n" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
		{ "ToolTip", "Called to continue in the dialog after the player is done reading the currently displayed text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "MoveToNextDialog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execMoveToNextDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToNextDialog();
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function MoveToNextDialog

// Begin Class UDialogControllerComponent Function OnActiveDialogComplete
struct Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics
{
	struct DialogControllerComponent_eventOnActiveDialogComplete_Parms
	{
		UDialogObject* DialogObjectThatFinished;
		FName NextDialogObjectId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogObjectThatFinished;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextDialogObjectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::NewProp_DialogObjectThatFinished = { "DialogObjectThatFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventOnActiveDialogComplete_Parms, DialogObjectThatFinished), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::NewProp_NextDialogObjectId = { "NextDialogObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventOnActiveDialogComplete_Parms, NextDialogObjectId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::NewProp_DialogObjectThatFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::NewProp_NextDialogObjectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnActiveDialogComplete", nullptr, nullptr, Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::DialogControllerComponent_eventOnActiveDialogComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::DialogControllerComponent_eventOnActiveDialogComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execOnActiveDialogComplete)
{
	P_GET_OBJECT(UDialogObject,Z_Param_DialogObjectThatFinished);
	P_GET_PROPERTY(FNameProperty,Z_Param_NextDialogObjectId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActiveDialogComplete(Z_Param_DialogObjectThatFinished,Z_Param_NextDialogObjectId);
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function OnActiveDialogComplete

// Begin Class UDialogControllerComponent Function OnDialogBoxTransitionComplete
struct Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnDialogBoxTransitionComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execOnDialogBoxTransitionComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogBoxTransitionComplete();
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function OnDialogBoxTransitionComplete

// Begin Class UDialogControllerComponent Function OnDialogInputCommitted
struct Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics
{
	struct DialogControllerComponent_eventOnDialogInputCommitted_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventOnDialogInputCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnDialogInputCommitted", nullptr, nullptr, Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::DialogControllerComponent_eventOnDialogInputCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::DialogControllerComponent_eventOnDialogInputCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execOnDialogInputCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogInputCommitted(Z_Param_Out_Text);
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function OnDialogInputCommitted

// Begin Class UDialogControllerComponent Function OnDialogTextBoxTypeWritingEnd
struct Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "OnDialogTextBoxTypeWritingEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execOnDialogTextBoxTypeWritingEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogTextBoxTypeWritingEnd();
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function OnDialogTextBoxTypeWritingEnd

// Begin Class UDialogControllerComponent Function StartDialogByClass
struct Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics
{
	struct DialogControllerComponent_eventStartDialogByClass_Parms
	{
		TSubclassOf<UDialogObject> DialogObjectClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog" },
		{ "Comment", "// Use this to start a new dialog object\n" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
		{ "ToolTip", "Use this to start a new dialog object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogObjectClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_DialogObjectClass = { "DialogObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventStartDialogByClass_Parms, DialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogControllerComponent_eventStartDialogByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogControllerComponent_eventStartDialogByClass_Parms), &Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_DialogObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "StartDialogByClass", nullptr, nullptr, Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::DialogControllerComponent_eventStartDialogByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::DialogControllerComponent_eventStartDialogByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execStartDialogByClass)
{
	P_GET_OBJECT(UClass,Z_Param_DialogObjectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartDialogByClass(Z_Param_DialogObjectClass);
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function StartDialogByClass

// Begin Class UDialogControllerComponent Function StartNextDialogObject
struct Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics
{
	struct DialogControllerComponent_eventStartNextDialogObject_Parms
	{
		TSubclassOf<UDialogObject> NextDialogObjectClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NextDialogObjectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::NewProp_NextDialogObjectClass = { "NextDialogObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogControllerComponent_eventStartNextDialogObject_Parms, NextDialogObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::NewProp_NextDialogObjectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogControllerComponent, nullptr, "StartNextDialogObject", nullptr, nullptr, Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::DialogControllerComponent_eventStartNextDialogObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::DialogControllerComponent_eventStartNextDialogObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogControllerComponent::execStartNextDialogObject)
{
	P_GET_OBJECT(UClass,Z_Param_NextDialogObjectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNextDialogObject(Z_Param_NextDialogObjectClass);
	P_NATIVE_END;
}
// End Class UDialogControllerComponent Function StartNextDialogObject

// Begin Class UDialogControllerComponent
void UDialogControllerComponent::StaticRegisterNativesUDialogControllerComponent()
{
	UClass* Class = UDialogControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveToNextDialog", &UDialogControllerComponent::execMoveToNextDialog },
		{ "OnActiveDialogComplete", &UDialogControllerComponent::execOnActiveDialogComplete },
		{ "OnDialogBoxTransitionComplete", &UDialogControllerComponent::execOnDialogBoxTransitionComplete },
		{ "OnDialogInputCommitted", &UDialogControllerComponent::execOnDialogInputCommitted },
		{ "OnDialogTextBoxTypeWritingEnd", &UDialogControllerComponent::execOnDialogTextBoxTypeWritingEnd },
		{ "StartDialogByClass", &UDialogControllerComponent::execStartDialogByClass },
		{ "StartNextDialogObject", &UDialogControllerComponent::execStartNextDialogObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogControllerComponent);
UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister()
{
	return UDialogControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DialogControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSaveSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyActiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogNodeGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialogWindowInAutomatic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyHidding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldTriggerLatentExecutorAfterTransition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaitingToDisplayDialog_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaitingToDisplayPlayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaitingToFinishDialogObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogVisibilityTransitionEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogBoxWidgetClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceWidgetClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogBoxWidget_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceWidget_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageChoiceWidget_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextDialogObjectIdToStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextDialogTextData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextInteractiveRenameCharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSaveSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveDialogObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentlyActiveWidgets_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentlyActiveWidgets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentlyActiveWidgets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveDialogNodeGUID;
	static void NewProp_bDialogWindowInAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialogWindowInAutomatic;
	static void NewProp_bIsCurrentlyHidding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyHidding;
	static void NewProp_bShouldTriggerLatentExecutorAfterTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTriggerLatentExecutorAfterTransition;
	static void NewProp_bIsWaitingToDisplayDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaitingToDisplayDialog;
	static void NewProp_bIsWaitingToDisplayPlayerInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaitingToDisplayPlayerInput;
	static void NewProp_bIsWaitingToFinishDialogObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaitingToFinishDialogObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogVisibilityTransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogVisibilityTransitionEvent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogBoxWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChoiceWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogBoxWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageChoiceWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextDialogObjectIdToStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextDialogTextData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextInteractiveRenameCharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogControllerComponent_MoveToNextDialog, "MoveToNextDialog" }, // 2843784926
		{ &Z_Construct_UFunction_UDialogControllerComponent_OnActiveDialogComplete, "OnActiveDialogComplete" }, // 2259861615
		{ &Z_Construct_UFunction_UDialogControllerComponent_OnDialogBoxTransitionComplete, "OnDialogBoxTransitionComplete" }, // 2157971919
		{ &Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature, "OnDialogEnded__DelegateSignature" }, // 57987030
		{ &Z_Construct_UFunction_UDialogControllerComponent_OnDialogInputCommitted, "OnDialogInputCommitted" }, // 3754615863
		{ &Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature, "OnDialogStarted__DelegateSignature" }, // 2817352459
		{ &Z_Construct_UFunction_UDialogControllerComponent_OnDialogTextBoxTypeWritingEnd, "OnDialogTextBoxTypeWritingEnd" }, // 145270214
		{ &Z_Construct_UFunction_UDialogControllerComponent_StartDialogByClass, "StartDialogByClass" }, // 4020912502
		{ &Z_Construct_UFunction_UDialogControllerComponent_StartNextDialogObject, "StartNextDialogObject" }, // 3929103723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_OnDialogStarted = { "OnDialogStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, OnDialogStarted), Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogStarted_MetaData), NewProp_OnDialogStarted_MetaData) }; // 2817352459
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_OnDialogEnded = { "OnDialogEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, OnDialogEnded), Z_Construct_UDelegateFunction_UDialogControllerComponent_OnDialogEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogEnded_MetaData), NewProp_OnDialogEnded_MetaData) }; // 57987030
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_GameSaveSubsystem = { "GameSaveSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, GameSaveSubsystem), Z_Construct_UClass_UGameSaveSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSaveSubsystem_MetaData), NewProp_GameSaveSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ActiveDialogObject = { "ActiveDialogObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, ActiveDialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogObject_MetaData), NewProp_ActiveDialogObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets_ValueProp = { "CurrentlyActiveWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets_Key_KeyProp = { "CurrentlyActiveWidgets_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets = { "CurrentlyActiveWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, CurrentlyActiveWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentlyActiveWidgets_MetaData), NewProp_CurrentlyActiveWidgets_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ActiveDialogNodeGUID = { "ActiveDialogNodeGUID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, ActiveDialogNodeGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogNodeGUID_MetaData), NewProp_ActiveDialogNodeGUID_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bDialogWindowInAutomatic_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bDialogWindowInAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bDialogWindowInAutomatic = { "bDialogWindowInAutomatic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bDialogWindowInAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialogWindowInAutomatic_MetaData), NewProp_bDialogWindowInAutomatic_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsCurrentlyHidding_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bIsCurrentlyHidding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsCurrentlyHidding = { "bIsCurrentlyHidding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsCurrentlyHidding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentlyHidding_MetaData), NewProp_bIsCurrentlyHidding_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bShouldTriggerLatentExecutorAfterTransition_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bShouldTriggerLatentExecutorAfterTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bShouldTriggerLatentExecutorAfterTransition = { "bShouldTriggerLatentExecutorAfterTransition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bShouldTriggerLatentExecutorAfterTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldTriggerLatentExecutorAfterTransition_MetaData), NewProp_bShouldTriggerLatentExecutorAfterTransition_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayDialog_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bIsWaitingToDisplayDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayDialog = { "bIsWaitingToDisplayDialog", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWaitingToDisplayDialog_MetaData), NewProp_bIsWaitingToDisplayDialog_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayPlayerInput_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bIsWaitingToDisplayPlayerInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayPlayerInput = { "bIsWaitingToDisplayPlayerInput", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayPlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWaitingToDisplayPlayerInput_MetaData), NewProp_bIsWaitingToDisplayPlayerInput_MetaData) };
void Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToFinishDialogObject_SetBit(void* Obj)
{
	((UDialogControllerComponent*)Obj)->bIsWaitingToFinishDialogObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToFinishDialogObject = { "bIsWaitingToFinishDialogObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogControllerComponent), &Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToFinishDialogObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWaitingToFinishDialogObject_MetaData), NewProp_bIsWaitingToFinishDialogObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogVisibilityTransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogVisibilityTransitionEvent = { "DialogVisibilityTransitionEvent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, DialogVisibilityTransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogVisibilityTransitionEvent_MetaData), NewProp_DialogVisibilityTransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogBoxWidgetClass = { "DialogBoxWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, DialogBoxWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseDialogBoxWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogBoxWidgetClass_MetaData), NewProp_DialogBoxWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ChoiceWidgetClass = { "ChoiceWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, ChoiceWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceWidgetClass_MetaData), NewProp_ChoiceWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogBoxWidget = { "DialogBoxWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, DialogBoxWidget), Z_Construct_UClass_UBaseDialogBoxWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogBoxWidget_MetaData), NewProp_DialogBoxWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ChoiceWidget = { "ChoiceWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, ChoiceWidget), Z_Construct_UClass_UBaseChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceWidget_MetaData), NewProp_ChoiceWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ImageChoiceWidget = { "ImageChoiceWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, ImageChoiceWidget), Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageChoiceWidget_MetaData), NewProp_ImageChoiceWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextDialogObjectIdToStart = { "NextDialogObjectIdToStart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, NextDialogObjectIdToStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextDialogObjectIdToStart_MetaData), NewProp_NextDialogObjectIdToStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextDialogTextData = { "NextDialogTextData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, NextDialogTextData), Z_Construct_UScriptStruct_FDisplayDialogTextData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextDialogTextData_MetaData), NewProp_NextDialogTextData_MetaData) }; // 1870991937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextInteractiveRenameCharacterData = { "NextInteractiveRenameCharacterData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogControllerComponent, NextInteractiveRenameCharacterData), Z_Construct_UScriptStruct_FInteractiveRenameCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextInteractiveRenameCharacterData_MetaData), NewProp_NextInteractiveRenameCharacterData_MetaData) }; // 4196499639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_OnDialogStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_OnDialogEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_GameSaveSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ActiveDialogObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_CurrentlyActiveWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ActiveDialogNodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bDialogWindowInAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsCurrentlyHidding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bShouldTriggerLatentExecutorAfterTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToDisplayPlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_bIsWaitingToFinishDialogObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogVisibilityTransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogVisibilityTransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogBoxWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ChoiceWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_DialogBoxWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ChoiceWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_ImageChoiceWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextDialogObjectIdToStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextDialogTextData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogControllerComponent_Statics::NewProp_NextInteractiveRenameCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogControllerComponent_Statics::ClassParams = {
	&UDialogControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogControllerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogControllerComponent.OuterSingleton, Z_Construct_UClass_UDialogControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogControllerComponent>()
{
	return UDialogControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogControllerComponent);
UDialogControllerComponent::~UDialogControllerComponent() {}
// End Class UDialogControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogState_StaticEnum, TEXT("EDialogState"), &Z_Registration_Info_UEnum_EDialogState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 551450815U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogLatentExecutor::StaticStruct, Z_Construct_UScriptStruct_FDialogLatentExecutor_Statics::NewStructOps, TEXT("DialogLatentExecutor"), &Z_Registration_Info_UScriptStruct_DialogLatentExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogLatentExecutor), 704580369U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogControllerComponent, UDialogControllerComponent::StaticClass, TEXT("UDialogControllerComponent"), &Z_Registration_Info_UClass_UDialogControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogControllerComponent), 1226339349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_727718490(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogControllerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
