// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectO : ModuleRules
{
	public ProjectO(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate",
			"GeometryCollectionEngine",
			"GameplayAbilities", 
			"GameplayTags",
			"GameplayTasks",
			"PhysicsCore"

		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			
		});

		PublicIncludePaths.AddRange(new string[] {
			"ProjectO",
			"ProjectO/Variant_Strategy",
			"ProjectO/Variant_Strategy/UI",
			"ProjectO/Variant_TwinStick",
			"ProjectO/Variant_TwinStick/AI",
			"ProjectO/Variant_TwinStick/Gameplay",
			"ProjectO/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
