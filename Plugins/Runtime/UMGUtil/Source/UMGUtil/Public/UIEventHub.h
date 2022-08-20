#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIEventTarget.h"
#include "UIDataObject.h"
#include "UIEventListenerUnit.h"
#include "UIEventHub.generated.h"

class UUIEventListener;

UCLASS(Blueprintable)
class UMGUTIL_API UUIEventHub : public UUIObject, public IUIEventTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UUIEventHub();
    UFUNCTION(BlueprintCallable)
    void DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam);
    
    UFUNCTION(BlueprintCallable)
    void DispatchEvent(const FUIDataObject& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    
    // Fix for true pure virtual functions not being implemented
};

