#include "LuxPlayerLicense.h"

class UBaseUserWidget;
class UUIMenuWidget;

void ULuxPlayerLicense::OpenLicense(UUIMenuWidget* LicenseMenu, const FString& UniqueNetIdStr, const FString& mode) {
}

void ULuxPlayerLicense::OnRequestInputCommandNative(UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId) {
}

void ULuxPlayerLicense::CloseLicense() {
}

ULuxPlayerLicense::ULuxPlayerLicense() {
    this->mLicenseMenu = NULL;
}

