#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleStepMode.h"
#include "LuxBattlePauseController.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattlePauseController : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleStepMode StepMode;
    
    ALuxBattlePauseController();
    UFUNCTION(BlueprintCallable)
    void OnTickWhenPaused();
    
};

