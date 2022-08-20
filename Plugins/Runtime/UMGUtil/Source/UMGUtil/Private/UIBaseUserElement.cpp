#include "UIBaseUserElement.h"

class UUIEventListener;



UUIEventListener* UUIBaseUserElement::AddEventListener(const FString& EventType) {
    return NULL;
}

UUIBaseUserElement::UUIBaseUserElement() : UUserWidget(FObjectInitializer::Get()) {
    this->bUseAsUIElement = false;
    this->UINodeConfigurationScriptClass = NULL;
}

