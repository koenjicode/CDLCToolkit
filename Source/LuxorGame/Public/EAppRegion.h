#pragma once
#include "CoreMinimal.h"
#include "EAppRegion.generated.h"

UENUM(BlueprintType)
enum class EAppRegion : uint8 {
    ALL,
    JPN,
    USA,
    EUR,
    ASIA,
};

