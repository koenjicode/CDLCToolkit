#include "LuxBattleAICustomizer.h"

void ALuxBattleAICustomizer::SetTendency(ELuxBattleAITendency inTendency) {
}

void ALuxBattleAICustomizer::SetDifficulty(ELuxBattleAIDifficulty inDifficulty) {
}

void ALuxBattleAICustomizer::SetAIPlayerIndex(int32 inPlayerIndex) {
}

void ALuxBattleAICustomizer::ResetSetting() {
}

ELuxBattleAITendency ALuxBattleAICustomizer::GetTendency() const {
    return ELuxBattleAITendency::Standard;
}

ELuxBattleAIDifficulty ALuxBattleAICustomizer::GetDifficulty() const {
    return ELuxBattleAIDifficulty::Tutorial;
}

void ALuxBattleAICustomizer::ApplySetting() {
}

ALuxBattleAICustomizer::ALuxBattleAICustomizer() {
    this->AIPlayerIndex = 1;
    this->Difficulty = ELuxBattleAIDifficulty::Normal;
    this->Tendency = ELuxBattleAITendency::Standard;
}

