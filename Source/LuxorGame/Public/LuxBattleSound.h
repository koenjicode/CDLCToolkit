#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleSound.generated.h"

class ULuxBusDackingDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleSound : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBusDackingDataAsset* BusDackingDataAsset;
    
public:
    ALuxBattleSound();
    UFUNCTION(BlueprintCallable)
    void OnTickWhenPaused();
    
    UFUNCTION(BlueprintCallable)
    void OnSoundStreamingLevelShownn();
    
};

