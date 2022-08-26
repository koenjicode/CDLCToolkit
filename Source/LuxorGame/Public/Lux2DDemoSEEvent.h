#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoSEControllType.h"
#include "Lux2DDemoSEEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoSEEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoSEControllType CtrlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayJA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    LUXORGAME_API FLux2DDemoSEEvent();
};

