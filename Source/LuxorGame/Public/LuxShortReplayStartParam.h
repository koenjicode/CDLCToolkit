#pragma once
#include "CoreMinimal.h"
#include "LuxShortReplayStartParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxShortReplayStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    FLuxShortReplayStartParam();
};

