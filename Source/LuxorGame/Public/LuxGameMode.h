#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LuxGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ALuxGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ALuxGameMode();
};

