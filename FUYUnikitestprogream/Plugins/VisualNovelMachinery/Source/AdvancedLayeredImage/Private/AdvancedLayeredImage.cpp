// Copyright (c) 2022 Al_Fe


#include "AdvancedLayeredImage.h"

#include "Engine/Texture2DDynamic.h"
#include "Slate/SlateBrushAsset.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture2D.h"

void UAdvancedLayeredImage::InitializeImageLayers(const int32 Size, const FSlateBrush& InBrush, const FSlateColor& InColorAndOpacity)
{
	FAdvancedImageLayer AdvancedImageLayer;
	AdvancedImageLayer.Brush = InBrush;
	AdvancedImageLayer.ColorAndOpacity = InColorAndOpacity;
	
	ImageLayers.Init(AdvancedImageLayer, Size);

	SetImageLayers(ImageLayers);
}

void UAdvancedLayeredImage::SetImageLayers(const TArray<FAdvancedImageLayer>& InImageLayers)
{
	ImageLayers = InImageLayers;

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->ClearLayers();

		for (const auto& ImageLayer: ImageLayers)
		{
			MyAdvancedLayeredImage->AddLayer(&ImageLayer.Brush, ImageLayer.ColorAndOpacity);
		}
	}
}

void UAdvancedLayeredImage::AddImageLayer(const FSlateBrush& InBrush, const FSlateColor& InColorAndOpacity)
{
	FAdvancedImageLayer ImageLayer;
	ImageLayer.Brush = InBrush;
	ImageLayer.ColorAndOpacity = InColorAndOpacity;
	const int32 NewIndex = ImageLayers.Emplace(ImageLayer);

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->AddLayer(&ImageLayers[NewIndex].Brush, ImageLayers[NewIndex].ColorAndOpacity);
	}
}

void UAdvancedLayeredImage::AddImageLayerWithStruct(const FAdvancedImageLayer& InImageLayer)
{
	const int32 NewIndex = ImageLayers.Emplace(InImageLayer);

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->AddLayer(&ImageLayers[NewIndex].Brush, ImageLayers[NewIndex].ColorAndOpacity);
	}
}

bool UAdvancedLayeredImage::OverrideImageLayerAtIndex(const FAdvancedImageLayer& InImageLayer, const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return false;
	}

	ImageLayers[InIndex] = InImageLayer;

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		MyAdvancedLayeredImage->SetLayerColor(InIndex, ImageLayers[InIndex].ColorAndOpacity);
	}

	return true;
}

bool UAdvancedLayeredImage::OverrideImageLayerBrushAtIndex(const FSlateBrush& InBrush, const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return false;
	}

	ImageLayers[InIndex].Brush = InBrush;

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
	}

	return true;
}

bool UAdvancedLayeredImage::OverrideImageLayerColorAndOpacityAtIndex(const FSlateColor& InColorAndOpacity, const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return false;
	}

	ImageLayers[InIndex].ColorAndOpacity = InColorAndOpacity;

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->SetLayerColor(InIndex, ImageLayers[InIndex].ColorAndOpacity);
	}

	return true;
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromAssetAtIndex(USlateBrushAsset* Asset, const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return;
	}
	
	if(!Asset || ImageLayers[InIndex].Brush != Asset->Brush)
	{
		CancelImageStreaming();
		ImageLayers[InIndex].Brush = Asset ? Asset->Brush : FSlateBrush();

		if (MyAdvancedLayeredImage.IsValid())
		{
			MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		}
	}
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromTextureAtIndex(UTexture2D* Texture, const int32 InIndex, bool bMatchSize)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return;
	}
	
	CancelImageStreaming();

	if(ImageLayers[InIndex].Brush.GetResourceObject() != Texture)
	{
		ImageLayers[InIndex].Brush.SetResourceObject(Texture);

		if (Texture) // Since this texture is used as UI, don't allow it affected by budget.
			{
			Texture->bForceMiplevelsToBeResident = true;
			Texture->bIgnoreStreamingMipBias = true;
			}

		if (bMatchSize)
		{
			if (Texture)
			{
				ImageLayers[InIndex].Brush.ImageSize.X = Texture->GetSizeX();
				ImageLayers[InIndex].Brush.ImageSize.Y = Texture->GetSizeY();
			}
			else
			{
				ImageLayers[InIndex].Brush.ImageSize = FVector2D(0, 0);
			}
		}
		
		if (MyAdvancedLayeredImage.IsValid())
		{
			MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		}
	}
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromAtlasInterfaceAtIndex(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, const int32 InIndex, bool bMatchSize)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return;
	}
	
	if(ImageLayers[InIndex].Brush.GetResourceObject() != AtlasRegion.GetObject())
	{
		CancelImageStreaming();
		ImageLayers[InIndex].Brush.SetResourceObject(AtlasRegion.GetObject());

		if (bMatchSize)
		{
			if (AtlasRegion)
			{
				FSlateAtlasData AtlasData = AtlasRegion->GetSlateAtlasData();
				ImageLayers[InIndex].Brush.ImageSize = AtlasData.GetSourceDimensions();
			}
			else
			{
				ImageLayers[InIndex].Brush.ImageSize = FVector2D(0, 0);
			}
		}
		
		if (MyAdvancedLayeredImage.IsValid())
		{
			MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		}
	}
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromTextureDynamicAtIndex(UTexture2DDynamic* Texture, const int32 InIndex, bool bMatchSize)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return;
	}
	
	if(ImageLayers[InIndex].Brush.GetResourceObject() != Texture)
	{
		CancelImageStreaming();
		ImageLayers[InIndex].Brush.SetResourceObject(Texture);

		if (bMatchSize && Texture)
		{
			ImageLayers[InIndex].Brush.ImageSize.X = Texture->SizeX;
			ImageLayers[InIndex].Brush.ImageSize.Y = Texture->SizeY;
		}
		
		if (MyAdvancedLayeredImage.IsValid())
		{
			MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		}
	}
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromMaterialAtIndex(UMaterialInterface* Material, const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return;
	}
	
	if(ImageLayers[InIndex].Brush.GetResourceObject() != Material)
	{
		CancelImageStreaming();
		ImageLayers[InIndex].Brush.SetResourceObject(Material);
		
		if (MyAdvancedLayeredImage.IsValid())
		{
			MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
		}
	}
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromSoftTextureAtIndex(TSoftObjectPtr<UTexture2D> SoftTexture, const int32 InIndex, bool bMatchSize)
{
	TWeakObjectPtr<UAdvancedLayeredImage> WeakThis(this); // using weak ptr in case 'this' has gone out of scope by the time this lambda is called

	RequestAsyncLoad(SoftTexture,
		[WeakThis, SoftTexture, InIndex, bMatchSize]() {
			if (UAdvancedLayeredImage* StrongThis = WeakThis.Get())
			{
				ensureMsgf(SoftTexture.Get(), TEXT("Failed to load %s"), *SoftTexture.ToSoftObjectPath().ToString());
				StrongThis->OverrideImageLayerBrushFromTextureAtIndex(SoftTexture.Get(), InIndex, bMatchSize);
			}
		}
	);
}

