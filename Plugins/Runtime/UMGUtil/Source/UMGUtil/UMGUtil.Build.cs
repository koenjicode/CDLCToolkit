using UnrealBuildTool;

public class UMGUtil : ModuleRules {
    public UMGUtil(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
