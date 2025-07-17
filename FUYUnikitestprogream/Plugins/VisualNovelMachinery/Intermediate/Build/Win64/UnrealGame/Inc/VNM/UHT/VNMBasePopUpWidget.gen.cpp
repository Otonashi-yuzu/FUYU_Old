// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/VNMBasePopUpWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMBasePopUpWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBasePopUpWidget();
VNM_API UClass* Z_Construct_UClass_UVNMBasePopUpWidget_NoRegister();
VNM_API UEnum* Z_Construct_UEnum_VNM_EPopUpResult();
VNM_API UFunction* Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature();
// End Cross Module References

// Begin Enum EPopUpResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPopUpResult;
static UEnum* EPopUpResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPopUpResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPopUpResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNM_EPopUpResult, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("EPopUpResult"));
	}
	return Z_Registration_Info_UEnum_EPopUpResult.OuterSingleton;
}
template<> VNM_API UEnum* StaticEnum<EPopUpResult>()
{
	return EPopUpResult_StaticEnum();
}
struct Z_Construct_UEnum_VNM_EPopUpResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cancel.Name", "EPopUpResult::Cancel" },
		{ "Confirm.Name", "EPopUpResult::Confirm" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
		{ "Unknown.Name", "EPopUpResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPopUpResult::Unknown", (int64)EPopUpResult::Unknown },
		{ "EPopUpResult::Confirm", (int64)EPopUpResult::Confirm },
		{ "EPopUpResult::Cancel", (int64)EPopUpResult::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNM_EPopUpResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	"EPopUpResult",
	"EPopUpResult",
	Z_Construct_UEnum_VNM_EPopUpResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EPopUpResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNM_EPopUpResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNM_EPopUpResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNM_EPopUpResult()
{
	if (!Z_Registration_Info_UEnum_EPopUpResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPopUpResult.InnerSingleton, Z_Construct_UEnum_VNM_EPopUpResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPopUpResult.InnerSingleton;
}
// End Enum EPopUpResult

// Begin Delegate FOnPopUpClose
struct Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics
{
	struct VNMBasePopUpWidget_eventOnPopUpClose_Parms
	{
		EPopUpResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBasePopUpWidget_eventOnPopUpClose_Parms, Result), Z_Construct_UEnum_VNM_EPopUpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 4080065112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBasePopUpWidget, nullptr, "OnPopUpClose__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::VNMBasePopUpWidget_eventOnPopUpClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::VNMBasePopUpWidget_eventOnPopUpClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVNMBasePopUpWidget::FOnPopUpClose_DelegateWrapper(const FMulticastScriptDelegate& OnPopUpClose, const EPopUpResult Result)
{
	struct VNMBasePopUpWidget_eventOnPopUpClose_Parms
	{
		EPopUpResult Result;
	};
	VNMBasePopUpWidget_eventOnPopUpClose_Parms Parms;
	Parms.Result=Result;
	OnPopUpClose.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPopUpClose

// Begin Class UVNMBasePopUpWidget Function OnPopUpResultCancel
struct Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics
{
	struct VNMBasePopUpWidget_eventOnPopUpResultCancel_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBasePopUpWidget_eventOnPopUpResultCancel_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBasePopUpWidget, nullptr, "OnPopUpResultCancel", nullptr, nullptr, Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::VNMBasePopUpWidget_eventOnPopUpResultCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::VNMBasePopUpWidget_eventOnPopUpResultCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMBasePopUpWidget::execOnPopUpResultCancel)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPopUpResultCancel(Z_Param_ClickedButton);
	P_NATIVE_END;
}
// End Class UVNMBasePopUpWidget Function OnPopUpResultCancel

// Begin Class UVNMBasePopUpWidget Function OnPopUpResultConfirm
struct Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics
{
	struct VNMBasePopUpWidget_eventOnPopUpResultConfirm_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBasePopUpWidget_eventOnPopUpResultConfirm_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBasePopUpWidget, nullptr, "OnPopUpResultConfirm", nullptr, nullptr, Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::VNMBasePopUpWidget_eventOnPopUpResultConfirm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::VNMBasePopUpWidget_eventOnPopUpResultConfirm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMBasePopUpWidget::execOnPopUpResultConfirm)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPopUpResultConfirm(Z_Param_ClickedButton);
	P_NATIVE_END;
}
// End Class UVNMBasePopUpWidget Function OnPopUpResultConfirm

// Begin Class UVNMBasePopUpWidget Function SetupPopUp
struct Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics
{
	struct VNMBasePopUpWidget_eventSetupPopUp_Parms
	{
		FText Title;
		FText Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBasePopUpWidget_eventSetupPopUp_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBasePopUpWidget_eventSetupPopUp_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBasePopUpWidget, nullptr, "SetupPopUp", nullptr, nullptr, Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::VNMBasePopUpWidget_eventSetupPopUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::VNMBasePopUpWidget_eventSetupPopUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMBasePopUpWidget::execSetupPopUp)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPopUp(Z_Param_Out_Title,Z_Param_Out_Description);
	P_NATIVE_END;
}
// End Class UVNMBasePopUpWidget Function SetupPopUp

// Begin Class UVNMBasePopUpWidget Function ShowPopUp
struct Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBasePopUpWidget, nullptr, "ShowPopUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMBasePopUpWidget::execShowPopUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPopUp();
	P_NATIVE_END;
}
// End Class UVNMBasePopUpWidget Function ShowPopUp

// Begin Class UVNMBasePopUpWidget
void UVNMBasePopUpWidget::StaticRegisterNativesUVNMBasePopUpWidget()
{
	UClass* Class = UVNMBasePopUpWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPopUpResultCancel", &UVNMBasePopUpWidget::execOnPopUpResultCancel },
		{ "OnPopUpResultConfirm", &UVNMBasePopUpWidget::execOnPopUpResultConfirm },
		{ "SetupPopUp", &UVNMBasePopUpWidget::execSetupPopUp },
		{ "ShowPopUp", &UVNMBasePopUpWidget::execShowPopUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMBasePopUpWidget);
UClass* Z_Construct_UClass_UVNMBasePopUpWidget_NoRegister()
{
	return UVNMBasePopUpWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMBasePopUpWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/VNMBasePopUpWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPopUpClose_MetaData[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pop Ups" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pop Ups" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pop Ups" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pop Ups" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBasePopUpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopUpClose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature, "OnPopUpClose__DelegateSignature" }, // 1158109520
		{ &Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultCancel, "OnPopUpResultCancel" }, // 1239154279
		{ &Z_Construct_UFunction_UVNMBasePopUpWidget_OnPopUpResultConfirm, "OnPopUpResultConfirm" }, // 2386139221
		{ &Z_Construct_UFunction_UVNMBasePopUpWidget_SetupPopUp, "SetupPopUp" }, // 2547579882
		{ &Z_Construct_UFunction_UVNMBasePopUpWidget_ShowPopUp, "ShowPopUp" }, // 1942797595
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMBasePopUpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_OnPopUpClose = { "OnPopUpClose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePopUpWidget, OnPopUpClose), Z_Construct_UDelegateFunction_UVNMBasePopUpWidget_OnPopUpClose__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPopUpClose_MetaData), NewProp_OnPopUpClose_MetaData) }; // 1158109520
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePopUpWidget, ConfirmButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmButton_MetaData), NewProp_ConfirmButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePopUpWidget, CancelButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelButton_MetaData), NewProp_CancelButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePopUpWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBasePopUpWidget, DescriptionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionText_MetaData), NewProp_DescriptionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMBasePopUpWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_OnPopUpClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_ConfirmButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_CancelButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBasePopUpWidget_Statics::NewProp_DescriptionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePopUpWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMBasePopUpWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePopUpWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMBasePopUpWidget_Statics::ClassParams = {
	&UVNMBasePopUpWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMBasePopUpWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePopUpWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBasePopUpWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMBasePopUpWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMBasePopUpWidget()
{
	if (!Z_Registration_Info_UClass_UVNMBasePopUpWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMBasePopUpWidget.OuterSingleton, Z_Construct_UClass_UVNMBasePopUpWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMBasePopUpWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMBasePopUpWidget>()
{
	return UVNMBasePopUpWidget::StaticClass();
}
UVNMBasePopUpWidget::UVNMBasePopUpWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMBasePopUpWidget);
UVNMBasePopUpWidget::~UVNMBasePopUpWidget() {}
// End Class UVNMBasePopUpWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPopUpResult_StaticEnum, TEXT("EPopUpResult"), &Z_Registration_Info_UEnum_EPopUpResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4080065112U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMBasePopUpWidget, UVNMBasePopUpWidget::StaticClass, TEXT("UVNMBasePopUpWidget"), &Z_Registration_Info_UClass_UVNMBasePopUpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMBasePopUpWidget), 687131847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_54979007(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBasePopUpWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
