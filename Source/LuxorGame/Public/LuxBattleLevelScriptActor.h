#pragma once
#include "CoreMinimal.h"
#include "LuxLevelScriptActor.h"
#include "LuxBattleLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleLevelScriptActor : public ALuxLevelScriptActor {
    GENERATED_BODY()
public:
    ALuxBattleLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAstral(bool WithHole);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlueprintRandomSeed(int32 RandomSeed, bool IsStageIntro);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessExtraStageParam(const FString& ExtraStageParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundStarted(int32 CurrentRound);
    
};

