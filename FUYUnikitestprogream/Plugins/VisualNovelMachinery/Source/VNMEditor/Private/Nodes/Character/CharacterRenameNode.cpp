// Copyright (c) 2022 Al_Fe


#include "CharacterRenameNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CharacterRenameGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacterRenameNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacterRenameNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterRenameNode.Title", "Character Rename");
}

FText UCharacterRenameNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterRenameNode.Tooltip", "This node is used to Rename the selected character.");
}

FLinearColor UCharacterRenameNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacterRenameNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterRenameNode::CreateVisualWidget()
{
    return SNew(SCharacterRenameGraphNodeWidget, this);
}

bool UCharacterRenameNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacterRenameNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, RenameCharacter);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeRenameCharacterDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeRenameCharacterDataStruct->StructType = FRenameCharacterData::StaticStruct();
    MakeRenameCharacterDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeRenameCharacterDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeRenameCharacterDataStruct, this);
    
    //Input
    MakeRenameCharacterDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeRenameCharacterDataStruct->FindPin(TEXT("NewCharacterName"))->DefaultTextValue = NewCharacterName;
    MakeRenameCharacterDataStruct->FindPin(TEXT("RenameCharacterData"))->MakeLinkTo(CallFunction->FindPin(TEXT("RenameCharacterData")));

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

bool UCharacterRenameNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("NewCharacterName");
}

#undef LOCTEXT_NAMESPACE
