// Copyright (c) 2022 Al_Fe


#include "DialogObjectNodesUtils.h"

#include "DialogChoiceNode.h"
#include "DialogEndNode.h"
#include "K2Node_CallFunction.h"
#include "K2Node_IfThenElse.h"
#include "VNMEditorModule.h"
#include "VNMSettings.h"

FDialogData UDialogObjectNodesUtils::ConstructChoicesDataFromDialogStartNode(UDialogStartNode* DialogStartNode)
{
	FDialogData Choices;

	ConstructChoicesDataInternal(DialogStartNode->FindPin(UEdGraphSchema_K2::PN_Then), Choices, 0);
	InsertDialogStartNode(Choices, DialogStartNode->NodeGuid.ToString());
	SortChoicesDataToNotPointBackwards(Choices);
	InsertConnectorsToChoiceData(Choices);
	AddLoopPortalsToChoiceData(Choices);
	SortChoicesDataInColumnsToNotCrossConnectionLines(Choices);

	return Choices;
}

FDialogData UDialogObjectNodesUtils::ConstructScenesDataFromDialogs()
{
	FDialogData SceneData;

	UDataTable* DataTable = UVNMSettings::GetVNMSettings()->Settings.DialogDefinitonsTable;

	if (!DataTable)
	{
		return SceneData;
	}

	ConstructScenesDataInternal(DataTable, SceneData, 0);
	RemoveChoicesDataToNotBeingReferenced(SceneData);
	SortChoicesDataToNotPointBackwards(SceneData);
	InsertConnectorsToChoiceData(SceneData);
	AddLoopPortalsToChoiceData(SceneData);
	SortChoicesDataInColumnsToNotCrossConnectionLines(SceneData);


	return SceneData;
}

bool UDialogObjectNodesUtils::IsDialogDataComplete(const FDialogData& DialogData)
{
	UDataTable* DataTable = UVNMSettings::GetVNMSettings()->Settings.DialogDefinitonsTable;

	if (!DataTable)
	{
		return true;
	}

	const TArray<FName> DialogIds = UVNMSettings::GetVNMSettings()->GetDialogIds();
	const TArray<FString> ExistingDialogIds = DialogData.GetChoiceIds();

	bool bDialogIdMissing = false;

	for (const auto& DialogId : DialogIds)
	{
		if (!ExistingDialogIds.Contains(DialogId.ToString()))
		{
			bDialogIdMissing = true;
			break;
		}
	}

	return !bDialogIdMissing;
}

