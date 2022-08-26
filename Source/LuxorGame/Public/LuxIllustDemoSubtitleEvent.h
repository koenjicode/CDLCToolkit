#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoTransitionType.h"
#include "LuxIllustDemoSubtitleEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoSubtitleEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Spk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxIllustDemoTransitionType TransType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransFrame;
    
    LUXORGAME_API FLuxIllustDemoSubtitleEvent();
};

