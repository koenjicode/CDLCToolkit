#include "LuxStageVisibilitySwitcher.h"
#include "Components/ArrowComponent.h"

void ALuxStageVisibilitySwitcher::SetEnableVisibilityCheck(bool Enabled) {
}

ALuxStageVisibilitySwitcher::ALuxStageVisibilitySwitcher() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->VisibilityCheckType = ELuxStageVisibilityCheckType::SVC_DIRECTION;
    this->AngleThresholdOffset = 0.00f;
    this->BackAngleThresholdOffset = 0.50f;
    this->DistanceThreshold = -1.00f;
    this->EnablePositionCheck = false;
}

