// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "AdvancedImageLayer.h"
#include "SAdvancedLayeredImage.h"
#include "Components/Image.h"
#include "AdvancedLayeredImage.generated.h"


/**
 * 
 */
UCLASS()
class ADVANCEDLAYEREDIMAGE_API UAdvancedLayeredImage : public UImage
{
	GENERATED_BODY()
public:

	// Initializes the Image Layers Array with a certain Size and sets all layers to be provided values
	UFUNCTION(BlueprintCallable, Category=Appearance)
	void InitializeImageLayers(const int32 Size, const FSlateBrush& InBrush, const FSlateColor& InColorAndOpacity);

	// Override the current Image Layers Array
	UFUNCTION(BlueprintCallable, Category=Appearance)
	void SetImageLayers(const TArray<FAdvancedImageLayer>& InImageLayers);

	// Add an Image Layer
	UFUNCTION(BlueprintCallable, Category=Appearance)
	void AddImageLayer(const FSlateBrush& InBrush, const FSlateColor& InColorAndOpacity);

	// Add an Image Layer using a struct
	UFUNCTION(BlueprintCallable, Category=Appearance)
	void AddImageLayerWithStruct(const FAdvancedImageLayer& InImageLayer);

	// Override an Image Layer at the given Index
	UFUNCTION(BlueprintCallable, Category=Appearance)
	bool OverrideImageLayerAtIndex(const FAdvancedImageLayer& InImageLayer, const int32 InIndex);

	// Override an Image Layer Brush at the given Index
	UFUNCTION(BlueprintCallable, Category=Appearance)
	bool OverrideImageLayerBrushAtIndex(const FSlateBrush& InBrush, const int32 InIndex);
	
	// Override an Image Layer Color at the given Index
	UFUNCTION(BlueprintCallable, Category=Appearance)
	bool OverrideImageLayerColorAndOpacityAtIndex(const FSlateColor& InColorAndOpacity, const int32 InIndex);

	/**  */
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromAssetAtIndex(USlateBrushAsset* Asset, const int32 InIndex);

	/**
	* Overrides the Brush to the specified Texture.
	*
	*   @param Texture Texture to use to override on Brush.
	*	@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
	*/
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromTextureAtIndex(UTexture2D* Texture, const int32 InIndex, bool bMatchSize = false);

	/**
	* Overrides the Brush to the specified Atlas Region.
	*
	*   @param AtlasRegion Region of the Atlas to use to override on Brush.
	*	@param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size.
	*/
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromAtlasInterfaceAtIndex(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, const int32 InIndex, bool bMatchSize = false);

	/**
	* Overrides the Brush to the specified Dynamic Texture.
	*
	*   @param Texture Dynamic Texture to use to override on Brush.
	*	@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
	virtual void OverrideImageLayerBrushFromTextureDynamicAtIndex(UTexture2DDynamic* Texture, const int32 InIndex, bool bMatchSize = false);

	/**  */
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromMaterialAtIndex(UMaterialInterface* Material, const int32 InIndex);

	/**
	* Overrides the Brush to the specified Soft Texture.
	*
	*   @param SoftTexture Soft Texture to use to override on Brush.
	*	@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
	*/
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromSoftTextureAtIndex(TSoftObjectPtr<UTexture2D> SoftTexture, const int32 InIndex, bool bMatchSize = false);

	/**  */
	UFUNCTION(BlueprintCallable, Category="Appearance")
	virtual void OverrideImageLayerBrushFromSoftMaterialAtIndex(TSoftObjectPtr<UMaterialInterface> SoftMaterial, const int32 InIndex);

	/**  */
	UFUNCTION(BlueprintCallable, Category="Appearance")
	UMaterialInstanceDynamic* GetImageLayerDynamicMaterialAtIndex(const int32 InIndex);

	// Remove an Image Layer at Index
	UFUNCTION(BlueprintCallable, Category=Layers)
	void RemoveImageLayerAtIndex(const int32 InImageLayerIndex);

	// Is a valid layer index
	UFUNCTION(BlueprintPure, Category=Layers)
	bool IsValidLayerIndex(const int32 InImageLayerIndex);
	
	// UWidget interface
	virtual void SynchronizeProperties() override;
	// End of UWidget interface

	// UVisual interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	// End of UVisual interface
	
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnImageStreamingCompleteDelegate);

	UPROPERTY(BlueprintAssignable)
	FOnImageStreamingCompleteDelegate OnImageStreamingCompleteDelegate;

protected:
	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	// End of UWidget interface

	// UImage interface
	virtual void OnImageStreamingComplete(TSoftObjectPtr<> LoadedSoftObject) override;
	// End of UImage Interface

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Layers)
	TArray<FAdvancedImageLayer> ImageLayers;
	
	TSharedPtr<SAdvancedLayeredImage> MyAdvancedLayeredImage;
};
