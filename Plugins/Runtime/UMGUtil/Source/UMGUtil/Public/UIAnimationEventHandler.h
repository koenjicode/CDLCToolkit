#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIEventTarget.h"
#include "UIEventListenerUnit.h"
#include "UIAnimationEventHandler.generated.h"

UCLASS(Blueprintable)
class UUIAnimationEventHandler : public UObject, public IUIEventTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UUIAnimationEventHandler();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

