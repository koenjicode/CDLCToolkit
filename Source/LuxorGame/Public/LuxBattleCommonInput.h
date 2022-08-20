#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleCommonInput.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleCommonInput : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUpdateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatInterval;
    
    ALuxBattleCommonInput();
    UFUNCTION(BlueprintCallable)
    void OnTickWhenPaused();
    
};

