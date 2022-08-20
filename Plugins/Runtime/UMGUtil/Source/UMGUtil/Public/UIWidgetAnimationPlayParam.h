#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnUIWidgetAnimationFinishedDelegate.h"
#include "OnUIWidgetAnimationPlayFinishedDelegate.h"
#include "UIWidgetAnimationPlayParam.generated.h"

USTRUCT(BlueprintType)
struct FUIWidgetAnimationPlayParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoopsToPlay;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakIfNotExistAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIWidgetAnimationFinished OnUIWidgetAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIWidgetAnimationPlayFinished OnUIWidgetAnimationPlayFinished;
    
    UMGUTIL_API FUIWidgetAnimationPlayParam();
};

