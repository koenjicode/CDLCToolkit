#pragma once
#include "CoreMinimal.h"
#include "LuxBattleTutorialTask.h"
#include "ELuxBattleTutorialCpuType.h"
#include "ELuxBattleTutorialLifeGaugeType.h"
#include "ELuxBattleTutorialInputType.h"
#include "ELuxBattleTutorialSoulGaugeType.h"
#include "ELuxBattleTutorialReversalEdgeType.h"
#include "ELuxBattleTutorialPauseType.h"
#include "LuxBattleTutorialScene.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleTutorialScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleTutorialTask> TaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialCpuType CpuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialSoulGaugeType SoulGaugeType1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialLifeGaugeType LifeGaugeType2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialReversalEdgeType ReversalEdgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardReversalEdgeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForSoulChargeToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialPauseType PauseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PauseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompleteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    FLuxBattleTutorialScene();
};

