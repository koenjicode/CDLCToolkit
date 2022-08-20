#pragma once
#include "CoreMinimal.h"
#include "ELuxGender.generated.h"

UENUM(BlueprintType)
enum class ELuxGender : uint8 {
    ELG_MALE,
    ELG_FEMALE,
    ELG_NEUTRAL,
    ENUM_MAX UMETA(Hidden),
};

