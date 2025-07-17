// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "Factories/Factory.h"
#include "DialogObject.h"

#include "DialogObjectFactory.generated.h"

UCLASS()
class UDialogObjectFactory: public UFactory
{
    GENERATED_BODY()
public:
    UDialogObjectFactory(const FObjectInitializer& ObjectInitializer);

    // The type of blueprint that will be created
    UPROPERTY(EditAnywhere, Category=DialogObjectFactory)
    TEnumAsByte<enum EBlueprintType> BlueprintType;

    // The parent class of the created blueprint
    UPROPERTY(EditAnywhere, Category=DialogObjectFactory, meta=(AllowAbstract = ""))
    TSubclassOf<class UDialogObject> ParentClass;
    
    //~ Begin UFactory Interface
    virtual bool ShouldShowInNewMenu() const override;
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
    //~ Begin UFactory Interface	
};
