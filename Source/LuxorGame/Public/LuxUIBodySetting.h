#pragma once
#include "CoreMinimal.h"
#include "ELuxBodyScale.h"
#include "LuxUIBodySetting.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIBodySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ELuxBodyScale, int32> bodySetting;
    
    LUXORGAME_API FLuxUIBodySetting();
};

