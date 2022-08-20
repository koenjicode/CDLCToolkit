#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxStopVoiceParam.h"
#include "LuxStopSEParam.h"
#include "LuxPlayVoiceParam.h"
#include "LuxPlaySEParam.h"
#include "LuxBattleSoundEventHandler.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleSoundEventHandler : public ALuxActor {
    GENERATED_BODY()
public:
    ALuxBattleSoundEventHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopVoice(const FLuxStopVoiceParam& inEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopSE(const FLuxStopSEParam& inEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayVoice(const FLuxPlayVoiceParam& inEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlaySE(const FLuxPlaySEParam& inEvent);
    
};

