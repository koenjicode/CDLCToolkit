#pragma once
#include "CoreMinimal.h"
#include "LuxBattleTutorialTaskProgress.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleTutorialState.h"
#include "LuxBattleTutorialPart.h"
#include "ELuxBattleTutorialPauseState.h"
#include "LuxBattleTutorialScene.h"
#include "LuxBattleTutorialManager.generated.h"

class ULuxTutorialDataAsset;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleTutorialManager : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxTutorialDataAsset* TutorialDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialState TutorialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialPauseState PauseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PauseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PauseInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompleteTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleTutorialTaskProgress> TaskProgressList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReversalEdgeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReversalEdgeInputTime;
    
public:
    ALuxBattleTutorialManager();
    UFUNCTION(BlueprintCallable)
    void StartScene(int32 inSceneIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartPart(int32 inPartIndex, bool bResetPosition);
    
    UFUNCTION(BlueprintCallable)
    void StartNextScene();
    
    UFUNCTION(BlueprintCallable)
    void StartNextPart();
    
    UFUNCTION(BlueprintCallable)
    void OnTickWhenPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLuxBattleTutorialTaskProgress> GetTaskProgressList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTaskCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleTutorialState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSceneCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSceneIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxBattleTutorialScene GetCurrentScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPartIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxBattleTutorialPart GetCurrentPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUserPause() const;
    
};

