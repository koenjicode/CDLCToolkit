#include "LuxArcadeSaveObject.h"

class ULuxArcadeSaveObject;

void ULuxArcadeSaveObject::SetLoseTimespan(const FTimespan& InTimespan) {
}

void ULuxArcadeSaveObject::SetLapTime(ELuxUIArcadeBattleStageId InStageId, const FTimespan& InTimespan) {
}

int32 ULuxArcadeSaveObject::SetBestSecond(ELuxUIArcadeBattleDifficulty inDifficulty, const FTimespan& InTimespan) {
    return 0;
}

void ULuxArcadeSaveObject::ResetTemporary() {
}

FTimespan ULuxArcadeSaveObject::GetTotalTime() const {
    return FTimespan{};
}

ULuxArcadeSaveObject* ULuxArcadeSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

ELuxUIArcadeBattleRewardType ULuxArcadeSaveObject::GetRewardType(ELuxUIArcadeBattleDifficulty inDifficulty, const FTimespan& InTimespan) const {
    return ELuxUIArcadeBattleRewardType::None;
}

FTimespan ULuxArcadeSaveObject::GetRewardTime(ELuxUIArcadeBattleDifficulty inDifficulty, ELuxUIArcadeBattleRewardType InRewardType) const {
    return FTimespan{};
}

FTimespan ULuxArcadeSaveObject::GetLoseTimespan() const {
    return FTimespan{};
}

FTimespan ULuxArcadeSaveObject::GetLapTime(ELuxUIArcadeBattleStageId InStageId) const {
    return FTimespan{};
}

ELuxUIArcadeBattleStageId ULuxArcadeSaveObject::GetCurrentStageId() const {
    return ELuxUIArcadeBattleStageId::Stage1;
}

FTimespan ULuxArcadeSaveObject::GetBestSecond(ELuxUIArcadeBattleDifficulty inDifficulty, int32 inIndex) const {
    return FTimespan{};
}

FString ULuxArcadeSaveObject::ConvertTimespanToText(const FTimespan& InTimespan, bool bAllowZero) const {
    return TEXT("");
}

FString ULuxArcadeSaveObject::ConvertArcadeBattleStageIdToText(ELuxUIArcadeBattleStageId InStageId) const {
    return TEXT("");
}

ULuxArcadeSaveObject::ULuxArcadeSaveObject() {
}

