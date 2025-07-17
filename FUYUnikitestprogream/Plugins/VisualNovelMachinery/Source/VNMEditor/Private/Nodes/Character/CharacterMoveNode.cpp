// Copyright (c) 2022 Al_Fe


#include "CharacterMoveNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CharacterMoveGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacterMoveNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacterMoveNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterMoveNode.Title", "Character Move");
}

FText UCharacterMoveNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterMoveNode.Tooltip", "This node is used to Move the specified character!");
}

FLinearColor UCharacterMoveNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacterMoveNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterMoveNode::CreateVisualWidget()
{
    return SNew(SCharacterMoveGraphNodeWidget, this);
}

bool UCharacterMoveNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacterMoveNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, MoveCharacter);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeMoveCharacterDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeMoveCharacterDataStruct->StructType = FMoveCharacterData::StaticStruct();
    MakeMoveCharacterDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeMoveCharacterDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeMoveCharacterDataStruct, this);

    
    //Input
    MakeMoveCharacterDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeMoveCharacterDataStruct->FindPin(TEXT("CharacterPositioning"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ECharacterPositioning"), static_cast<uint8>(CharacterPositioning));
    MakeMoveCharacterDataStruct->FindPin(TEXT("CustomCharacterPosition"))->DefaultValue = CustomCharacterPosition.ToString();
    MakeMoveCharacterDataStruct->FindPin(TEXT("bMoveWithAnimation"))->DefaultValue = bMoveWithAnimation ? TEXT("true") : TEXT("false");;
    MakeMoveCharacterDataStruct->FindPin(TEXT("MoveCharacterData"))->MakeLinkTo(CallFunction->FindPin(TEXT("MoveCharacterData")));

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

bool UCharacterMoveNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("CharacterPositioning");
}

#undef LOCTEXT_NAMESPACE
