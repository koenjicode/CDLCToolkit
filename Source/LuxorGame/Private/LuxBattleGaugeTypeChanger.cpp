#include "LuxBattleGaugeTypeChanger.h"

void ALuxBattleGaugeTypeChanger::SetSoulGaugeType(int32 inPlayerIndex, ELuxBattleSoulGaugeType inType) {
}

void ALuxBattleGaugeTypeChanger::SetSoulChargeTimeType(int32 inPlayerIndex, ELuxBattleSoulChargeTimeType inType) {
}

void ALuxBattleGaugeTypeChanger::SetLifeGaugeType(int32 inPlayerIndex, ELuxBattleLifeGaugeType inType) {
}

void ALuxBattleGaugeTypeChanger::SetGuardGaugeType(int32 inPlayerIndex, ELuxBattleGuardGaugeType inType) {
}

void ALuxBattleGaugeTypeChanger::ReapplySetting() {
}

ELuxBattleSoulGaugeType ALuxBattleGaugeTypeChanger::GetSoulGaugeType(int32 inPlayerIndex) const {
    return ELuxBattleSoulGaugeType::Normal;
}

ELuxBattleSoulChargeTimeType ALuxBattleGaugeTypeChanger::GetSoulChargeTimeType(int32 inPlayerIndex) const {
    return ELuxBattleSoulChargeTimeType::Normal;
}

ELuxBattleLifeGaugeType ALuxBattleGaugeTypeChanger::GetLifeGaugeType(int32 inPlayerIndex) const {
    return ELuxBattleLifeGaugeType::Normal;
}

ELuxBattleGuardGaugeType ALuxBattleGaugeTypeChanger::GetGuardGaugeType(int32 inPlayerIndex) const {
    return ELuxBattleGuardGaugeType::Normal;
}

ALuxBattleGaugeTypeChanger::ALuxBattleGaugeTypeChanger() {
    this->PlayerInfos.AddDefaulted(2);
}

