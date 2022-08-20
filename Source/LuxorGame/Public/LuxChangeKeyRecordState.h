#pragma once
#include "CoreMinimal.h"
#include "LuxChangeKeyRecordState.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxChangeKeyRecordState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyRecordState;
    
    FLuxChangeKeyRecordState();
};

