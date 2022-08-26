#include "UIDSTransaction.h"

class UUIDSObjectStore;

UUIDSObjectStore* UUIDSTransaction::ObjectStore(const FName& objectStoreName) {
    return NULL;
}

bool UUIDSTransaction::IsValid() const {
    return false;
}

UUIDSTransaction::UUIDSTransaction() {
}

