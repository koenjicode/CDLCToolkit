#pragma once
#include "CoreMinimal.h"
#include "ELuxTraceKindId.generated.h"

UENUM(BlueprintType)
enum class ELuxTraceKindId : uint8 {
    TRC_KIND_NONE,
    TRC_KIND_AUTO,
    TRC_KIND_NORMAL,
    TRC_KIND_TUBE,
    TRC_KIND_LINE,
    TRC_KIND_THUNDER,
    TRC_KIND_WIND,
    TRC_KIND_FLAME,
    TRC_KIND_LIGHT,
    TRC_KIND_PFLAME,
    TRC_KIND_PSMOKE,
    TRC_KIND_PBURN,
    TRC_KIND_PLIGHT,
    TRC_KIND_PFLAME_L,
    TRC_KIND_PSMOKE_L,
    TRC_KIND_PBURN_L,
    TRC_KIND_PLIGHT_L,
    TRC_KIND_PDUST,
    TRC_KIND_PDUST_L,
    TRC_KIND_PAURA,
    TRC_KIND_PAURA_L,
    TRC_KIND_SPARK,
    TRC_KIND_FIRE_S,
    TRC_KIND_PTHUNDER,
    TRC_KIND_PWIND,
    TRC_KIND_LIGHTSABER,
    TRC_KIND_KICK,
    TRC_KIND_ULTIMATE_EDGE,
    TRC_KIND_ULTIMATE_CALIBUR,
    TRC_KIND_NORMAL_S,
    TRC_KIND_NORMAL_M,
    TRC_KIND_NORMAL_L,
    TRC_KIND_PTHUNDER_PINK,
    TRC_KIND_PTHUNDER_RED,
    TRC_KIND_CHARGE_NORMAL_S,
    TRC_KIND_CHARGE_NORMAL_M,
    TRC_KIND_CHARGE_NORMAL_L,
    TRC_KIND_CHARGE_PFLAME,
    TRC_KIND_CHARGE_PTHUNDER,
    TRC_KIND_CHARGE_PTHUNDER_PINK,
    TRC_KIND_CHARGE_PTHUNDER_RED,
    TRC_KIND_CE_01,
    TRC_KIND_CE_02,
    TRC_KIND_CE_03,
    TRC_KIND_SP_01,
    TRC_KIND_SP_02,
    TRC_KIND_SP_03,
    TRC_KIND_SP_04,
    TRC_KIND_MAX UMETA(Hidden),
};
