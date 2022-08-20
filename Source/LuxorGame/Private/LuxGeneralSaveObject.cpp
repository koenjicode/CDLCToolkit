#include "LuxGeneralSaveObject.h"

class ULuxGeneralSaveObject;

ULuxGeneralSaveObject* ULuxGeneralSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

void ULuxGeneralSaveObject::AddSoulPoint(int32 InAddPoint) {
}

ULuxGeneralSaveObject::ULuxGeneralSaveObject() {
    this->bWatchedIntroMission = false;
    this->bFirstSEMDataCreation = false;
    this->SoulMoney = 0;
    this->bWatchedEula = false;
    this->bWatchedPrivacyPolicy = false;
    this->bWatchedAgreeKpi = false;
    this->bFirstGraphicSetting = false;
}

