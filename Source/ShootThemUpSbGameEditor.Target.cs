// Shoot Them Up SB Game. All Rights Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class ShootThemUpSbGameEditorTarget : TargetRules
{
	public ShootThemUpSbGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ShootThemUpSbGame" } );
	}
}
