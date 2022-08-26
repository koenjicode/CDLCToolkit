#include "LuxSaveGameBase.h"

bool ULuxSaveGameBase::PerformSave(const FString& inSuffix) {
    return false;
}

ULuxSaveGameBase::ULuxSaveGameBase() {
    this->SlotName = TEXT("ERROR_SLOT");
}

