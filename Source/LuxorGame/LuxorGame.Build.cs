using UnrealBuildTool;

public class LuxorGame : ModuleRules {
    public LuxorGame(ReadOnlyTargetRules Target) : base(Target) {
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
        });
    }
}
