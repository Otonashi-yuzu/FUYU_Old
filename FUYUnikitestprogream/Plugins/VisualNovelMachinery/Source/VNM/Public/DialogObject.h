// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "ChoiceData.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "DialogObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract)
class VNM_API UDialogObject : public UObject
{
	GENERATED_BODY()

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDialogComplete, UDialogObject*, DialogObjectThatEnded, FName, NextDialogObjectId);

	UFUNCTION(BlueprintCallable, Category=Internal)
	static UDialogObject* CreateDialogObjectInstance(APlayerController* OwningPlayerController, TSubclassOf<UDialogObject> DialogObjectClass, FName DialogObjectName);

	UPROPERTY(BlueprintAssignable)
	FOnDialogComplete OnDialogComplete;

	void StartDialog();
	void StartDialogAtNode(const FName& NodeGUID);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category=Internal)
	void EndDialog(FName NextDialogObjectId);
	
	virtual UWorld* GetWorld() const override;

	bool IsDialogRunning() const { return bIsDialogActive; }

	FName GetDialogId() const { return DialogId; }

	void SetDialogId(const FName& InDialogId) { DialogId = InDialogId; }

	UFUNCTION(BlueprintPure, Category=Dialog)
	FDialogData GetChoices() const { return Choices; }
	void SetChoices(const FDialogData& InChoices) { Choices = InChoices; }

	virtual bool Initialize();

#if !UE_BUILD_SHIPPING
	/** Stores a reference to the class responsible for this dialog objects construction. */
	TWeakObjectPtr<UClass> DialogObjectGeneratedByClass;
#endif

#if WITH_EDITORONLY_DATA

	/** Stores a reference to the asset responsible for this dialog objects construction. */
	TWeakObjectPtr<UObject> DialogObjectGeneratedBy;
	
#endif

protected:
	UPROPERTY(BlueprintReadOnly, Transient, Category=Dialog)
	bool bIsDialogActive;

	UPROPERTY(Transient)
	bool bInitialized;

	UPROPERTY(BlueprintReadOnly, Category=Dialog)
	FDialogData Choices;

	FName DialogId;
};
