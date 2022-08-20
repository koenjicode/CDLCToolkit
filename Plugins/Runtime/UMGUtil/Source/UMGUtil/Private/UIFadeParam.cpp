#include "UIFadeParam.h"

FUIFadeParam::FUIFadeParam() {
    this->AnimType = EUIFadeAnimType::ColorFadeIn;
    this->ColorType = EUIFadeColorType::White;
    this->AnimationTime = 0.00f;
    this->ZOrder = 0;
}

