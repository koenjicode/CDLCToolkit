#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleKey.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleKey : uint8 {
    EBK_A,
    EBK_B,
    EBK_K,
    EBK_G,
    EBK_START,
    EBK_FUNC,
    EBK_RIGHT,
    EBK_LEFT,
    EBK_DOWN,
    EBK_UP,
    EBK_MAX UMETA(Hidden),
};

