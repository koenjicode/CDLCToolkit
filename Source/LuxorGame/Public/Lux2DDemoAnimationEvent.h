#pragma once
#include "CoreMinimal.h"
#include "Lux2DDemoAnimationEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoAnimationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForTheEnd;
    
    LUXORGAME_API FLux2DDemoAnimationEvent();
};

