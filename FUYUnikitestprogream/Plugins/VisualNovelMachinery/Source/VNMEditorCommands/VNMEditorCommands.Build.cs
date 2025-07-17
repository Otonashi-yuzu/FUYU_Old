// Copyright (c) 2022 Al_Fe

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class VNMEditorCommands : ModuleRules
	{
		public VNMEditorCommands(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bUseUnity = false;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"UMG"
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[] {
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
					"VNMEditor",
					"Projects",
					"PropertyEditor",
					"EditorStyle",
					"InputCore",
                    "ToolMenus",
                    "AssetTools"
                });
			
			
			PublicIncludePaths.Add(ModuleDirectory);
			PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*"));
			PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*"));
		}
	}
}