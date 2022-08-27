#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIWidgetAnimationPlayParam.h"
#include "UIWidgetAnimation.generated.h"

class UWidgetAnimation;
class UBaseUserWidget;

UCLASS(Blueprintable)
class UUIWidgetAnimation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WidgetAnimation;
    
    UUIWidgetAnimation();
    UFUNCTION(BlueprintCallable)
    void Stop(UBaseUserWidget* inWidget);
    
    UFUNCTION(BlueprintCallable)
    void Play(UBaseUserWidget* inWidget, const FUIWidgetAnimationPlayParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinishedDelegate();
    
};

