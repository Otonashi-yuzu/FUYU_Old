// Copyright (c) 2022 Al_Fe


#include "DialogChoiceNode.h"


#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DetailCategoryBuilder.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeArray.h"
#include "K2Node_MakeStruct.h"
#include "K2Node_Switch.h"
#include "K2Node_SwitchInteger.h"
#include "K2Node_SwitchName.h"
#include "K2Node_SwitchString.h"
#include "KismetCompiler.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"

#define LOCTEXT_NAMESPACE "VNM"

void UDialogChoiceNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    bool bIsDirty = false;
    FName PropertyName = (PropertyChangedEvent.Property != NULL)
                             ? PropertyChangedEvent.Property->GetFName()
                             : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UDialogChoiceNode, Choices))
    {
        bIsDirty = true;
        if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
        {
            // An event has been renamed, save the index so that we can properly match pins during reconstruction
            IndexOfChoiceRenamed = 2 + PropertyChangedEvent.GetArrayIndex("Choices");
        }
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDialogChoiceNode, bMakeChoiceConditional))
    {
        bIsDirty = true;
    }

    if (bIsDirty)
    {
        ReconstructNode();
        GetGraph()->NotifyGraphChanged();
    }
    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UDialogChoiceNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
}

FText UDialogChoiceNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogChoiceNode.Title", "Dialog Choice");
}

FText UDialogChoiceNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogChoiceNode.Tooltip", "This node is used to display dialog choices!");
}
FLinearColor UDialogChoiceNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogChoiceNodeColor;
}

FSlateIcon UDialogChoiceNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Choice", "NodeIcon.Choice");
    return Icon;
}

void UDialogChoiceNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    TArray<UEdGraphPin*> ChoicePins = GetOutputPins(Pins);
    
    for (auto* Pin : ChoicePins)
    {
        if (Pin->LinkedTo.Num() == 0)
        {
		    CompilerContext.MessageLog.Warning(TEXT("The choice pin @@ of @@ is not connected. This can produce odd behavior!"), Pin, this);
        }
    }
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, DisplayDialogChoices);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction)
    {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* DisplayDialogChoicesNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    DisplayDialogChoicesNode->NodeGuid = NodeGuid;

    DisplayDialogChoicesNode->SetFromFunction(BlueprintFunction);
    DisplayDialogChoicesNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(DisplayDialogChoicesNode, this);
    
    UK2Node_MakeStruct* MakeDisplayDialogChoiceDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeDisplayDialogChoiceDataStruct->StructType = FDisplayDialogChoicesData::StaticStruct();
    MakeDisplayDialogChoiceDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeDisplayDialogChoiceDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeDisplayDialogChoiceDataStruct, this);

    MakeDisplayDialogChoiceDataStruct->FindPin(TEXT("DisplayDialogChoicesData"))->MakeLinkTo(DisplayDialogChoicesNode->FindPin(TEXT("DisplayDialogChoicesData")));

    // Construct a literal array so that we have an array to use for the node, as default value cant be directly set to an array
    auto* ChoicesArrayNode = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
    ChoicesArrayNode->NumInputs = Choices.Num();
    ChoicesArrayNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ChoicesArrayNode, this);


    for (int32 i = 0; i < Choices.Num(); i++)
    {
        ChoicesArrayNode->Pins[i+1]->DefaultValue = *Choices[i].ToString();
        ChoicesArrayNode->Pins[i+1]->DefaultTextValue = Choices[i];   
    }

    auto* ChoicesArrayOutputPin = ChoicesArrayNode->GetOutputPin();

    //Input 
    ChoicesArrayOutputPin->MakeLinkTo(MakeDisplayDialogChoiceDataStruct->FindPinChecked(TEXT("ChoicesToDisplay")));

    if (bIsImageChoice)
    {
        MakeDisplayDialogChoiceDataStruct->FindPin(TEXT("ImageChoiceWidgetClass"))->DefaultObject = ImageChoiceWidgetClass;
    }
    
    MakeDisplayDialogChoiceDataStruct->FindPin(TEXT("bIs3DChoice"))->DefaultValue = bIs3DChoice ? TEXT("true") : TEXT("false");
    
    ChoicesArrayNode->PinConnectionListChanged(ChoicesArrayOutputPin); // this is necessary to make UK2Node_MakeArray coerce the type of the values
    MakeDisplayDialogChoiceDataStruct->FindPin(TEXT("NodeGUID"))->DefaultValue = DisplayDialogChoicesNode->NodeGuid.ToString();

    if (bMakeChoiceConditional)
    {
        TArray<UEdGraphPin*> ChoiceConditionPins = GetInputPins(Pins, false);
        
        // Construct a literal array so that we have an array to use for the node, as default value cant be directly set to an array
        auto* ChoiceConditionsArray = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
        ChoiceConditionsArray->NumInputs = ChoiceConditionPins.Num();
        ChoiceConditionsArray->AllocateDefaultPins();
        CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ChoiceConditionsArray, this);


        for (int32 i = 0; i < ChoiceConditionPins.Num(); i++)
        {
            auto* ChoiceConditionPin = ChoiceConditionPins[i];
            if (ChoiceConditionPin->LinkedTo.Num() == 0)
            {
                ChoiceConditionsArray->Pins[i+1]->DefaultValue = ChoiceConditionPin->DefaultValue;
                ChoiceConditionsArray->Pins[i+1]->PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
            }
            else
            {
                ChoiceConditionsArray->Pins[i+1]->PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
                CompilerContext.MovePinLinksToIntermediate(*ChoiceConditionPins[i], *ChoiceConditionsArray->Pins[i+1]);
            }
        }

        auto* ChoiceConditionsArrayOutputPin = ChoiceConditionsArray->GetOutputPin();
        ChoiceConditionsArrayOutputPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;

        //Input 
        ChoiceConditionsArrayOutputPin->MakeLinkTo(MakeDisplayDialogChoiceDataStruct->FindPinChecked(TEXT("ChoiceConditions")));
        ChoiceConditionsArray->PinConnectionListChanged(ChoiceConditionsArrayOutputPin); // this is necessary to make UK2Node_MakeArray coerce the type of the values
    }

    //Exec pins
    UEdGraphPin* NodeExec = GetExecPin();
    //UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);

    UEdGraphPin* DisplayDialogChoiceNodeExec = DisplayDialogChoicesNode->GetExecPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeExec, *DisplayDialogChoiceNodeExec);

    UEdGraphPin* DisplayDialogChoiceNodeThen = DisplayDialogChoicesNode->GetThenPin();

    // Create a Switch to react to the result
    auto* ResultSwitchNode = CompilerContext.SpawnIntermediateNode<UK2Node_SwitchName>(this, SourceGraph);
    ResultSwitchNode->bHasDefaultPin = false;
    for (int32 i = 0; i < ChoicePins.Num(); i++)
    {
        ResultSwitchNode->PinNames.Add(ChoicePins[i]->PinName);
    }
    ResultSwitchNode->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ResultSwitchNode, this);

    DisplayDialogChoicesNode->FindPin(TEXT("SelectedChoice"))->MakeLinkTo(ResultSwitchNode->GetSelectionPin());

    for (int i = 0; i < ChoicePins.Num(); i++)
    {
        auto* Pin = ResultSwitchNode->FindPin(ChoicePins[i]->PinName);
        CompilerContext.MovePinLinksToIntermediate(*ChoicePins[i], *Pin);
    }

    
    DisplayDialogChoiceNodeThen->MakeLinkTo(ResultSwitchNode->GetExecPin());
    
    //CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UDialogChoiceNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogChoiceNode::PostReconstructNode()
{
    Super::PostReconstructNode();
    
    IndexOfChoiceRenamed = -1;
}

