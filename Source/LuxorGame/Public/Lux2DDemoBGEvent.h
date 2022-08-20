#pragma once
#include "CoreMinimal.h"
#include "Lux2DDemoBGEvent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLux2DDemoBGEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeed;
    
    LUXORGAME_API FLux2DDemoBGEvent();
};

