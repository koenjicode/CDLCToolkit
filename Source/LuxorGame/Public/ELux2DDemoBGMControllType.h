#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoBGMControllType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoBGMControllType : uint8 {
    Play,
    Stop,
    ENUM_MAX UMETA(Hidden),
};

