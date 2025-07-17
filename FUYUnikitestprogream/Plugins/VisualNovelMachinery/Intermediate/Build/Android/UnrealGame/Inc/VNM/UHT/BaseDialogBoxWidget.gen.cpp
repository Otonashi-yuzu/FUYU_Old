// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseDialogBoxWidget.h"
#include "VNM/Public/VNMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDialogBoxWidget() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseDialogBoxWidget();
VNM_API UClass* Z_Construct_UClass_UBaseDialogBoxWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogDefinition();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FImageDefinition();
// End Cross Module References

// Begin Delegate FOnDialogTextBoxTextCommittedEvent
struct Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics
{
	struct BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDialogBoxWidget, nullptr, "OnDialogTextBoxTextCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseDialogBoxWidget::FOnDialogTextBoxTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDialogTextBoxTextCommittedEvent, FText const& Text)
{
	struct BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms
	{
		FText Text;
	};
	BaseDialogBoxWidget_eventOnDialogTextBoxTextCommittedEvent_Parms Parms;
	Parms.Text=Text;
	OnDialogTextBoxTextCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogTextBoxTextCommittedEvent

// Begin Delegate FOnDialogTextBoxTypeWritingEnd
struct Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDialogBoxWidget, nullptr, "OnDialogTextBoxTypeWritingEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseDialogBoxWidget::FOnDialogTextBoxTypeWritingEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDialogTextBoxTypeWritingEnd)
{
	OnDialogTextBoxTypeWritingEnd.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDialogTextBoxTypeWritingEnd

// Begin Class UBaseDialogBoxWidget Function BP_OnBeginTypewritingEffect
static FName NAME_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect = FName(TEXT("BP_OnBeginTypewritingEffect"));
void UBaseDialogBoxWidget::BP_OnBeginTypewritingEffect()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect),NULL);
}
struct Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Begin Typewriting Effect" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDialogBoxWidget, nullptr, "BP_OnBeginTypewritingEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseDialogBoxWidget Function BP_OnBeginTypewritingEffect

// Begin Class UBaseDialogBoxWidget Function BP_OnEndTypewritingEffect
static FName NAME_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect = FName(TEXT("BP_OnEndTypewritingEffect"));
void UBaseDialogBoxWidget::BP_OnEndTypewritingEffect()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect),NULL);
}
struct Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On End Typewriting Effect" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDialogBoxWidget, nullptr, "BP_OnEndTypewritingEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseDialogBoxWidget Function BP_OnEndTypewritingEffect

