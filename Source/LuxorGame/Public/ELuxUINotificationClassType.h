#pragma once
#include "CoreMinimal.h"
#include "ELuxUINotificationClassType.generated.h"

UENUM(BlueprintType)
enum class ELuxUINotificationClassType : uint8 {
    Error,
    Information,
    NewRelease,
};

