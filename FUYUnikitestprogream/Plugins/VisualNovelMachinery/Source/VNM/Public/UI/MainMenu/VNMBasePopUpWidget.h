// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VNMBasePopUpWidget.generated.h"

class UTextBlock;
class UMenuButtonWidget;

UENUM()
enum class EPopUpResult : uint8
{
	Unknown,
	Confirm,
	Cancel
};

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMBasePopUpWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category="Pop Ups")
	virtual void SetupPopUp(const FText& Title, const FText& Description);

	UFUNCTION(BlueprintCallable, Category="Pop Ups")
	void ShowPopUp();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopUpClose, const EPopUpResult, Result);

	UPROPERTY(BlueprintAssignable, Category="Pop Ups")
	FOnPopUpClose OnPopUpClose;
	
protected:

	UFUNCTION()
	virtual void OnPopUpResultConfirm(UMenuButtonWidget* ClickedButton);
	
	UFUNCTION()
	void OnPopUpResultCancel(UMenuButtonWidget* ClickedButton);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pop Ups")
	UMenuButtonWidget* ConfirmButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pop Ups")
	UMenuButtonWidget* CancelButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pop Ups")
	UTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Pop Ups")
	UTextBlock* DescriptionText;
};
