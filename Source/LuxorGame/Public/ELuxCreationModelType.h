#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationModelType.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationModelType : uint8 {
    Common,
    Model1P,
    Model2P,
    Num,
};

