#include "UITableElement.h"

class UUIEventListener;

UUIEventListener* UUITableElement::AddEventListener(const FString& EventType) {
    return NULL;
}

UUITableElement::UUITableElement() {
    this->enableLateEnumeration = false;
    this->NumColumns = 1;
}

