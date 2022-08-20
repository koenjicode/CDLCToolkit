#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UITransitionParam.h"
#include "UITransitionManager.generated.h"

class UUILoadManager;
class UUIFadeManager;

UCLASS(Blueprintable)
class UMGUTIL_API UUITransitionManager : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITransitionParam TransitionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILoadManager* LoadManager;
    
public:
    UUITransitionManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeoutAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeinAnimationFinished();
    
};

