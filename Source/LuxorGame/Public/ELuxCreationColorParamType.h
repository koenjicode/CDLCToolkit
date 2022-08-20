#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationColorParamType.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationColorParamType : uint8 {
    Color1,
    Color2,
    Color3,
    Color4,
    Emission1,
    Emission2,
    Emission3,
    Emission4,
    Num,
    None,
};

