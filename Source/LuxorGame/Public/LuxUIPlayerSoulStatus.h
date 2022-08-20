#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObjectHelper.h"
#include "ELuxUIPlayerSoulCondition.h"
#include "LuxUIPlayerSoulStatus.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIPlayerSoulStatus : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxUIPlayerSoulCondition SoulCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaintPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EvilPoint;
    
    LUXORGAME_API FLuxUIPlayerSoulStatus();
};

