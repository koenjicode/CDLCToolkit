#pragma once
#include "CoreMinimal.h"
#include "LuxBattleOptionParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleOptionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputDelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputLagMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputLagMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputLagOffset;
    
    FLuxBattleOptionParam();
};

