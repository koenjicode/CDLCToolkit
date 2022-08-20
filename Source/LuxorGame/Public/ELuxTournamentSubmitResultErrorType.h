#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentSubmitResultErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentSubmitResultErrorType : uint8 {
    ETR_NO_ERROR,
    ETR_ARGUMENT_NULL_ERROR,
    ETR_INVALID_WIN_PLAYER_INDEX_ERROR,
    ETR_SUBMIT_RESULT_ERROR,
    ETR_ERRROR,
    ETR_MAX UMETA(Hidden),
};

