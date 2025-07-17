// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "AdvancedImageLayer.h"
#include "Widgets/Images/SImage.h"

/** A slate widget to draw an arbitrary number of images over top of each other */
class ADVANCEDLAYEREDIMAGE_API SAdvancedLayeredImage : public SImage
{
public:
	typedef TTuple<TAttribute<const FSlateBrush*>, TAttribute<FSlateColor> > ImageLayer;

	/** Constructor that constructs the base image */
	void Construct(const FArguments& InArgs);

	//~ Begin SWidget Interface
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	//~ End SWidget Interface

	void SetLayers(TArray<ImageLayer> ImageLayers);

	void ClearLayers();

	/** Adds a new layer to the top of the Image given a brush and color */
	void AddLayer(TAttribute<const FSlateBrush*> Brush, TAttribute<FSlateColor> Color = FLinearColor::White);

	/** Remove a layer at index */
	void RemoveLayerAtIndex(const int32 Index);

	/** Returns the total number of layers, including the base image. */
	int32 GetNumLayers() const;

	/** Determines whether a Layer exists at the given index */
	bool IsValidIndex(int32 Index) const;

	/**
	 * Gets the brush for a given layer
	 * 
	 * @return Null if the layer index is invalid. Otherwise, the brush for the given layer
	 */
	const FSlateBrush* GetLayerBrush(int32 Index) const;

	/** Sets the brush for a given layer, if it exists */
	void SetLayerBrush(int32 Index, const TAttribute<const FSlateBrush*>& Brush);

	/** Sets the brush for a given layer, if it exists */
	void SetLayerBrush(int32 Index, TAttribute<const FSlateBrush*>&& Brush);

	/** 
	 * Gets the Color for a given layer
	 *
	 * @return Uninitialized fuschia color if the layer index is invalid. Otherwise the color for the given layer
	 */
	FSlateColor GetLayerColor(int32 Index) const;

	/** Sets the color for a given layer, if it exists. */
	void SetLayerColor(int32 Index, const TAttribute<FSlateColor>& Color);

	/** Sets the color for a given layer, if it exists. */
	void SetLayerColor(int32 Index, TAttribute<FSlateColor>&& Color);

private:
	
	/** An array to hold the additional draw layers */
	TArray<ImageLayer> Layers;
};
