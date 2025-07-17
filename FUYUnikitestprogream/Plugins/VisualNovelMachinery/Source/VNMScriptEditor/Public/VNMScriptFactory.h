// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Factories/Factory.h"
#include "VNMScriptFactory.generated.h"

/**
 * 
 */
UCLASS()
class VNMSCRIPTEDITOR_API UVNMScriptFactory : public UFactory
{
	GENERATED_BODY()

public:
	UVNMScriptFactory();
	
	virtual bool FactoryCanImport(const FString& Filename) override;
protected:

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category=DialogObjectFactory, meta=(AllowAbstract = ""))
	TSubclassOf<class UDialogObject> ParentClass;
	
	virtual UObject* FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
};
