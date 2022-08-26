#include "UIGameFlowAutomation.h"

void UUIGameFlowAutomation::UnLockFrameCounter() {
}

void UUIGameFlowAutomation::UnLockDefaultAction() {
}

void UUIGameFlowAutomation::SetSceneDefaultAction(int32 frame, EUIInputKey Key) {
}

void UUIGameFlowAutomation::SendPerformanceData(const FUIDataObject& Data) {
}

void UUIGameFlowAutomation::ResetCounter() {
}




void UUIGameFlowAutomation::LockFrameCounter() {
}

void UUIGameFlowAutomation::LockDefaultAction() {
}

float UUIGameFlowAutomation::GetCurrentGPUTime() {
    return 0.0f;
}

float UUIGameFlowAutomation::GetCurrentFPS() {
    return 0.0f;
}

void UUIGameFlowAutomation::EmulateInputImmidiately(EUIInputKey Key) {
}

void UUIGameFlowAutomation::EmulateInput(int32 frame, EUIInputKey Key) {
}

UUIGameFlowAutomation::UUIGameFlowAutomation() {
    this->FrameCount = 0;
    this->CounterLock = false;
    this->DefaultActionLock = false;
}

