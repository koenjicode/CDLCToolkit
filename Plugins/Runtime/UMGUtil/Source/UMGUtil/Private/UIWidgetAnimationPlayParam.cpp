#include "UIWidgetAnimationPlayParam.h"

FUIWidgetAnimationPlayParam::FUIWidgetAnimationPlayParam() {
    this->StartAtTime = 0.00f;
    this->NumLoopsToPlay = 0;
    this->PlayMode = EUMGSequencePlayMode::Forward;
    this->PlaybackSpeed = 0.00f;
    this->bBreakIfNotExistAnimation = false;
}

