// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CaptureTheFlag : ModuleRules
{
	public CaptureTheFlag(ReadOnlyTargetRules Target) : base(Target)
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
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CaptureTheFlag",
			"CaptureTheFlag/Variant_Horror",
			"CaptureTheFlag/Variant_Horror/UI",
			"CaptureTheFlag/Variant_Shooter",
			"CaptureTheFlag/Variant_Shooter/AI",
			"CaptureTheFlag/Variant_Shooter/UI",
			"CaptureTheFlag/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