void UDialogObjectNodesUtils::ConstructChoicesDataInternal(UEdGraphPin* EntryPin, FDialogData& Choices,
                                                           const int32 ColumnIndex)
{
	int32 NextColumnIndex = ColumnIndex;
	if (!EntryPin)
	{
		return;
	}
	
	if (!Choices.ChoicesColumns.IsValidIndex(ColumnIndex))
	{
		Choices.ChoicesColumns.Add(FChoicesColumn());
	}
	
	FChoicesColumn& Column = Choices.ChoicesColumns[ColumnIndex];

	auto LinkedPins = EntryPin->LinkedTo;

	if (LinkedPins.Num() == 0)
	{
		return;
	}

	auto* NextNodeEntryPin = LinkedPins[0];
	auto* NextNode = NextNodeEntryPin->GetOwningNode();
	const FString NextNodeGuid = NextNode->NodeGuid.ToString();

	if (Choices.ContainsChoiceId(NextNodeGuid))
	{
		return;
	}
    
	if (auto* ChoiceNode = Cast<UDialogChoiceNode>(NextNodeEntryPin->GetOwningNode()))
	{
		FChoiceData Data;
		Data.ChoiceId = NextNodeGuid;
		Data.ChoiceType = EChoiceType::CHOICE;

		for (const auto& Choice: ChoiceNode->Choices)
		{
			auto* ChoicePin = ChoiceNode->FindPin(Choice.ToString());

			if (!ChoicePin)
			{
				continue;
			}

			if (ChoicePin->LinkedTo.Num() == 0)
			{
				continue;
			}

			auto* FoundNextRelevantNode = GetNextValidChoiceDataNode(ChoicePin);

			if (FoundNextRelevantNode)
			{
				FOptionData OptionData;
				OptionData.ChoiceText = Choice;
				OptionData.NextChoiceId = FoundNextRelevantNode->NodeGuid.ToString();
				Data.Options.Add(OptionData);
			}			
		}
		
		Column.Choices.Add(NextNodeGuid, Data);
		NextColumnIndex++;
	}

	if (auto* BranchNode = Cast<UK2Node_IfThenElse>(NextNodeEntryPin->GetOwningNode()))
	{
		FChoiceData Data;
		Data.ChoiceId = NextNodeGuid;
		Data.ChoiceType = EChoiceType::BRANCH;

		TArray<UEdGraphPin*> Pins;
		Pins.Add(BranchNode->GetThenPin());
		Pins.Add(BranchNode->GetElsePin());

		for (const auto& Pin: Pins)
		{
			if (!Pin)
			{
				continue;
			}

			if (Pin->LinkedTo.Num() == 0)
			{
				continue;
			}

			auto* FoundNextRelevantNode = GetNextValidChoiceDataNode(Pin);

			if (FoundNextRelevantNode)
			{
				FOptionData OptionData;
				OptionData.ChoiceText = FText::FromString(TEXT(""));
				OptionData.NextChoiceId = FoundNextRelevantNode->NodeGuid.ToString();
				Data.Options.Add(OptionData);
			}			
		}

		bool bAllBranchNodesLeadToSameChoiceId = true;

		if (Data.Options.Num() > 1)
		{
			FString OptionString = Data.Options[0].NextChoiceId; 
			for (int32 i = 1; i < Data.Options.Num(); i++)
			{
				if (OptionString != Data.Options[i].NextChoiceId)
				{
					bAllBranchNodesLeadToSameChoiceId = false;
					break;
				}
			}
		}

		if (!bAllBranchNodesLeadToSameChoiceId)
		{
			Column.Choices.Add(NextNodeGuid, Data);
			NextColumnIndex++;
		}
	}
	

	if (auto* DialogEndNode = Cast<UDialogEndNode>(NextNodeEntryPin->GetOwningNode()))
	{
		FChoiceData Data;
		Data.ChoiceId = NextNodeGuid;
		Data.ChoiceType = EChoiceType::END;
		Column.Choices.Add(NextNodeGuid, Data);
		return;
	}

	for (auto* Pin: NextNode->Pins)
	{
		if (Pin->Direction != EEdGraphPinDirection::EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
		{
			continue;
		}

		ConstructChoicesDataInternal(Pin, Choices, NextColumnIndex);           
	}
}

void UDialogObjectNodesUtils::ConstructScenesDataInternal(UDataTable* DataTable, FDialogData& SceneData, const int32 ColumnIndex)
{
	
	TArray<FDialogDefinition*> DialogDefinitions;
	
	DataTable->GetAllRows<FDialogDefinition>(TEXT(""), DialogDefinitions);

	if (DialogDefinitions.Num() > 0)
	{		
		FChoiceData StartChoiceData;
		StartChoiceData.ChoiceId = FGuid::NewGuid().ToString();
		StartChoiceData.ChoiceType = EChoiceType::START;
		FOptionData StartOption;
		StartOption.NextChoiceId = DialogDefinitions[0]->DialogueId.ToString();
		StartChoiceData.Options.Add(StartOption);
		FChoicesColumn Column;
		Column.Choices.Add(StartChoiceData.ChoiceId, StartChoiceData);
		SceneData.ChoicesColumns.Add(Column);
	}

	for (auto* DialogDefinition: DialogDefinitions)
	{
		if (!DialogDefinition->DialogueObjectClass)
		{
			continue;
		}
		FChoicesColumn Column;
		
		FChoiceData Data;
		Data.ChoiceId = DialogDefinition->DialogueId.ToString();
		Data.ChoiceType = EChoiceType::SCENE;

		TArray<FString> DialogFollowUpIds = GetFollowUpDialogIds(DialogDefinition->DialogueObjectClass);

		for (const FString& DialogFollowUpId : DialogFollowUpIds)
		{
			FOptionData OptionData;
			OptionData.ChoiceText = FText::FromString(DialogFollowUpId);
			OptionData.NextChoiceId = DialogFollowUpId;
			Data.Options.Add(OptionData);
		}

		Column.Choices.Add(Data.ChoiceId, Data);
		SceneData.ChoicesColumns.Add(Column);
	}
}

void UDialogObjectNodesUtils::InsertDialogStartNode(FDialogData& Choices, const FString& ChoiceId)
{
	TArray<FChoicesColumn> Columns;
	FChoicesColumn FirstColumn;
	FChoiceData ChoiceData;
	ChoiceData.ChoiceId = ChoiceId;
	ChoiceData.ChoiceType = EChoiceType::START;
	
	TArray<FString> FirstChoicesIds;
	Choices.ChoicesColumns[0].Choices.GetKeys(FirstChoicesIds);

	for (const auto& FirstChoicesId: FirstChoicesIds)
	{
		FOptionData OptionData;
		OptionData.NextChoiceId = FirstChoicesId;
		ChoiceData.Options.Add(OptionData);
	}

	FirstColumn.Choices.Add(ChoiceData.ChoiceId, ChoiceData);
	Columns.Add(FirstColumn);
	Columns.Append(Choices.ChoicesColumns);
	Choices.ChoicesColumns = Columns;
}

void UDialogObjectNodesUtils::RemoveChoicesDataToNotBeingReferenced(FDialogData& Choices)
{
	TArray<FString> DialogIdsReferenced;
	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		TArray<FString> ChoiceIds;
		Choices.ChoicesColumns[i].Choices.GetKeys(ChoiceIds);

		for (int32 j = 0; j < ChoiceIds.Num(); j++)
		{			
			const FChoiceData& Data = Choices.ChoicesColumns[i].Choices[ChoiceIds[j]];

			for (const auto& Option : Data.Options)
			{
				DialogIdsReferenced.AddUnique(Option.NextChoiceId);
			}
		}
	}

	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		TArray<FString> ChoiceIds;
		Choices.ChoicesColumns[i].Choices.GetKeys(ChoiceIds);

		for (int32 j = 0; j < ChoiceIds.Num(); j++)
		{			
			const FString ChoiceId = ChoiceIds[j];
			const FChoiceData Choice = Choices.ChoicesColumns[i].Choices[ChoiceId];

			if (!DialogIdsReferenced.Contains(ChoiceId) && Choice.ChoiceType != EChoiceType::START)
			{
				Choices.ChoicesColumns[i].Choices.Remove(ChoiceId);
			}
		}
	}
	
}

