// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuIconButtonWidget.h"

#include "Components/Image.h"

void UMenuIconButtonWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	IconImage->SetBrushFromTexture(Style.IdleTexture, true);
	if (!Style.IdleTexture)
	{
		IconImage->Brush.ImageSize = FVector2D::Zero();
	}
	IconImage->SetColorAndOpacity(Style.IdleColor);
	IconImage->SetRenderTransform(Style.IdleTransform);

}

void UMenuIconButtonWidget::SetButtonStyling(const FButtonStyling& NewButtonStyling)
{
	Super::SetButtonStyling(NewButtonStyling);
	IconImage->SetBrushFromTexture(Style.IdleTexture, true);
	if (!Style.IdleTexture)
	{
		IconImage->Brush.ImageSize = FVector2D::Zero();
	}
	IconImage->SetColorAndOpacity(Style.IdleColor);
	IconImage->SetRenderTransform(Style.IdleTransform);
}

void UMenuIconButtonWidget::SetLocked(bool bInIsLocked)
{
	Super::SetLocked(bInIsLocked);

	if (bIsLocked)
	{
		IconImage->SetBrushFromTexture(Style.LockedTexture, true);
		IconImage->SetColorAndOpacity(Style.LockedColor);
		IconImage->SetRenderTransform(Style.LockedTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.IdleTexture, true);
		IconImage->SetColorAndOpacity(Style.IdleColor);
		IconImage->SetRenderTransform(Style.IdleTransform);
	}
}

void UMenuIconButtonWidget::SetIsSelected(bool bInIsSelected)
{
	Super::SetIsSelected(bInIsSelected);
	
	if (bIsSelected)
	{
		IconImage->SetBrushFromTexture(Style.SelectedTexture, true);
		IconImage->SetColorAndOpacity(Style.SelectedColor);
		IconImage->SetRenderTransform(Style.SelectedTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.IdleTexture, true);
		IconImage->SetColorAndOpacity(Style.IdleColor);
		IconImage->SetRenderTransform(Style.IdleTransform);
	}
}

void UMenuIconButtonWidget::NativeMenuButtonHovered()
{
	Super::NativeMenuButtonHovered();

	if (bIsLocked)
	{
		return;
	}

	if (bIsSelected)
	{
		IconImage->SetBrushFromTexture(Style.SelectedHoveredTexture, true);
		IconImage->SetColorAndOpacity(Style.SelectedHoveredColor);
		IconImage->SetRenderTransform(Style.SelectedHoveredTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.HoveredTexture, true);
		IconImage->SetColorAndOpacity(Style.HoveredColor);
		IconImage->SetRenderTransform(Style.HoveredTransform);
	}
}

void UMenuIconButtonWidget::NativeMenuButtonUnhovered()
{
	Super::NativeMenuButtonUnhovered();

	if (bIsLocked)
	{
		return;
	}
	
	if (bIsSelected)
	{
		IconImage->SetBrushFromTexture(Style.SelectedTexture, true);
		IconImage->SetColorAndOpacity(Style.SelectedColor);
		IconImage->SetRenderTransform(Style.SelectedTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.IdleTexture, true);
		IconImage->SetColorAndOpacity(Style.IdleColor);
		IconImage->SetRenderTransform(Style.IdleTransform);
	}
}

void UMenuIconButtonWidget::NativeMenuButtonPressed()
{
	Super::NativeMenuButtonPressed();

	if (bIsLocked)
	{
		return;
	}
	
	if (bIsSelected)
	{
		IconImage->SetBrushFromTexture(Style.SelectedPressedTexture, true);
		IconImage->SetColorAndOpacity(Style.SelectedPressedColor);
		IconImage->SetRenderTransform(Style.SelectedPressedTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.PressedTexture, true);
		IconImage->SetColorAndOpacity(Style.PressedColor);
		IconImage->SetRenderTransform(Style.PressedTransform);
	}
}

void UMenuIconButtonWidget::NativeMenuButtonReleased()
{
	Super::NativeMenuButtonReleased();

	if (bIsLocked)
	{
		return;
	}
	
	if (bIsSelected)
	{
		IconImage->SetBrushFromTexture(Style.SelectedTexture, true);
		IconImage->SetColorAndOpacity(Style.SelectedColor);
		IconImage->SetRenderTransform(Style.SelectedTransform);
	}
	else
	{
		IconImage->SetBrushFromTexture(Style.IdleTexture, true);
		IconImage->SetColorAndOpacity(Style.IdleColor);
		IconImage->SetRenderTransform(Style.IdleTransform);
	}
}
