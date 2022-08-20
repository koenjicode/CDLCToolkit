#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "InputCoreTypes.h"
#include "KeyContainer.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UKeyContainer : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
public:
    UKeyContainer();
    UFUNCTION(BlueprintCallable)
    void SetFKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetFKey();
    
};

