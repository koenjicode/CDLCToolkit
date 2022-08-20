#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentMatchListErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentMatchListErrorType : uint8 {
    ETM_NO_ERROR,
    ETM_ARGUMENT_NULL_ERROR,
    ETM_MATCH_LIST_REQUEST_ERROR,
    ETM_MATCH_DETAIL_REQUEST_ERROR,
    ETM_ERRROR,
    ETM_MAX UMETA(Hidden),
};

