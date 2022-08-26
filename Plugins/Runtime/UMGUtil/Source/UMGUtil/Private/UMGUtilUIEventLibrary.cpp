#include "UMGUtilUIEventLibrary.h"

EUIInputKey UUMGUtilUIEventLibrary::GetDecideKey() {
    return EUIInputKey::Up;
}

EUIInputKey UUMGUtilUIEventLibrary::GetCancelKey() {
    return EUIInputKey::Up;
}

void UUMGUtilUIEventLibrary::CreateUIEvent(const FString& EventType, FUIDataObject& EventData) {
}

bool UUMGUtilUIEventLibrary::CreateInputEventFromObjectData(const FUIDataObject& EventData, FUIInputEvent& InputEvent) {
    return false;
}

void UUMGUtilUIEventLibrary::CreateDataObjectFromInputEvent(FUIDataObject& EventData, const FUIInputEvent& InputEvent) {
}

void UUMGUtilUIEventLibrary::BreakTransactionRequestEvent(const FUIDataObject& EventData, FString& EventType, FUIDataObject& Result, bool& isError, FUIDataObject& errorReason) {
}

UUMGUtilUIEventLibrary::UUMGUtilUIEventLibrary() {
}

