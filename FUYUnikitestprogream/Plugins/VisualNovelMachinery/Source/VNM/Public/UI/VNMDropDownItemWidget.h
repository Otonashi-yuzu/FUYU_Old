// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonStyling.h"
#include "Blueprint/UserWidget.h"
#include "VNMDropDownItemWidget.generated.h"

class UVNMDropDownWidget;
class UTextBlock;
class UImage;
class UButton;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMDropDownItemWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
public:

	void SetButtonStyling(const FButtonStyling& Styling);

	void SetOptionString(const FString& Option);

	void SetDropdownWidget(UVNMDropDownWidget* InDropDownWidget);
	
protected:

	UFUNCTION()
	void OnDropdownItemClicked();

	UFUNCTION()
	void OnDropdownItemPressed();

	UFUNCTION()
	void OnDropdownItemHovered();

	UFUNCTION()
	void OnDropdownItemUnhovered();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Dropdown)
	UButton* ItemButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Dropdown)
	UImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Dropdown)
	UTextBlock* ItemText;

	UPROPERTY(EditAnywhere,  BlueprintReadOnly, Category=Dropdown)
	FButtonStyling ButtonStyling;

	UPROPERTY()
	UVNMDropDownWidget* DropDownWidget;

	UPROPERTY()
	FString ItemString;
};
