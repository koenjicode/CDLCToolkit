#pragma once
#include "CoreMinimal.h"
#include "ELuxPartsSEType.generated.h"

UENUM(BlueprintType)
enum class ELuxPartsSEType : uint8 {
    enPartsSETypeSwingWeapon,
    enPartsSETypeSwingKick,
    enPartsSETypeWalk,
    enPartsSETypeRun,
    enPartsSETypeJump,
    enPartsSETypeTouchDown,
    enPartsSETypeReversalEdge,
    enPartsSETypeOther,
    ENUM_MAX UMETA(Hidden),
};

