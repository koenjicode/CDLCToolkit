#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoShakeType.h"
#include "Lux2DDemoShakeEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoShakeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoShakeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayJA;
    
    LUXORGAME_API FLux2DDemoShakeEvent();
};

