#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "LuxBattleVariableAI.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleVariableAI : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ConditionFlags;
    
public:
    ALuxBattleVariableAI();
};

