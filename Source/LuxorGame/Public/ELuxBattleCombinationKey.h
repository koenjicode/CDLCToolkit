#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleCombinationKey.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleCombinationKey : uint8 {
    EBCK_A,
    EBCK_B,
    EBCK_K,
    EBCK_G,
    EBCK_START,
    EBCK_FUNC,
    EBCK_RIGHT,
    EBCK_LEFT,
    EBCK_DOWN,
    EBCK_UP,
    EBCK_AB,
    EBCK_AK,
    EBCK_AG,
    EBCK_BK,
    EBCK_BG,
    EBCK_KG,
    EBCK_ABK,
    EBCK_ABKG,
    ENUM_MAX UMETA(Hidden),
};

