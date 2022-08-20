#include "LuxBattleExtraPlayerParam.h"

FLuxBattleExtraPlayerParam::FLuxBattleExtraPlayerParam() {
    this->bIsWeaponPowerIgnored = false;
    this->Visibility = ELuxBattlePlayerVisibility::VisibleAll;
    this->LifeLimitedImmortality = 0;
    this->VoiceVariationID = 0;
    this->OverrideEvilVoiceDepth = 0;
    this->BattlePointAdvantage = 0;
    this->bIsContinuousMatch = false;
}

