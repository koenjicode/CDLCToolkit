#include "UIEventHub.h"

class UUIEventListener;

void UUIEventHub::DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam) {
}

void UUIEventHub::DispatchEvent(const FUIDataObject& EventData) {
}

UUIEventListener* UUIEventHub::AddEventListener(const FString& EventType) {
    return NULL;
}

UUIEventHub::UUIEventHub() {
}

