#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentInfoDateStatus.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentInfoDateStatus : uint8 {
    ETDS_TOURNAMENT_REGISTRATION,
    ETDS_TOURNAMENT_CHECK_IN,
    ETDS_TOURNAMENT_HOLDING,
    ETDS_TOURNAMENT_END,
    ETDS_TOURNAMENT_MAX UMETA(Hidden),
};

