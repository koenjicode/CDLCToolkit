#pragma once
#include "CoreMinimal.h"
#include "LuxIllustDemoSubImageEvent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLuxIllustDemoSubImageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeed;
    
    LUXORGAME_API FLuxIllustDemoSubImageEvent();
};

