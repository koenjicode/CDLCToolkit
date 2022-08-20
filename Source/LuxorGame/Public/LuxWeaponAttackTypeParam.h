#pragma once
#include "CoreMinimal.h"
#include "LuxWeaponAttackTypeParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxWeaponAttackTypeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponPartIndex;
    
    FLuxWeaponAttackTypeParam();
};

