#pragma once
#include "CoreMinimal.h"
#include "ELuxCeBankPlayModeType.generated.h"

UENUM(BlueprintType)
enum class ELuxCeBankPlayModeType : uint8 {
    ECBPMT_RANKED_MATCH,
    ECBPMT_CASUAL_MATCH,
    ECBPMT_RANKING,
    ECBPMT_REPLAY,
    ECBPMT_TOURNAMENT,
    ECBPMT_LIBRA,
    ECBPMT_STORY,
    ECBPMT_CREATION,
    ECBPMT_ARCADE,
    ECBPMT_VS,
    ECBPMT_TRAINING,
    ECBPMT_MUSEUM,
    ECBPMT_MAX UMETA(Hidden),
};

