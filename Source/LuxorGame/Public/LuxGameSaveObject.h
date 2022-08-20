#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxGameSaveObject.generated.h"

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxGameSaveObject : public UObject {
    GENERATED_BODY()
public:
    ULuxGameSaveObject();
    UFUNCTION(BlueprintCallable)
    void MarkDirtyForBP(int32 InFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDirtyFlagsForBP() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDirtyForBP();
    
};

