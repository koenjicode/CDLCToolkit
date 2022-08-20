#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDSTransaction.generated.h"

class UUIDSObjectStore;

UCLASS(Blueprintable)
class UUIDSTransaction : public UUIObject {
    GENERATED_BODY()
public:
    UUIDSTransaction();
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* ObjectStore(const FName& objectStoreName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
};

