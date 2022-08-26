#include "LuxWeaponAssetPaths.h"

ULuxWeaponAssetPaths::ULuxWeaponAssetPaths() {
    this->CharacterType = 0;
    this->RawAssets.AddDefaulted(8);
    this->Variations.AddDefaulted(8);
    this->TraceColorApplySettingLists.AddDefaulted(2);
}