void UDialogObjectNodesUtils::SortChoicesDataToNotPointBackwards(FDialogData& Choices)
{
	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		TArray<FString> ChoiceIds;

		Choices.ChoicesColumns[i].Choices.GetKeys(ChoiceIds);
		

		for (int32 j = 0; j < ChoiceIds.Num(); j++)
		{			
			const int32 LastFoundOccurence = FindLastUsageOfChoiceIdInChoicesData(Choices, ChoiceIds[j]);

			if (LastFoundOccurence == INDEX_NONE || LastFoundOccurence < i)
			{
				continue;
			}

			if (IsInLoop(Choices, ChoiceIds[j]))
			{
				continue;
			}
			
			FChoiceData Data = Choices.ChoicesColumns[i].Choices[ChoiceIds[j]];
			Choices.ChoicesColumns[i].Choices.Remove(ChoiceIds[j]);
			ChoiceIds.RemoveAt(j);
			j--;

			if (!Choices.ChoicesColumns.IsValidIndex(LastFoundOccurence+1))
			{
				Choices.ChoicesColumns.Add(FChoicesColumn());
			}

			Choices.ChoicesColumns[LastFoundOccurence+1].Choices.Add(Data.ChoiceId, Data);
		}

	}
}

void UDialogObjectNodesUtils::InsertConnectorsToChoiceData(FDialogData& Choices)
{
	for (int32 ColumnIndex = 0; ColumnIndex < Choices.ChoicesColumns.Num(); ColumnIndex++)
	{
		auto& Column = Choices.ChoicesColumns[ColumnIndex];

		
		TArray<FString> ChoiceIds;

		Column.Choices.GetKeys(ChoiceIds);

		TMap<FString, FString> ChoiceIdsToConnectorIds;

		for (const auto& ChoiceId: ChoiceIds)
		{
			auto& ChoiceData = Column.Choices[ChoiceId];
			for (auto& Option: ChoiceData.Options)
			{
				const int32 FollowUpNodeColumnIndex = FindColumnIndexOfChoiceId(Choices, Option.NextChoiceId);

				if (FollowUpNodeColumnIndex == INDEX_NONE)
				{
					continue;
				}

				const int32 ConnectorsNeeded = FollowUpNodeColumnIndex - ColumnIndex - 1;

				if (ConnectorsNeeded <= 0)
				{
					continue;
				}

				if (!ChoiceIdsToConnectorIds.Contains(Option.NextChoiceId))
				{
					FString PrevConnectorId = Option.NextChoiceId;
					for (int32 i = 0; i < ConnectorsNeeded; i++)
					{
						FChoiceData Data;
						FOptionData OptionData;
						//OptionData.ChoiceText = FText::FromString(TEXT("Connector"));
						OptionData.NextChoiceId = PrevConnectorId;
						Data.ChoiceType = EChoiceType::CONNECTOR;
						Data.ChoiceId = FString::Printf(TEXT("Connector-%s"), *FGuid::NewGuid().ToString(EGuidFormats::UniqueObjectGuid));
						Data.Options.Append({OptionData});
						Choices.ChoicesColumns[FollowUpNodeColumnIndex - i - 1].Choices.Add(Data.ChoiceId, Data);
						PrevConnectorId = Data.ChoiceId;
					}
					ChoiceIdsToConnectorIds.Add(Option.NextChoiceId, PrevConnectorId);
					Option.NextChoiceId = PrevConnectorId;
				}
				else
				{
					Option.NextChoiceId = ChoiceIdsToConnectorIds[Option.NextChoiceId];
				}
			}
		}
	}
}


