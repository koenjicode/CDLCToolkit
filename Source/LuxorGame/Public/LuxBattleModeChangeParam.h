#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMode.h"
#include "LuxBattleModeChangeParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleModeChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMode BattleMode;
    
    FLuxBattleModeChangeParam();
};

