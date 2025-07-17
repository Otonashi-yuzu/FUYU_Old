// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuTextButtonWidget.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"

void UMenuTextButtonWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);

	if (!Style.IdleTexture)
	{
		BackgroundImage->Brush.ImageSize = FVector2D::Zero();
	}
	BackgroundImage->SetColorAndOpacity(Style.IdleColor);
	BackgroundImage->SetRenderTransform(Style.IdleTransform);
	ButtonText->SetFont(Style.IdleTextFont);
	ButtonText->SetColorAndOpacity(Style.IdleTextColor);
	ButtonText->SetText(ButtonDefaultText);
	ButtonText->SetRenderTransform(Style.IdleTextTransform);
}

void UMenuTextButtonWidget::OverrideButtonText(const FText& NewText)
{
	ButtonText->SetText(NewText);
}

void UMenuTextButtonWidget::SetButtonStyling(const FButtonStyling& NewButtonStyling)
{
	Super::SetButtonStyling(NewButtonStyling);

	BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);

	if (!Style.IdleTexture)
	{
		BackgroundImage->Brush.ImageSize = FVector2D::Zero();
	}
	BackgroundImage->SetColorAndOpacity(Style.IdleColor);
	BackgroundImage->SetRenderTransform(Style.IdleTransform);
	ButtonText->SetFont(Style.IdleTextFont);
	ButtonText->SetColorAndOpacity(Style.IdleTextColor);
	ButtonText->SetText(ButtonDefaultText);
	ButtonText->SetRenderTransform(Style.IdleTextTransform);
}

void UMenuTextButtonWidget::SetLocked(bool bInIsLocked)
{
	Super::SetLocked(bInIsLocked);

	if (bIsLocked)
	{
		BackgroundImage->SetBrushFromTexture(Style.LockedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.LockedColor);
		BackgroundImage->SetRenderTransform(Style.LockedTransform);
		ButtonText->SetFont(Style.LockedTextFont);
		ButtonText->SetColorAndOpacity(Style.LockedTextColor);
		ButtonText->SetRenderTransform(Style.LockedTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.IdleColor);
		BackgroundImage->SetRenderTransform(Style.IdleTransform);
		ButtonText->SetFont(Style.IdleTextFont);
		ButtonText->SetColorAndOpacity(Style.IdleTextColor);
		ButtonText->SetRenderTransform(Style.IdleTextTransform);
	}
}

void UMenuTextButtonWidget::SetIsSelected(bool bInIsSelected)
{
	Super::SetIsSelected(bInIsSelected);

	if (bIsSelected)
	{
		BackgroundImage->SetBrushFromTexture(Style.SelectedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.SelectedColor);
		BackgroundImage->SetRenderTransform(Style.SelectedTransform);
		ButtonText->SetFont(Style.SelectedTextFont);
		ButtonText->SetColorAndOpacity(Style.SelectedTextColor);
		ButtonText->SetRenderTransform(Style.SelectedTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.IdleColor);
		BackgroundImage->SetRenderTransform(Style.IdleTransform);
		ButtonText->SetFont(Style.IdleTextFont);
		ButtonText->SetColorAndOpacity(Style.IdleTextColor);
		ButtonText->SetRenderTransform(Style.IdleTextTransform);
	}
}

void UMenuTextButtonWidget::NativeMenuButtonHovered()
{
	Super::NativeMenuButtonHovered();

	if (bIsLocked)
	{
		return;
	}

	if (bIsSelected)
	{
		BackgroundImage->SetBrushFromTexture(Style.SelectedHoveredTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.SelectedHoveredColor);
		BackgroundImage->SetRenderTransform(Style.SelectedHoveredTransform);
		ButtonText->SetFont(Style.SelectedHoveredTextFont);
		ButtonText->SetColorAndOpacity(Style.SelectedHoveredTextColor);
		ButtonText->SetRenderTransform(Style.SelectedHoveredTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.HoveredTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.HoveredColor);
		BackgroundImage->SetRenderTransform(Style.HoveredTransform);
		ButtonText->SetFont(Style.HoveredTextFont);
		ButtonText->SetColorAndOpacity(Style.HoveredTextColor);
		ButtonText->SetRenderTransform(Style.HoveredTextTransform);
	}
}

void UMenuTextButtonWidget::NativeMenuButtonUnhovered()
{
	Super::NativeMenuButtonUnhovered();

	if (bIsLocked)
	{
		return;
	}

	if (bIsSelected)
	{
		BackgroundImage->SetBrushFromTexture(Style.SelectedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.SelectedColor);
		BackgroundImage->SetRenderTransform(Style.SelectedTransform);
		ButtonText->SetFont(Style.SelectedTextFont);
		ButtonText->SetColorAndOpacity(Style.SelectedTextColor);
		ButtonText->SetRenderTransform(Style.SelectedTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.IdleColor);
		BackgroundImage->SetRenderTransform(Style.IdleTransform);
		ButtonText->SetFont(Style.IdleTextFont);
		ButtonText->SetColorAndOpacity(Style.IdleTextColor);
		ButtonText->SetRenderTransform(Style.IdleTextTransform);
	}
}

void UMenuTextButtonWidget::NativeMenuButtonPressed()
{
	Super::NativeMenuButtonPressed();

	if (bIsLocked)
	{
		return;
	}

	if (bIsSelected)
	{
		BackgroundImage->SetBrushFromTexture(Style.SelectedPressedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.SelectedPressedColor);
		BackgroundImage->SetRenderTransform(Style.SelectedPressedTransform);
		ButtonText->SetFont(Style.SelectedPressedTextFont);
		ButtonText->SetColorAndOpacity(Style.SelectedPressedTextColor);
		ButtonText->SetRenderTransform(Style.SelectedPressedTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.PressedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.PressedColor);
		BackgroundImage->SetRenderTransform(Style.PressedTransform);
		ButtonText->SetFont(Style.PressedTextFont);
		ButtonText->SetColorAndOpacity(Style.PressedTextColor);
		ButtonText->SetRenderTransform(Style.PressedTextTransform);
	}
}

void UMenuTextButtonWidget::NativeMenuButtonReleased()
{
	Super::NativeMenuButtonReleased();

	if (bIsLocked)
	{
		return;
	}

	if (bIsSelected)
	{
		BackgroundImage->SetBrushFromTexture(Style.SelectedTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.SelectedColor);
		BackgroundImage->SetRenderTransform(Style.SelectedTransform);
		ButtonText->SetFont(Style.SelectedTextFont);
		ButtonText->SetColorAndOpacity(Style.SelectedTextColor);
		ButtonText->SetRenderTransform(Style.SelectedTextTransform);
	}
	else
	{
		BackgroundImage->SetBrushFromTexture(Style.IdleTexture, true);
		BackgroundImage->SetColorAndOpacity(Style.IdleColor);
		BackgroundImage->SetRenderTransform(Style.IdleTransform);
		ButtonText->SetFont(Style.IdleTextFont);
		ButtonText->SetColorAndOpacity(Style.IdleTextColor);
		ButtonText->SetRenderTransform(Style.IdleTextTransform);
	}
}
