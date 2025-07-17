// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonStyling.h"
#include "Blueprint/UserWidget.h"
#include "Components/SizeBox.h"
#include "VNMDropDownContentWidget.generated.h"

class UVNMDropDownItemWidget;
class UVNMDropDownWidget;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMDropDownContentWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
public:
	void SetButtonStyling(const FButtonStyling& Styling);

	void SetDesiredWidth(const float NewWidth);

	void SetDropdownOptions(const TArray<FString>& NewOptions);

	void SetDropdownWidget(UVNMDropDownWidget* InDropDownWidget);

	void SetDropdownItemWidgetClass(TSubclassOf<UVNMDropDownItemWidget> InDropdownItemWidgetClass);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dropdown)
	float RowHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dropdown)
	float VisibleRowCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Dropdown)
	USizeBox* SizeConstrainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Dropdown)
	UPanelWidget* DropdownList;

	UPROPERTY(BlueprintReadOnly, Category=Dropdown)
	FButtonStyling ButtonStyling;

	UPROPERTY(BlueprintReadOnly, Category=Dropdown)
	TSubclassOf<UVNMDropDownItemWidget> DropdownItemWidgetClass;

	UPROPERTY()
	UVNMDropDownWidget* DropDownWidget;

	UPROPERTY(BlueprintReadOnly, Category=Dropdown)
	TArray<FString> Options;
	
};
