// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "DialogObject.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "DialogBlueprintGeneratedClass.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UDialogBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	GENERATED_BODY()

public:

    void InitializeDialogObject(UDialogObject* DialogObject);

    static void InitializeDialogObjectStatic(UDialogObject* DialogObject, const UClass* InClass);
};
