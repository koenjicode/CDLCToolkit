#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UIEventTargetUintInterface.generated.h"

class UUIEventTargetUnitObject;

UINTERFACE(Blueprintable)
class UMGUTIL_API UUIEventTargetUintInterface : public UInterface {
    GENERATED_BODY()
};

class UMGUTIL_API IUIEventTargetUintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIEventTargetUnitObject* setEventTargetUnitObject(UUIEventTargetUnitObject* unit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIEventTargetUnitObject* getEventTargetUnitObject() const;
    
};

