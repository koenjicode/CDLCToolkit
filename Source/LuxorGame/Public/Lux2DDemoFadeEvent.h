#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoFadeType.h"
#include "Lux2DDemoFadeEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoFadeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoFadeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    LUXORGAME_API FLux2DDemoFadeEvent();
};

