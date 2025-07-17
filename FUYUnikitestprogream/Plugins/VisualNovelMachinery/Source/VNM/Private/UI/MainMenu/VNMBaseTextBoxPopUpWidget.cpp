// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMBaseTextBoxPopUpWidget.h"

#include "Components/EditableTextBox.h"

void UVNMBaseTextBoxPopUpWidget::OnPopUpResultConfirm(UMenuButtonWidget* ClickedButton)
{
	Super::OnPopUpResultConfirm(ClickedButton);

	OnPopUpText.Broadcast(PopUpTextBox->GetText().ToString());
}
