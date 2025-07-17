// Copyright (c) 2022 Al_Fe


#include "BaseCharacterDisplayWidget.h"


#include "LatentActions.h"
#include "VNMModule.h"
#include "VNMSettings.h"
#include "Blueprint/GameViewportSubsystem.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanelSlot.h"
#include "Materials/MaterialInstanceDynamic.h"

namespace
{
    bool AreCharacterLayersSame(const TArray<FImageLayerInfo>& NewLayers, TMap<FName, FName> CharacterLayers)
    {
        for (const auto& NewLayer : NewLayers)
        {
            if (!CharacterLayers.Contains(NewLayer.LayerId))
            {
                return false;
            }

            if (CharacterLayers[NewLayer.LayerId] != NewLayer.ImageId)
            {
                return false;
            }
        }

        return true;
    }
}

class FMoveCharacterAction : public FPendingLatentAction
{
public:
    FMoveCharacterAction(UBaseCharacterDisplayWidget* InCharacterDisplayWidget, const FVector2D& InStartPosition, const FVector2D& InTargetPosition)
        : CharacterDisplayWidget(InCharacterDisplayWidget)
        , StartPosition(InStartPosition)
        , TargetPosition(InTargetPosition)
    {
        
    }

    virtual void UpdateOperation(FLatentResponse& Response) override
    {
        Alpha = FMath::Min(1.0f, Alpha+Response.ElapsedTime());
        CharacterDisplayWidget->TickCharacterMove(Alpha, StartPosition, TargetPosition);
        Response.DoneIf(Alpha >= 1.f);

        
    }

protected:
    UBaseCharacterDisplayWidget* CharacterDisplayWidget;
    FVector2D StartPosition;
    FVector2D TargetPosition;
    float Alpha = 0.f;
};

void UBaseCharacterDisplayWidget::NativeOnInitialized()
{
    const auto Settings = UVNMSettings::GetVNMSettings()->Settings;
    
    Super::NativeOnInitialized();
}

void UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionId(const FName& InCharacterId, const FName& InEmotionId)
{
    if (CharacterId == InCharacterId && EmotionId == InEmotionId)
    {
        return;
    }
    
    CharacterId = InCharacterId;
    EmotionId = InEmotionId;

    CharacterDefinition = UVNMSettings::GetVNMSettings()->GetCharacterDefinitionById(CharacterId);

    if (!CharacterDefinition.IsValid())
    {
        UE_LOG(LogVNM, Error, TEXT("UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionId: Character Definition for Character Id not found!"));
        return;
    }
    FImageDefinition CharacterTexture;
    if (!CharacterDefinition.CharacterImagePerEmotion.Contains(EmotionId))
    {
        UE_LOG(LogVNM, Error, TEXT("UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionId: Texture for Emotion Id not found!"));
    }
    else
    {
        CharacterTexture = CharacterDefinition.CharacterImagePerEmotion[EmotionId];
    }

    CharacterImage->Brush.SetImageSize(CharacterTexture.ImageSize);
    CharacterImage->Brush.SetResourceObject(CharacterTexture.Image.LoadSynchronous());
    CharacterImage->SetBrushTintColor(CharacterTexture.ColorAndOpacity);

    CharacterLayers.Empty();

    CharacterImage->InitializeImageLayers(CharacterDefinition.CharacterImageLayers.Num(), FSlateBrush(), FLinearColor::Transparent);
}

void UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionIdAndLayers(const FName& InCharacterId, const FName& InEmotionId, const TArray<FImageLayerInfo>& Layers)
{
    if (CharacterId == InCharacterId && EmotionId == InEmotionId && AreCharacterLayersSame(Layers, CharacterLayers))
    {
        return;
    }
    
    CharacterId = InCharacterId;
    EmotionId = InEmotionId;

    CharacterDefinition = UVNMSettings::GetVNMSettings()->GetCharacterDefinitionById(CharacterId);

    if (!CharacterDefinition.IsValid())
    {
        UE_LOG(LogVNM, Error, TEXT("UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionIdAndLayers: Character Definition for Character Id not found!"));
        return;
    }
    
    FImageDefinition CharacterTexture;
    if (!CharacterDefinition.CharacterImagePerEmotion.Contains(EmotionId))
    {
        UE_LOG(LogVNM, Error, TEXT("UBaseCharacterDisplayWidget::SetCharacterImageByCharacterIdAndEmotionIdAndLayers: Texture for Emotion Id not found!"));
    }
    else
    {
        CharacterTexture = CharacterDefinition.CharacterImagePerEmotion[EmotionId];
    }

    CharacterImage->Brush.SetImageSize(CharacterTexture.ImageSize);
    CharacterImage->Brush.SetResourceObject(CharacterTexture.Image.LoadSynchronous());
    CharacterImage->SetBrushTintColor(CharacterTexture.ColorAndOpacity);

    CharacterLayers.Empty();

    CharacterImage->InitializeImageLayers(CharacterDefinition.CharacterImageLayers.Num(), FSlateBrush(), FLinearColor::Transparent);

    for (const auto& Layer : Layers)
    {
        SetCharacterLayerById(Layer.LayerId, Layer.ImageId);
    }
}

