// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseImageChoiceWidget.h"

#include "BaseImageChoiceButton.h"
#include "DialogControllerComponent.h"
#include "GameFramework/HUD.h"

void UBaseImageChoiceWidget::SetChoices(const TArray<FText>& Choices)
{	
	for (auto* ImageChoiceButtonWidget: ChoiceButtonsList->GetAllChildren())
	{
		auto* ImageChoiceButton = Cast<UBaseImageChoiceButton>(ImageChoiceButtonWidget);

		if (ImageChoiceButton)
		{
			FText ChoiceText = ImageChoiceButton->GetChoiceText();

			if (Choices.ContainsByPredicate([ChoiceText](const FText& Text) { return ChoiceText.ToString() == Text.ToString(); }))
			{
				ImageChoiceButton->SetVisibility(ESlateVisibility::Visible);
				ImageChoiceButton->OnChoiceButtonClicked.AddUniqueDynamic(this, &UBaseImageChoiceWidget::OnImageChoiceButtonClicked);
			}
			else
			{
				ImageChoiceButton->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UBaseImageChoiceWidget::OnImageChoiceButtonClicked(UBaseImageChoiceButton* ClickedChoiceButton)
{
	const FName SelectedChoice = ClickedChoiceButton->GetChoiceTextAsName();
	SetVisibility(ESlateVisibility::Collapsed);

	auto* DialogController = Cast<UDialogControllerComponent>(GetOwningPlayer()->GetHUD()->GetComponentByClass(UDialogControllerComponent::StaticClass()));

	DialogController->MoveToNextDialogAfterChoice(SelectedChoice);
}
