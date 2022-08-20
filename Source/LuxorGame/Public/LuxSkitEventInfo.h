#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Lux2DDemoBGEvent.h"
#include "Lux2DDemoFlashEvent.h"
#include "LuxSkitMessageEvent.h"
#include "Lux2DDemoBGMEvent.h"
#include "Lux2DDemoBGMAisacEvent.h"
#include "Lux2DDemoSEEvent.h"
#include "Lux2DDemoFadeEvent.h"
#include "Lux2DDemoShakeEvent.h"
#include "LuxSkitBranchEvent.h"
#include "LuxSkitJumpEvent.h"
#include "Lux2DDemoAnimationEvent.h"
#include "LuxSkitEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxSkitEventInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGEvent BGEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSkitMessageEvent MessageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGMEvent BGMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoBGMAisacEvent BGMAisacEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoSEEvent SEEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoFadeEvent FadeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoFlashEvent FlashEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoShakeEvent ShakeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSkitBranchEvent BranchEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSkitJumpEvent JumpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLux2DDemoAnimationEvent AnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelayFrame;
    
    LUXORGAME_API FLuxSkitEventInfo();
};

