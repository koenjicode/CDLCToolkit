#pragma once
#include "CoreMinimal.h"
#include "ELuxStickerGuide.generated.h"

UENUM(BlueprintType)
enum class ELuxStickerGuide : uint8 {
    ESG_Head,
    ESG_Body,
    ESG_LeftArm,
    ESG_RightArm,
    ESG_Waist,
    ESG_LeftLeg,
    ESG_RightLeg,
    ESG_All,
    ENUM_MAX UMETA(Hidden),
};

