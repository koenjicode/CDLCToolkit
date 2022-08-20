#pragma once
#include "CoreMinimal.h"
#include "ELuxSaveDataFlowResult.generated.h"

UENUM(BlueprintType)
enum class ELuxSaveDataFlowResult : uint8 {
    LOAD_SUCCESS,
    NEW_DATA,
    FAILURE,
};

