using UnrealBuildTool;

public class LuxorGameEd : ModuleRules {
    public LuxorGameEd(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "InputCore",
            "LuxorGame",
            "LuxorSessionUtil",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "Networking",
            "Sockets",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
            "UMGUtil",
			"UnrealEd",
        });
    }
}
