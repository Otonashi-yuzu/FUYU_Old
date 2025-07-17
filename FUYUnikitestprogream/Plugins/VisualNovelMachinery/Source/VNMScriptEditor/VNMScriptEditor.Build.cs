using System.IO;
using UnrealBuildTool;

public class VNMScriptEditor : ModuleRules
{
    public VNMScriptEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bUseUnity = false;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", 
                "UnrealEd",
                "UMG"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
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
                "VNMEditor"
            });
        
        PublicIncludePaths.Add(ModuleDirectory);
        PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*", SearchOption.AllDirectories));
        PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*", SearchOption.AllDirectories));
    }
}