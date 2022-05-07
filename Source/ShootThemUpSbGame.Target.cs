// Shoot Them Up SB Game. All Rights Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class ShootThemUpSbGameTarget : TargetRules
{
	public ShootThemUpSbGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ShootThemUpSbGame" } );
	}
}
