#pragma once
#include "CoreMinimal.h"
#include "ELuxOffsetPartsSymmetryFlag.generated.h"

UENUM(BlueprintType)
enum class ELuxOffsetPartsSymmetryFlag : uint8 {
    EOS_TRANS_X,
    EOS_TRANS_Y,
    EOS_TRANS_Z,
    EOS_ROTATE_X,
    EOS_ROTATE_Y,
    EOS_ROTATE_Z,
    ENUM_MAX UMETA(Hidden),
};

