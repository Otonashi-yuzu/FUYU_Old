// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/BaseVNMWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVNMWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_ETransitionEvent();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnTransitionComplete
struct Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMWidget, nullptr, "OnTransitionComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseVNMWidget::FOnTransitionComplete_DelegateWrapper(const FMulticastScriptDelegate& OnTransitionComplete)
{
	OnTransitionComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTransitionComplete

// Begin Delegate FOnMidTransitionReached
struct Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVNMWidget, nullptr, "OnMidTransitionReached__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseVNMWidget::FOnMidTransitionReached_DelegateWrapper(const FMulticastScriptDelegate& OnMidTransitionReached)
{
	OnMidTransitionReached.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMidTransitionReached

// Begin Class UBaseVNMWidget
void UBaseVNMWidget::StaticRegisterNativesUBaseVNMWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseVNMWidget);
UClass* Z_Construct_UClass_UBaseVNMWidget_NoRegister()
{
	return UBaseVNMWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseVNMWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BaseVNMWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTransitionComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMidTransitionReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VPunchAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPunchAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTransitionEvent_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCustomEventName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimationPlaybackMultiplier_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExitAndEntry_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBroadcastOnAnimationFinished_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/BaseVNMWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransitionComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMidTransitionReached;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VPunchAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPunchAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchAnimation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveTransitionEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveTransitionEvent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveCustomEventName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveAnimationPlaybackMultiplier;
	static void NewProp_bExitAndEntry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitAndEntry;
	static void NewProp_bBroadcastOnAnimationFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcastOnAnimationFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature, "OnMidTransitionReached__DelegateSignature" }, // 710319992
		{ &Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature, "OnTransitionComplete__DelegateSignature" }, // 284175971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVNMWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_OnTransitionComplete = { "OnTransitionComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, OnTransitionComplete), Z_Construct_UDelegateFunction_UBaseVNMWidget_OnTransitionComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTransitionComplete_MetaData), NewProp_OnTransitionComplete_MetaData) }; // 284175971
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_OnMidTransitionReached = { "OnMidTransitionReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, OnMidTransitionReached), Z_Construct_UDelegateFunction_UBaseVNMWidget_OnMidTransitionReached__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMidTransitionReached_MetaData), NewProp_OnMidTransitionReached_MetaData) }; // 710319992
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_FadeAnimation = { "FadeAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, FadeAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeAnimation_MetaData), NewProp_FadeAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_DissolveAnimation = { "DissolveAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, DissolveAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveAnimation_MetaData), NewProp_DissolveAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ZoomAnimation = { "ZoomAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, ZoomAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomAnimation_MetaData), NewProp_ZoomAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_VPunchAnimation = { "VPunchAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, VPunchAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VPunchAnimation_MetaData), NewProp_VPunchAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_HPunchAnimation = { "HPunchAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, HPunchAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPunchAnimation_MetaData), NewProp_HPunchAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_PunchAnimation = { "PunchAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, PunchAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchAnimation_MetaData), NewProp_PunchAnimation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveTransitionEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveTransitionEvent = { "ActiveTransitionEvent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, ActiveTransitionEvent), Z_Construct_UEnum_VNM_ETransitionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTransitionEvent_MetaData), NewProp_ActiveTransitionEvent_MetaData) }; // 35133603
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveCustomEventName = { "ActiveCustomEventName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, ActiveCustomEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCustomEventName_MetaData), NewProp_ActiveCustomEventName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveAnimationPlaybackMultiplier = { "ActiveAnimationPlaybackMultiplier", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVNMWidget, ActiveAnimationPlaybackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAnimationPlaybackMultiplier_MetaData), NewProp_ActiveAnimationPlaybackMultiplier_MetaData) };
void Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bExitAndEntry_SetBit(void* Obj)
{
	((UBaseVNMWidget*)Obj)->bExitAndEntry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bExitAndEntry = { "bExitAndEntry", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseVNMWidget), &Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bExitAndEntry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExitAndEntry_MetaData), NewProp_bExitAndEntry_MetaData) };
void Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bBroadcastOnAnimationFinished_SetBit(void* Obj)
{
	((UBaseVNMWidget*)Obj)->bBroadcastOnAnimationFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bBroadcastOnAnimationFinished = { "bBroadcastOnAnimationFinished", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseVNMWidget), &Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bBroadcastOnAnimationFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBroadcastOnAnimationFinished_MetaData), NewProp_bBroadcastOnAnimationFinished_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseVNMWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_OnTransitionComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_OnMidTransitionReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_FadeAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_DissolveAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ZoomAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_VPunchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_HPunchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_PunchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveTransitionEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveTransitionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveCustomEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_ActiveAnimationPlaybackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bExitAndEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVNMWidget_Statics::NewProp_bBroadcastOnAnimationFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseVNMWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseVNMWidget_Statics::ClassParams = {
	&UBaseVNMWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseVNMWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVNMWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseVNMWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseVNMWidget()
{
	if (!Z_Registration_Info_UClass_UBaseVNMWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseVNMWidget.OuterSingleton, Z_Construct_UClass_UBaseVNMWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseVNMWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseVNMWidget>()
{
	return UBaseVNMWidget::StaticClass();
}
UBaseVNMWidget::UBaseVNMWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVNMWidget);
UBaseVNMWidget::~UBaseVNMWidget() {}
// End Class UBaseVNMWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseVNMWidget, UBaseVNMWidget::StaticClass, TEXT("UBaseVNMWidget"), &Z_Registration_Info_UClass_UBaseVNMWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseVNMWidget), 2278688967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMWidget_h_3428243667(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_BaseVNMWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
