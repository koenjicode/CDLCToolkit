#pragma once
#include "CoreMinimal.h"
#include "EDMShowFlag.generated.h"

UENUM(BlueprintType)
enum class EDMShowFlag : uint8 {
    EDF_StaticMesh,
    EDF_SkeletalMesh,
    EDF_Particle,
    EDF_HeightFog,
    EDF_AtmosphericFog,
    EDF_MAX UMETA(Hidden),
};

