#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleFrameInput.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleFrameInput : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUpdateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatInterval;
    
    ALuxBattleFrameInput();
    UFUNCTION(BlueprintCallable)
    void OnTickWhenPaused();
    
};