void UAdvancedLayeredImage::OverrideImageLayerBrushFromSoftMaterialAtIndex(TSoftObjectPtr<UMaterialInterface> SoftMaterial, const int32 InIndex)
{
	TWeakObjectPtr<UAdvancedLayeredImage> WeakThis(this); // using weak ptr in case 'this' has gone out of scope by the time this lambda is called

	RequestAsyncLoad(SoftMaterial,
		[WeakThis, SoftMaterial, InIndex]() {
			if (UAdvancedLayeredImage* StrongThis = WeakThis.Get())
			{
				ensureMsgf(SoftMaterial.Get(), TEXT("Failed to load %s"), *SoftMaterial.ToSoftObjectPath().ToString());
				StrongThis->OverrideImageLayerBrushFromMaterialAtIndex(SoftMaterial.Get(), InIndex);
			}
		}
	);
}

UMaterialInstanceDynamic* UAdvancedLayeredImage::GetImageLayerDynamicMaterialAtIndex(const int32 InIndex)
{
	if (!ImageLayers.IsValidIndex(InIndex))
	{
		return nullptr;
	}
	
	UMaterialInterface* Material = nullptr;

	UObject* Resource = Brush.GetResourceObject();
	Material = Cast<UMaterialInterface>(Resource);

	if ( Material )
	{
		UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(Material);

		if ( !DynamicMaterial )
		{
			DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
			ImageLayers[InIndex].Brush.SetResourceObject(DynamicMaterial);

			if (MyAdvancedLayeredImage.IsValid())
			{
				MyAdvancedLayeredImage->SetLayerBrush(InIndex, &ImageLayers[InIndex].Brush);
			}
		}
		
		return DynamicMaterial;
	}

	return nullptr;
}

void UAdvancedLayeredImage::RemoveImageLayerAtIndex(const int32 InImageLayerIndex)
{
	ImageLayers.RemoveAt(InImageLayerIndex);

	if (MyAdvancedLayeredImage.IsValid())
	{
		MyAdvancedLayeredImage->RemoveLayerAtIndex(InImageLayerIndex+1);
	}
}

bool UAdvancedLayeredImage::IsValidLayerIndex(const int32 InImageLayerIndex)
{
	return ImageLayers.IsValidIndex(InImageLayerIndex);
}

void UAdvancedLayeredImage::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	
	if (MyAdvancedLayeredImage.IsValid())
	{
		SetImageLayers(ImageLayers);
	}
	
}

void UAdvancedLayeredImage::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyAdvancedLayeredImage.Reset();
}
#if WITH_EDITOR
const FText UAdvancedLayeredImage::GetPaletteCategory()
{
	return Super::GetPaletteCategory();
}
#endif

TSharedRef<SWidget> UAdvancedLayeredImage::RebuildWidget()
{
	MyAdvancedLayeredImage =
		SNew(SAdvancedLayeredImage)
		.FlipForRightToLeftFlowDirection(bFlipForRightToLeftFlowDirection);

	MyImage = MyAdvancedLayeredImage;

	SetImageLayers(ImageLayers);
	
	return MyAdvancedLayeredImage.ToSharedRef();
}

void UAdvancedLayeredImage::OnImageStreamingComplete(TSoftObjectPtr<> LoadedSoftObject)
{
	Super::OnImageStreamingComplete(LoadedSoftObject);

	OnImageStreamingCompleteDelegate.Broadcast();
}
