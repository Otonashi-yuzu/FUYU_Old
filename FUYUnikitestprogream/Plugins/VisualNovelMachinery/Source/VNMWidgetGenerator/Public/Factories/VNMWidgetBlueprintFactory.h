// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "UI/VNMClassPicker.h"
#include "VNMWidgetBlueprintFactory.generated.h"

/**
 * 
 */
UCLASS(HideCategories=Object, MinimalAPI)
class UVNMWidgetBlueprintFactory : public UFactory
{
	GENERATED_BODY()

public:
    UVNMWidgetBlueprintFactory(const FObjectInitializer& ObjectInitializer);

	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

protected:
	
	UPROPERTY(Transient)
	TObjectPtr<UClass> AdditionalWidgetClass;
	
	UPROPERTY(Transient)
	TObjectPtr<UClass> AdditionalWidgetClass2;

	UPROPERTY(Transient)
	EVNMWidget VNMWidget;

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category=WidgetBlueprintFactory, meta=(AllowAbstract = ""))
	TSubclassOf<class UUserWidget> ParentClass;
};
