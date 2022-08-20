#pragma once
#include "CoreMinimal.h"
#include "LuxBattleInfoResetParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleInfoResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BattlePoint;
    
    FLuxBattleInfoResetParam();
};

