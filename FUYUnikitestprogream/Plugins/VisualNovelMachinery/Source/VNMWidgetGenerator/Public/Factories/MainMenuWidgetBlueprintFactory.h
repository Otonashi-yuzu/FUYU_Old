// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "UI/VNMClassPicker.h"
#include "MainMenuWidgetBlueprintFactory.generated.h"

/**
 * 
 */
UCLASS(HideCategories=Object, MinimalAPI)
class UMainMenuWidgetBlueprintFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UMainMenuWidgetBlueprintFactory(const FObjectInitializer& ObjectInitializer);

	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

protected:
	
	UPROPERTY(Transient)
	TArray<TObjectPtr<UClass>> AdditionalWidgetClasses;

	UPROPERTY(Transient)
	bool bGenerateAlternative = false;

	UPROPERTY(Transient)
	EVNMMenuWidget MenuWidget;

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category=WidgetBlueprintFactory, meta=(AllowAbstract = ""))
	TSubclassOf<class UUserWidget> ParentClass;

};
