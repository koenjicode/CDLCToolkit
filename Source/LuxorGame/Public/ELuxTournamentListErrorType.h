#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentListErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentListErrorType : uint8 {
    ETL_NO_ERROR,
    ETL_TOURNAMENT_LIST_REQUEST_ERROR,
    ETL_TOURNAMENT_DETAIL_REQUEST_ERROR,
    ETL_ERRROR,
    ETL_MAX UMETA(Hidden),
};

