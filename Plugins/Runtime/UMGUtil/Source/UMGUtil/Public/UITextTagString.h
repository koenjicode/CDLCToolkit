#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UITextTagString.generated.h"

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUITextTagString : public UUIObject {
    GENERATED_BODY()
public:
    UUITextTagString();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString OnGetString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString() const;
    
};

