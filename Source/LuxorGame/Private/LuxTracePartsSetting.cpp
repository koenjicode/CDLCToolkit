#include "LuxTracePartsSetting.h"

FLuxTracePartsSetting::FLuxTracePartsSetting() {
    this->ScaleType = ETraceScaleType::FromFirstSocket;
    this->Width = 0.00f;
    this->FrameScale = NULL;
    this->KindDataAssetList = NULL;
}

