#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationMenuOptionSelectEditItem.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationMenuOptionSelectEditItem : uint8 {
    Display,
    TestPlay,
    BGMConfig,
    PartsBreakUpper,
    PartsBreakMiddle,
    PartsBreakLower,
    Close,
    Num,
};

