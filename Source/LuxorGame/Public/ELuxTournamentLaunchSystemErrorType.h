#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentLaunchSystemErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentLaunchSystemErrorType : uint8 {
    ETLS_NO_ERROR,
    ETLS_INVALID_PLATFORM,
    ETLS_ARGUMENT_IS_NULL,
    ETLS_OPPONENT_ID_NOT_FOUND,
    ETLS_ERRROR,
    ETLS_MAX UMETA(Hidden),
};

