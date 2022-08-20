#pragma once
#include "CoreMinimal.h"
#include "LuxBattleMovePlayParam.h"
#include "LuxBattleMovePlayInfo.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMovePlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleMovePlayParam Param;
    
    FLuxBattleMovePlayInfo();
};

