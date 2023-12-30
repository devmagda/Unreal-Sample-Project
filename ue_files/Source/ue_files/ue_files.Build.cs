// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue_files : ModuleRules
{
	public ue_files(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
