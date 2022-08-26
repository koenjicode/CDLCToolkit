#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "EUIDSObjectStoreMode.h"
#include "UIDataObject.h"
#include "UIDSObjectStore.generated.h"

class UUIDSObjectStore;
class UUIEventListener;

UCLASS(Blueprintable)
class UUIDSObjectStore : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIDSObjectStoreMode AllowedTransactionMode;
    
    UUIDSObjectStore();
    UFUNCTION(BlueprintCallable)
    void TermRequestToExecuteSync();
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* ResetAll(UUIEventListener*& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* Reset(const FUIDataObject& Key, UUIEventListener*& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* Put(const FUIDataObject& Value, UUIEventListener*& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* GetDefault(const FUIDataObject& Key, UUIEventListener*& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* GetAll(UUIEventListener*& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    UUIDSObjectStore* Get(const FUIDataObject& Key, UUIEventListener*& OnComplete);
    
};

