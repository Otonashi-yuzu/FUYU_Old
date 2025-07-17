// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonStyling.h"
#include "Blueprint/UserWidget.h"
#include "VNMDropDownWidget.generated.h"

class UVNMDropDownContentWidget;
class UVNMDropDownItemWidget;
class UTextBlock;
class UButton;
class UImage;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMDropDownWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	virtual void BeginDestroy() override;

public:
	UFUNCTION(BlueprintCallable, Category=Dropdown)
	void SetSelectedOption(const FString& SelectedOption);

	UFUNCTION(BlueprintCallable, Category=Dropdown)
	void SetOptions(const TArray<FString>& InOptions);

	UFUNCTION(BlueprintCallable, Category=Dropdown)
	void AddOption(const FString& NewOption);

	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChangedEvent, FString, SelectedItem);

	UPROPERTY(BlueprintAssignable)
	FOnSelectionChangedEvent OnSelectionChanged;
	

protected:

	void SetIsDropDownExpanded(const bool bInIsDropDownExpanded);

	UFUNCTION()
	void OnDropdownButtonClicked();
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Widgets)
	UImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Widgets)
	UImage* DropdownArrowImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Widgets)
	UButton* DropdownButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category=Widgets)
	UTextBlock* DropdownValueText;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Styling)
	FButtonStyling DropdownStyling;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Styling)
	FButtonStyling ItemStyling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dropdown)
	TArray<FString> Options;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dropdown)
	TSubclassOf<UVNMDropDownContentWidget> DropdownContentWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dropdown)
	TSubclassOf<UVNMDropDownItemWidget> DropdownItemWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category=Dropdown)
	UVNMDropDownContentWidget* DropdownContentWidget;

	UPROPERTY(BlueprintReadOnly, Category=Dropdown)
	bool bIsDropDownExpanded;
};
