// Copyright (c) 2022 Al_Fe


#include "DialogBlueprintGeneratedClass.h"

#include "VNMModule.h"

void UDialogBlueprintGeneratedClass::InitializeDialogObject(UDialogObject* DialogObject)
{
    InitializeDialogObjectStatic(DialogObject, this);
}

void UDialogBlueprintGeneratedClass::InitializeDialogObjectStatic(UDialogObject* DialogObject, const UClass* InClass)
{
	check(InClass);

    if ( DialogObject->HasAllFlags(RF_ArchetypeObject) )
    {
        UE_LOG(LogVNM, Error, TEXT("Widget Class %s - Running Initialize On Archetype, %s."), *InClass->GetName(), *DialogObject->GetName());
        return;
    }

#if !UE_BUILD_SHIPPING
    TWeakObjectPtr<UClass> DialogObjectGeneratedByClass = MakeWeakObjectPtr(const_cast<UClass*>(InClass));
    DialogObject->DialogObjectGeneratedByClass = DialogObjectGeneratedByClass;
#endif

    
#if WITH_EDITOR
    DialogObject->DialogObjectGeneratedBy = InClass->ClassGeneratedBy;
#endif

    
    UBlueprintGeneratedClass::BindDynamicDelegates(InClass, DialogObject);
}
