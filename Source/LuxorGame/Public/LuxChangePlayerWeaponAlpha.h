#pragma once
#include "CoreMinimal.h"
#include "LuxChangePlayerWeaponAlpha.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxChangePlayerWeaponAlpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    FLuxChangePlayerWeaponAlpha();
};

