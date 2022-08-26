#pragma once
#include "CoreMinimal.h"
#include "LuxBattleStageShipScendState.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleStageShipScendState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cycle;
    
    FLuxBattleStageShipScendState();
};

