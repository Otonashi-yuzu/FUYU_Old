// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuContentWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UMenuContentWidget : public UUserWidget
{
	GENERATED_BODY()


public:

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="Menu Content")
	UNamedSlot* Content;
};
