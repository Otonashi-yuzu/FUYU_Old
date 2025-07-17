// Copyright (c) 2022 Al_Fe

#pragma once
#include "UnrealEd.h"

class FDialogEditorToolbar
{
public:
    static void Initialize();
 
protected:
    static void OnGatherExtensions(TSharedPtr<FExtender> Extender, UBlueprint* Blueprint);
 
    static void ExtendToolBar(class FToolBarBuilder& Builder, class UDialogBlueprint* Blueprint);

    static void OnBuildChoiceGraphData(class UDialogBlueprint* Blueprint);
};

class FDialogEditorToolbarCommands : public TCommands<FDialogEditorToolbarCommands>
{
public:
    FDialogEditorToolbarCommands()
        : TCommands<FDialogEditorToolbarCommands>(
            TEXT("Dialogues"), // Context name for fast lookup
            NSLOCTEXT("Contexts", "DialogObject", "Dialogue Blueprint Editor"), // Localized context name for displaying
            NAME_None, // Parent
            "VNM"
            ) { }
 
    // TCommand<> interface
    virtual void RegisterCommands() override;
    // End of TCommand<> interface

    TSharedPtr<FUICommandInfo> BuildChoiceGraphData;
};
