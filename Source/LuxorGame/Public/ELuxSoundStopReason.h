#pragma once
#include "CoreMinimal.h"
#include "ELuxSoundStopReason.generated.h"

UENUM(BlueprintType)
enum class ELuxSoundStopReason : uint8 {
    ESS_IntroEnshutsu,
    ESS_OutroEnshutsu,
    ENUM_MAX UMETA(Hidden),
};

