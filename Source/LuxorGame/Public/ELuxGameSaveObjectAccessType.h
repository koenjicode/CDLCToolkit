#pragma once
#include "CoreMinimal.h"
#include "ELuxGameSaveObjectAccessType.generated.h"

UENUM(BlueprintType)
enum class ELuxGameSaveObjectAccessType : uint8 {
    ReadOnly,
    ReadWrite,
};

