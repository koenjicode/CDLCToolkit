#include "LuxUserPrivilegeManager.h"

void ULuxUserPrivilegeManager::RequestAccountTypeCheck(bool IsRequireUpgradeUI) {
}

void ULuxUserPrivilegeManager::RemoveOnUcgCheckComplete() {
}

void ULuxUserPrivilegeManager::RemoveOnAccountTypeCheckComplete() {
}

void ULuxUserPrivilegeManager::GetUserContentPrivilege(int32 InUserId, bool InIsCommunicateCheck) {
}

FString ULuxUserPrivilegeManager::GetRankedMatchPrivilegeErrorDialog(ELuxPrivilegeErrorType inType) {
    return TEXT("");
}

FString ULuxUserPrivilegeManager::GetPlayerMatchPrivilegeErrorDialog(ELuxPrivilegeErrorType inType) {
    return TEXT("");
}

FString ULuxUserPrivilegeManager::GetFightRequestPrivilegeErrorDialog(ELuxPrivilegeErrorType inType) {
    return TEXT("");
}

void ULuxUserPrivilegeManager::AddOnUcgCheckComplete(ULuxUserPrivilegeManager::FOnUcgCheckComplete InOnUcgCheckComplete) {
}

void ULuxUserPrivilegeManager::AddOnAccountTypeCheckComplete(ULuxUserPrivilegeManager::FOnTaskComplete InOnAccountTypeCheckComplete) {
}

ULuxUserPrivilegeManager::ULuxUserPrivilegeManager() {
}

