#include "UIUserElement.h"

class UUIEventListener;



void UUIUserElement::DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam, bool bubbles) {
}

UUIEventListener* UUIUserElement::AddEventListener(const FString& EventType) {
    return NULL;
}

UUIUserElement::UUIUserElement() : UUserWidget(FObjectInitializer::Get()) {
    this->UINodeConfigurationScriptClass = NULL;
}

