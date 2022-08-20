#pragma once
#include "CoreMinimal.h"
#include "LuxBattleTickInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleTickInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScBattleFrame;
    
    FLuxBattleTickInfo();
};

