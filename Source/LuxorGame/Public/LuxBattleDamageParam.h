#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDamage.h"
#include "LuxBattleDamageParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleDamage Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    FLuxBattleDamageParam();
};

