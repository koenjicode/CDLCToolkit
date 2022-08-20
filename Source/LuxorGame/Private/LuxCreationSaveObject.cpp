#include "LuxCreationSaveObject.h"

class ULuxCreationSaveObject;

void ULuxCreationSaveObject::SetTemporaryProfileForCharaSelect(int32 InSide, const FLuxProfileData& InProfileData) {
}

void ULuxCreationSaveObject::SetTemporaryProfile(FName inTag, const FLuxProfileData& InProfileData) {
}

bool ULuxCreationSaveObject::GetTemporaryProfileForCharaSelect(int32 InSide, FLuxProfileData& ProfileData) const {
    return false;
}

bool ULuxCreationSaveObject::GetTemporaryProfile(FName inTag, FLuxProfileData& ProfileData) const {
    return false;
}

ULuxCreationSaveObject* ULuxCreationSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

bool ULuxCreationSaveObject::CanUseProfilesSafetyNotToWearDLCContents() const {
    return false;
}

ULuxCreationSaveObject::ULuxCreationSaveObject() {
}

