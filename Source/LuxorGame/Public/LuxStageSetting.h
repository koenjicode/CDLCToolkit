#pragma once
#include "CoreMinimal.h"
#include "LuxStageSetting.generated.h"

USTRUCT(BlueprintType)
struct FLuxStageSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnomalyStageVFxEnabled;
    
    LUXORGAME_API FLuxStageSetting();
};

