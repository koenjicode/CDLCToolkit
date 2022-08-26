#include "LuxProfileDatabase.h"

class ULuxCreationProfile;

bool ULuxProfileDatabase::unisexRacialType(ELuxRace racialType) const {
    return false;
}

bool ULuxProfileDatabase::is2PModel(const FString& profilePath) const {
    return false;
}

bool ULuxProfileDatabase::has2PModel(ELuxFightStyle STYLE) const {
    return false;
}

FUIDataObject ULuxProfileDatabase::getWeaponData(ELuxFightStyle STYLE, ELuxWeaponVariation WEAPON) const {
    return FUIDataObject{};
}

FUIDataObject ULuxProfileDatabase::getStyleData(ELuxFightStyle STYLE) const {
    return FUIDataObject{};
}

TArray<ELuxGender> ULuxProfileDatabase::getRacialGenderTypes(ELuxRace racialType) const {
    return TArray<ELuxGender>();
}

TAssetPtr<ULuxCreationProfile> ULuxProfileDatabase::findRegularProfileFrom(ELuxFightStyle STYLE, ELuxModelColorType Color) const {
    return NULL;
}

TAssetPtr<ULuxCreationProfile> ULuxProfileDatabase::findProfileFrom(ELuxRace racialType, ELuxGender genderType) const {
    return NULL;
}

ULuxProfileDatabase::ULuxProfileDatabase() {
}

