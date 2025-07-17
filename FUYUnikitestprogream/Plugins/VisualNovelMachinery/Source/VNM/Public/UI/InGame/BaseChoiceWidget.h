// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "BaseChoiceButton.h"
#include "BaseVNMWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/PanelWidget.h"
#include "BaseChoiceWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class VNM_API UBaseChoiceWidget : public UBaseVNMWidget
{
	GENERATED_BODY()

public:
	void SetChoices(const TArray<FText>& Choices);

	void ClearChoices();

	bool HasChoices() const { return ChoiceButtonsList->GetChildrenCount() > 0; }

protected:

	UFUNCTION(BlueprintImplementableEvent, Category=Functionality)
	void OnChoiceButtonAdded(UBaseChoiceButton* Button);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UBaseChoiceButton> ChoiceButtonClass;

	UPROPERTY(BlueprintReadOnly, Category=Appearance, meta=(BindWidget))
	UPanelWidget* ChoiceButtonsList;

	UFUNCTION()
	void OnChoiceButtonClicked(UBaseChoiceButton* ClickedChoiceButton);
};
