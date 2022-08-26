#include "LuxBattleStageWindActor.h"

ALuxBattleStageWindActor::ALuxBattleStageWindActor() {
    this->BaseInterval = 0.25f;
    this->NoiseInterval = 0.25f;
    this->Power = 10.00f;
    this->LifeTime = 0.00f;
    this->bTimeReduce = false;
    this->NearReduceScale = 2.00f;
    this->FarDistance = 5.00f;
    this->FarScale = 1.00f;
}

