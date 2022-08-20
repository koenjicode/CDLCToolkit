#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "UIInputHandlingTarget.h"
#include "UINode.generated.h"

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class UMGUTIL_API UUINode : public UUIInputHandlingTarget {
    GENERATED_BODY()
};

class UMGUTIL_API IUINode : public IUIInputHandlingTarget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool setPropertyValue(const FString& Path, const FUIDataObject& Value) PURE_VIRTUAL(setPropertyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FUIDataObject getPropertyValue(const FString& Path) PURE_VIRTUAL(getPropertyValue, return FUIDataObject{};);
    
};

