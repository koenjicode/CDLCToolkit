#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMovePlayRequest.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMovePlayRequest : uint8 {
    None,
    Play,
    Stop,
    Loop,
};

