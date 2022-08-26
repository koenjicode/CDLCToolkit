#include "LuxCreationProfile.h"

void ULuxCreationProfile::SetDisableCreationTex(bool bDisable) {
}

bool ULuxCreationProfile::IsRenderStickerComplete() const {
    return false;
}

ULuxCreationProfile::ULuxCreationProfile() {
    this->STYLE = ELuxFightStyle::EFS_MITSURUGI;
    this->Race = ELuxRace::ELR_Human;
    this->BodyScales.AddDefaulted(15);
    this->Muscle = ELuxMuscleType::EMT_Default;
    this->bUniqueColorMask = false;
    this->PARTS.AddDefaulted(25);
    this->partsColor.AddDefaulted(25);
    this->ExtraPartsSettings.AddDefaulted(3);
    this->sticker.AddDefaulted(13);
    this->bDisableCreationTex = true;
    this->bRestrictCommentOpenFriendOnly = false;
    this->PartsBreakableUpper = true;
    this->PartsBreakableMiddle = true;
    this->PartsBreakableLower = true;
}

