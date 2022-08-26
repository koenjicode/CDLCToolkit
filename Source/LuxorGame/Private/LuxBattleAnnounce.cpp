#include "LuxBattleAnnounce.h"

ALuxBattleAnnounce::ALuxBattleAnnounce() {
    this->FightCallClass = NULL;
    this->BattleCallClass = NULL;
    this->FinalBattleCallClass = NULL;
    this->KOCallClass = NULL;
    this->DoubleKOCallClass = NULL;
    this->GreatKOCallClass = NULL;
    this->PerfectKOCallClass = NULL;
    this->RingOutCallClass = NULL;
    this->DoubleRingOutCallClass = NULL;
    this->TimeUpCallClass = NULL;
    this->WinCallClass = NULL;
    this->LoseCallClass = NULL;
    this->DrawCallClass = NULL;
    this->SemSpecialRuleClass = NULL;
    this->ChrSpecialRuleClass = NULL;
}

