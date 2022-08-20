#include "UIDSObjectStore.h"

class UUIEventListener;
class UUIDSObjectStore;

void UUIDSObjectStore::TermRequestToExecuteSync() {
}

UUIDSObjectStore* UUIDSObjectStore::ResetAll(UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore* UUIDSObjectStore::Reset(const FUIDataObject& Key, UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore* UUIDSObjectStore::Put(const FUIDataObject& Value, UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore* UUIDSObjectStore::GetDefault(const FUIDataObject& Key, UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore* UUIDSObjectStore::GetAll(UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore* UUIDSObjectStore::Get(const FUIDataObject& Key, UUIEventListener*& OnComplete) {
    return NULL;
}

UUIDSObjectStore::UUIDSObjectStore() {
    this->AllowedTransactionMode = EUIDSObjectStoreMode::READONLY;
}

