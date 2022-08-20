#include "LuxBattleSetup.h"
#include "LuxBattlePlayerSetup.h"
#include "LuxBattleSoundSetup.h"
#include "LuxBattleStageSetup.h"

void ULuxBattleSetup::EditorSetStageIndex(int32 inIndex) {
}

ULuxBattleSetup::ULuxBattleSetup() {
    this->PlayerLeft = CreateDefaultSubobject<ULuxBattlePlayerSetup>(TEXT("PlayerLeft"));
    this->PlayerRight = CreateDefaultSubobject<ULuxBattlePlayerSetup>(TEXT("PlayerRight"));
    this->PlayerDummy = CreateDefaultSubobject<ULuxBattlePlayerSetup>(TEXT("PlayerDummy"));
    this->SoundSetup = CreateDefaultSubobject<ULuxBattleSoundSetup>(TEXT("SoundSetup"));
    this->StageSetup = CreateDefaultSubobject<ULuxBattleStageSetup>(TEXT("StageSetup"));
    this->bAutoStart = true;
    this->bEndless = true;
    this->bLocalBattleProvider = false;
}

