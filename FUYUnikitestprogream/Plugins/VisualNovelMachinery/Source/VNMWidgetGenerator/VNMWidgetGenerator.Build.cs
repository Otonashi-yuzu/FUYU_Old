using UnrealBuildTool;

public class VNMWidgetGenerator : ModuleRules
{
    public VNMWidgetGenerator(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "UnrealEd",
                "UMG"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Engine",
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "Slate",
                "SlateCore",
                "BlueprintGraph",
                "Kismet",
                "KismetCompiler",
                "GraphEditor",
                "VNM",
                "Projects",
                "PropertyEditor",
                "EditorStyle",
                "InputCore",
                "ToolMenus",
                "AssetTools", 
                "EditorWidgets",
                "UMG",
                "UMGEditor",
                "MovieScene",
                "AdvancedLayeredImage",
                "VNMEditor",
                "VNMChoiceGraph"
            }
        );
    }
}