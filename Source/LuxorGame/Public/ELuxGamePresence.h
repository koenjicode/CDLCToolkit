#pragma once
#include "CoreMinimal.h"
#include "ELuxGamePresence.generated.h"

UENUM(BlueprintType)
enum class ELuxGamePresence : uint8 {
    MainMenu,
    ShinEdgeMaster,
    Chronicle,
    Creation,
    Arcade,
    Versus,
    Training,
    RankMatch,
    CasualMatch,
    Ranking,
    Replay,
    Museum,
    Options,
    Tournament,
};

