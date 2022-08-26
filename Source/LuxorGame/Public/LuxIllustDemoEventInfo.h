#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Lux2DDemoBGEvent.h"
#include "Lux2DDemoBGMEvent.h"
#include "LuxIllustDemoBGColorEvent.h"
#include "LuxIllustDemoSubtitleEvent.h"
#include "LuxIllustDemoVoiceEvent.h"
#include "LuxIllustDemoBGMAisacEvent.h"
#include "Lux2DDemoSEEvent.h"
#include "Lux2DDemoFadeEvent.h"
#include "LuxIllustDemoCutImageEvent.h"
#include "LuxIllustDemoChangeCutEvent.h"
#include "LuxIllustDemoShakeCutEvent.h"
#include "LuxIllustDemoSubImageEvent.h"
#include "Lux2DDemoFlashEvent.h"
#include "Lux2DDemoShakeEvent.h"
#include "LuxIllustDemoSubtitleAppearanceEvent.h"
#include "Lux2DDemoAnimationEvent.h"
#include "Lux2DDemoNoticeEvent.h"
#include "LuxIllustDemoEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoEventInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGEvent BGEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoBGColorEvent BGColorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoSubtitleEvent SubtitleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoVoiceEvent VoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGMEvent BGMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoBGMAisacEvent BGMAisacEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoSEEvent SEEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoFadeEvent FadeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoCutImageEvent CutImageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoChangeCutEvent ChangeCutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoShakeCutEvent ShakeCutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoSubImageEvent SubImageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoFlashEvent FlashEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoShakeEvent ShakeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxIllustDemoSubtitleAppearanceEvent SubtitleAppearanceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoAnimationEvent AnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoNoticeEvent NoticeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelayFrameJA;
    
    LUXORGAME_API FLuxIllustDemoEventInfo();
};