void UDialogObjectNodesUtils::AddLoopPortalsToChoiceData(FDialogData& Choices)
{
	for (int32 ColumnIndex = 0; ColumnIndex < Choices.ChoicesColumns.Num(); ColumnIndex++)
	{
		auto& Column = Choices.ChoicesColumns[ColumnIndex];
		
		TArray<FString> ChoiceIds;

		Column.Choices.GetKeys(ChoiceIds);

		for (const auto& ChoiceId: ChoiceIds)
		{
			auto& ChoiceData = Column.Choices[ChoiceId];
			for (int32 OptionIndex = 0; OptionIndex < Choices.ChoicesColumns[ColumnIndex].Choices[ChoiceId].Options.Num(); OptionIndex++)
			{
				auto& Option = Choices.ChoicesColumns[ColumnIndex].Choices[ChoiceId].Options[OptionIndex];
				if (Option.NextChoiceId == ChoiceId)
				{
					continue;
				}
				
				const int32 FollowUpNodeColumnIndex = FindColumnIndexOfChoiceId(Choices, Option.NextChoiceId);

				if (FollowUpNodeColumnIndex == INDEX_NONE || FollowUpNodeColumnIndex > ColumnIndex)
				{
					continue;
				}

				FString PortalExitId = GetLoopPortalExitIdInColumnLeadingToChoiceId(Choices, Option.NextChoiceId);

				if (PortalExitId.IsEmpty())
				{
					// Portal End Node
					PortalExitId = FString::Printf(TEXT("LoopPortalExit-%s"), *FGuid::NewGuid().ToString(EGuidFormats::UniqueObjectGuid));
					FChoiceData Data;
					FOptionData OptionData;
					OptionData.NextChoiceId = Option.NextChoiceId;
					Data.ChoiceType = EChoiceType::LOOP_PORTAL_END;
					Data.ChoiceId = PortalExitId;
					Data.Options.Append({OptionData});
					Choices.PortalExits.Add(Data);
				}

				FString PortalEntranceId = GetLoopPortalEntranceIdInChoiceLeadingToExitId(Column, ChoiceData, PortalExitId);
				if (PortalEntranceId.IsEmpty())
				{
					// Portal Start Node
					PortalEntranceId = FString::Printf(TEXT("LoopPortal-%s"), *FGuid::NewGuid().ToString(EGuidFormats::UniqueObjectGuid));
					//auto& NextColumn = Choices.ChoicesColumns[ColumnIndex+1];
					FChoiceData Data;
					FOptionData OptionData;
					OptionData.NextChoiceId = PortalExitId;
					Data.ChoiceType = EChoiceType::LOOP_PORTAL_START;
					Data.ChoiceId = PortalEntranceId;
					Data.Options.Append({OptionData});
					//NextColumn.Choices.Add(Data.ChoiceId, Data);
					Column.PortalEntrances.Add(Data);
				}

				// For some reason it only gets written if it is directly referenced like this
				Choices.ChoicesColumns[ColumnIndex].Choices[ChoiceId].Options[OptionIndex].NextChoiceId = PortalEntranceId;
			}
		}
	}
}

