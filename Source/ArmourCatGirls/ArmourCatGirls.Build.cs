// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class ArmourCatGirls : ModuleRules
{
	public ArmourCatGirls(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities" });
	}
}
