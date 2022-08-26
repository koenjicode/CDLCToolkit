#include "LuxBattleMoveCommandPlayer.h"

void ALuxBattleMoveCommandPlayer::StopMove() {
}

void ALuxBattleMoveCommandPlayer::PlayMoveDirect(int32 inPlayerIndex, const FLuxBattleMovePlayParam& InParam) {
}

void ALuxBattleMoveCommandPlayer::PlayMove(int32 inPlayerIndex, ELuxBattleMoveCategory inCategory, int32 inCategoryItemIndex) {
}

bool ALuxBattleMoveCommandPlayer::IsPlaying(int32 inPlayerIndex) const {
    return false;
}

bool ALuxBattleMoveCommandPlayer::GetMovePlayParam(int32 inPlayerIndex, ELuxBattleMoveCategory inCategory, int32 inCategoryItemIndex, FLuxBattleMovePlayParam& outParam) const {
    return false;
}

ALuxBattleMoveCommandPlayer::ALuxBattleMoveCommandPlayer() {
    this->Request = ELuxBattleMovePlayRequest::None;
    this->PlayState = ELuxBattleMovePlayState::NotPlaying;
}

