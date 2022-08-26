#pragma once
#include "CoreMinimal.h"
#include "ELuxEffectCategory.generated.h"

UENUM(BlueprintType)
enum class ELuxEffectCategory : uint8 {
    EEC_Common,
    EEC_Stage,
    EEC_Chara,
    EEC_Etc,
    ENUM_MAX UMETA(Hidden),
    EEC_Invalid,
};

