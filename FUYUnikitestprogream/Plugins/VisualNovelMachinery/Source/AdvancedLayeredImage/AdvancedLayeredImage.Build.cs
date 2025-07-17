// Copyright (c) 2022 Al_Fe

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class AdvancedLayeredImage : ModuleRules
	{
		public AdvancedLayeredImage(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bUseUnity = false;

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"Slate",
					"SlateCore",
					"UMG"
                });
			
			
			PublicIncludePaths.Add(ModuleDirectory);
			PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*"));
			PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*"));
		}
	}
}