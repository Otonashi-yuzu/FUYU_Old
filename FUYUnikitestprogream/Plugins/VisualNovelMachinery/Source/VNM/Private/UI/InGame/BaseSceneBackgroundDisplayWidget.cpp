// Copyright (c) 2022 Al_Fe


#include "BaseSceneBackgroundDisplayWidget.h"

#include "AdvancedImageLayer.h"
#include "VNMSettings.h"
#include "Blueprint/WidgetTree.h"
#include "Materials/MaterialInstanceDynamic.h"

void UBaseSceneBackgroundDisplayWidget::NativeOnInitialized()
{
    const auto Settings = UVNMSettings::GetVNMSettings()->Settings;
    Super::NativeOnInitialized();
}

void UBaseSceneBackgroundDisplayWidget::SetSceneBackgroundById(const FName& InSceneBackgroundId, const bool bSetForTransition)
{    
    SceneBackgroundId = InSceneBackgroundId;
    
    SceneBackgroundDefinition = UVNMSettings::GetVNMSettings()->GetSceneBackgroundDefinitionById(SceneBackgroundId);

    if (!SceneBackgroundDefinition.IsValid())
    {
        return;
    }

    SceneBackgroundImageForTransition->Brush.SetImageSize(SceneBackgroundDefinition.DialogImage.ImageSize);
    SceneBackgroundImageForTransition->Brush.SetResourceObject(SceneBackgroundDefinition.DialogImage.Image.LoadSynchronous());
    SceneBackgroundImageForTransition->SetBrushTintColor(SceneBackgroundDefinition.DialogImage.ColorAndOpacity);
    SceneBackgroundImageForTransition->SetRenderOpacity(0.f);
    if (!bSetForTransition)
    {
        SceneBackgroundImage->Brush.SetImageSize(SceneBackgroundDefinition.DialogImage.ImageSize);
        SceneBackgroundImage->Brush.SetResourceObject(SceneBackgroundDefinition.DialogImage.Image.LoadSynchronous());
        SceneBackgroundImage->SetBrushTintColor(SceneBackgroundDefinition.DialogImage.ColorAndOpacity);
    }

    SceneBackgroundLayers.Empty();

    SceneBackgroundImage->InitializeImageLayers(SceneBackgroundDefinition.DialogImageLayers.Num(), FSlateBrush(), FLinearColor::Transparent);
}

void UBaseSceneBackgroundDisplayWidget::SetSceneBackgroundLayerById(const FName& InLayerId, const FName& InImageId)
{
    if (!SceneBackgroundDefinition.DialogImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = SceneBackgroundDefinition.DialogImageLayers[InLayerId];

    if (!ImageLayer.LayerImagePerId.Contains(InImageId))
    {
        return;
    }

    if (!SceneBackgroundImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }

    if (!SceneBackgroundLayers.Contains(InLayerId))
    {        
        SceneBackgroundLayers.Add(InLayerId, InImageId);
    }
    else
    {
        SceneBackgroundLayers[InLayerId] = InImageId;
    }

    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.Brush.SetImageSize(ImageLayer.LayerImagePerId[InImageId].ImageSize);
    AdvancedImageLayer.Brush.SetResourceObject(ImageLayer.LayerImagePerId[InImageId].Image.LoadSynchronous());
    AdvancedImageLayer.ColorAndOpacity = ImageLayer.LayerImagePerId[InImageId].ColorAndOpacity;

    SceneBackgroundImage->OverrideImageLayerAtIndex(AdvancedImageLayer, ImageLayer.LayerIndex);
}

void UBaseSceneBackgroundDisplayWidget::RemoveSceneBackgroundLayerById(const FName& InLayerId)
{
    if (!SceneBackgroundDefinition.DialogImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = SceneBackgroundDefinition.DialogImageLayers[InLayerId];
    
    if (!SceneBackgroundImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }
    
    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.ColorAndOpacity = FLinearColor::White;
    SceneBackgroundImage->OverrideImageLayerColorAndOpacityAtIndex(FLinearColor::Transparent, ImageLayer.LayerIndex);
    SceneBackgroundLayers.Remove(InLayerId);
}

void UBaseSceneBackgroundDisplayWidget::OnTransitionAnimationFinished()
{
    SceneBackgroundImage->Brush.SetImageSize(SceneBackgroundDefinition.DialogImage.ImageSize);
    SceneBackgroundImage->Brush.SetResourceObject(SceneBackgroundDefinition.DialogImage.Image.LoadSynchronous());
    SceneBackgroundImage->SetBrushTintColor(SceneBackgroundDefinition.DialogImage.ColorAndOpacity);
    
    Super::OnTransitionAnimationFinished();    
}

void UBaseSceneBackgroundDisplayWidget::OnMidTransitionPointReached()
{
    if (ActiveTransitionEvent != ETransitionEvent::Dissolve)
    {
        SceneBackgroundImage->Brush.SetImageSize(SceneBackgroundDefinition.DialogImage.ImageSize);
        SceneBackgroundImage->Brush.SetResourceObject(SceneBackgroundDefinition.DialogImage.Image.LoadSynchronous());
        SceneBackgroundImage->SetBrushTintColor(SceneBackgroundDefinition.DialogImage.ColorAndOpacity);
    }
}
