#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDSCollectableDataInterface.h"
#include "EUIDSObjectStoreMode.h"
#include "UIDataObject.h"
#include "UIGameDataObject.generated.h"

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIGameDataObject : public UUIObject, public IUIDSCollectableDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName objectStoreName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIDSObjectStoreMode AllowedTransactionMode;
    
    UUIGameDataObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeDataItem(const FUIDataObject& InData, const FString& Key, const FUIDataObject& Value, FUIDataObject& NewData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCollectionDataScript(FUIDataObject& OutDataObject) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

