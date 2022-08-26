#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UIDSCollectableDataInterface.h"
#include "UIDataObject.h"
#include "UIJsonDataAsset.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUIJsonDataAsset : public UDataAsset, public IUIDSCollectableDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
public:
    UUIJsonDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Get(FUIDataObject& DataObject) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

