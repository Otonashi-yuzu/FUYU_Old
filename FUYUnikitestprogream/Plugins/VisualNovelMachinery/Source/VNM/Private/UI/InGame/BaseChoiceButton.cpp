// Copyright (c) 2022 Al_Fe


#include "BaseChoiceButton.h"

void UBaseChoiceButton::SetChoiceText(const FText& Text)
{
    OriginalChoiceText = Text;
    ChoiceText->SetText(OriginalChoiceText);
}

void UBaseChoiceButton::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    ChoiceButton->OnClicked.AddUniqueDynamic(this, &UBaseChoiceButton::OnButtonClicked);
}

void UBaseChoiceButton::OnButtonClicked()
{
    OnChoiceButtonClicked.Broadcast(this);
}
