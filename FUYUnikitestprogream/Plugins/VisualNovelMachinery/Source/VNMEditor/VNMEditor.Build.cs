// Copyright (c) 2022 Al_Fe

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class VNMEditor : ModuleRules
	{
		public VNMEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bUseUnity = false;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"VNM",
                    "DeveloperSettings"
				});
			
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
                    "AdvancedLayeredImage"
				});
			
			
			PublicIncludePaths.Add(ModuleDirectory);
			PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*", SearchOption.AllDirectories));
			PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*", SearchOption.AllDirectories));
		}
	}
}