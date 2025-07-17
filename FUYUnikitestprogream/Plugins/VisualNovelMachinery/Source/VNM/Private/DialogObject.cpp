// Copyright (c) 2022 Al_Fe


#include "DialogObject.h"

#include "DialogBlueprintGeneratedClass.h"
#include "VNMModule.h"
#include "GameFramework/PlayerController.h"


UWorld* UDialogObject::GetWorld() const
{
    // This implementation is needed so the blueprint can access worldcontext methods from blueprintFunctionLibraries. The check for for the defaultObject is there because in the editor the object doesn't have an outer.
    // A more detailed explanation is here: https://answers.unrealengine.com/questions/468741/how-to-make-a-blueprint-derived-from-a-uobject-cla.html
    if (!HasAnyFlags(RF_ClassDefaultObject))
    {
        return GetOuter()->GetWorld();
    }
    else
    {
        return nullptr;
    }
}

bool UDialogObject::Initialize()
{
    if (bInitialized)
    {
        return false;
    }

    bInitialized = true;

    
    UDialogBlueprintGeneratedClass* DBGClass = Cast<UDialogBlueprintGeneratedClass>(GetClass());

    // Only do this if this widget is of a blueprint class
    if (DBGClass)
    {
        DBGClass->InitializeDialogObject(this);
    }

    return true;;
    
}

UDialogObject* UDialogObject::CreateDialogObjectInstance(APlayerController* OwningPlayerController,
                                                         TSubclassOf<UDialogObject> DialogObjectClass, FName DialogObjectName)
{
    auto* World = OwningPlayerController->GetWorld();

    if (!DialogObjectClass)
    {
        UE_LOG(LogVNM, Error, TEXT("CreateDialogObjectInstance called with a null class."));
        return nullptr;
    }

    UDialogObject* DialogObject = nullptr;
	UDialogBlueprintGeneratedClass* DBGC = Cast<UDialogBlueprintGeneratedClass>(DialogObjectClass);

    DialogObject = NewObject<UDialogObject>(OwningPlayerController, DialogObjectClass, DialogObjectName, RF_Transactional);

    DialogObject->Initialize();
    
    return DialogObject;
}

void UDialogObject::StartDialog()
{
    StartDialogAtNode("");
}

void UDialogObject::StartDialogAtNode(const FName& NodeGUID)
{
    bIsDialogActive = true;

    if (auto entryPoint = FindFunction(TEXT("StartDialogNode")))
    {
        struct
        {
            FName NodeToLoadTo;
        } params = { NodeGUID };
        ProcessEvent(entryPoint, &params);
    }
}

void UDialogObject::EndDialog(FName NextDialogObjectId)
{
    OnDialogComplete.Broadcast(this, NextDialogObjectId);
    bIsDialogActive = false;
}
