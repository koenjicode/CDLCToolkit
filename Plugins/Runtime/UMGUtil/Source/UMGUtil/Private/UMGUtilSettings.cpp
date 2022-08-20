#include "UMGUtilSettings.h"

UUMGUtilSettings::UUMGUtilSettings() {
    this->bEnableDebugScope = true;
    this->bEnableDebugProfileScope = true;
    this->useThresholdLog = true;
    this->thresholdLog = 8.00f;
    this->useThresholdWarning = true;
    this->thresholdWarning = 32.00f;
    this->useThresholdError = true;
    this->thresholdError = 128.00f;
    this->useThresholdErrorAndEnshure = false;
    this->thresholdErrorAndEnshure = 5000.00f;
    this->UIImageTagAssetPaths.AddDefaulted(3);
    this->UITextTagAssetPaths.AddDefaulted(1);
}

