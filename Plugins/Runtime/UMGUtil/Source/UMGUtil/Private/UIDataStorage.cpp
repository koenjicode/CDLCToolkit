#include "UIDataStorage.h"

class UUIDSTransaction;
class UUIObject;
class UUIDSCollectableDataInterface;
class IUIDSCollectableDataInterface;

UUIDSTransaction* UUIDataStorage::Transaction(const TArray<FName>& ObjectStoreNames, EUIDSObjectStoreMode mode) {
    return NULL;
}

void UUIDataStorage::SetUIObjectCache(const FString& Category, const FString& Name, UUIObject* Object) {
}

void UUIDataStorage::ReleaseObjectStoreStorage(const FName& Name) {
}

bool UUIDataStorage::HasObjectStoreStorage(const FName& Name) {
    return false;
}

UUIObject* UUIDataStorage::GetUIObjectFromCache(const FString& Category, const FString& Name) const {
    return NULL;
}

bool UUIDataStorage::GetLocText(const FName& Key, FText& OutText) const {
    return false;
}

void UUIDataStorage::CreateObjectStoreStorage(const FName& Name, const FString& KeyPath, EUIDSObjectStoreMode AllowedTransactionMode, TScriptInterface<IUIDSCollectableDataInterface> CollectableDataObject) {
}

UUIDataStorage::UUIDataStorage() {
    this->CollectionDataTable = NULL;
    this->LocalizeDataTable = NULL;
    this->UINamedElementConfigDataTable = NULL;
    this->UINamedIconMetaTable = NULL;
    this->UIJsonGameDataAsset = NULL;
}

