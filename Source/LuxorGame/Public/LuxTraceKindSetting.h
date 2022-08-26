#pragma once
#include "CoreMinimal.h"
#include "ELuxTraceKindId.h"
#include "LuxTraceKindSetting.generated.h"

class ULuxTraceKindDataAsset;

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceKindSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTraceKindId TraceKindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceKindDataAsset* KindDataAsset;
    
    FLuxTraceKindSetting();
};

