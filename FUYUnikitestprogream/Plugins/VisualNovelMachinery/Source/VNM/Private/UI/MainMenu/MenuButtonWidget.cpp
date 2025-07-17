// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/MenuButtonWidget.h"


void UMenuButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	MenuButton->OnClicked.AddUniqueDynamic(this, &UMenuButtonWidget::OnMenuButtonClicked);
	MenuButton->OnHovered.AddUniqueDynamic(this, &UMenuButtonWidget::OnMenuButtonHovered);
	MenuButton->OnUnhovered.AddUniqueDynamic(this, &UMenuButtonWidget::OnMenuButtonUnhovered);
	MenuButton->OnPressed.AddUniqueDynamic(this, &UMenuButtonWidget::OnMenuButtonPressed);
	MenuButton->OnReleased.AddUniqueDynamic(this, &UMenuButtonWidget::OnMenuButtonReleased);
}

void UMenuButtonWidget::NativeDestruct()
{
	MenuButton->OnClicked.RemoveDynamic(this, &UMenuButtonWidget::OnMenuButtonClicked);
	MenuButton->OnHovered.RemoveDynamic(this, &UMenuButtonWidget::OnMenuButtonHovered);
	MenuButton->OnUnhovered.RemoveDynamic(this, &UMenuButtonWidget::OnMenuButtonUnhovered);
	MenuButton->OnPressed.RemoveDynamic(this, &UMenuButtonWidget::OnMenuButtonPressed);
	MenuButton->OnReleased.RemoveDynamic(this, &UMenuButtonWidget::OnMenuButtonReleased);
	
	Super::NativeDestruct();
}
void UMenuButtonWidget::SetButtonStyling(const FButtonStyling& NewButtonStyling)
{
	Style = NewButtonStyling;
}

void UMenuButtonWidget::SetLocked(bool bInIsLocked)
{
	if (bIsLocked == bInIsLocked)
	{
		return;
	}
	
	bIsLocked = bInIsLocked;

	OnMenuButtonLockedStateChanged();
}

void UMenuButtonWidget::SetIsSelected(bool bInIsSelected)
{
	if (bIsSelected == bInIsSelected)
	{
		return;
	}
	
	bIsSelected = bInIsSelected;

	OnMenuButtonSelectionChanged();
}

void UMenuButtonWidget::OnMenuButtonLockedStateChanged()
{
	NativeMenuButtonLockedStateChanged();
	BP_OnMenuButtonLockedStateChanged();
	OnButtonLockedStateChanged.Broadcast(this, bIsLocked);
}

void UMenuButtonWidget::OnMenuButtonSelectionChanged()
{
	NativeMenuButtonSelectionChanged();
	BP_OnMenuButtonSelectionChanged();
	OnButtonSelectionChanged.Broadcast(this, bIsSelected);
}

void UMenuButtonWidget::OnMenuButtonClicked()
{
	NativeMenuButtonClicked();
	BP_OnMenuButtonClicked();
	OnButtonClicked.Broadcast(this);
	
	if (bIsSelectedOnClick)
	{
		SetIsSelected(true);
	}
}

void UMenuButtonWidget::OnMenuButtonHovered()
{
	NativeMenuButtonHovered();
	BP_OnMenuButtonHovered();
	OnButtonHovered.Broadcast(this);
}

void UMenuButtonWidget::OnMenuButtonUnhovered()
{
	NativeMenuButtonUnhovered();
	BP_OnMenuButtonUnhovered();
	OnButtonUnhovered.Broadcast(this);
}

void UMenuButtonWidget::OnMenuButtonPressed()
{
	NativeMenuButtonPressed();
	BP_OnMenuButtonPressed();
	OnButtonPressed.Broadcast(this);
}

void UMenuButtonWidget::OnMenuButtonReleased()
{
	NativeMenuButtonReleased();
	BP_OnMenuButtonReleased();
	OnButtonReleased.Broadcast(this);
}
