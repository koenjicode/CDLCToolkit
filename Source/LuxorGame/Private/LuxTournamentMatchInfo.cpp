#include "LuxTournamentMatchInfo.h"

bool ULuxTournamentMatchInfo::IsSameMatch(const FString& InMatchId) const {
    return false;
}

int32 ULuxTournamentMatchInfo::GetRound() const {
    return 0;
}

int32 ULuxTournamentMatchInfo::GetPosition() const {
    return 0;
}

FString ULuxTournamentMatchInfo::GetOpponentDisplayName() const {
    return TEXT("");
}

FString ULuxTournamentMatchInfo::GetMatchId() const {
    return TEXT("");
}

ULuxTournamentMatchInfo::ULuxTournamentMatchInfo() {
}

