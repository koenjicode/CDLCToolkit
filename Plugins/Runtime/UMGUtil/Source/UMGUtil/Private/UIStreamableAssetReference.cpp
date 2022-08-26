#include "UIStreamableAssetReference.h"

class UObject;
class UUIStreamableAssetReference;

void UUIStreamableAssetReference::RequestLoad(const FUIStreamableAssetReferenceDelegate& completeDelegate) {
}

bool UUIStreamableAssetReference::isLoading() const {
    return false;
}

bool UUIStreamableAssetReference::IsCompleted() const {
    return false;
}

UObject* UUIStreamableAssetReference::getResource() const {
    return NULL;
}

UUIStreamableAssetReference* UUIStreamableAssetReference::createStreamableAssetReference(const FStringAssetReference& ref) {
    return NULL;
}

UUIStreamableAssetReference::UUIStreamableAssetReference() {
    this->resource = NULL;
}

