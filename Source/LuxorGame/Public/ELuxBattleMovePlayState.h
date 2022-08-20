#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMovePlayState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMovePlayState : uint8 {
    NotPlaying,
    Playing_1P,
    Playing_2P,
};

