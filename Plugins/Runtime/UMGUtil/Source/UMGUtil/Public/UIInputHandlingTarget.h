#pragma once
#include "CoreMinimal.h"
#include "UIEventTarget.h"
#include "UIInputHandlingTarget.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UUIInputHandlingTarget : public UUIEventTarget {
    GENERATED_BODY()
};

class IUIInputHandlingTarget : public IUIEventTarget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateUIInputHandlingtargetChain() PURE_VIRTUAL(UpdateUIInputHandlingtargetChain,);
    
};

