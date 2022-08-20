#pragma once
#include "CoreMinimal.h"
#include "ELuxToneQualityType.generated.h"

UENUM(BlueprintType)
enum class ELuxToneQualityType : uint8 {
    TONE_QUALITY_DEFAULT,
    TONE_QUALITY_BLANK_1,
    TONE_QUALITY_BLANK_2,
    TONE_QUALITY_BLANK_3,
    TONE_QUALITY_BLANK_4,
    ENUM_MAX UMETA(Hidden),
};

