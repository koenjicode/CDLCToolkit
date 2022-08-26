#pragma once
#include "CoreMinimal.h"
#include "EUIDSObjectStoreMode.h"
#include "Engine/DataAsset.h"
#include "UIDataStorage.generated.h"

class UUIDSObjectStoreStorage;
class UDataTable;
class UUIJsonGameDataAsset;
class UUIDSTransaction;
class UUIObject;
class UUIDSCollectableDataInterface;
class IUIDSCollectableDataInterface;

UCLASS(Blueprintable)
class UMGUTIL_API UUIDataStorage : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CollectionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocalizeDataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UINamedElementConfigDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UINamedIconMetaTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIJsonGameDataAsset* UIJsonGameDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIDSObjectStoreStorage*> CollectionDataStorageCache;
    
public:
    UUIDataStorage();
    UFUNCTION(BlueprintCallable)
    UUIDSTransaction* Transaction(const TArray<FName>& ObjectStoreNames, EUIDSObjectStoreMode mode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIObjectCache(const FString& Category, const FString& Name, UUIObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseObjectStoreStorage(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    bool HasObjectStoreStorage(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIObject* GetUIObjectFromCache(const FString& Category, const FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocText(const FName& Key, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateObjectStoreStorage(const FName& Name, const FString& KeyPath, EUIDSObjectStoreMode AllowedTransactionMode, TScriptInterface<IUIDSCollectableDataInterface> CollectableDataObject);
    
};

