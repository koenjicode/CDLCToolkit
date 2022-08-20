#include "LuxMatchLobby.h"

class UUIMenuWidget;
class UBaseUserWidget;

void ULuxMatchLobby::OpenPauseMenu() {
}

void ULuxMatchLobby::Open(UBaseUserWidget* Lobby, UUIMenuWidget* BattleMenu, UUIMenuWidget* LicenseMenu) {
}

void ULuxMatchLobby::OnLicenseClosed(bool isSuccess) {
}

bool ULuxMatchLobby::IsOpenSubWindow() const {
    return false;
}

bool ULuxMatchLobby::IsOpenPauseMenu() const {
    return false;
}

void ULuxMatchLobby::CloseSubWindow() {
}

void ULuxMatchLobby::Close() {
}

ULuxMatchLobby::ULuxMatchLobby() {
    this->mLobby = NULL;
    this->mBattleMenu = NULL;
    this->mLicenseMenu = NULL;
    this->mPlayerLicense = NULL;
}

