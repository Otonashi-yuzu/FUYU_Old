// Copyright (c) 2022 Al_Fe

#include "CharacterPlayAnimationGraphNodeWidget.h"


#include "CharacterPlayAnimationNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacterPlayAnimationGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
	GraphNode = InNode;

	UpdateGraphNode();
}

void SCharacterPlayAnimationGraphNodeWidget::CreatePinWidgets()
{
	SGraphNodeK2Base::CreatePinWidgets();

	auto* CharacterPlayAnimationNode = Cast<UCharacterPlayAnimationNode>(GraphNode);

	auto CharacterIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

	CharacterIds.Empty();
	CharacterIds.Add(MakeShared<FName>("None"));

	for (auto CharacterId : CharacterIdsNonShared)
	{
		CharacterIds.Add(MakeShared<FName>(CharacterId));
	}

	int32 SelectedCharacterId = 0;

	if (!CharacterIdsNonShared.Find(CharacterPlayAnimationNode->CharacterId, SelectedCharacterId))
	{
		SelectedCharacterId = 0;
	}
	else
	{
		SelectedCharacterId++;
	}


	LeftNodeBox->AddSlot()
	           .AutoHeight()
	           .Padding(FMargin{32, 4, 4, 4})
	[
		SNew(STextBlock)
		.Text(LOCTEXT("Label.Character", "Character"))
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
		.TextStyle(FAppStyle::Get(), "Graph.Node.PinName")
#else
            .TextStyle(FEditorStyle::Get(), "Graph.Node.PinName")
#endif
		.IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
	];

	LeftNodeBox->AddSlot()
	           .AutoHeight()
	           .Padding(FMargin{36, 4, 4, 4})
	[
		SNew(SNameComboBox)
        .ContentPadding(FMargin{6.0f, 2.0f})
        .OptionsSource(&CharacterIds)
        .InitiallySelectedItem(CharacterIds[SelectedCharacterId])
        .OnSelectionChanged(this, &SCharacterPlayAnimationGraphNodeWidget::OnCharacterNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
	];
}


void SCharacterPlayAnimationGraphNodeWidget::OnCharacterNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
	auto* CharacterPlayAnimationNode = Cast<UCharacterPlayAnimationNode>(GraphNode);

	UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("CharacterPlayAnimationCharacterIdChanged", "Changed Character Id on Character Play Animation Node"), CharacterPlayAnimationNode);
	CharacterPlayAnimationNode->Modify();
	CharacterPlayAnimationNode->CharacterId = *Item;
	FBlueprintEditorUtils::MarkBlueprintAsModified(CharacterPlayAnimationNode->GetBlueprint());

	CharacterPlayAnimationNode->ReconstructNode();
	UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
