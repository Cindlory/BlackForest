// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlackForest : ModuleRules
{
	public BlackForest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
