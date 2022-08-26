#include "LuxStoryDemoSetting.h"

FLuxStoryDemoSetting::FLuxStoryDemoSetting() {
    this->DemoType = ELuxStoryDemoType::IllustDemo;
    this->DataAssetPath = NULL;
    this->AdditionalDataAssetPath = NULL;
    this->FadeType = ELuxStoryDemoFadeType::Black;
    this->bUseBGM = false;
}

