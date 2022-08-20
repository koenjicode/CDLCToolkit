#pragma once
#include "CoreMinimal.h"
#include "ELuxSEBankType.generated.h"

UENUM(BlueprintType)
enum class ELuxSEBankType : uint8 {
    ESB_Common,
    ESB_Character1P,
    ESB_Character2P,
    ESB_Stage,
    ESB_StageVFX1,
    ESB_StageVFX2,
    ESB_StageVFX3,
    ENUM_MAX UMETA(Hidden),
};

