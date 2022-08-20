#pragma once
#include "CoreMinimal.h"
#include "LuxBattleRoundResult.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleRoundResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinnerIndex;
    
    FLuxBattleRoundResult();
};

