// Copyright (c) 2022 Al_Fe

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class VNM : ModuleRules
	{
		public VNM(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bUseUnity = false;


			PublicDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"UMG",
					"Slate",
					"SlateCore",
					"Json",
					"JsonUtilities",
					"AdvancedLayeredImage",
					"CinematicCamera",
					"Projects",
					"InputCore",
					"DeveloperSettings"
				});

			PrivateDependencyModuleNames.AddRange(
				new string[] {
				});
			
			PublicIncludePaths.Add(ModuleDirectory);
			PublicIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Public"), "*", SearchOption.AllDirectories));
			PrivateIncludePaths.AddRange(Directory.GetDirectories(Path.Combine(ModuleDirectory, "Private"), "*", SearchOption.AllDirectories));
			
			PublicDefinitions.Add("ENABLE_ROLLBACK=1");
			
		}
	}
}