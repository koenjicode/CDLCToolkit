using UnrealBuildTool;

public class SoulcaliburVIEditorTarget : TargetRules {
	public SoulcaliburVIEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"LuxorGame",
		});
	}
}
