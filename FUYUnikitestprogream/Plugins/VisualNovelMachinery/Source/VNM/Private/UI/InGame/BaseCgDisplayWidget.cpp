// Copyright (c) 2022 Al_Fe


#include "BaseCgDisplayWidget.h"

#include "VNMSettings.h"
#include "Blueprint/WidgetTree.h"
#include "Materials/MaterialInstanceDynamic.h"

void UBaseCgDisplayWidget::NativeOnInitialized()
{
    const auto Settings = UVNMSettings::GetVNMSettings()->Settings;
    Super::NativeOnInitialized();
}

void UBaseCgDisplayWidget::SetCgById(const FName& InCgId, const bool bSetForTransition)
{
    CgId = InCgId;
    
    CgDefinition = UVNMSettings::GetVNMSettings()->GetCgDefinitionById(CgId);

    if (!CgDefinition.IsValid())
    {
        return;
    }

    CgImageForTransition->SetDesiredSizeOverride(CgDefinition.DialogImage.ImageSize);
    CgImageForTransition->Brush.SetResourceObject(CgDefinition.DialogImage.Image.LoadSynchronous());
    CgImageForTransition->SetBrushTintColor(CgDefinition.DialogImage.ColorAndOpacity);
    CgImageForTransition->SetRenderOpacity(0.f);
    if (!bSetForTransition)
    {
        CgImage->Brush.SetImageSize(CgDefinition.DialogImage.ImageSize);
        CgImage->Brush.SetResourceObject(CgDefinition.DialogImage.Image.LoadSynchronous());
        CgImage->SetBrushTintColor(CgDefinition.DialogImage.ColorAndOpacity);
    }

    CgLayers.Empty();

    CgImage->InitializeImageLayers(CgDefinition.DialogImageLayers.Num(), FSlateBrush(), FLinearColor::Transparent);
}

void UBaseCgDisplayWidget::SetCgLayerById(const FName& InLayerId, const FName& InImageId)
{
    if (!CgDefinition.DialogImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = CgDefinition.DialogImageLayers[InLayerId];

    if (!ImageLayer.LayerImagePerId.Contains(InImageId))
    {
        return;
    }

    if (!CgImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }

    if (!CgLayers.Contains(InLayerId))
    {        
        CgLayers.Add(InLayerId, InImageId);
    }
    else
    {
        CgLayers[InLayerId] = InImageId;
    }

    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.Brush.SetImageSize(ImageLayer.LayerImagePerId[InImageId].ImageSize);
    AdvancedImageLayer.Brush.SetResourceObject(ImageLayer.LayerImagePerId[InImageId].Image.LoadSynchronous());
    AdvancedImageLayer.ColorAndOpacity = ImageLayer.LayerImagePerId[InImageId].ColorAndOpacity;

    CgImage->OverrideImageLayerAtIndex(AdvancedImageLayer, ImageLayer.LayerIndex);
}

void UBaseCgDisplayWidget::RemoveCgLayerById(const FName& InLayerId)
{
    if (!CgDefinition.DialogImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = CgDefinition.DialogImageLayers[InLayerId];
    
    if (!CgImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }
    
    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.ColorAndOpacity = FLinearColor::White;
    CgImage->OverrideImageLayerColorAndOpacityAtIndex(FLinearColor::Transparent, ImageLayer.LayerIndex);
    CgLayers.Remove(InLayerId);
}

void UBaseCgDisplayWidget::OnTransitionAnimationFinished()
{
    CgImage->Brush.SetImageSize(CgDefinition.DialogImage.ImageSize);
    CgImage->Brush.SetResourceObject(CgDefinition.DialogImage.Image.LoadSynchronous());
    CgImage->SetBrushTintColor(CgDefinition.DialogImage.ColorAndOpacity);
    
    Super::OnTransitionAnimationFinished();    
}

void UBaseCgDisplayWidget::OnMidTransitionPointReached()
{
    if (ActiveTransitionEvent != ETransitionEvent::Dissolve)
    {
        CgImage->Brush.SetImageSize(CgDefinition.DialogImage.ImageSize);
        CgImage->Brush.SetResourceObject(CgDefinition.DialogImage.Image.LoadSynchronous());
        CgImage->SetBrushTintColor(CgDefinition.DialogImage.ColorAndOpacity);
    }
}
