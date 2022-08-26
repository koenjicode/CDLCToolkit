#pragma once
#include "CoreMinimal.h"
#include "LuxBattleRoundResult.h"
#include "LuxBattleMatchResult.h"
#include "LuxBattleResult.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRoundResult Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleMatchResult Match;
    
    FLuxBattleResult();
};

