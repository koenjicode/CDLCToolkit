#include "LuxIllustDemoManager.h"

class ULuxIllustDemoWidget;
class ULuxStoryDemoResourceDataAsset;

void ULuxIllustDemoManager::WaitForEnd() {
}

bool ULuxIllustDemoManager::TogglePause(bool& CurrentPause) {
    return false;
}

void ULuxIllustDemoManager::StopDemo() {
}

void ULuxIllustDemoManager::StartDemo(ULuxIllustDemoWidget* inWidget, ULuxStoryDemoResourceDataAsset* inDemoResource) {
}

bool ULuxIllustDemoManager::SkipEvent() {
    return false;
}

bool ULuxIllustDemoManager::SkipDemo(bool Force) {
    return false;
}

void ULuxIllustDemoManager::SetReadyToFinish(bool inReadyToFinish) {
}

bool ULuxIllustDemoManager::IsPausing() {
    return false;
}

void ULuxIllustDemoManager::Initialize() {
}

void ULuxIllustDemoManager::Finalize() {
}

void ULuxIllustDemoManager::FadeoutBGM(int32 FadeFrame) {
}

ULuxIllustDemoManager::ULuxIllustDemoManager() {
    this->IllustDemoWidget = NULL;
    this->DemoResource = NULL;
}

