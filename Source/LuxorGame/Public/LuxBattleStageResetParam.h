#pragma once
#include "CoreMinimal.h"
#include "LuxBattleStageResetParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleStageResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWallBreakReset;
    
    FLuxBattleStageResetParam();
};

