// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VNMBasePopUpWidget.h"
#include "VNMBaseTextBoxPopUpWidget.generated.h"

class UEditableTextBox;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMBaseTextBoxPopUpWidget : public UVNMBasePopUpWidget
{
	GENERATED_BODY()

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopUpText, const FString&, Text);

	UPROPERTY(BlueprintAssignable, Category="Pop Ups")
	FOnPopUpText OnPopUpText;

protected:

	virtual void OnPopUpResultConfirm(UMenuButtonWidget* ClickedButton) override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pop Ups")
	UEditableTextBox* PopUpTextBox;
};
