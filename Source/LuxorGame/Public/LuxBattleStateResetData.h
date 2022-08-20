#pragma once
#include "CoreMinimal.h"
#include "LuxBattleRoundStartData.h"
#include "LuxBattleStateResetData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleStateResetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleRoundStartData> Rounds;
    
    FLuxBattleStateResetData();
};

