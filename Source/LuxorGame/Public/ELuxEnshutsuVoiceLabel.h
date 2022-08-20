#pragma once
#include "CoreMinimal.h"
#include "ELuxEnshutsuVoiceLabel.generated.h"

UENUM(BlueprintType)
enum class ELuxEnshutsuVoiceLabel : uint8 {
    EEV_APPEARANCE_ST,
    EEV_APPEARANCE_RE,
    EEV_SP_APPEARANCE,
    EEV_WIN,
    EEV_SP_WIN,
    EEV_LOSE = 0x25,
    ENUM_MAX UMETA(Hidden),
};