void UDialogObjectNodesUtils::SortChoicesDataInColumnsToNotCrossConnectionLines(FDialogData& Choices)
{
	for (int32 ColumnIndex = 0; ColumnIndex < Choices.ChoicesColumns.Num() - 1; ColumnIndex++)
	{
		const FChoicesColumn& Column = Choices.ChoicesColumns[ColumnIndex];
		const FChoicesColumn NextColumnCopy = Choices.ChoicesColumns[ColumnIndex + 1];
		FChoicesColumn& NextColumn = Choices.ChoicesColumns[ColumnIndex + 1];
		
		TMap<FString, int32> ChoiceIdToCounter;

		int32 Counter = 0;
		for (const auto& ChoiceData: Column.Choices)
		{			
			for (const FOptionData& Option : ChoiceData.Value.Options)
			{
				if (!ChoiceIdToCounter.Contains(Option.NextChoiceId))
				{
					ChoiceIdToCounter.Add(Option.NextChoiceId, Counter++);
				}
				else
				{
					ChoiceIdToCounter[Option.NextChoiceId] = Counter++;
				}
			}
		}

		TArray<FString> ChoiceIds;

		NextColumnCopy.Choices.GetKeys(ChoiceIds);
		for (const auto& ChoiceId: ChoiceIds)
		{
			if (!ChoiceIdToCounter.Contains(ChoiceId))
			{
				ChoiceIdToCounter.Add(ChoiceId, 0);
			}
		}

		ChoiceIdToCounter.ValueSort([](const int32 lhs,const int32 rhs)
		{
		 	return lhs < rhs;
		});

		NextColumn.Choices.Empty();

		for (const auto& ChoiceIdPair: ChoiceIdToCounter)
		{
			const FChoiceData* ChoiceData = NextColumnCopy.Choices.Find(ChoiceIdPair.Key);
			if (!ChoiceData)
			{
				if (!Column.PortalEntrances.ContainsByPredicate([ChoiceIdPair](const FChoiceData& Data){ return Data.ChoiceId == ChoiceIdPair.Key; }) && !Column.ContainsChoiceId(ChoiceIdPair.Key))
				{
					UE_LOG(LogVNMEditor, Warning, TEXT("UDialogObjectNodesUtils::SortChoicesDataInColumnsToNotCrossConnectionLines: Choice Data for Choice %s not found!"), *ChoiceIdPair.Key);
				}
				continue;
			}

			NextColumn.Choices.Add(ChoiceIdPair.Key, *ChoiceData);
		}
	}
}

int32 UDialogObjectNodesUtils::FindLastUsageOfChoiceIdInChoicesData(const FDialogData& Choices, const FString& ChoiceId)
{
	int32 LastFoundOccurence = INDEX_NONE;
	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		if (Choices.ChoicesColumns[i].ReferencesChoiceId(ChoiceId))
		{
			LastFoundOccurence = i;
		}
	}

	return LastFoundOccurence;
}

FString UDialogObjectNodesUtils::GetLoopPortalExitIdInColumnLeadingToChoiceId(const FDialogData& Choices,
	const FString& ChoiceId)
{
	for (const auto& PortalExit : Choices.PortalExits)
	{
		if (PortalExit.Options[0].NextChoiceId == ChoiceId)
		{
			return PortalExit.ChoiceId;
		}
	}

	return TEXT("");
}

FString UDialogObjectNodesUtils::GetLoopPortalEntranceIdInChoiceLeadingToExitId(const FChoicesColumn& Column, const FChoiceData& Choice, const FString& ExitId)
{
	for (const auto& Option: Choice.Options)
	{
		for (const auto& PortalEntrance: Column.PortalEntrances)
		{
			if (Option.NextChoiceId != PortalEntrance.ChoiceId)
			{
				continue;
			}

			if (PortalEntrance.Options[0].NextChoiceId == ExitId)
			{
				return PortalEntrance.ChoiceId;
			}
		}
	}

	return TEXT("");
}

bool UDialogObjectNodesUtils::IsInLoop(const FDialogData& Choices, const FString& OriginId)
{
	FChoiceData ChoiceData = Choices.GetChoiceDataByChoiceId(OriginId);

	TArray<FString> AlreadySeenChoiceIds;

	bool bIsInLoop = false;
	for (const auto& Option: ChoiceData.Options)
	{
		bIsInLoop |= IsInLoopInternal(Choices, OriginId, Option.NextChoiceId, AlreadySeenChoiceIds);
	}

	return bIsInLoop;
}

