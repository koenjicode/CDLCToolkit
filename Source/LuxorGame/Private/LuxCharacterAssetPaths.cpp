#include "LuxCharacterAssetPaths.h"

ULuxCharacterAssetPaths::ULuxCharacterAssetPaths() {
    this->CharacterType = 0;
    this->RawAssets.AddDefaulted(10);
    this->VoiceTableAssets.AddDefaulted(2);
    this->DebugAssets.AddDefaulted(3);
}

