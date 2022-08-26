#pragma once
#include "CoreMinimal.h"
#include "ELuxPartsBreak.generated.h"

UENUM(BlueprintType)
enum class ELuxPartsBreak : uint8 {
    EPB_HIGH,
    EPB_MID,
    EPB_LOW,
    EPB_NULL,
    ENUM_MAX UMETA(Hidden),
};

