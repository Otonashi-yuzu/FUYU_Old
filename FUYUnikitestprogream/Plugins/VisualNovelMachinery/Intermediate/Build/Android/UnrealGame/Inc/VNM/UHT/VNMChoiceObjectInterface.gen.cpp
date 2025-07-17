// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMChoiceObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMChoiceObjectInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMChoiceObjectInterface();
VNM_API UClass* Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister();
// End Cross Module References

// Begin Interface UVNMChoiceObjectInterface Function On3DChoices
struct VNMChoiceObjectInterface_eventOn3DChoices_Parms
{
	TArray<FText> Choices;
};
void IVNMChoiceObjectInterface::On3DChoices(TArray<FText> const& Choices)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_On3DChoices instead.");
}
static FName NAME_UVNMChoiceObjectInterface_On3DChoices = FName(TEXT("On3DChoices"));
void IVNMChoiceObjectInterface::Execute_On3DChoices(UObject* O, TArray<FText> const& Choices)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVNMChoiceObjectInterface::StaticClass()));
	VNMChoiceObjectInterface_eventOn3DChoices_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVNMChoiceObjectInterface_On3DChoices);
	if (Func)
	{
		Parms.Choices=Choices;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVNMChoiceObjectInterface*)(O->GetNativeInterfaceAddress(UVNMChoiceObjectInterface::StaticClass())))
	{
		I->On3DChoices_Implementation(Choices);
	}
}
struct Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceObjectInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMChoiceObjectInterface_eventOn3DChoices_Parms, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::NewProp_Choices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMChoiceObjectInterface, nullptr, "On3DChoices", nullptr, nullptr, Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::PropPointers), sizeof(VNMChoiceObjectInterface_eventOn3DChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(VNMChoiceObjectInterface_eventOn3DChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVNMChoiceObjectInterface::execOn3DChoices)
{
	P_GET_TARRAY_REF(FText,Z_Param_Out_Choices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->On3DChoices_Implementation(Z_Param_Out_Choices);
	P_NATIVE_END;
}
// End Interface UVNMChoiceObjectInterface Function On3DChoices

// Begin Interface UVNMChoiceObjectInterface Function On3DChoiceSelected
void IVNMChoiceObjectInterface::On3DChoiceSelected()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_On3DChoiceSelected instead.");
}
static FName NAME_UVNMChoiceObjectInterface_On3DChoiceSelected = FName(TEXT("On3DChoiceSelected"));
void IVNMChoiceObjectInterface::Execute_On3DChoiceSelected(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVNMChoiceObjectInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UVNMChoiceObjectInterface_On3DChoiceSelected);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IVNMChoiceObjectInterface*)(O->GetNativeInterfaceAddress(UVNMChoiceObjectInterface::StaticClass())))
	{
		I->On3DChoiceSelected_Implementation();
	}
}
struct Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceObjectInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMChoiceObjectInterface, nullptr, "On3DChoiceSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVNMChoiceObjectInterface::execOn3DChoiceSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->On3DChoiceSelected_Implementation();
	P_NATIVE_END;
}
// End Interface UVNMChoiceObjectInterface Function On3DChoiceSelected

// Begin Interface UVNMChoiceObjectInterface
void UVNMChoiceObjectInterface::StaticRegisterNativesUVNMChoiceObjectInterface()
{
	UClass* Class = UVNMChoiceObjectInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "On3DChoices", &IVNMChoiceObjectInterface::execOn3DChoices },
		{ "On3DChoiceSelected", &IVNMChoiceObjectInterface::execOn3DChoiceSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMChoiceObjectInterface);
UClass* Z_Construct_UClass_UVNMChoiceObjectInterface_NoRegister()
{
	return UVNMChoiceObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UVNMChoiceObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/VNMChoiceObjectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoices, "On3DChoices" }, // 792217520
		{ &Z_Construct_UFunction_UVNMChoiceObjectInterface_On3DChoiceSelected, "On3DChoiceSelected" }, // 2136282682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVNMChoiceObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::ClassParams = {
	&UVNMChoiceObjectInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMChoiceObjectInterface()
{
	if (!Z_Registration_Info_UClass_UVNMChoiceObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMChoiceObjectInterface.OuterSingleton, Z_Construct_UClass_UVNMChoiceObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMChoiceObjectInterface.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMChoiceObjectInterface>()
{
	return UVNMChoiceObjectInterface::StaticClass();
}
UVNMChoiceObjectInterface::UVNMChoiceObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMChoiceObjectInterface);
UVNMChoiceObjectInterface::~UVNMChoiceObjectInterface() {}
// End Interface UVNMChoiceObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMChoiceObjectInterface, UVNMChoiceObjectInterface::StaticClass, TEXT("UVNMChoiceObjectInterface"), &Z_Registration_Info_UClass_UVNMChoiceObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMChoiceObjectInterface), 1799983501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_914531151(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMChoiceObjectInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
