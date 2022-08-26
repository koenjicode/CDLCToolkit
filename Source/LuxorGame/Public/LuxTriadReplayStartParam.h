#pragma once
#include "CoreMinimal.h"
#include "LuxTriadReplayStartParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTriadReplayStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dummy;
    
    FLuxTriadReplayStartParam();
};

