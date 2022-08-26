#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIFsmState.generated.h"

class UObject;
class UUIFsmBehavior;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIFsmState : public UUIObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StateCode;
    
public:
    UUIFsmState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(UObject* InOwner, UUIFsmBehavior* InBehavior);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(UObject* InOwner, UUIFsmBehavior* InBehavior);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntry(UObject* InOwner, UUIFsmBehavior* InBehavior);
    
};

