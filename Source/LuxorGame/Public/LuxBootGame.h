#pragma once
#include "CoreMinimal.h"
#include "LuxGameMode.h"
#include "LuxBootGame.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ALuxBootGame : public ALuxGameMode {
    GENERATED_BODY()
public:
    ALuxBootGame();
};

