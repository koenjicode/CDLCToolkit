#pragma once
#include "CoreMinimal.h"
#include "LuxBattleStageShipScendParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleStageShipScendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollCoeffMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollCoeffMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CycleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CycleMax;
    
    FLuxBattleStageShipScendParam();
};

