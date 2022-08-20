#include "UIStreamableMultiAssetReference.h"

class UObject;
class UUIStreamableMultiAssetReference;

void UUIStreamableMultiAssetReference::RequestLoad(const FUIStreamableMultiAssetReferenceDelegate& completeDelegate) {
}

bool UUIStreamableMultiAssetReference::isLoading() const {
    return false;
}

bool UUIStreamableMultiAssetReference::IsCompleted() const {
    return false;
}

UObject* UUIStreamableMultiAssetReference::getResourceFrom(const FStringAssetReference& ref) const {
    return NULL;
}

TArray<UObject*> UUIStreamableMultiAssetReference::getResource() const {
    return TArray<UObject*>();
}

UUIStreamableMultiAssetReference* UUIStreamableMultiAssetReference::createStreamableMultiAssetReference(const TArray<FStringAssetReference>& References) {
    return NULL;
}

UUIStreamableMultiAssetReference::UUIStreamableMultiAssetReference() {
}

