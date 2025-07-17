// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/CharacterControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseCharacterDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UCharacterControllerComponent();
VNM_API UClass* Z_Construct_UClass_UCharacterControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
// End Cross Module References

// Begin Class UCharacterControllerComponent Function OnDialogEnded
struct Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics
{
	struct CharacterControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* EndedDialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialog = { "EndedDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterControllerComponent_eventOnDialogEnded_Parms, EndedDialog), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterControllerComponent, nullptr, "OnDialogEnded", nullptr, nullptr, Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::CharacterControllerComponent_eventOnDialogEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::CharacterControllerComponent_eventOnDialogEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterControllerComponent::execOnDialogEnded)
{
	P_GET_OBJECT(UDialogObject,Z_Param_EndedDialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogEnded(Z_Param_EndedDialog);
	P_NATIVE_END;
}
// End Class UCharacterControllerComponent Function OnDialogEnded

// Begin Class UCharacterControllerComponent Function OnDialogStarted
struct Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics
{
	struct CharacterControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* StartedDialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartedDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialog = { "StartedDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterControllerComponent_eventOnDialogStarted_Parms, StartedDialog), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterControllerComponent, nullptr, "OnDialogStarted", nullptr, nullptr, Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::CharacterControllerComponent_eventOnDialogStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::CharacterControllerComponent_eventOnDialogStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterControllerComponent::execOnDialogStarted)
{
	P_GET_OBJECT(UDialogObject,Z_Param_StartedDialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogStarted(Z_Param_StartedDialog);
	P_NATIVE_END;
}
// End Class UCharacterControllerComponent Function OnDialogStarted

// Begin Class UCharacterControllerComponent Function OnMidTransitionReached
struct Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterControllerComponent, nullptr, "OnMidTransitionReached", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterControllerComponent::execOnMidTransitionReached)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMidTransitionReached();
	P_NATIVE_END;
}
// End Class UCharacterControllerComponent Function OnMidTransitionReached

// Begin Class UCharacterControllerComponent Function OnTransitionComplete
struct Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterControllerComponent, nullptr, "OnTransitionComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterControllerComponent::execOnTransitionComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTransitionComplete();
	P_NATIVE_END;
}
// End Class UCharacterControllerComponent Function OnTransitionComplete

// Begin Class UCharacterControllerComponent
void UCharacterControllerComponent::StaticRegisterNativesUCharacterControllerComponent()
{
	UClass* Class = UCharacterControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialogEnded", &UCharacterControllerComponent::execOnDialogEnded },
		{ "OnDialogStarted", &UCharacterControllerComponent::execOnDialogStarted },
		{ "OnMidTransitionReached", &UCharacterControllerComponent::execOnMidTransitionReached },
		{ "OnTransitionComplete", &UCharacterControllerComponent::execOnTransitionComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterControllerComponent);
UClass* Z_Construct_UClass_UCharacterControllerComponent_NoRegister()
{
	return UCharacterControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/CharacterControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayWidgetClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDisplayWidgets_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextCharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextEmotionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterIdToHide_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyHiding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenamedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CharacterControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterDisplayWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDisplayWidgets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterDisplayWidgets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterDisplayWidgets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextCharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextEmotionId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterIdToHide;
	static void NewProp_bIsCurrentlyHiding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyHiding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenamedCharacters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RenamedCharacters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RenamedCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterControllerComponent_OnDialogEnded, "OnDialogEnded" }, // 3718782990
		{ &Z_Construct_UFunction_UCharacterControllerComponent_OnDialogStarted, "OnDialogStarted" }, // 3728498608
		{ &Z_Construct_UFunction_UCharacterControllerComponent_OnMidTransitionReached, "OnMidTransitionReached" }, // 4241459847
		{ &Z_Construct_UFunction_UCharacterControllerComponent_OnTransitionComplete, "OnTransitionComplete" }, // 183722741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgetClass = { "CharacterDisplayWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, CharacterDisplayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseCharacterDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDisplayWidgetClass_MetaData), NewProp_CharacterDisplayWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets_ValueProp = { "CharacterDisplayWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseCharacterDisplayWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets_Key_KeyProp = { "CharacterDisplayWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets = { "CharacterDisplayWidgets", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, CharacterDisplayWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDisplayWidgets_MetaData), NewProp_CharacterDisplayWidgets_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_NextCharacterId = { "NextCharacterId", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, NextCharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextCharacterId_MetaData), NewProp_NextCharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_NextEmotionId = { "NextEmotionId", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, NextEmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextEmotionId_MetaData), NewProp_NextEmotionId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterIdToHide = { "CharacterIdToHide", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, CharacterIdToHide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterIdToHide_MetaData), NewProp_CharacterIdToHide_MetaData) };
void Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_bIsCurrentlyHiding_SetBit(void* Obj)
{
	((UCharacterControllerComponent*)Obj)->bIsCurrentlyHiding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_bIsCurrentlyHiding = { "bIsCurrentlyHiding", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterControllerComponent), &Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_bIsCurrentlyHiding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentlyHiding_MetaData), NewProp_bIsCurrentlyHiding_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters_ValueProp = { "RenamedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters_Key_KeyProp = { "RenamedCharacters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters = { "RenamedCharacters", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterControllerComponent, RenamedCharacters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenamedCharacters_MetaData), NewProp_RenamedCharacters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterDisplayWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_NextCharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_NextEmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_CharacterIdToHide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_bIsCurrentlyHiding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterControllerComponent_Statics::NewProp_RenamedCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterControllerComponent_Statics::ClassParams = {
	&UCharacterControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterControllerComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterControllerComponent.OuterSingleton, Z_Construct_UClass_UCharacterControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UCharacterControllerComponent>()
{
	return UCharacterControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterControllerComponent);
UCharacterControllerComponent::~UCharacterControllerComponent() {}
// End Class UCharacterControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_CharacterControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterControllerComponent, UCharacterControllerComponent::StaticClass, TEXT("UCharacterControllerComponent"), &Z_Registration_Info_UClass_UCharacterControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterControllerComponent), 432387257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_CharacterControllerComponent_h_3273036300(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_CharacterControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_CharacterControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
