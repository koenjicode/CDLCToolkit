#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoFlashType.h"
#include "Lux2DDemoFlashEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoFlashEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoFlashType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayJA;
    
    LUXORGAME_API FLux2DDemoFlashEvent();
};