bool UDialogObjectNodesUtils::IsInLoopInternal(const FDialogData& Choices, const FString& OriginId,
	const FString& ChoiceId, TArray<FString>& AlreadySeenChoiceIds)
{
	if (AlreadySeenChoiceIds.Contains(ChoiceId))
	{
		return false;
	}

	AlreadySeenChoiceIds.Add(ChoiceId);
		
	FChoiceData ChoiceData = Choices.GetChoiceDataByChoiceId(ChoiceId);

	if (!ChoiceData.IsValid())
	{
		return false;
	}

	if (ChoiceData.ChoiceType == EChoiceType::END)
	{
		return false;
	}

	if (ChoiceData.ChoiceId == OriginId)
	{
		return true;
	}

	bool bIsInLoop = false;

	for (const auto& Option: ChoiceData.Options)
	{
		bIsInLoop |= IsInLoopInternal(Choices, OriginId, Option.NextChoiceId, AlreadySeenChoiceIds);
	}
	
	return bIsInLoop;
}

int32 UDialogObjectNodesUtils::FindColumnIndexOfChoiceId(FDialogData& Choices, const FString& ChoiceId)
{
	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		if (Choices.ChoicesColumns[i].ContainsChoiceId(ChoiceId))
		{
			return i;
		}
	}

	return INDEX_NONE;
}

int32 UDialogObjectNodesUtils::FindRowIndexOfChoiceIdInColumn(const FChoicesColumn& Column, const FString& ChoiceId)
{
	TArray<FString> ChoiceIds;
	Column.Choices.GetKeys(ChoiceIds);
	return ChoiceIds.IndexOfByKey(ChoiceId);
}

UK2Node* UDialogObjectNodesUtils::GetNextValidChoiceDataNode(UEdGraphPin* EntryPin)
{
	if (!EntryPin)
	{
		return nullptr;
	}
	
	auto LinkedPins = EntryPin->LinkedTo;

	if (LinkedPins.Num() == 0)
	{
		return nullptr;
	}

	auto* NextNodeEntryPin = LinkedPins[0];
	auto* NextNode = NextNodeEntryPin->GetOwningNode();

	if (auto* ChoiceNode = Cast<UDialogChoiceNode>(NextNodeEntryPin->GetOwningNode()))
	{
		return ChoiceNode;
	}

	if (auto* DialogEndNode = Cast<UDialogEndNode>(NextNodeEntryPin->GetOwningNode()))
	{
		return DialogEndNode;
	}

	if (auto* BranchNode = Cast<UK2Node_IfThenElse>(NextNodeEntryPin->GetOwningNode()))
	{
		if (GetNextValidChoiceDataNode(BranchNode->GetThenPin()) != GetNextValidChoiceDataNode(BranchNode->GetElsePin()))
		{
			return BranchNode;
		}
	}

	for (auto* Pin: NextNode->Pins)
	{
		if (Pin->Direction != EEdGraphPinDirection::EGPD_Output || Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
		{
			continue;
		}

		if (auto* FoundNode = GetNextValidChoiceDataNode(Pin))
		{
			return FoundNode;
		}
	}

	return nullptr;
}

TArray<FString> UDialogObjectNodesUtils::GetFollowUpDialogIds(TSubclassOf<UDialogObject> DialogObject)
{
	TArray<FString> FollowUpDialogIds;
	
	auto* DialogBlueprint = UBlueprint::GetBlueprintFromClass(DialogObject);

	if (!DialogBlueprint)
	{
		return FollowUpDialogIds;
	}
	
	auto* Graph = DialogBlueprint->GetLastEditedUberGraph();

	TArray<UDialogEndNode*> DialogEndNodes;
	Graph->GetNodesOfClass(DialogEndNodes);

	for (auto* DialogEndNode: DialogEndNodes)
	{
		if (!DialogEndNode)
		{
			continue;
		}

		const FString FollowUpDialogId = DialogEndNode->NextDialogId.ToString();

		if (FollowUpDialogIds.Contains(FollowUpDialogId))
		{
			continue;
		}
		
		FollowUpDialogIds.Add(FollowUpDialogId);
	}

	return FollowUpDialogIds;
}
