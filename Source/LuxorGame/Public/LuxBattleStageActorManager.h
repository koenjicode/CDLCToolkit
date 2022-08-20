#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleStageActorManager.generated.h"

class ALuxStageHideableMeshActor;
class ALuxStageActorBase;
class ULuxStageMobAnimInstance;
class ALuxStageWolfCharacter;
class ALuxStageBreakableWallActor;
class ALuxStageBreakableBarrierActor;
class ALuxStageVisibilitySwitcher;
class ALuxStageMeshActor;
class ALuxStageCuttableMeshBase;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleStageActorManager : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageActorBase*> StageActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageWolfCharacter*> WolfCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageBreakableWallActor*> BreakableWallActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageBreakableBarrierActor*> BarrierActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageHideableMeshActor*> HideableMeshActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageVisibilitySwitcher*> VisibilitySwitcherList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULuxStageMobAnimInstance*> StageMobList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageMeshActor*> StageMeshActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuxStageCuttableMeshBase*> CuttableStageMeshActorList;
    
public:
    ALuxBattleStageActorManager();
};

