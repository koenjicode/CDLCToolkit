#pragma once
#include "CoreMinimal.h"
#include "EUIFadeColorType.h"
#include "EUIFadeAnimType.h"
#include "OnUIFadeAnimFinishedDelegate.h"
#include "UIFadeParam.generated.h"

USTRUCT(BlueprintType)
struct FUIFadeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIFadeAnimType AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIFadeColorType ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIFadeAnimFinished OnUIFadeAnimFinished;
    
    UMGUTIL_API FUIFadeParam();
};

