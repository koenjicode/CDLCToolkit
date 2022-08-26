#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectBankType.generated.h"

UENUM(BlueprintType)
enum class ELuxEffectBankType : uint8 {
    EFB_Common,
    EFB_Character1P,
    EFB_Character2P,
    EFB_Weapon1P,
    EFB_Weapon2P,
    EFB_Stage,
    EFB_Special1_1P,
    EFB_Special1_2P,
    EFB_Special2_1P,
    EFB_Special2_2P,
    EFB_Special3_1P,
    EFB_Special3_2P,
    EFB_Special4_1P,
    EFB_Special4_2P,
    ENUM_MAX UMETA(Hidden),
};

