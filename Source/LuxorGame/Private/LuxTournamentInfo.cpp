#include "LuxTournamentInfo.h"

bool ULuxTournamentInfo::IsRegistered() const {
    return false;
}

bool ULuxTournamentInfo::IsCheckedIn() const {
    return false;
}

FText ULuxTournamentInfo::GetTournamentStartDateText() const {
    return FText::GetEmpty();
}

FString ULuxTournamentInfo::GetTitle() const {
    return TEXT("");
}

FText ULuxTournamentInfo::GetRegistrationEndDateText() const {
    return FText::GetEmpty();
}

FString ULuxTournamentInfo::GetDescription() const {
    return TEXT("");
}

ELuxTournamentInfoDateStatus ULuxTournamentInfo::GetDateStatus() const {
    return ELuxTournamentInfoDateStatus::ETDS_TOURNAMENT_REGISTRATION;
}

FText ULuxTournamentInfo::GetCheckInEndDateText() const {
    return FText::GetEmpty();
}

ULuxTournamentInfo::ULuxTournamentInfo() {
}

