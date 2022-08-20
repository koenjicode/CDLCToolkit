#include "LuxBattleDramaticVoiceTrigger.h"

FLuxBattleDramaticVoiceTrigger::FLuxBattleDramaticVoiceTrigger() {
    this->Type = ELuxBattleDramaticVoiceTriggerType::Reply;
    this->Param1 = 0;
    this->Param2 = 0;
    this->Param3 = 0;
    this->BattleCount = 0;
    this->WinCount = 0;
    this->LoseCount = 0;
    this->Mood = 0;
    this->CheckCount = 0;
    this->PlayCountLimit = 0;
    this->CheckRandomMin = 0;
    this->CheckRandomMax = 0;
}

