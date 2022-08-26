#pragma once
#include "CoreMinimal.h"
#include "LuxStageBGMSetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxStageBGMSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> StageBGMPairList;
    
    FLuxStageBGMSetting();
};

