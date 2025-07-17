// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/DialogSceneControllerComponent.h"
#include "VNM/Public/Common/VNMDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogSceneControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogSceneControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UGameSaveSubsystem_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogSceneData();
// End Cross Module References

// Begin Delegate FOnDialogSceneChanged
struct Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics
{
	struct DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms
	{
		FName DialogSceneId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::NewProp_DialogSceneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnDialogSceneChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDialogSceneControllerComponent::FOnDialogSceneChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogSceneChanged, FName const& DialogSceneId)
{
	struct DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms
	{
		FName DialogSceneId;
	};
	DialogSceneControllerComponent_eventOnDialogSceneChanged_Parms Parms;
	Parms.DialogSceneId=DialogSceneId;
	OnDialogSceneChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogSceneChanged

// Begin Class UDialogSceneControllerComponent Function OnCameraTransitionComplete
struct Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnCameraTransitionComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogSceneControllerComponent::execOnCameraTransitionComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraTransitionComplete();
	P_NATIVE_END;
}
// End Class UDialogSceneControllerComponent Function OnCameraTransitionComplete

// Begin Class UDialogSceneControllerComponent Function OnDialogEnded
struct Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics
{
	struct DialogSceneControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* DialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::NewProp_DialogObject = { "DialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogSceneControllerComponent_eventOnDialogEnded_Parms, DialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::NewProp_DialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnDialogEnded", nullptr, nullptr, Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::DialogSceneControllerComponent_eventOnDialogEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::DialogSceneControllerComponent_eventOnDialogEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogSceneControllerComponent::execOnDialogEnded)
{
	P_GET_OBJECT(UDialogObject,Z_Param_DialogObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogEnded(Z_Param_DialogObject);
	P_NATIVE_END;
}
// End Class UDialogSceneControllerComponent Function OnDialogEnded

// Begin Class UDialogSceneControllerComponent Function OnDialogStarted
struct Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics
{
	struct DialogSceneControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* DialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::NewProp_DialogObject = { "DialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogSceneControllerComponent_eventOnDialogStarted_Parms, DialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::NewProp_DialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnDialogStarted", nullptr, nullptr, Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::DialogSceneControllerComponent_eventOnDialogStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::DialogSceneControllerComponent_eventOnDialogStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogSceneControllerComponent::execOnDialogStarted)
{
	P_GET_OBJECT(UDialogObject,Z_Param_DialogObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogStarted(Z_Param_DialogObject);
	P_NATIVE_END;
}
// End Class UDialogSceneControllerComponent Function OnDialogStarted

// Begin Class UDialogSceneControllerComponent Function OnHideDialogSceneComplete
struct Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnHideDialogSceneComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogSceneControllerComponent::execOnHideDialogSceneComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHideDialogSceneComplete();
	P_NATIVE_END;
}
// End Class UDialogSceneControllerComponent Function OnHideDialogSceneComplete

// Begin Class UDialogSceneControllerComponent Function OnShowDialogSceneComplete
struct Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogSceneControllerComponent, nullptr, "OnShowDialogSceneComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogSceneControllerComponent::execOnShowDialogSceneComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShowDialogSceneComplete();
	P_NATIVE_END;
}
// End Class UDialogSceneControllerComponent Function OnShowDialogSceneComplete

// Begin Class UDialogSceneControllerComponent
void UDialogSceneControllerComponent::StaticRegisterNativesUDialogSceneControllerComponent()
{
	UClass* Class = UDialogSceneControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCameraTransitionComplete", &UDialogSceneControllerComponent::execOnCameraTransitionComplete },
		{ "OnDialogEnded", &UDialogSceneControllerComponent::execOnDialogEnded },
		{ "OnDialogStarted", &UDialogSceneControllerComponent::execOnDialogStarted },
		{ "OnHideDialogSceneComplete", &UDialogSceneControllerComponent::execOnHideDialogSceneComplete },
		{ "OnShowDialogSceneComplete", &UDialogSceneControllerComponent::execOnShowDialogSceneComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogSceneControllerComponent);
UClass* Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister()
{
	return UDialogSceneControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogSceneControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DialogSceneControllerComponent.h" },
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogSceneChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogSceneId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToSwitchToOnLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogScene_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogSceneControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogSceneChanged;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogControllerComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentDialogSceneId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentCameraName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraToSwitchToOnLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraActors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CameraActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogSceneControllerComponent_OnCameraTransitionComplete, "OnCameraTransitionComplete" }, // 3181395282
		{ &Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogEnded, "OnDialogEnded" }, // 2305811151
		{ &Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature, "OnDialogSceneChanged__DelegateSignature" }, // 2186311920
		{ &Z_Construct_UFunction_UDialogSceneControllerComponent_OnDialogStarted, "OnDialogStarted" }, // 2132975945
		{ &Z_Construct_UFunction_UDialogSceneControllerComponent_OnHideDialogSceneComplete, "OnHideDialogSceneComplete" }, // 1226595590
		{ &Z_Construct_UFunction_UDialogSceneControllerComponent_OnShowDialogSceneComplete, "OnShowDialogSceneComplete" }, // 1231748947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogSceneControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_OnDialogSceneChanged = { "OnDialogSceneChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, OnDialogSceneChanged), Z_Construct_UDelegateFunction_UDialogSceneControllerComponent_OnDialogSceneChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogSceneChanged_MetaData), NewProp_OnDialogSceneChanged_MetaData) }; // 2186311920
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, CameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraClass_MetaData), NewProp_CameraClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_DialogControllerComponent = { "DialogControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, DialogControllerComponent), Z_Construct_UClass_UDialogControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogControllerComponent_MetaData), NewProp_DialogControllerComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CurrentDialogSceneId = { "CurrentDialogSceneId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, CurrentDialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogSceneId_MetaData), NewProp_CurrentDialogSceneId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CurrentCameraName = { "CurrentCameraName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, CurrentCameraName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCameraName_MetaData), NewProp_CurrentCameraName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraToSwitchToOnLoad = { "CameraToSwitchToOnLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, CameraToSwitchToOnLoad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToSwitchToOnLoad_MetaData), NewProp_CameraToSwitchToOnLoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_ActiveDialogScene = { "ActiveDialogScene", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, ActiveDialogScene), Z_Construct_UScriptStruct_FDialogSceneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogScene_MetaData), NewProp_ActiveDialogScene_MetaData) }; // 225937691
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors_ValueProp = { "CameraActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors_Key_KeyProp = { "CameraActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors = { "CameraActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, CameraActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraActors_MetaData), NewProp_CameraActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_SaveGameSubsystem = { "SaveGameSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogSceneControllerComponent, SaveGameSubsystem), Z_Construct_UClass_UGameSaveSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameSubsystem_MetaData), NewProp_SaveGameSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogSceneControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_OnDialogSceneChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_DialogControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CurrentDialogSceneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CurrentCameraName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraToSwitchToOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_ActiveDialogScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_CameraActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogSceneControllerComponent_Statics::NewProp_SaveGameSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogSceneControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogSceneControllerComponent_Statics::ClassParams = {
	&UDialogSceneControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogSceneControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogSceneControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogSceneControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogSceneControllerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogSceneControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogSceneControllerComponent.OuterSingleton, Z_Construct_UClass_UDialogSceneControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogSceneControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogSceneControllerComponent>()
{
	return UDialogSceneControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogSceneControllerComponent);
UDialogSceneControllerComponent::~UDialogSceneControllerComponent() {}
// End Class UDialogSceneControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogSceneControllerComponent, UDialogSceneControllerComponent::StaticClass, TEXT("UDialogSceneControllerComponent"), &Z_Registration_Info_UClass_UDialogSceneControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogSceneControllerComponent), 2048025149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_3217430008(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogSceneControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
