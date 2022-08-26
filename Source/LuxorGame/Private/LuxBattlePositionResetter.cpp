#include "LuxBattlePositionResetter.h"

void ALuxBattlePositionResetter::SetStartSoulChargeType(ELuxPositionResetSoulChargeType inType) {
}

void ALuxBattlePositionResetter::SetStartSideType(ELuxBattleStartSideType inType) {
}

void ALuxBattlePositionResetter::SetStartLocationType(ELuxBattleStartLocationType inType) {
}

void ALuxBattlePositionResetter::SetStartDirectionType(ELuxBattleStartDirectionType inType) {
}

void ALuxBattlePositionResetter::ReapplySetting() {
}

bool ALuxBattlePositionResetter::IsWallAvailable() const {
    return false;
}

bool ALuxBattlePositionResetter::IsRingEdgeAvailable() const {
    return false;
}

bool ALuxBattlePositionResetter::IsDirectionAvailable() const {
    return false;
}

ELuxPositionResetSoulChargeType ALuxBattlePositionResetter::GetStartSoulChargeType() const {
    return ELuxPositionResetSoulChargeType::PRSC_NONE;
}

ELuxBattleStartSideType ALuxBattlePositionResetter::GetStartSideType() const {
    return ELuxBattleStartSideType::Default;
}

ELuxBattleStartLocationType ALuxBattlePositionResetter::GetStartLocationType() const {
    return ELuxBattleStartLocationType::Center;
}

ELuxBattleStartDirectionType ALuxBattlePositionResetter::GetStartDirectionType() const {
    return ELuxBattleStartDirectionType::Forward;
}

bool ALuxBattlePositionResetter::CanSetStartLocationType(ELuxBattleStartLocationType inType) const {
    return false;
}

ALuxBattlePositionResetter::ALuxBattlePositionResetter() {
    this->StartLocationType = ELuxBattleStartLocationType::Center;
    this->StartSideType = ELuxBattleStartSideType::Default;
    this->StartDirectionType = ELuxBattleStartDirectionType::Forward;
    this->StartSoulChargeType = ELuxPositionResetSoulChargeType::PRSC_NONE;
    this->StageInfoTable = NULL;
}

