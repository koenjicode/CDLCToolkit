#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleOnlineState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleOnlineState : uint8 {
    Begin,
    Wait,
    Play,
    Spectate,
    Stop,
    End,
    Num,
    Unknown,
};

