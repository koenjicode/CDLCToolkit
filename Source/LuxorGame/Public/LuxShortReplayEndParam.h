#pragma once
#include "CoreMinimal.h"
#include "LuxShortReplayEndParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxShortReplayEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipped;
    
    FLuxShortReplayEndParam();
};

