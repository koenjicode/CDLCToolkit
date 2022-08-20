#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCameraResetParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleCameraResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Player1Side;
    
    FLuxBattleCameraResetParam();
};

