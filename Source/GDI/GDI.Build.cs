// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GDI : ModuleRules
{
	public GDI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
