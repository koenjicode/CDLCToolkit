#pragma once
#include "CoreMinimal.h"
#include "ELuxPartsBreak.h"
#include "LuxPartsBreakParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPartsBreakParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartsBreak Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsVFx;
    
    FLuxPartsBreakParam();
};

