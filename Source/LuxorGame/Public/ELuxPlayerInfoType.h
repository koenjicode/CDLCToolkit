#pragma once
#include "CoreMinimal.h"
#include "ELuxPlayerInfoType.generated.h"

UENUM(BlueprintType)
enum class ELuxPlayerInfoType : uint8 {
    EPI_Immortality,
    EPI_SoulGaugeInfinity,
    EPI_SoulGaugeValue,
    EPI_GuardGaugeInfinity,
    EPI_GuardGaugeValue,
    EPI_SoulChargeTimeInfinity,
    EPI_SoulChargeTimeValue,
    EPI_ForceCounterType,
    EPI_ForceSmashHit,
    EPI_CpuType,
    EPI_CpuRankLevel,
    EPI_CpuWazaLevel,
    EPI_CpuPersonality,
    EPI_CpuAirControl,
    EPI_CpuUkemiDirection,
    EPI_BattlePointMax,
    EPI_BattlePoint,
    EPI_InCombo,
    ENUM_MAX UMETA(Hidden),
};

