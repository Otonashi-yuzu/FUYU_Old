// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/DialogImageControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogImageControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseCgDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogImageControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogImageControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
// End Cross Module References

// Begin Class UDialogImageControllerComponent Function OnDialogEnded
struct Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics
{
	struct DialogImageControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* EndedDialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialog = { "EndedDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogImageControllerComponent_eventOnDialogEnded_Parms, EndedDialog), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogImageControllerComponent, nullptr, "OnDialogEnded", nullptr, nullptr, Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::DialogImageControllerComponent_eventOnDialogEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::DialogImageControllerComponent_eventOnDialogEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogImageControllerComponent::execOnDialogEnded)
{
	P_GET_OBJECT(UDialogObject,Z_Param_EndedDialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogEnded(Z_Param_EndedDialog);
	P_NATIVE_END;
}
// End Class UDialogImageControllerComponent Function OnDialogEnded

// Begin Class UDialogImageControllerComponent Function OnDialogStarted
struct Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics
{
	struct DialogImageControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* StartedDialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartedDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialog = { "StartedDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogImageControllerComponent_eventOnDialogStarted_Parms, StartedDialog), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogImageControllerComponent, nullptr, "OnDialogStarted", nullptr, nullptr, Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::DialogImageControllerComponent_eventOnDialogStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::DialogImageControllerComponent_eventOnDialogStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogImageControllerComponent::execOnDialogStarted)
{
	P_GET_OBJECT(UDialogObject,Z_Param_StartedDialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogStarted(Z_Param_StartedDialog);
	P_NATIVE_END;
}
// End Class UDialogImageControllerComponent Function OnDialogStarted

// Begin Class UDialogImageControllerComponent Function OnTransitionComplete
struct Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogImageControllerComponent, nullptr, "OnTransitionComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogImageControllerComponent::execOnTransitionComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTransitionComplete();
	P_NATIVE_END;
}
// End Class UDialogImageControllerComponent Function OnTransitionComplete

// Begin Class UDialogImageControllerComponent
void UDialogImageControllerComponent::StaticRegisterNativesUDialogImageControllerComponent()
{
	UClass* Class = UDialogImageControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialogEnded", &UDialogImageControllerComponent::execOnDialogEnded },
		{ "OnDialogStarted", &UDialogImageControllerComponent::execOnDialogStarted },
		{ "OnTransitionComplete", &UDialogImageControllerComponent::execOnTransitionComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogImageControllerComponent);
UClass* Z_Construct_UClass_UDialogImageControllerComponent_NoRegister()
{
	return UDialogImageControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogImageControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DialogImageControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyHidingCG_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyHidingSceneBackground_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDisplayWidgetClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgDisplayWidget_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundDisplayWidgetClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundDisplayWidget_MetaData[] = {
		{ "Category", "Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogImageControllerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCurrentlyHidingCG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyHidingCG;
	static void NewProp_bIsCurrentlyHidingSceneBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyHidingSceneBackground;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CgDisplayWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CgDisplayWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SceneBackgroundDisplayWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneBackgroundDisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogEnded, "OnDialogEnded" }, // 2980656669
		{ &Z_Construct_UFunction_UDialogImageControllerComponent_OnDialogStarted, "OnDialogStarted" }, // 3856376361
		{ &Z_Construct_UFunction_UDialogImageControllerComponent_OnTransitionComplete, "OnTransitionComplete" }, // 4198907490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogImageControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingCG_SetBit(void* Obj)
{
	((UDialogImageControllerComponent*)Obj)->bIsCurrentlyHidingCG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingCG = { "bIsCurrentlyHidingCG", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogImageControllerComponent), &Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingCG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentlyHidingCG_MetaData), NewProp_bIsCurrentlyHidingCG_MetaData) };
void Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingSceneBackground_SetBit(void* Obj)
{
	((UDialogImageControllerComponent*)Obj)->bIsCurrentlyHidingSceneBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingSceneBackground = { "bIsCurrentlyHidingSceneBackground", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogImageControllerComponent), &Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingSceneBackground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentlyHidingSceneBackground_MetaData), NewProp_bIsCurrentlyHidingSceneBackground_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_CgDisplayWidgetClass = { "CgDisplayWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogImageControllerComponent, CgDisplayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseCgDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDisplayWidgetClass_MetaData), NewProp_CgDisplayWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_CgDisplayWidget = { "CgDisplayWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogImageControllerComponent, CgDisplayWidget), Z_Construct_UClass_UBaseCgDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgDisplayWidget_MetaData), NewProp_CgDisplayWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_SceneBackgroundDisplayWidgetClass = { "SceneBackgroundDisplayWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogImageControllerComponent, SceneBackgroundDisplayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundDisplayWidgetClass_MetaData), NewProp_SceneBackgroundDisplayWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_SceneBackgroundDisplayWidget = { "SceneBackgroundDisplayWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogImageControllerComponent, SceneBackgroundDisplayWidget), Z_Construct_UClass_UBaseSceneBackgroundDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundDisplayWidget_MetaData), NewProp_SceneBackgroundDisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogImageControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_bIsCurrentlyHidingSceneBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_CgDisplayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_CgDisplayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_SceneBackgroundDisplayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogImageControllerComponent_Statics::NewProp_SceneBackgroundDisplayWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogImageControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogImageControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogImageControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogImageControllerComponent_Statics::ClassParams = {
	&UDialogImageControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogImageControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogImageControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogImageControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogImageControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogImageControllerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogImageControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogImageControllerComponent.OuterSingleton, Z_Construct_UClass_UDialogImageControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogImageControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogImageControllerComponent>()
{
	return UDialogImageControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogImageControllerComponent);
UDialogImageControllerComponent::~UDialogImageControllerComponent() {}
// End Class UDialogImageControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogImageControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogImageControllerComponent, UDialogImageControllerComponent::StaticClass, TEXT("UDialogImageControllerComponent"), &Z_Registration_Info_UClass_UDialogImageControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogImageControllerComponent), 565605839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogImageControllerComponent_h_3958135521(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogImageControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogImageControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
