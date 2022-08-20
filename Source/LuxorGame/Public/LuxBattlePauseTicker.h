#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "OnBattleTickWhenPausedDelegate.h"
#include "LuxBattlePauseTicker.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattlePauseTicker : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleTickWhenPaused PauseTickDelegate;
    
    ALuxBattlePauseTicker();
};

