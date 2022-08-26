#include "LuxGameViewportClient.h"

class UTexture;
class UObject;
class ULuxGameViewportClient;

void ULuxGameViewportClient::SetScreenPercentage(float ScreenPercentage) {
}

void ULuxGameViewportClient::SetDisplayGamma(float newGamma) {
}

void ULuxGameViewportClient::SetBackgroundTexture(UTexture* inTexture) {
}

void ULuxGameViewportClient::ResetDisplayGamma() {
}

void ULuxGameViewportClient::OnEnterForeground() {
}

void ULuxGameViewportClient::OnEnterBackground() {
}

bool ULuxGameViewportClient::IsEnterBackground() const {
    return false;
}

float ULuxGameViewportClient::GetScreenPercentage() const {
    return 0.0f;
}

ULuxGameViewportClient* ULuxGameViewportClient::GetGameViewportClient(const UObject* WorldContextObject) {
    return NULL;
}

UTexture* ULuxGameViewportClient::GetBackgroundTexture() const {
    return NULL;
}

ULuxGameViewportClient::ULuxGameViewportClient() {
    this->DownKeys[0] = 0;
    this->DownKeys[1] = 0;
    this->PressedKeys[0] = 0;
    this->PressedKeys[1] = 0;
    this->JustPressedKeys[0] = 0;
    this->JustPressedKeys[1] = 0;
}

