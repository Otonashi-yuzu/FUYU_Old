// Copyright (c) 2022 Al_Fe

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class VNMChoiceGraph : ModuleRules
	{
		public VNMChoiceGraph(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bUseUnity = false;
			
			PublicDependencyModuleNames.AddRange(new string[] { "VNM" });

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"Slate",
					"SlateCore",
					"VNM",
					"UMG",
					"DeveloperSettings"
                });

			if (Target.Type == TargetType.Editor)
			{
				PrivateDependencyModuleNames.AddRange(
					new string[] {
						"VNMEditor"
					});
			}
			
			
			PublicIncludePaths.Add(ModuleDirectory);
			PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*"));
			PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*"));
		}
	}
}