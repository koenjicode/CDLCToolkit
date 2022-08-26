#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialState : uint8 {
    TutorialStart,
    PartStart,
    PartText,
    DescriptionText,
    TaskText,
    Practice,
    Clear,
    ComplementText,
    PartEnd,
    TutorialEnd,
    ENUM_MAX UMETA(Hidden),
};

