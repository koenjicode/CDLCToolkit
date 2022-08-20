#pragma once
#include "CoreMinimal.h"
#include "LuxSoulChargeTypeVFxSetting.h"
#include "LuxSoulChargeVFxSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxSoulChargeVFxSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSoulChargeTypeVFxSetting Setting;
    
    FLuxSoulChargeVFxSetting();
};

