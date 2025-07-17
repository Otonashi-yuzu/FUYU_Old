// Fill out your copyright notice in the Description page of Project Settings.

#include "VNMBasePopUpWidget.h"

#include "MenuButtonWidget.h"
#include "Components/TextBlock.h"

void UVNMBasePopUpWidget::SetupPopUp(const FText& Title, const FText& Description)
{
	TitleText->SetText(Title);
	DescriptionText->SetText(Description);
}

void UVNMBasePopUpWidget::ShowPopUp()
{
	AddToViewport(9999);

	ConfirmButton->OnButtonClicked.AddUniqueDynamic(this, &UVNMBasePopUpWidget::OnPopUpResultConfirm);
	CancelButton->OnButtonClicked.AddUniqueDynamic(this, &UVNMBasePopUpWidget::OnPopUpResultCancel);
}

void UVNMBasePopUpWidget::OnPopUpResultConfirm(UMenuButtonWidget* ClickedButton)
{
	OnPopUpClose.Broadcast(EPopUpResult::Confirm);
	RemoveFromParent();
}

void UVNMBasePopUpWidget::OnPopUpResultCancel(UMenuButtonWidget* ClickedButton)
{
	OnPopUpClose.Broadcast(EPopUpResult::Cancel);
	RemoveFromParent();
}
