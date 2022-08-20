#pragma once
#include "CoreMinimal.h"
#include "EUIDSObjectStoreMode.generated.h"

UENUM(BlueprintType)
enum class EUIDSObjectStoreMode : uint8 {
    READONLY,
    READWRITE,
};

