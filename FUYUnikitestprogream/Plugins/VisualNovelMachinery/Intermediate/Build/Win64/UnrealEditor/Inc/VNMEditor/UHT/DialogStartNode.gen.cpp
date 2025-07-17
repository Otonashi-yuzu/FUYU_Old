// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Nodes/Dialog/DialogStartNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogStartNode() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogStartNode();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogStartNode_NoRegister();
// End Cross Module References

// Begin Class UDialogStartNode Function DialogEntryPoint_NotCalled
struct Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics
{
	struct DialogStartNode_eventDialogEntryPoint_NotCalled_Parms
	{
		FName NodeToLoadTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogStartNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeToLoadTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::NewProp_NodeToLoadTo = { "NodeToLoadTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogStartNode_eventDialogEntryPoint_NotCalled_Parms, NodeToLoadTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::NewProp_NodeToLoadTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogStartNode, nullptr, "DialogEntryPoint_NotCalled", nullptr, nullptr, Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::DialogStartNode_eventDialogEntryPoint_NotCalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::DialogStartNode_eventDialogEntryPoint_NotCalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogStartNode::execDialogEntryPoint_NotCalled)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeToLoadTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogEntryPoint_NotCalled(Z_Param_NodeToLoadTo);
	P_NATIVE_END;
}
// End Class UDialogStartNode Function DialogEntryPoint_NotCalled

// Begin Class UDialogStartNode
void UDialogStartNode::StaticRegisterNativesUDialogStartNode()
{
	UClass* Class = UDialogStartNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogEntryPoint_NotCalled", &UDialogStartNode::execDialogEntryPoint_NotCalled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogStartNode);
UClass* Z_Construct_UClass_UDialogStartNode_NoRegister()
{
	return UDialogStartNode::StaticClass();
}
struct Z_Construct_UClass_UDialogStartNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/Dialog/DialogStartNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Dialog/DialogStartNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogStartNode_DialogEntryPoint_NotCalled, "DialogEntryPoint_NotCalled" }, // 832304488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogStartNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogStartNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogStartNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogStartNode_Statics::ClassParams = {
	&UDialogStartNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogStartNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogStartNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogStartNode()
{
	if (!Z_Registration_Info_UClass_UDialogStartNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogStartNode.OuterSingleton, Z_Construct_UClass_UDialogStartNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogStartNode.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogStartNode>()
{
	return UDialogStartNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogStartNode);
UDialogStartNode::~UDialogStartNode() {}
// End Class UDialogStartNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogStartNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogStartNode, UDialogStartNode::StaticClass, TEXT("UDialogStartNode"), &Z_Registration_Info_UClass_UDialogStartNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogStartNode), 1747860957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogStartNode_h_2953729974(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogStartNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Nodes_Dialog_DialogStartNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