void UDialogChoiceNode::ReconstructNode()
{
    Super::ReconstructNode();
}

void UDialogChoiceNode::ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins)
{
    AllocateDefaultPins();

    TArray<UEdGraphPin*> OldInputPins = GetInputPins(OldPins, false);
    TArray<UEdGraphPin*> OldOutputPins = GetOutputPins(OldPins);
    
    for (int32 i = 0; i < Choices.Num(); i++)
    {
        auto* OutputPin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, *Choices[i].ToString());

        if (bMakeChoiceConditional)
        {
            auto* InputPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Boolean, *(Choices[i].ToString() + " Available"));
            
            if (OldInputPins.Num() < Choices.Num())
            {
                continue;
            }
            auto* OldInPin = OldInputPins[i];            
            auto OldInLinks = OldInPin->LinkedTo;
            for (auto* LinkedPin: OldInLinks)
            {
                InputPin->MakeLinkTo(LinkedPin);
                LinkedPin->BreakLinkTo(OldInPin);
            }
        }

        if (OldOutputPins.Num() < Choices.Num())
        {
            continue;
        }
        
        auto* OldOutPin = OldOutputPins[i];
        auto OldOutLinks = OldOutPin->LinkedTo;
        for (auto* LinkedPin: OldOutLinks)
        {
            OutputPin->MakeLinkTo(LinkedPin);
            LinkedPin->BreakLinkTo(OldOutPin);
        }
    }
    
    
    RestoreSplitPins(OldPins);
}

UK2Node::ERedirectType UDialogChoiceNode::DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex,
                                                                       const UEdGraphPin* OldPin, int32 OldPinIndex) const
{
    // This check is to match pins whose name has been edited by the user
    if (NewPinIndex == IndexOfChoiceRenamed && NewPinIndex == OldPinIndex)
    {
        return ERedirectType::ERedirectType_Value;
    }
    else
    {
        return Super::DoPinsMatchForReconstruction(NewPin, NewPinIndex, OldPin, OldPinIndex);
    }
}

TArray<UEdGraphPin*> UDialogChoiceNode::GetInputPins(TArray<UEdGraphPin*>& InPins, bool bIncludeInExec)
{
    TArray<UEdGraphPin*> InputPins;
    
    for (auto* Pin: InPins)
    {
        if (Pin->Direction == EGPD_Input)
        {
            if (Pin->PinName == UEdGraphSchema_K2::PN_Execute)
            {
                if (bIncludeInExec)
                {
                    InputPins.Add(Pin);
                }
                else
                {
                    continue;
                }
            }
            InputPins.Add(Pin);
        }
    }

    return InputPins;
}

TArray<UEdGraphPin*> UDialogChoiceNode::GetOutputPins(TArray<UEdGraphPin*>& InPins)
{
    TArray<UEdGraphPin*> OutputPins;
    
    for (auto* Pin: InPins)
    {
        if (Pin->Direction == EGPD_Output)
        {
            OutputPins.Add(Pin);
        }
    }

    return OutputPins;
}

#undef LOCTEXT_NAMESPACE
