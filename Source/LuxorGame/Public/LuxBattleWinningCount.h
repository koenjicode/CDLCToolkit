#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxBattleHUDBase.h"
#include "LuxBattleWinningCount.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ALuxBattleWinningCount : public ALuxBattleHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> VersusWIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NetworkWIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MissionWIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WinningCountInstance;
    
    ALuxBattleWinningCount();
};

