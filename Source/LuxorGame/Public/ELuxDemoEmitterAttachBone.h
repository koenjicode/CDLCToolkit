#pragma once
#include "CoreMinimal.h"
#include "ELuxDemoEmitterAttachBone.generated.h"

UENUM(BlueprintType)
enum class ELuxDemoEmitterAttachBone : uint8 {
    EAB_BASE,
    EAB_HARA,
    EAB_MUNE1,
    EAB_MUNE2,
    EAB_KUBI,
    EAB_ATAMA,
    EAB_SAKOTSU_R,
    EAB_KATA_R,
    EAB_UDE_R,
    EAB_TE_R,
    EAB_SAKOTSU_L,
    EAB_KATA_L,
    EAB_UDE_L,
    EAB_TE_L,
    EAB_KOSHI,
    EAB_MOMO_R,
    EAB_HIZA_R,
    EAB_ASHI_R,
    EAB_TSUMASAKI_R,
    EAB_MOMO_L,
    EAB_HIZA_L,
    EAB_ASHI_L,
    EAB_TSUMASAKI_L,
    EAB_WEAPON1,
    EAB_WEAPON2,
    EAB_WEAPON3,
    EAB_WEAPON4,
    EAB_WEAPON5,
    EAB_WEAPON6,
    EAB_WEAPON7,
    EAB_WEAPON8,
    EAB_WEAPON9,
    EAB_EYE_R = 0x43,
    EAB_EYE_L = 0x4F,
    ENUM_MAX UMETA(Hidden),
};

