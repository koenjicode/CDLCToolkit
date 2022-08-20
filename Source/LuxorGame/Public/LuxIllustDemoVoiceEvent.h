#pragma once
#include "CoreMinimal.h"
#include "LuxIllustDemoVoiceEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoVoiceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    LUXORGAME_API FLuxIllustDemoVoiceEvent();
};

