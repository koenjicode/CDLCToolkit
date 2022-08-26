#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoChangeCutType.generated.h"

UENUM(BlueprintType)
enum class ELuxIllustDemoChangeCutType : uint8 {
    CutIn,
    CutInU,
    CutInD,
    CutOut,
    CutOutU,
    CutOutD,
    SlideIn,
    SlideOut,
    FadeIn,
    FadeOut,
    None,
    ENUM_MAX UMETA(Hidden),
};

