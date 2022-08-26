#pragma once
#include "CoreMinimal.h"
#include "ELuxVoiceLanguage.generated.h"

UENUM(BlueprintType)
enum class ELuxVoiceLanguage : uint8 {
    ELN_JA,
    ELN_EN,
    ENUM_MAX UMETA(Hidden),
};

