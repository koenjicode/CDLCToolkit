#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIDataObject.h"
#include "LuxMenuSound.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxMenuSound : public UObject {
    GENERATED_BODY()
public:
    ULuxMenuSound();
    UFUNCTION(BlueprintCallable)
    void OnReceiveMenuEvent(const FUIDataObject& EventData);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

