#include "LuxBattleMissionResultDemo.h"

ALuxBattleMissionResultDemo::ALuxBattleMissionResultDemo() {
    this->DemoPhase = ELuxBattleMissionResultDemoPhase::ConditionCheck;
    this->DPFrame = 0;
    this->DPParamL = 0;
    this->DPParamG = 0;
    this->DemoType = ELuxBattleMissionResultDemoType::Undecided;
}

