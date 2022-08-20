#pragma once
#include "CoreMinimal.h"
#include "ELuxEyeWatch.generated.h"

UENUM(BlueprintType)
enum class ELuxEyeWatch : uint8 {
    EYE_WATCH_NOTHING,
    EYE_WATCH_AUTO,
    EYE_WATCH_CAMERA,
    EYE_WATCH_ENEMY,
    EYE_WATCH_TARGET,
    EYE_WATCH_PLAYER_OBJECT,
    EYE_WATCH_ENEMY_OBJECT,
    ENUM_MAX UMETA(Hidden),
};

