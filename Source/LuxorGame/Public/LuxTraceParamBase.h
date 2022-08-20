#pragma once
#include "CoreMinimal.h"
#include "ELuxTracePartsId.h"
#include "LuxTraceParamBase.generated.h"

USTRUCT(BlueprintType)
struct FLuxTraceParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowPlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTracePartsId PartsId;
    
    LUXORGAME_API FLuxTraceParamBase();
};

