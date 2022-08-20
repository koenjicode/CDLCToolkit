#pragma once
#include "CoreMinimal.h"
#include "ELuxStickerMode.generated.h"

UENUM(BlueprintType)
enum class ELuxStickerMode : uint8 {
    ESM_Orthogonal,
    ESM_Cylindrical,
    ENUM_MAX UMETA(Hidden),
};

