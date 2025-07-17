// Copyright (c) 2022 Al_Fe

#include "Character3DHideGraphNodeWidget.h"


#include "Character3DHideNode.h"
#include "Character3DShowNode.h"
#include "SNameComboBox.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCharacter3DHideGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCharacter3DHideGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* Character3DHideNode = Cast<UCharacter3DHideNode>(GraphNode);
    
    auto Character3DIdsNonShared = UVNMSettings::GetVNMSettings()->GetCharacterIds();

    Character3DIds.Empty();
    Character3DIds.Add(MakeShared<FName>("None"));

    for (auto Character3DId: Character3DIdsNonShared)
    {
        Character3DIds.Add(MakeShared<FName>(Character3DId));
    }

    int32 SelectedCharacter3DId = 0;

    if (!Character3DIdsNonShared.Find(Character3DHideNode->CharacterId, SelectedCharacter3DId))
    {
        SelectedCharacter3DId = 0;
    }
    else
    {
        SelectedCharacter3DId++;
    }


    LeftNodeBox->AddSlot()
    .AutoHeight()
    .Padding(FMargin { 32, 4, 4, 4})
    [
        SNew(STextBlock)
            .Text(LOCTEXT("Label.Character3D", "Character3D"))
            #if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
            .TextStyle(FAppStyle::Get(), "Graph.Node.PinName")
#else
            .TextStyle(FEditorStyle::Get(), "Graph.Node.PinName")
#endif
            .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];

    LeftNodeBox->AddSlot()
        .AutoHeight()
        .Padding(FMargin { 36, 4, 4, 4 })
    [
        SNew(SNameComboBox)
        .ContentPadding(FMargin { 6.0f, 2.0f })
        .OptionsSource(&Character3DIds)
        .InitiallySelectedItem(Character3DIds[SelectedCharacter3DId])
        .OnSelectionChanged(this, &SCharacter3DHideGraphNodeWidget::OnCharacter3DNameSelectionChanged)
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
    ];
}

void SCharacter3DHideGraphNodeWidget::OnCharacter3DNameSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type)
{
    auto* Character3DHideNode = Cast<UCharacter3DHideNode>(GraphNode);

    UKismetSystemLibrary::BeginTransaction(TEXT("VNMEditor"), LOCTEXT("Character3DHideNodeDialogSceneIdChanged", "Changed Character Id on Character 3D Hide Node"), Character3DHideNode);
    Character3DHideNode->Modify();
    Character3DHideNode->CharacterId = *Item;
    FBlueprintEditorUtils::MarkBlueprintAsModified(Character3DHideNode->GetBlueprint());
    UKismetSystemLibrary::EndTransaction();
}

#undef LOCTEXT_NAMESPACE
