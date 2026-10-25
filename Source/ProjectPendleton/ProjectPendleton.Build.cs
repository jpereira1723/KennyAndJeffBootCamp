// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectPendleton : ModuleRules
{
	public ProjectPendleton(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
            "Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProjectPendleton",
			"ProjectPendleton/Variant_Platforming",
			"ProjectPendleton/Variant_Platforming/Animation",
			"ProjectPendleton/Variant_Combat",
			"ProjectPendleton/Variant_Combat/AI",
			"ProjectPendleton/Variant_Combat/Animation",
			"ProjectPendleton/Variant_Combat/Gameplay",
			"ProjectPendleton/Variant_Combat/Interfaces",
			"ProjectPendleton/Variant_Combat/UI",
			"ProjectPendleton/Variant_SideScrolling",
			"ProjectPendleton/Variant_SideScrolling/AI",
			"ProjectPendleton/Variant_SideScrolling/Gameplay",
			"ProjectPendleton/Variant_SideScrolling/Interfaces",
			"ProjectPendleton/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
