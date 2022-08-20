#pragma once
#include "CoreMinimal.h"
#include "ELuxPersonalCommentVisibilityType.generated.h"

UENUM(BlueprintType)
enum class ELuxPersonalCommentVisibilityType : uint8 {
    PERSONAL_COMMENT_ON,
    PERSONAL_COMMENT_SELF_ONLY,
    PERSONAL_COMMENT_OPPONENT_ONLY,
    PERSONAL_COMMENT_OFF,
    ENUM_MAX UMETA(Hidden),
};

