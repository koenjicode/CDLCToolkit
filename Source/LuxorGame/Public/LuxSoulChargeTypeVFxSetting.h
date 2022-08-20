#pragma once
#include "CoreMinimal.h"
#include "LuxSoulChargeTypeVFxSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxSoulChargeTypeVFxSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaintID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EvilID;
    
    FLuxSoulChargeTypeVFxSetting();
};

