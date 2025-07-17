using UnrealBuildTool;

public class YarnImporterEditor : ModuleRules
{
    public YarnImporterEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Json",
                "UnrealEd",
                "DeveloperSettings",
                "BlueprintGraph",
                "UMG"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "VNMEditor",
                "VNM", 
                "VNMScriptEditor", 
                "YarnUtils",
            }
        );
    }
}