#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleEventListener.generated.h"

class ULuxBattleEventListenerHub;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleEventListener : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleEventListenerHub* EventListnerHub;
    
public:
    ALuxBattleEventListener();
};

