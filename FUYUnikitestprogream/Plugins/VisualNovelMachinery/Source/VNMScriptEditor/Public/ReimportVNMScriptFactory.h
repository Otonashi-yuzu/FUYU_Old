// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorReimportHandler.h"
#include "VNMScriptFactory.h"
#include "ReimportVNMScriptFactory.generated.h"

/**
 * 
 */
UCLASS()
class VNMSCRIPTEDITOR_API UReimportVNMScriptFactory : public UVNMScriptFactory, public FReimportHandler
{
	GENERATED_BODY()
public:

	UReimportVNMScriptFactory();

	//~ Begin FReimportHandler Interface
	virtual bool CanReimport( UObject* Obj, TArray<FString>& OutFilenames ) override;
	virtual void SetReimportPaths( UObject* Obj, const TArray<FString>& NewReimportPaths ) override;
	virtual EReimportResult::Type Reimport( UObject* Obj ) override;
	virtual int32 GetPriority() const override;
	//~ End FReimportHandler Interface

	//~ Begin UFactory Interface
	virtual bool IsAutomatedImport() const override;
	//~ End UFactory Interface
};
