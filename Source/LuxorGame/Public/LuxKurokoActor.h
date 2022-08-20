#pragma once
#include "CoreMinimal.h"
#include "LuxStageSkeletalMeshActor.h"
#include "ELuxFightStyle.h"
#include "LuxKurokoActor.generated.h"

UCLASS(Blueprintable)
class ALuxKurokoActor : public ALuxStageSkeletalMeshActor {
    GENERATED_BODY()
public:
    ALuxKurokoActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResultWinStarted(ELuxFightStyle STYLE, int32 PlayerId, int32 enshutuId, bool is_debug);
    
};

