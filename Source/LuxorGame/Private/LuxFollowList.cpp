#include "LuxFollowList.h"

class UUIMenuWidget;

void ULuxFollowList::Open(UUIMenuWidget* menuWidget, UUIMenuWidget* licenseMenuWidget) {
}

void ULuxFollowList::OnLicenseClosed(bool bSuccess) {
}

void ULuxFollowList::Close() {
}

ULuxFollowList::ULuxFollowList() {
    this->mFollowMenu = NULL;
    this->mLicenseMenu = NULL;
    this->mPlayerLicense = NULL;
}

