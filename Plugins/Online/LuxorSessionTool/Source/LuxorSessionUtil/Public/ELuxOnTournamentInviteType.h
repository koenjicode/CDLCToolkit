#pragma once
#include "CoreMinimal.h"
#include "ELuxOnTournamentInviteType.generated.h"

UENUM(BlueprintType)
enum class ELuxOnTournamentInviteType : uint8 {
    ETIT_TOURNAMENT,
    ETIT_TOURNAMENT_MATCH,
    ETIT_MAX UMETA(Hidden),
};

