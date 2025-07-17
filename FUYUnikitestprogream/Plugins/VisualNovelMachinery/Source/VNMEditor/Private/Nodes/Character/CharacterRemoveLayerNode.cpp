// Copyright (c) 2022 Al_Fe


#include "CharacterRemoveLayerNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CharacterRemoveLayerGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacterRemoveLayerNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacterRemoveLayerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterRemoveLayerNode.Title", "Character Remove Layer");
}

FText UCharacterRemoveLayerNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterRemoveLayerNode.Tooltip", "This node is used to remove an image layer from the specified character!");
}

FLinearColor UCharacterRemoveLayerNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacterRemoveLayerNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterRemoveLayerNode::CreateVisualWidget()
{
    return SNew(SCharacterRemoveLayerGraphNodeWidget, this);
}

void UCharacterRemoveLayerNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, RemoveLayerFromCharacter);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeRemoveLayerFromCharacterDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeRemoveLayerFromCharacterDataStruct->StructType = FRemoveLayerFromCharacterData::StaticStruct();
    MakeRemoveLayerFromCharacterDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeRemoveLayerFromCharacterDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeRemoveLayerFromCharacterDataStruct, this);
    
    //Input
    MakeRemoveLayerFromCharacterDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeRemoveLayerFromCharacterDataStruct->FindPin(TEXT("LayerId"))->DefaultValue = LayerId.ToString();
    MakeRemoveLayerFromCharacterDataStruct->FindPin(TEXT("RemoveLayerFromCharacterData"))->MakeLinkTo(CallFunction->FindPin(TEXT("RemoveLayerFromCharacterData")));

    //Exec pins
    UEdGraphPin* NodeExec = GetExecPin();
    UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);

    UEdGraphPin* InternalExec = CallFunction->GetExecPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);

    UEdGraphPin* InternalThen = CallFunction->GetThenPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UCharacterRemoveLayerNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("LayerId");
}

#undef LOCTEXT_NAMESPACE
