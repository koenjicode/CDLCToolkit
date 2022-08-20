#pragma once
#include "CoreMinimal.h"
#include "LuxChangeTrainingAction.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxChangeTrainingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuType;
    
    FLuxChangeTrainingAction();
};

