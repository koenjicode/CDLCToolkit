#pragma once
#include "CoreMinimal.h"
#include "LuxUIConstData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxUIConstData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SOUL_POINT_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SEM_GOLD_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SEM_REWARD_GOLD_CUT_RATE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SEM_SLOT_MAX;
    
    FLuxUIConstData();
};

