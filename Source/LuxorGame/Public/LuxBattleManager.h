#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELuxBattleSystemType.h"
#include "LuxActor.h"
#include "LuxBattleResetParam.h"
#include "ELuxBattleMode.h"
#include "ELuxBattleResetType.h"
#include "LuxBattleResult.h"
#include "LuxBattleTickInfo.h"
#include "ELuxBattleTickState.h"
#include "LuxBattleRoundStartData.h"
#include "ELuxBattleRuleType.h"
#include "LuxBattleManager.generated.h"

class ALuxBattleSoundEventHandler;
class ALuxBattleEventListener;
class ALuxBattleVFxEventHandler;
class ALuxBattlePositionResetter;
class ALuxBattleCamera;
class ALuxBattleChara;
class ALuxBattleFrameInput;
class ALuxBattleStageEventHandler;
class ALuxBattleTraceEventHandler;
class ALuxBattleWeaponEventHandler;
class ALuxBattlePauseTicker;
class ALuxBattlePauseController;
class ALuxBattleShortcutController;
class ALuxBattleTrainingManager;
class ALuxBattleCommonInput;
class ALuxBattleFrameStream;
class ALuxBattleStageActorManager;
class ALuxBattleFrameInputLog;
class ALuxBattleFrameInputSync;
class ALuxBattleReplayRecorder;
class ALuxBattleReplayPlayer;
class ALuxBattleGaugeTypeChanger;
class ALuxBattleDummyCustomizer;
class UMaterialParameterCollection;
class ALuxBattleAICustomizer;
class ALuxBattleSpecialtyVFxManager;
class ALuxBattleKeyRecorder;
class ALuxBattleMoveCommandPlayer;
class ALuxBattleTrainingReplayPlayer;
class ALuxBattleDramaticVoice;
class ULuxAsyncLoader;
class ALuxVFxInstanceManager;
class ALuxBattleMissionManager;
class ALuxBattleMissionResultDemo;
class ALuxBattleTutorialManager;
class ALuxBattleVariableAI;
class ALuxBattleManager;
class ALuxBattleTimeManager;
class ALuxBattleStageInfinityManager;
class ALuxBattleColorFadeManager;
class ALuxBattleSound;
class ALuxBattlePlayerDataWatcher;
class ALuxBattleHUDManager;
class ALuxBattleSpecialtySEManager;
class ALuxBattleSubtitleManager;
class ALuxBattleAchievementChecker;
class ALuxBattleRealtimeMultiplayManager;
class ULuxBattleSetup;
class ALuxKurokoActor;
class UObject;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleManager : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleChara> BattleCharaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALuxBattleChara*> BattleCharaArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleCamera> BattleCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleCamera* BattleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleEventListener> EventListenerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleEventListener* EventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleVFxEventHandler> BattleVFxEventHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleVFxEventHandler* BattleVFxEventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleSoundEventHandler> BattleSoundEventHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleSoundEventHandler* BattleSoundEventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleStageEventHandler> BattleStageEventHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleStageEventHandler* BattleStageEventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleTraceEventHandler> BattleTraceEventHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleTraceEventHandler* BattleTraceEventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleWeaponEventHandler> BattleWeaponEventHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleWeaponEventHandler* BattleWeaponEventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattlePauseTicker* BattlePauseTicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattlePauseController> BattlePauseControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattlePauseController* BattlePauseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleShortcutController> BattleShortcutControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleShortcutController* BattleShortcutController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleCommonInput> BattleCommonInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleCommonInput* BattleCommonInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleFrameInput> BattleFrameInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleFrameInput* BattleFrameInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleFrameStream> BattleFrameStreamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleFrameStream* BattleFrameStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleFrameInputLog> BattleFrameInputLogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleFrameInputSync> BattleFrameInputSyncClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleFrameInputLog* BattleFrameInputLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleReplayRecorder* BattleReplayRecorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleReplayPlayer* BattleReplayPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleTrainingManager* BattleTrainingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleGaugeTypeChanger* BattleGaugeTypeChanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattlePositionResetter* BattlePositionResetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleDummyCustomizer* BattleDummyCustomizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleAICustomizer* BattleAICustomizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleKeyRecorder* BattleKeyRecorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleMoveCommandPlayer* BattleMoveCommandPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleTrainingReplayPlayer* BattleTrainingReplayPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleDramaticVoice* BattleDramaticVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleMissionManager* BattleMissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleMissionResultDemo* BattleMissionResultDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleTutorialManager* BattleTutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleVariableAI* BattleVariableAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleTimeManager* BattleTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleStageActorManager* BattleStageActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxVFxInstanceManager* VFxInstanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleStageInfinityManager* StageInfinityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleColorFadeManager* BattleColorFadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleSound* BattleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattlePlayerDataWatcher* PlayerDataWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleHUDManager* BattleHUDManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleSpecialtyVFxManager* BattleSpecialtyVFxManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleSpecialtySEManager* BattleSpecialtySEManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleSubtitleManager* BattleSubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleAchievementChecker* BattleAchievementChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxBattleRealtimeMultiplayManager* BattleRealtimeMultiplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSkipBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCompleteBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyEndBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForciblyStopBattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForciblyCompleteBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleKeyMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleResetParam BattleResetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleRoundStartData RoundSkipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BattleParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CharaWetParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BattleCameraParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxBattleSetup* BattleSetupOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALuxKurokoActor* KurokoActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTickState BattleTickState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleUpdateOnceMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleResetType BattleResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleResetPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleRoundSkipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoringKeyPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoringKeyDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxBattleMode> BattleModeQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleMode BattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleTickInfo BattleTickInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriadReplayRecordingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxAsyncLoader*> MasterLoaders;
    
public:
    ALuxBattleManager();
    UFUNCTION(BlueprintCallable)
    void TrainingModePositionReset();
    
    UFUNCTION(BlueprintCallable)
    void SetLocalInputEnabled(bool bInputEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoringKeyTime(int32 InTime, bool bKeyPressOnly);
    
    UFUNCTION(BlueprintCallable)
    void RestartBattleImmediately(ELuxBattleResetType inType);
    
    UFUNCTION(BlueprintCallable)
    void RestartBattle(ELuxBattleResetType inType);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopShortReplay();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartShortReplay();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartAnselSession();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndAnselSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriadReplayRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchDecided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyPressIgnoringTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyDownIgnoringTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExistShortReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattlePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxBattleTickInfo GetTickInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleSystemType GetBattleSystemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxBattleSetup* GetBattleSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleRuleType GetBattleRuleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleMode GetBattleMode() const;
    
    UFUNCTION(BlueprintCallable)
    static ALuxBattleManager* GetBattleManagerFromContext(const UObject* inContext);
    
    UFUNCTION(BlueprintCallable)
    void FinishSublevelChange();
    
};

