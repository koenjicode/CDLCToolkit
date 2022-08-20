#pragma once
#include "CoreMinimal.h"
#include "ELuxTournamentBattleResultType.generated.h"

UENUM(BlueprintType)
enum class ELuxTournamentBattleResultType : uint8 {
    ETBR_WIN,
    ETBR_LOSE,
    ETBR_DRAW,
    ETBR_ERROR,
    ETBR_MAX UMETA(Hidden),
};

