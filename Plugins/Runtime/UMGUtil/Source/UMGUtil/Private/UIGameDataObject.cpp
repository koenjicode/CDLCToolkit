#include "UIGameDataObject.h"

void UUIGameDataObject::MakeDataItem(const FUIDataObject& InData, const FString& Key, const FUIDataObject& Value, FUIDataObject& NewData) const {
}

void UUIGameDataObject::GetCollectionDataScript_Implementation(FUIDataObject& OutDataObject) const {
}

UUIGameDataObject::UUIGameDataObject() {
    this->KeyPath = TEXT("key");
    this->AllowedTransactionMode = EUIDSObjectStoreMode::READWRITE;
}

