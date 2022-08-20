#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleHUDBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ALuxBattleHUDBase : public ALuxActor {
    GENERATED_BODY()
public:
    ALuxBattleHUDBase();
};

