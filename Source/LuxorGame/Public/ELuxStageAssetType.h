#pragma once
#include "CoreMinimal.h"
#include "ELuxStageAssetType.generated.h"

UENUM(BlueprintType)
enum class ELuxStageAssetType : uint8 {
    ESA_HitData,
    ESA_HitData2,
    ESA_IntroCameraData,
    ESA_StartCameraData,
    ENUM_MAX UMETA(Hidden),
};

