#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxIllustDemoSubtitleEvent.h"
#include "LuxIllustDemoVoiceEvent.h"
#include "Lux2DDemoBGMEvent.h"
#include "Lux2DDemoSEEvent.h"
#include "Lux2DDemoAnimationEvent.h"
#include "LuxIllustDemoScene.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoScene : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoSubtitleEvent SubtitleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoVoiceEvent VoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGMEvent BGMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoSEEvent SEEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoAnimationEvent AnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelayFrame;
    
    LUXORGAME_API FLuxIllustDemoScene();
};

