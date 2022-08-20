#pragma once
#include "CoreMinimal.h"
#include "ELuxSkitSpeakerSide.generated.h"

UENUM(BlueprintType)
enum class ELuxSkitSpeakerSide : uint8 {
    Left,
    Right,
    ENUM_MAX UMETA(Hidden),
};

