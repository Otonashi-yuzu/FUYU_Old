// Copyright (c) 2022 Al_Fe


#include "BaseChoiceWidget.h"


#include "DialogControllerComponent.h"
#include "GameFramework/HUD.h"

void UBaseChoiceWidget::SetChoices(const TArray<FText>& Choices)
{
    ClearChoices();

    for (const auto& Choice: Choices)
    {
        auto* ChoiceButton = CreateWidget<UBaseChoiceButton>(this, ChoiceButtonClass);

        if (ChoiceButton)
        {
            ChoiceButton->SetChoiceText(Choice);
            ChoiceButton->OnChoiceButtonClicked.AddUniqueDynamic(this, &UBaseChoiceWidget::OnChoiceButtonClicked);
            ChoiceButtonsList->AddChild(ChoiceButton);
            OnChoiceButtonAdded(ChoiceButton);
        }
    }
    SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UBaseChoiceWidget::ClearChoices()
{
    ChoiceButtonsList->ClearChildren();
}

void UBaseChoiceWidget::OnChoiceButtonClicked(UBaseChoiceButton* ClickedChoiceButton)
{
    const FName SelectedChoice = ClickedChoiceButton->GetChoiceTextAsName();
    SetVisibility(ESlateVisibility::Collapsed);

    auto* DialogController = Cast<UDialogControllerComponent>(GetOwningPlayer()->GetHUD()->GetComponentByClass(UDialogControllerComponent::StaticClass()));

    DialogController->MoveToNextDialogAfterChoice(SelectedChoice);

}
