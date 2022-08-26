#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "OnInputKeyEventDelegate.h"
#include "LuxInputKeyEventListener.generated.h"

UCLASS(Blueprintable)
class ALuxInputKeyEventListener : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputKeyEvent OnInputKeyEvent;
    
    ALuxInputKeyEventListener();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTargetPlayer(int32 PlayerIndex);
    
};

