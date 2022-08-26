#include "LuxGraphicSetting.h"

FLuxGraphicSetting::FLuxGraphicSetting() {
    this->WindowMode = ELuxWindowModeType::WINDOW_MODE_FULL_SCREEN;
    this->VSync = ELuxVSyncType::V_SYNC_ON;
    this->ScreenQuality = ELuxGraphicOptionQualityLevel::ELow;
    this->ScalingResolution = 0;
    this->AntiAliasing = ELuxGraphicOptionQualityLevel::ELow;
    this->PostProcess = ELuxGraphicOptionQualityLevel::ELow;
    this->Shadow = ELuxGraphicOptionQualityLevel::ELow;
    this->Texture = ELuxGraphicOptionQualityLevel::ELow;
    this->Effect = ELuxGraphicOptionQualityLevel::ELow;
}

