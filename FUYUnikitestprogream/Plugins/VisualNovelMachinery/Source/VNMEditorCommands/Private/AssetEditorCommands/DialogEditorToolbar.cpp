// Copyright (c) 2022 Al_Fe

#include "DialogEditorToolbar.h"

#include "BlueprintEditorModule.h"
#include "CgHideNode.h"
#include "CgShowNode.h"
#include "CharacterHideNode.h"
#include "CharacterShowNode.h"
#include "DialogBlueprint.h"
#include "DialogBlueprintGeneratedClass.h"
#include "DialogChoiceNode.h"
#include "DialogEndNode.h"
#include "DialogObjectNodesUtils.h"
#include "DialogStartNode.h"
#include "DialogTextNode.h"
#include "DialogWindowNode.h"
#include "VNMEditorSettings.h"

#define LOCTEXT_NAMESPACE "VNMEditor"

void FDialogEditorToolbar::Initialize()
{
    FDialogEditorToolbarCommands::Register();
    auto& BlueprintModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
    BlueprintModule.OnGatherBlueprintMenuExtensions().AddStatic(&FDialogEditorToolbar::OnGatherExtensions);
}

void FDialogEditorToolbar::OnGatherExtensions(TSharedPtr<FExtender> Extender, UBlueprint* Blueprint)
{
    // This is called for all blueprint editors.
    // So first make sure we want to modify the toolbar for this one.
    if (Blueprint == nullptr)
        return;
    if (Blueprint->ParentClass == nullptr)
        return;
    if (Blueprint->ParentClass->IsChildOf(UDialogObject::StaticClass()) == false)
        return;

    auto* DialogBlueprint = Cast<UDialogBlueprint>(Blueprint);

    if (!DialogBlueprint)
        return;
 
    const FDialogEditorToolbarCommands& Commands = FDialogEditorToolbarCommands::Get();
 
    // This specific editor needs its own Command List with delegates that include the blueprint pointer
    TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList);
    CommandList->MapAction(Commands.BuildChoiceGraphData, FExecuteAction::CreateStatic(&FDialogEditorToolbar::OnBuildChoiceGraphData, DialogBlueprint));
 
    Extender->AddToolBarExtension(
        "Asset", 
        EExtensionHook::Before, 
        CommandList,
        FToolBarExtensionDelegate::CreateStatic(&FDialogEditorToolbar::ExtendToolBar, DialogBlueprint));
}

void FDialogEditorToolbar::ExtendToolBar(FToolBarBuilder& Builder, class UDialogBlueprint* Blueprint)
{
    FSlateIcon BuildChoiceGraphIcon =  FSlateIcon(
        "VNM",
        "ToolBarIcons.ChoiceGraphData", 
        "ToolBarIcons.ChoiceGraphData.Small");;
    
    const FDialogEditorToolbarCommands& Commands = FDialogEditorToolbarCommands::Get();

    Builder.BeginSection("VNM");
    
    Builder.AddToolBarButton(
        Commands.BuildChoiceGraphData,
        NAME_None, 
        TAttribute<FText>(),
        TAttribute<FText>(),
        BuildChoiceGraphIcon, 
        NAME_None);

    Builder.EndSection();
}

void FDialogEditorToolbar::OnBuildChoiceGraphData(UDialogBlueprint* Blueprint)
{
    if (!Blueprint)
    {
        return;
    }

    auto* DialogObject = Blueprint->GeneratedClass->GetDefaultObject<UDialogObject>();

    if (!DialogObject)
    {
        return;
    }
    
    auto* Graph = Blueprint->GetLastEditedUberGraph();

    TArray<UDialogStartNode*> DialogStartNodes;
    Graph->GetNodesOfClass(DialogStartNodes);

    if (DialogStartNodes.Num() == 0)
    {
        return;
    }
    
    Blueprint->MarkPackageDirty();

    auto* DialogStartNode = DialogStartNodes[0];

    FDialogData Choices = UDialogObjectNodesUtils::ConstructChoicesDataFromDialogStartNode(DialogStartNode);

    DialogObject->SetChoices(Choices);

    if (UVNMEditorSettings::GetVNMEditorSettings()->bSaveDialogBlueprintOnBuildingChoiceData)
    {
        FEditorFileUtils::PromptForCheckoutAndSave({Blueprint->GetOutermost()}, /*bCheckDirty =*/true, /*bPromptToSave =*/false);
    }
}

void FDialogEditorToolbarCommands::RegisterCommands()
{
    UI_COMMAND(BuildChoiceGraphData, "Build Choice Graph Data", "Builds the data needed to display the choices in this dialog object in the choice graph", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE