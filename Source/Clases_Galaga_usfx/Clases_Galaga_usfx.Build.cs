// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Clases_Galaga_usfx : ModuleRules
{
	public Clases_Galaga_usfx(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
