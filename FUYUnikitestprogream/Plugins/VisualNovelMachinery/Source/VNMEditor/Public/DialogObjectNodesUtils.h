// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "ChoiceData.h"
#include "DialogObject.h"
#include "DialogStartNode.h"
#include "Engine/DataTable.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogObjectNodesUtils.generated.h"

/**
 * 
 */
UCLASS()
class VNMEDITOR_API UDialogObjectNodesUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static FDialogData ConstructChoicesDataFromDialogStartNode(UDialogStartNode* DialogStartNode);
	static FDialogData ConstructScenesDataFromDialogs();
	static bool IsDialogDataComplete(const FDialogData& DialogData);

protected:
	
	static void ConstructChoicesDataInternal(UEdGraphPin* EntryPin, FDialogData& Choices, const int32 ColumnIndex);
	static void ConstructScenesDataInternal(UDataTable* DataTable, FDialogData& SceneData, const int32 ColumnIndex);

	static void InsertDialogStartNode(FDialogData& Choices, const FString& ChoiceId);

	static void RemoveChoicesDataToNotBeingReferenced(FDialogData& Choices);
	
	static void SortChoicesDataToNotPointBackwards(FDialogData& Choices);

	static void InsertConnectorsToChoiceData(FDialogData& Choices);
	
	static void AddLoopPortalsToChoiceData(FDialogData& Choices);

	static void SortChoicesDataInColumnsToNotCrossConnectionLines(FDialogData& Choices);
	
	static int32 FindLastUsageOfChoiceIdInChoicesData(const FDialogData& Choices, const FString& ChoiceId);

	static FString GetLoopPortalExitIdInColumnLeadingToChoiceId(const FDialogData& Choices, const FString& ChoiceId);
	static FString GetLoopPortalEntranceIdInChoiceLeadingToExitId(const FChoicesColumn& Column, const FChoiceData& Choice, const FString& ChoiceId);
	
	static bool IsInLoop(const FDialogData& Choices, const FString& OriginId);
	
	static bool IsInLoopInternal(const FDialogData& Choices, const FString& OriginId, const FString& ChoiceId, TArray<FString>& AlreadySeenChoiceIds);

	static int32 FindColumnIndexOfChoiceId(FDialogData& Choices, const FString& ChoiceId);

	static int32 FindRowIndexOfChoiceIdInColumn(const FChoicesColumn& Column, const FString& ChoiceId);

	static UK2Node* GetNextValidChoiceDataNode(UEdGraphPin* EntryPin);

	static TArray<FString> GetFollowUpDialogIds(TSubclassOf<UDialogObject> DialogObject);
};
