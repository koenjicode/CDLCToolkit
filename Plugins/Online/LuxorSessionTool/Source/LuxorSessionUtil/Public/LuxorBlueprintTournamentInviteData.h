#pragma once
#include "CoreMinimal.h"
#include "ELuxOnTournamentInviteType.h"
#include "LuxorBlueprintTournamentInviteData.generated.h"

USTRUCT(BlueprintType)
struct FLuxorBlueprintTournamentInviteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOnTournamentInviteType InviteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TournamentId;
    
    LUXORSESSIONUTIL_API FLuxorBlueprintTournamentInviteData();
};

