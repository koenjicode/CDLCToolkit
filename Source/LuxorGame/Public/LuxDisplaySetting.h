#pragma once
#include "CoreMinimal.h"
#include "ELuxPersonalCommentVisibilityType.h"
#include "ELuxSubtitleVisibilityType.h"
#include "ELuxCustomEffectVisibilityType.h"
#include "LuxDisplaySetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxDisplaySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownerHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSubtitleVisibilityType BattleSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSubtitleVisibilityType DemoSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPersonalCommentVisibilityType PersonalComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCustomEffectVisibilityType CustomEffect;
    
    FLuxDisplaySetting();
};

