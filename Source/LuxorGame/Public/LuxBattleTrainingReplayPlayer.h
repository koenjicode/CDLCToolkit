#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleTrainingReplayPlayer.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleTrainingReplayPlayer : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
public:
    ALuxBattleTrainingReplayPlayer();
    UFUNCTION(BlueprintCallable)
    void RequestToStop();
    
    UFUNCTION(BlueprintCallable)
    void RequestToPlay(bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExisting() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearShortReplay();
    
};

