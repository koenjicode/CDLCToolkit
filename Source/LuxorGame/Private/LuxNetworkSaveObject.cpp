#include "LuxNetworkSaveObject.h"

class ULuxNetworkSaveObject;

void ULuxNetworkSaveObject::ResetNetworkPrivilegeFlag() {
}

bool ULuxNetworkSaveObject::IsOfflineMode() {
    return false;
}

bool ULuxNetworkSaveObject::IsDisableOnlinePlay() {
    return false;
}

bool ULuxNetworkSaveObject::IsCanUseUGC(bool IsTargetMainUser) {
    return false;
}

ULuxNetworkSaveObject* ULuxNetworkSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

void ULuxNetworkSaveObject::ApplyFightRequestDataToGameData() {
}

void ULuxNetworkSaveObject::ApplyFightRequestDataFromGameData() {
}

ULuxNetworkSaveObject::ULuxNetworkSaveObject() {
    this->useCreationCharacter = false;
    this->StyleId = 0;
    this->colorIndex = 0;
    this->projectIdOfCreationProfileFactory = 0;
    this->bLogin = false;
    this->bEnableNetworkData = false;
    this->bSuccessParentalControll = false;
    this->bEnableAge = false;
    this->bLatestPatch = false;
    this->bLatestSystemUpdate = false;
    this->bNetworkBAN = false;
    this->bAllowTemporaryUserUgc.AddDefaulted(2);
    this->bEnableTextChat = false;
}

