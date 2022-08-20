#pragma once
#include "CoreMinimal.h"
#include "ELuxKeyState.generated.h"

UENUM(BlueprintType)
enum class ELuxKeyState : uint8 {
    EKS_NEUTRAL,
    EKS_PRESS_A,
    EKS_DOWN_A,
    EKS_PRESS_B,
    EKS_DOWN_B,
    EKS_PRESS_K,
    EKS_DOWN_K,
    EKS_PRESS_G,
    EKS_DOWN_G,
    EKS_PRESS_UP,
    EKS_DOWN_UP,
    EKS_PRESS_UP_RIGHT,
    EKS_DOWN_UP_RIGHT,
    EKS_PRESS_RIGHT,
    EKS_DOWN_RIGHT,
    EKS_PRESS_DOWN_RIGHT,
    EKS_DOWN_DOWN_RIGHT,
    EKS_PRESS_DOWN,
    EKS_DOWN_DOWN,
    EKS_PRESS_DOWN_LEFT,
    EKS_DOWN_DOWN_LEFT,
    EKS_PRESS_LEFT,
    EKS_DOWN_LEFT,
    EKS_PRESS_UP_LEFT,
    EKS_DOWN_UP_LEFT,
    ENUM_MAX UMETA(Hidden),
};