// Begin Class UBaseDialogBoxWidget Function OnDialogTextBoxTextCommitted
struct Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics
{
	struct BaseDialogBoxWidget_eventOnDialogTextBoxTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDialogBoxWidget_eventOnDialogTextBoxTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDialogBoxWidget_eventOnDialogTextBoxTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDialogBoxWidget, nullptr, "OnDialogTextBoxTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::BaseDialogBoxWidget_eventOnDialogTextBoxTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::BaseDialogBoxWidget_eventOnDialogTextBoxTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDialogBoxWidget::execOnDialogTextBoxTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogTextBoxTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UBaseDialogBoxWidget Function OnDialogTextBoxTextCommitted

// Begin Class UBaseDialogBoxWidget
void UBaseDialogBoxWidget::StaticRegisterNativesUBaseDialogBoxWidget()
{
	UClass* Class = UBaseDialogBoxWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialogTextBoxTextCommitted", &UBaseDialogBoxWidget::execOnDialogTextBoxTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseDialogBoxWidget);
UClass* Z_Construct_UClass_UBaseDialogBoxWidget_NoRegister()
{
	return UBaseDialogBoxWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseDialogBoxWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseDialogBoxWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogTextBoxTextCommittedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogTextBoxTypeWritingEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogBoxBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameAlignmentBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogBoxImageDefinition_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTalkingCharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogDefinition_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTypewriterEffectActive_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeWritingSpeed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeWritingSpeedMultiplier_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseDialogBoxWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogTextBoxTextCommittedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogTextBoxTypeWritingEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogBoxBackground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterNameAlignmentBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogTextBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDialogBoxImageDefinition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveTalkingCharacterId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogDefinition;
	static void NewProp_bTypewriterEffectActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTypewriterEffectActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeWritingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeWritingSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnBeginTypewritingEffect, "BP_OnBeginTypewritingEffect" }, // 402187095
		{ &Z_Construct_UFunction_UBaseDialogBoxWidget_BP_OnEndTypewritingEffect, "BP_OnEndTypewritingEffect" }, // 1209796274
		{ &Z_Construct_UFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommitted, "OnDialogTextBoxTextCommitted" }, // 352269077
		{ &Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature, "OnDialogTextBoxTextCommittedEvent__DelegateSignature" }, // 226936857
		{ &Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature, "OnDialogTextBoxTypeWritingEnd__DelegateSignature" }, // 701901792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseDialogBoxWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_OnDialogTextBoxTextCommittedEvent = { "OnDialogTextBoxTextCommittedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, OnDialogTextBoxTextCommittedEvent), Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTextCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogTextBoxTextCommittedEvent_MetaData), NewProp_OnDialogTextBoxTextCommittedEvent_MetaData) }; // 226936857
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_OnDialogTextBoxTypeWritingEnd = { "OnDialogTextBoxTypeWritingEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, OnDialogTextBoxTypeWritingEnd), Z_Construct_UDelegateFunction_UBaseDialogBoxWidget_OnDialogTextBoxTypeWritingEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogTextBoxTypeWritingEnd_MetaData), NewProp_OnDialogTextBoxTypeWritingEnd_MetaData) }; // 701901792
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogBoxBackground = { "DialogBoxBackground", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, DialogBoxBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogBoxBackground_MetaData), NewProp_DialogBoxBackground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_CharacterNameText = { "CharacterNameText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, CharacterNameText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameText_MetaData), NewProp_CharacterNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_CharacterNameAlignmentBox = { "CharacterNameAlignmentBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, CharacterNameAlignmentBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameAlignmentBox_MetaData), NewProp_CharacterNameAlignmentBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogText = { "DialogText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, DialogText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogText_MetaData), NewProp_DialogText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogTextBox = { "DialogTextBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, DialogTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTextBox_MetaData), NewProp_DialogTextBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DefaultDialogBoxImageDefinition = { "DefaultDialogBoxImageDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, DefaultDialogBoxImageDefinition), Z_Construct_UScriptStruct_FImageDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogBoxImageDefinition_MetaData), NewProp_DefaultDialogBoxImageDefinition_MetaData) }; // 2338445570
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_ActiveTalkingCharacterId = { "ActiveTalkingCharacterId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, ActiveTalkingCharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTalkingCharacterId_MetaData), NewProp_ActiveTalkingCharacterId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_ActiveDialogDefinition = { "ActiveDialogDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, ActiveDialogDefinition), Z_Construct_UScriptStruct_FDialogDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogDefinition_MetaData), NewProp_ActiveDialogDefinition_MetaData) }; // 387936331
void Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_bTypewriterEffectActive_SetBit(void* Obj)
{
	((UBaseDialogBoxWidget*)Obj)->bTypewriterEffectActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_bTypewriterEffectActive = { "bTypewriterEffectActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseDialogBoxWidget), &Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_bTypewriterEffectActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTypewriterEffectActive_MetaData), NewProp_bTypewriterEffectActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_TypeWritingSpeed = { "TypeWritingSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, TypeWritingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeWritingSpeed_MetaData), NewProp_TypeWritingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_TypeWritingSpeedMultiplier = { "TypeWritingSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDialogBoxWidget, TypeWritingSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeWritingSpeedMultiplier_MetaData), NewProp_TypeWritingSpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseDialogBoxWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_OnDialogTextBoxTextCommittedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_OnDialogTextBoxTypeWritingEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogBoxBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_CharacterNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_CharacterNameAlignmentBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DialogTextBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_DefaultDialogBoxImageDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_ActiveTalkingCharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_ActiveDialogDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_bTypewriterEffectActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_TypeWritingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDialogBoxWidget_Statics::NewProp_TypeWritingSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDialogBoxWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseDialogBoxWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVNMWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDialogBoxWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseDialogBoxWidget_Statics::ClassParams = {
	&UBaseDialogBoxWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseDialogBoxWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDialogBoxWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDialogBoxWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseDialogBoxWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseDialogBoxWidget()
{
	if (!Z_Registration_Info_UClass_UBaseDialogBoxWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseDialogBoxWidget.OuterSingleton, Z_Construct_UClass_UBaseDialogBoxWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseDialogBoxWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseDialogBoxWidget>()
{
	return UBaseDialogBoxWidget::StaticClass();
}
UBaseDialogBoxWidget::UBaseDialogBoxWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseDialogBoxWidget);
UBaseDialogBoxWidget::~UBaseDialogBoxWidget() {}
// End Class UBaseDialogBoxWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseDialogBoxWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseDialogBoxWidget, UBaseDialogBoxWidget::StaticClass, TEXT("UBaseDialogBoxWidget"), &Z_Registration_Info_UClass_UBaseDialogBoxWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseDialogBoxWidget), 2598426569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseDialogBoxWidget_h_2240003231(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseDialogBoxWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseDialogBoxWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
