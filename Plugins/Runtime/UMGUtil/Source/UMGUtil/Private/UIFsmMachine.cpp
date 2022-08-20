#include "UIFsmMachine.h"

class UUIFsmState;

UUIFsmState* UUIFsmMachine::GetPreviousState() const {
    return NULL;
}

UUIFsmState* UUIFsmMachine::GetCurrentState() const {
    return NULL;
}

void UUIFsmMachine::ChangeState(const FString& StateCode) {
}

UUIFsmMachine::UUIFsmMachine() {
    this->CurrentState = NULL;
    this->PreviousState = NULL;
}

