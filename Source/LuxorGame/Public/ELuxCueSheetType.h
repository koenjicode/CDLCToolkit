#pragma once
#include "CoreMinimal.h"
#include "ELuxCueSheetType.generated.h"

UENUM(BlueprintType)
enum class ELuxCueSheetType : uint8 {
    ESCS_CMN,
    ESCS_GROUND,
    ESCS_BACK_GROUND,
    ESCS_FOLEY,
    ESCS_PLAYER_ONE_WEAPON,
    ESCS_PLAYER_TWO_WEAPON,
    ESCS_VO_CMN,
    ESCS_PLAYER_ONE,
    ESCS_PLAYER_TWO,
    ESCS_DRAMATIC_VOICE,
    ESCS_PLAYER_ONE_OPTION,
    ESCS_PLAYER_TWO_OPTION,
    ENUM_MAX UMETA(Hidden),
};

