#include "LuxBattleDummyCustomizer.h"

void ALuxBattleDummyCustomizer::SetUkemiType(int32 inSlot, ELuxBattleDummyUkemiType inType) {
}

void ALuxBattleDummyCustomizer::SetReversalEdgeType(int32 inSlot, ELuxBattleDummyReversalEdgeType inType) {
}

void ALuxBattleDummyCustomizer::SetMoveType(int32 inSlot, int32 inMoveIndex, ELuxBattleDummyMoveType inType) {
}

void ALuxBattleDummyCustomizer::SetMovePlayParam(int32 inSlot, int32 inMoveIndex, ELuxBattleMoveCategory inCategory, int32 inCategoryItemIndex) {
}

void ALuxBattleDummyCustomizer::SetMovePlayCategoryItemIndex(int32 inSlot, int32 inMoveIndex, int32 inCategoryItemIndex) {
}

void ALuxBattleDummyCustomizer::SetMovePlayCategory(int32 inSlot, int32 inMoveIndex, ELuxBattleMoveCategory inCategory) {
}

void ALuxBattleDummyCustomizer::SetLethalHitType(int32 inSlot, ELuxBattleDummyLethalHitType inType) {
}

void ALuxBattleDummyCustomizer::SetDummyPlayerIndex(int32 inPlayerIndex) {
}

void ALuxBattleDummyCustomizer::SetCounterType(int32 inSlot, ELuxBattleDummyCounterType inType) {
}

void ALuxBattleDummyCustomizer::SetAerialControlType(int32 inSlot, ELuxBattleDummyAerialControlType inType) {
}

void ALuxBattleDummyCustomizer::ResetSlot(int32 inSlot) {
}

void ALuxBattleDummyCustomizer::ResetMoveType(int32 inSlot, int32 inMoveIndex) {
}

void ALuxBattleDummyCustomizer::ResetAllSlots() {
}

ELuxBattleDummyUkemiType ALuxBattleDummyCustomizer::GetUkemiType(int32 inSlot) const {
    return ELuxBattleDummyUkemiType::Off;
}

int32 ALuxBattleDummyCustomizer::GetSlotNum() const {
    return 0;
}

ELuxBattleDummyReversalEdgeType ALuxBattleDummyCustomizer::GetReversalEdgeType(int32 inSlot) const {
    return ELuxBattleDummyReversalEdgeType::Off;
}

ELuxBattleDummyMoveType ALuxBattleDummyCustomizer::GetMoveType(int32 inSlot, int32 inMoveIndex) const {
    return ELuxBattleDummyMoveType::Off;
}

int32 ALuxBattleDummyCustomizer::GetMovePlayCategoryItemIndex(int32 inSlot, int32 inMoveIndex) const {
    return 0;
}

ELuxBattleMoveCategory ALuxBattleDummyCustomizer::GetMovePlayCategory(int32 inSlot, int32 inMoveIndex) const {
    return ELuxBattleMoveCategory::MainMoves;
}

int32 ALuxBattleDummyCustomizer::GetMoveNum() const {
    return 0;
}

ELuxBattleDummyLethalHitType ALuxBattleDummyCustomizer::GetLethalHitType(int32 inSlot) const {
    return ELuxBattleDummyLethalHitType::Off;
}

ELuxBattleDummyCounterType ALuxBattleDummyCustomizer::GetCounterType(int32 inSlot) const {
    return ELuxBattleDummyCounterType::Off;
}

ELuxBattleDummyAerialControlType ALuxBattleDummyCustomizer::GetAerialControlType(int32 inSlot) const {
    return ELuxBattleDummyAerialControlType::Off;
}

void ALuxBattleDummyCustomizer::ApplySlotToDummy(int32 inSlot) {
}

void ALuxBattleDummyCustomizer::ApplySetting(const FLuxBattleDummySlot& inSetting) {
}

ALuxBattleDummyCustomizer::ALuxBattleDummyCustomizer() {
    this->DummySlots.AddDefaulted(3);
    this->DummyPlayerIndex = 1;
    this->CurrentSlot = 0;
    this->MovePlayData = NULL;
}

