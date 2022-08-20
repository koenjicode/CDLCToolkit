#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "OnBattleNoticeEventDelegate.h"
#include "LuxNoticeEventListener.generated.h"

UCLASS(Blueprintable)
class ALuxNoticeEventListener : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleNoticeEvent OnBattleNoticeEvent;
    
    ALuxNoticeEventListener();
};

