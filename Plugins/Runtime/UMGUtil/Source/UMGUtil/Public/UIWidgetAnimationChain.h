#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIWidgetAnimationPlayParam.h"
#include "UIWidgetAnimationChain.generated.h"

class UUIWidgetAnimation;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UUIWidgetAnimationChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UUIWidgetAnimation*> UIWidgetAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationFinishCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIWidgetAnimationPlayParam PlayAnimationParam;
    
    UUIWidgetAnimationChain();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void OnUIWidgetAnimationFinished(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
};

