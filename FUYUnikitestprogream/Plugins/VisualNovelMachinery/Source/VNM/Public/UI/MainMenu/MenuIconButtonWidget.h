// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonWidget.h"
#include "MenuIconButtonWidget.generated.h"

class UImage;
/**
 * 
 */
UCLASS(Abstract)
class VNM_API UMenuIconButtonWidget : public UMenuButtonWidget
{
	GENERATED_BODY()

protected:

	virtual void NativePreConstruct() override;
	
public:
	virtual void SetButtonStyling(const FButtonStyling& NewButtonStyling) override;
	virtual void SetLocked(bool bInIsLocked) override;
	virtual void SetIsSelected(bool bInIsSelected) override;

protected:

	virtual void NativeMenuButtonHovered() override;
	virtual void NativeMenuButtonUnhovered() override;
	virtual void NativeMenuButtonPressed() override;
	virtual void NativeMenuButtonReleased() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Icon Button")
	UImage* IconImage;
	
};
