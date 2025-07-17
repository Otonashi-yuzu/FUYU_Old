// Copyright (c) 2022 Al_Fe

#include "SAdvancedLayeredImage.h"

#include "AdvancedLayeredImageModule.h"

void SAdvancedLayeredImage::Construct(const FArguments& InArgs)
{
	SImage::Construct(InArgs);
}

int32 SAdvancedLayeredImage::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	// this will draw Image[0]:
	SImage::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

	const bool bIsEnabled = ShouldBeEnabled(bParentEnabled);
	const ESlateDrawEffect DrawEffects = bIsEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;
	
	// draw rest of the images, we reuse the LayerId because images are assumed to note overlap:
	for (const ImageLayer& Layer : Layers)
	{
		const FSlateBrush* LayerImageResolved = Layer.Key.Get();
		if (LayerImageResolved && LayerImageResolved->DrawAs != ESlateBrushDrawType::NoDrawType)
		{
			const FLinearColor FinalColorAndOpacity(InWidgetStyle.GetColorAndOpacityTint() * Layer.Value.Get().GetColor(InWidgetStyle) * LayerImageResolved->GetTint(InWidgetStyle));
			FSlateDrawElement::MakeBox(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(), LayerImageResolved, DrawEffects, FinalColorAndOpacity);
		}
	}

	return LayerId;
}

void SAdvancedLayeredImage::SetLayers(TArray<ImageLayer> ImageLayers)
{
	Layers = ImageLayers;
}

void SAdvancedLayeredImage::ClearLayers()
{
	Layers.Empty();
}

void SAdvancedLayeredImage::RemoveLayerAtIndex(const int32 Index)
{
	Layers.RemoveAt(Index);
}

void SAdvancedLayeredImage::AddLayer(TAttribute<const FSlateBrush*> Brush, TAttribute<FSlateColor> Color)
{
	Layers.Emplace(MoveTemp(Brush), MoveTemp(Color));
}

int32 SAdvancedLayeredImage::GetNumLayers() const
{
	return Layers.Num();
}

bool SAdvancedLayeredImage::IsValidIndex(int32 Index) const
{
	return Layers.IsValidIndex(Index);
}

const FSlateBrush* SAdvancedLayeredImage::GetLayerBrush(int32 Index) const
{
	if (Layers.IsValidIndex(Index))
	{
		return Layers[Index].Key.Get();
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::GetLayerBrush: There is no layer at index %d"), Index);
		return nullptr;
	}
}

void SAdvancedLayeredImage::SetLayerBrush(int32 Index, const TAttribute<const FSlateBrush*>& Brush)
{
	if (Layers.IsValidIndex(Index))
	{
		Layers[Index].Key = Brush;
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::SetLayerBrush: There is no layer at index %d"), Index);
	}
}

void SAdvancedLayeredImage::SetLayerBrush(int32 Index, TAttribute<const FSlateBrush*>&& Brush)
{
	if (Layers.IsValidIndex(Index))
	{
		Layers[Index].Key = MoveTemp(Brush);
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::SetLayerBrush: There is no layer at index %d"), Index);
	}
}

FSlateColor SAdvancedLayeredImage::GetLayerColor(int32 Index) const
{
	if (Layers.IsValidIndex(Index))
	{
		return Layers[Index].Value.Get();
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::GetLayerColor: There is no layer at index %d"), Index);
		return FSlateColor();
	}
}

void SAdvancedLayeredImage::SetLayerColor(int32 Index, const TAttribute<FSlateColor>& Color)
{
	if (Layers.IsValidIndex(Index))
	{
		Layers[Index].Value = Color;
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::SetLayerColor: There is no layer at index %d"), Index);
	}
}

void SAdvancedLayeredImage::SetLayerColor(int32 Index, TAttribute<FSlateColor>&& Color)
{
	if (Layers.IsValidIndex(Index))
	{
		Layers[Index].Value = MoveTemp(Color);
	}
	else
	{
		UE_LOG(LogAdvancedLayeredImage, Error, TEXT("SAdvancedLayeredImage::SetLayerColor: There is no layer at index %d"), Index);
	}
}
