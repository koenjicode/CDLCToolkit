#include "LuxTournamentManager.h"

class ULuxTournamentMatchInfo;
class ULuxTournamentInfo;

void ULuxTournamentManager::SubmitMatchResult() {
}

void ULuxTournamentManager::SetStartMatch(const ULuxTournamentMatchInfo* InMatchInfo) {
}

void ULuxTournamentManager::SetOnSystemProfileClosed(ULuxTournamentManager::FOnSystemProfileClosed InOnSystemProfileClosed) {
}

void ULuxTournamentManager::SetOnSubmitResultComplete(ULuxTournamentManager::FOnSubmitResultComplete InOnSubmitResultComplete) {
}

void ULuxTournamentManager::SetOnGetTournamentListComplete(ULuxTournamentManager::FOnGetTournamentListComplete InOnGetTournamentListComplete) {
}

void ULuxTournamentManager::SetOnGetMatchtListComplete(ULuxTournamentManager::FOnGetMatchListComplete InOnGetTournamentMatchComplete) {
}

bool ULuxTournamentManager::SetMyBattleResult(ELuxTournamentBattleResultType Result) {
    return false;
}

void ULuxTournamentManager::ResetStartMatch() {
}

void ULuxTournamentManager::RequestTournamentList() {
}

void ULuxTournamentManager::RequestMatchListByInfo(const ULuxTournamentInfo* InTournamentInfo) {
}

void ULuxTournamentManager::RequestMatchListById(const FString& InTournamentId) {
}

void ULuxTournamentManager::RemoveOnSystemProfileClosed() {
}

void ULuxTournamentManager::RemoveOnSubmitResultComplete() {
}

void ULuxTournamentManager::RemoveOnGetTournamentListComplete() {
}

void ULuxTournamentManager::RemoveOnGetMatchtListComplete() {
}

ELuxTournamentLaunchSystemErrorType ULuxTournamentManager::LaunchSystemTournamentMatch(const ULuxTournamentMatchInfo* InMatchInfo) const {
    return ELuxTournamentLaunchSystemErrorType::ETLS_NO_ERROR;
}

ELuxTournamentLaunchSystemErrorType ULuxTournamentManager::LaunchSystemTournamentList() const {
    return ELuxTournamentLaunchSystemErrorType::ETLS_NO_ERROR;
}

ELuxTournamentLaunchSystemErrorType ULuxTournamentManager::LaunchSystemTournament(const ULuxTournamentInfo* InTournamentInfo) const {
    return ELuxTournamentLaunchSystemErrorType::ETLS_NO_ERROR;
}

ELuxTournamentLaunchSystemErrorType ULuxTournamentManager::LaunchSystemProfile(const ULuxTournamentMatchInfo* InMatchInfo) const {
    return ELuxTournamentLaunchSystemErrorType::ETLS_NO_ERROR;
}

TArray<ULuxTournamentInfo*> ULuxTournamentManager::GetTournamentList() const {
    return TArray<ULuxTournamentInfo*>();
}

ULuxTournamentMatchInfo* ULuxTournamentManager::GetPrevMatch() {
    return NULL;
}

ULuxTournamentMatchInfo* ULuxTournamentManager::GetNextMatchById(const FString& InTournamentId) {
    return NULL;
}

ULuxTournamentMatchInfo* ULuxTournamentManager::GetNextMatch(const ULuxTournamentInfo* InTournamentInfo) {
    return NULL;
}

ULuxTournamentManager::ULuxTournamentManager() {
}

