// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "YarnFactory.generated.h"

/**
 * 
 */
UCLASS()
class YARNIMPORTEREDITOR_API UYarnFactory : public UFactory
{
	GENERATED_BODY()

public:
	UYarnFactory();
	
	virtual bool FactoryCanImport(const FString& Filename) override;
protected:

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category=DialogObjectFactory, meta=(AllowAbstract = ""))
	TSubclassOf<class UDialogObject> ParentClass;
	
	virtual UObject* FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;

};
