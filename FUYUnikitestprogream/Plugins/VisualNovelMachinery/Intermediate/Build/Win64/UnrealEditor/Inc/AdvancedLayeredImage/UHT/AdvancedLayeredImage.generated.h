// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedLayeredImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ISlateTextureAtlasInterface;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USlateBrushAsset;
class UTexture2D;
class UTexture2DDynamic;
struct FAdvancedImageLayer;
struct FSlateBrush;
struct FSlateColor;
#ifdef ADVANCEDLAYEREDIMAGE_AdvancedLayeredImage_generated_h
#error "AdvancedLayeredImage.generated.h already included, missing '#pragma once' in AdvancedLayeredImage.h"
#endif
#define ADVANCEDLAYEREDIMAGE_AdvancedLayeredImage_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_121_DELEGATE \
static void FOnImageStreamingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnImageStreamingCompleteDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValidLayerIndex); \
	DECLARE_FUNCTION(execRemoveImageLayerAtIndex); \
	DECLARE_FUNCTION(execGetImageLayerDynamicMaterialAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromSoftMaterialAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromSoftTextureAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromMaterialAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromTextureDynamicAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromAtlasInterfaceAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromTextureAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushFromAssetAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerColorAndOpacityAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerBrushAtIndex); \
	DECLARE_FUNCTION(execOverrideImageLayerAtIndex); \
	DECLARE_FUNCTION(execAddImageLayerWithStruct); \
	DECLARE_FUNCTION(execAddImageLayer); \
	DECLARE_FUNCTION(execSetImageLayers); \
	DECLARE_FUNCTION(execInitializeImageLayers);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedLayeredImage(); \
	friend struct Z_Construct_UClass_UAdvancedLayeredImage_Statics; \
public: \
	DECLARE_CLASS(UAdvancedLayeredImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedLayeredImage"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedLayeredImage)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedLayeredImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAdvancedLayeredImage(UAdvancedLayeredImage&&); \
	UAdvancedLayeredImage(const UAdvancedLayeredImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedLayeredImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedLayeredImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedLayeredImage) \
	NO_API virtual ~UAdvancedLayeredImage();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDLAYEREDIMAGE_API UClass* StaticClass<class UAdvancedLayeredImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_AdvancedLayeredImage_Public_AdvancedLayeredImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
