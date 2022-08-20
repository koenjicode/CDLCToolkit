#pragma once
#include "CoreMinimal.h"
#include "ELuxDSPBusSetting.generated.h"

UENUM(BlueprintType)
enum class ELuxDSPBusSetting : uint8 {
    Master,
    BGM,
    Reverb,
    SE_REAL,
    SE_SYMBOL,
    SE_STORY,
    SE_PARRYING,
    SE_FINISH,
    VO_1P,
    VO_2P,
    SE_HIT,
    SE_HIT_PARRYNG,
    ENUM_MAX UMETA(Hidden),
};