void UBaseCharacterDisplayWidget::SetCharacterLayerById(const FName& InLayerId, const FName& InImageId)
{
    if (!CharacterDefinition.CharacterImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = CharacterDefinition.CharacterImageLayers[InLayerId];

    if (!ImageLayer.LayerImagePerId.Contains(InImageId))
    {
        return;
    }

    if (!CharacterImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }

    if (!CharacterLayers.Contains(InLayerId))
    {        
        CharacterLayers.Add(InLayerId, InImageId);
    }
    else
    {
        CharacterLayers[InLayerId] = InImageId;
    }

    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.Brush.SetImageSize(ImageLayer.LayerImagePerId[InImageId].ImageSize);
    AdvancedImageLayer.Brush.SetResourceObject(ImageLayer.LayerImagePerId[InImageId].Image.LoadSynchronous());
    AdvancedImageLayer.ColorAndOpacity = ImageLayer.LayerImagePerId[InImageId].ColorAndOpacity;

    CharacterImage->OverrideImageLayerAtIndex(AdvancedImageLayer, ImageLayer.LayerIndex);
}

void UBaseCharacterDisplayWidget::RemoveCharacterLayerById(const FName& InLayerId)
{
    if (!CharacterDefinition.CharacterImageLayers.Contains(InLayerId))
    {
        return;
    }

    const FImageLayerDefinition ImageLayer = CharacterDefinition.CharacterImageLayers[InLayerId];
    
    if (!CharacterImage->IsValidLayerIndex(ImageLayer.LayerIndex))
    {
        return;
    }
    
    FAdvancedImageLayer AdvancedImageLayer;
    AdvancedImageLayer.ColorAndOpacity = FLinearColor::White;
    CharacterImage->OverrideImageLayerColorAndOpacityAtIndex(FLinearColor::Transparent, ImageLayer.LayerIndex);
    CharacterLayers.Remove(InLayerId);
}

void UBaseCharacterDisplayWidget::SetCharacterPosition(ECharacterPositioning InCharacterPositioning, const bool bMoveWithAnimation, int32 UUID)
{
    if (InCharacterPositioning == ECharacterPositioning::INHERIT)
    {
        return;
    }
    
    CharacterPositioning = InCharacterPositioning;

    
    auto CharacterPositioningValues = UVNMSettings::GetVNMSettings()->Settings.CharacterPositionValues;
    if (CharacterPositioningValues.Contains(InCharacterPositioning))
    {
        auto* CharacterImageCanvasSlot = Cast<UCanvasPanelSlot>(CharacterImage->Slot);
        
        if (!CharacterImageCanvasSlot)
        {
            UE_LOG(LogVNM, Error, TEXT("Character image is not inside of a canvas panel!"));
            return;
        }
        
        if (bMoveWithAnimation)
        {
            InitialAnchorPosition = CharacterImageCanvasSlot->GetAnchors().Minimum.X;
            FLatentActionManager& LatentActionManager = GetWorld()->GetLatentActionManager();
            if (!LatentActionManager.FindExistingAction<FMoveCharacterAction>(this, UUID))
            {
                LatentActionManager.AddNewAction(this, UUID, new FMoveCharacterAction(this,  CharacterImageCanvasSlot->GetAnchors().Minimum, FVector2D(CharacterPositioningValues[InCharacterPositioning], 1.0)));
            }
            return;
        }

        if (CharacterPositioning != ECharacterPositioning::TRUE_CENTER)
        {
            CharacterImageCanvasSlot->SetAnchors(FAnchors(CharacterPositioningValues[InCharacterPositioning], 1.f));
            CharacterImageCanvasSlot->SetAlignment(FVector2D(0.5f, 1.f));
            CharacterImageCanvasSlot->SetOffsets(FMargin(0.f));
        }
        else
        {
            CharacterImageCanvasSlot->SetAnchors(FAnchors(0.5f));
            CharacterImageCanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
            CharacterImageCanvasSlot->SetOffsets(FMargin(0.f));
        }
    }

}

void UBaseCharacterDisplayWidget::SetCustomCharacterPosition(const FName& InCharacterPositionName,
    const bool bMoveWithAnimation, int32 UUID)
{
    if (InCharacterPositionName.IsNone())
    {
        return;
    }
    
    CharacterPositioning = ECharacterPositioning::CUSTOM;
    CustomCharacterPosition = InCharacterPositionName;
    
    auto CharacterPositioningValues = UVNMSettings::GetVNMSettings()->Settings.CustomCharacterPositionValues;
    if (CharacterPositioningValues.Contains(InCharacterPositionName))
    {
        auto* CharacterImageCanvasSlot = Cast<UCanvasPanelSlot>(CharacterImage->Slot);
        
        if (!CharacterImageCanvasSlot)
        {
            UE_LOG(LogVNM, Error, TEXT("Character image is not inside of a canvas panel!"));
            return;
        }

        const FVector2D& PositionValues = CharacterPositioningValues[InCharacterPositionName];
        if (bMoveWithAnimation)
        {
            InitialAnchorPosition = CharacterImageCanvasSlot->GetAnchors().Minimum.X;
            FLatentActionManager& LatentActionManager = GetWorld()->GetLatentActionManager();
            if (!LatentActionManager.FindExistingAction<FMoveCharacterAction>(this, UUID))
            {
                LatentActionManager.AddNewAction(this, UUID, new FMoveCharacterAction(this, CharacterImageCanvasSlot->GetAnchors().Minimum, PositionValues));
            }
            return;
        }
        
        CharacterImageCanvasSlot->SetAnchors(FAnchors(PositionValues.X, PositionValues.Y));
        CharacterImageCanvasSlot->SetAlignment(FVector2D(0.5f, 1.f));
        CharacterImageCanvasSlot->SetOffsets(FMargin(0.f));
    }
}

void UBaseCharacterDisplayWidget::SetCharacterFlipState(const ECharacterFlipState InCharacterFlipState)
{
    if (InCharacterFlipState == ECharacterFlipState::INHERIT)
    {
        return;
    }

    CharacterFlipState = InCharacterFlipState;
    
    switch (CharacterFlipState)
    {
    case ECharacterFlipState::VERTICAL:
        {
            CharacterImage->SetRenderScale(FVector2D(1.0, -1.0));
        }
        break;
    case ECharacterFlipState::HORIZONTAL:
        {
            CharacterImage->SetRenderScale(FVector2D(-1.0, 1.0));
        }
        break;
    case ECharacterFlipState::BOTH:
        {
            CharacterImage->SetRenderScale(FVector2D(-1.0, -1.0));
        }
        break;
    default:
        break;
    }
    
}

void UBaseCharacterDisplayWidget::HideCharacter()
{
    CharacterImage->SetVisibility(ESlateVisibility::Collapsed);
}

void UBaseCharacterDisplayWidget::ShowCharacter()
{
    CharacterImage->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

int32 UBaseCharacterDisplayWidget::GetZOrderIndex() const
{
    if (UGameViewportSubsystem* Subsystem = UGameViewportSubsystem::Get(GetWorld()))
    {
        auto WidgetSlot = Subsystem->GetWidgetSlot(this);

        return WidgetSlot.ZOrder < 10 ? 0 : WidgetSlot.ZOrder - 10;
    }

    return 0;
}

void UBaseCharacterDisplayWidget::TickCharacterMove(const float Alpha, const FVector2D& StartPosition, const FVector2D& TargetPosition)
{
    auto* CharacterImageCanvasSlot = Cast<UCanvasPanelSlot>(CharacterImage->Slot);
    FVector2D NewPosition = FMath::Lerp(StartPosition, TargetPosition, Alpha);
    CharacterImageCanvasSlot->SetAnchors(FAnchors(NewPosition.X, NewPosition.Y));
    CharacterImageCanvasSlot->SetAlignment(FVector2D(0.5f, 1.f));
    CharacterImageCanvasSlot->SetOffsets(FMargin(0.f));

    if (Alpha >= 1.f)
    {
        CharacterImageCanvasSlot->SetAnchors(FAnchors(TargetPosition.X, TargetPosition.Y));
        OnTransitionComplete.Broadcast();
    }
}

void UBaseCharacterDisplayWidget::StopPendingMoveAction()
{
    FLatentActionManager& LatentActionManager = GetWorld()->GetLatentActionManager();
    LatentActionManager.RemoveActionsForObject(this);
}
