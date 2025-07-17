// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VNMPagingWidget.generated.h"

class UMenuButtonWidget;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UVNMPagingWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;
	
public:

	void SetNumberPages(const int32 InNumPages);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPageChanged, const int32, PageIndex);

	UPROPERTY(BlueprintAssignable)
	FOnPageChanged OnPageChanged;

protected:
	
	UFUNCTION()
	void OnPreviousPageButtonClicked(UMenuButtonWidget* Button);
	
	UFUNCTION()
	void OnNextPageButtonClicked(UMenuButtonWidget* Button);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Gallery")
	int32 NumPages;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Gallery")
	UTexture2D* PageIconTexture;

	UPROPERTY(Transient, BlueprintReadOnly, Category="Gallery")
	int32 CurrentPageIndex;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Paging")
	UPanelWidget* PageIconList;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Paging")
	UMenuButtonWidget* PreviousPageButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Paging")
	UMenuButtonWidget* NextPageButton;
	
};
