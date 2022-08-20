#pragma once
#include "CoreMinimal.h"
#include "ELuxShinEdgeMasterCaptureImageType.generated.h"

UENUM(BlueprintType)
enum class ELuxShinEdgeMasterCaptureImageType : uint8 {
    PlayerThumbnail,
    Pattern1,
    Pattern2,
    Pattern3,
    Pattern4,
    Num,
};

