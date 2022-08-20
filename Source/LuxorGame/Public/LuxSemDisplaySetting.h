#pragma once
#include "CoreMinimal.h"
#include "LuxSemDisplaySetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxSemDisplaySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAttackAttrInfo;
    
    FLuxSemDisplaySetting();
};

