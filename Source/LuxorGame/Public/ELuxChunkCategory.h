#pragma once
#include "CoreMinimal.h"
#include "ELuxChunkCategory.generated.h"

UENUM(BlueprintType)
enum class ELuxChunkCategory : uint8 {
    ECC_Chronicle,
    ECC_ShinEdgeMaster,
    ECC_DLC3,
    ECC_DLC4,
    ECC_DLC5,
    ECC_DLC6,
    ECC_DLC7,
    ECC_DLC8,
    ECC_DLC9,
    ECC_DLC10,
    ECC_DLC11,
    ECC_DLC12,
    ECC_DLC13,
    ECC_DLC14,
    ENUM_MAX UMETA(Hidden),
};

