#include "LuxUIGameUnlockShinEdgeMaster.h"

class ULuxUIGameUnlockShinEdgeMaster;

bool ULuxUIGameUnlockShinEdgeMaster::IsEndOfChapter(ELuxShinEdgeMasterStoryChapter InCheckChapter) {
    return false;
}

bool ULuxUIGameUnlockShinEdgeMaster::IsEnableSoulLibra() {
    return false;
}

bool ULuxUIGameUnlockShinEdgeMaster::IsEnableSearch() {
    return false;
}

bool ULuxUIGameUnlockShinEdgeMaster::IsEnablePlayerMenu() {
    return false;
}

bool ULuxUIGameUnlockShinEdgeMaster::IsEnableMoveTown() {
    return false;
}

ULuxUIGameUnlockShinEdgeMaster* ULuxUIGameUnlockShinEdgeMaster::GetShinEdgeMasterUnlockProxy() {
    return NULL;
}

ELuxShinEdgeMasterStoryChapter ULuxUIGameUnlockShinEdgeMaster::GetNowChapter() {
    return ELuxShinEdgeMasterStoryChapter::Chapter0;
}

bool ULuxUIGameUnlockShinEdgeMaster::CharactorMissionCheck(const FString& inMissionID, FString& CharaCode) {
    return false;
}

ULuxUIGameUnlockShinEdgeMaster::ULuxUIGameUnlockShinEdgeMaster() {
}

