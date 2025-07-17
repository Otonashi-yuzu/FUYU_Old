// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMScriptEditor/Public/Parser/VNMScriptParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMScriptParser() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VNMScriptEditor();
VNMSCRIPTEDITOR_API UClass* Z_Construct_UClass_UVNMScriptParser();
VNMSCRIPTEDITOR_API UClass* Z_Construct_UClass_UVNMScriptParser_NoRegister();
VNMSCRIPTEDITOR_API UEnum* Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment();
// End Cross Module References

// Begin Enum EGraphAlignment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphAlignment;
static UEnum* EGraphAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGraphAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGraphAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment, (UObject*)Z_Construct_UPackage__Script_VNMScriptEditor(), TEXT("EGraphAlignment"));
	}
	return Z_Registration_Info_UEnum_EGraphAlignment.OuterSingleton;
}
template<> VNMSCRIPTEDITOR_API UEnum* StaticEnum<EGraphAlignment>()
{
	return EGraphAlignment_StaticEnum();
}
struct Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "EGraphAlignment::Bottom" },
		{ "Center.Name", "EGraphAlignment::Center" },
		{ "ModuleRelativePath", "Public/Parser/VNMScriptParser.h" },
		{ "Top.Name", "EGraphAlignment::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGraphAlignment::Top", (int64)EGraphAlignment::Top },
		{ "EGraphAlignment::Center", (int64)EGraphAlignment::Center },
		{ "EGraphAlignment::Bottom", (int64)EGraphAlignment::Bottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNMScriptEditor,
	nullptr,
	"EGraphAlignment",
	"EGraphAlignment",
	Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment()
{
	if (!Z_Registration_Info_UEnum_EGraphAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphAlignment.InnerSingleton, Z_Construct_UEnum_VNMScriptEditor_EGraphAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGraphAlignment.InnerSingleton;
}
// End Enum EGraphAlignment

// Begin Class UVNMScriptParser
void UVNMScriptParser::StaticRegisterNativesUVNMScriptParser()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMScriptParser);
UClass* Z_Construct_UClass_UVNMScriptParser_NoRegister()
{
	return UVNMScriptParser::StaticClass();
}
struct Z_Construct_UClass_UVNMScriptParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Parser/VNMScriptParser.h" },
		{ "ModuleRelativePath", "Public/Parser/VNMScriptParser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMScriptParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVNMScriptParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMScriptEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMScriptParser_Statics::ClassParams = {
	&UVNMScriptParser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptParser_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMScriptParser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMScriptParser()
{
	if (!Z_Registration_Info_UClass_UVNMScriptParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMScriptParser.OuterSingleton, Z_Construct_UClass_UVNMScriptParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMScriptParser.OuterSingleton;
}
template<> VNMSCRIPTEDITOR_API UClass* StaticClass<UVNMScriptParser>()
{
	return UVNMScriptParser::StaticClass();
}
UVNMScriptParser::UVNMScriptParser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMScriptParser);
UVNMScriptParser::~UVNMScriptParser() {}
// End Class UVNMScriptParser

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGraphAlignment_StaticEnum, TEXT("EGraphAlignment"), &Z_Registration_Info_UEnum_EGraphAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4101248369U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMScriptParser, UVNMScriptParser::StaticClass, TEXT("UVNMScriptParser"), &Z_Registration_Info_UClass_UVNMScriptParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMScriptParser), 350553727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_3597154465(TEXT("/Script/VNMScriptEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_Parser_VNMScriptParser_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
