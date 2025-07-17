// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VNMEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VNMEDITOR_VNMEditorSettings_generated_h
#error "VNMEditorSettings.generated.h already included, missing '#pragma once' in VNMEditorSettings.h"
#endif
#define VNMEDITOR_VNMEditorSettings_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVNMEditorSettings(); \
	friend struct Z_Construct_UClass_UVNMEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UVNMEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VNMEditor"), NO_API) \
	DECLARE_SERIALIZER(UVNMEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVNMEditorSettings(UVNMEditorSettings&&); \
	UVNMEditorSettings(const UVNMEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVNMEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVNMEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVNMEditorSettings) \
	NO_API virtual ~UVNMEditorSettings();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VNMEDITOR_API UClass* StaticClass<class UVNMEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h


#define FOREACH_ENUM_EDIALOGTEXTNODEFIELDSTYLETYPE(op) \
	op(EDialogTextNodeFieldStyleType::MULTILINE_TEXT) \
	op(EDialogTextNodeFieldStyleType::SINGLE_LINE_TEXT) 

enum class EDialogTextNodeFieldStyleType : uint8;
template<> struct TIsUEnumClass<EDialogTextNodeFieldStyleType> { enum { Value = true }; };
template<> VNMEDITOR_API UEnum* StaticEnum<EDialogTextNodeFieldStyleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
