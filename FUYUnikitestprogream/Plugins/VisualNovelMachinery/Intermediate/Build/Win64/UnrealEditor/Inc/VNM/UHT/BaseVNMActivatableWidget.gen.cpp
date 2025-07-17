// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/BaseVNMActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVNMActivatableWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget();
VNM_API UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnWidgetActivationEvent
struct Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMActivatableWidget, nullptr, "OnWidgetActivationEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseVNMActivatableWidget::FOnWidgetActivationEvent_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetActivationEvent)
{
	OnWidgetActivationEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWidgetActivationEvent

// Begin Class UBaseVNMActivatableWidget Function BP_OnActivated
static FName NAME_UBaseVNMActivatableWidget_BP_OnActivated = FName(TEXT("BP_OnActivated"));
void UBaseVNMActivatableWidget::BP_OnActivated()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseVNMActivatableWidget_BP_OnActivated),NULL);
}
struct Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMActivatableWidget, nullptr, "BP_OnActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseVNMActivatableWidget Function BP_OnActivated

// Begin Class UBaseVNMActivatableWidget Function BP_OnDeactivated
static FName NAME_UBaseVNMActivatableWidget_BP_OnDeactivated = FName(TEXT("BP_OnDeactivated"));
void UBaseVNMActivatableWidget::BP_OnDeactivated()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseVNMActivatableWidget_BP_OnDeactivated),NULL);
}
struct Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMActivatableWidget, nullptr, "BP_OnDeactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseVNMActivatableWidget Function BP_OnDeactivated

// Begin Class UBaseVNMActivatableWidget Function DeactivateWidget
struct Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMActivatableWidget, nullptr, "DeactivateWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseVNMActivatableWidget::execDeactivateWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateWidget();
	P_NATIVE_END;
}
// End Class UBaseVNMActivatableWidget Function DeactivateWidget

// Begin Class UBaseVNMActivatableWidget
void UBaseVNMActivatableWidget::StaticRegisterNativesUBaseVNMActivatableWidget()
{
	UClass* Class = UBaseVNMActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeactivateWidget", &UBaseVNMActivatableWidget::execDeactivateWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseVNMActivatableWidget);
UClass* Z_Construct_UClass_UBaseVNMActivatableWidget_NoRegister()
{
	return UBaseVNMActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseVNMActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BaseVNMActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetDeactivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetDeactivated;
	static void NewProp_bIsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnActivated, "BP_OnActivated" }, // 2602052955
		{ &Z_Construct_UFunction_UBaseVNMActivatableWidget_BP_OnDeactivated, "BP_OnDeactivated" }, // 2344670061
		{ &Z_Construct_UFunction_UBaseVNMActivatableWidget_DeactivateWidget, "DeactivateWidget" }, // 983571850
		{ &Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature, "OnWidgetActivationEvent__DelegateSignature" }, // 2514181447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVNMActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_OnWidgetActivated = { "OnWidgetActivated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMActivatableWidget, OnWidgetActivated), Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetActivated_MetaData), NewProp_OnWidgetActivated_MetaData) }; // 2514181447
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_OnWidgetDeactivated = { "OnWidgetDeactivated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMActivatableWidget, OnWidgetDeactivated), Z_Construct_UDelegateFunction_UBaseVNMActivatableWidget_OnWidgetActivationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetDeactivated_MetaData), NewProp_OnWidgetDeactivated_MetaData) }; // 2514181447
void Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_bIsActivated_SetBit(void* Obj)
{
	((UBaseVNMActivatableWidget*)Obj)->bIsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseVNMActivatableWidget), &Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActivated_MetaData), NewProp_bIsActivated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_OnWidgetActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_OnWidgetDeactivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::NewProp_bIsActivated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::ClassParams = {
	&UBaseVNMActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseVNMActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UBaseVNMActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseVNMActivatableWidget.OuterSingleton, Z_Construct_UClass_UBaseVNMActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseVNMActivatableWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseVNMActivatableWidget>()
{
	return UBaseVNMActivatableWidget::StaticClass();
}
UBaseVNMActivatableWidget::UBaseVNMActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVNMActivatableWidget);
UBaseVNMActivatableWidget::~UBaseVNMActivatableWidget() {}
// End Class UBaseVNMActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMActivatableWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseVNMActivatableWidget, UBaseVNMActivatableWidget::StaticClass, TEXT("UBaseVNMActivatableWidget"), &Z_Registration_Info_UClass_UBaseVNMActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseVNMActivatableWidget), 2625598678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMActivatableWidget_h_1106489745(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
