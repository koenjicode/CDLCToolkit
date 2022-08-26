#pragma once
#include "CoreMinimal.h"
#include "ELuxVSyncType.generated.h"

UENUM(BlueprintType)
enum class ELuxVSyncType : uint8 {
    V_SYNC_ON,
    V_SYNC_OFF,
    ENUM_MAX UMETA(Hidden),
};

