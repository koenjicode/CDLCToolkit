#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationMaterialType.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationMaterialType : uint8 {
    ECMT_UNKNOWN,
    ECMT_DEFAULT,
    ECMT_SKIN,
    ECMT_EYE,
    ECMT_HAIR,
    ECMT_EYEBROW,
    ECMT_BEARD,
    ENUM_MAX UMETA(Hidden),
};

