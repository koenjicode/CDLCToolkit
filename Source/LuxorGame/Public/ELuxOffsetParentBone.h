#pragma once
#include "CoreMinimal.h"
#include "ELuxOffsetParentBone.generated.h"

UENUM(BlueprintType)
enum class ELuxOffsetParentBone : uint8 {
    EPB_HEAD,
    EPB_CLAVICLE_R,
    EPB_CLAVICLE_L,
    EPB_SHOULDER_R,
    EPB_SHOULDER_L,
    EPB_BREAST,
    EPB_ARM_R,
    EPB_ARM_L,
    EPB_HAND_R,
    EPB_HAND_L,
    EPB_WAIST,
    EPB_THIGH_R,
    EPB_THIGH_L,
    EPB_KNEE_R,
    EPB_KNEE_L,
    EPB_FOOT_R,
    EPB_FOOT_L,
    ENUM_MAX UMETA(Hidden),
};

