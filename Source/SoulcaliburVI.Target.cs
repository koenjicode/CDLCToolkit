using UnrealBuildTool;

public class SoulcaliburVITarget : TargetRules {
	public SoulcaliburVITarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"LuxorGame",
		});
	}
}
