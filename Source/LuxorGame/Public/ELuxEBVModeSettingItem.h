#pragma once
#include "CoreMinimal.h"
#include "ELuxEBVModeSettingItem.generated.h"

UENUM(BlueprintType)
enum class ELuxEBVModeSettingItem : uint8 {
    EBV_MODE_EDGE_MASTER,
    EBV_MODE_CHRONICLE_STORY,
    EBV_MODE_CREATION,
    EBV_MODE_VERSUS,
    EBV_MODE_ARCADE,
    EBV_MODE_TRAINING,
    EBV_MODE_SETTING_RESET,
    ENUM_MAX UMETA(Hidden),
};

