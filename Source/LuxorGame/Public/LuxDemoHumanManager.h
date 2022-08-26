#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxActor.h"
#include "ELuxFingerSideType.h"
#include "UObject/NoExportTypes.h"
#include "ELuxMotionPriorityType.h"
#include "ELuxMotionPhase.h"
#include "ELuxFacePattern.h"
#include "ELuxEyeWatch.h"
#include "ELuxEyeBlinkType.h"
#include "LuxDemoHumanManager.generated.h"

class ALuxBattleChara;
class UObject;
class ULuxBattlePlayerSetup;
class ULuxCreationProfile;
class ALuxDemoHumanManager;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxDemoHumanManager : public ALuxActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDemoHumanReset, int32, index, FName, Tag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDemoHumanReady, int32, index, FName, Tag);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALuxBattleChara> BattleCharaClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoHumanReady OnDemoHumanReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoHumanReset OnDemoHumanReset;
    
    ALuxDemoHumanManager();
    UFUNCTION(BlueprintCallable)
    void StopLipSync(FName inTag, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartLipSync(FName inTag, int32 inIndex, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationY(FName inTag, int32 inIndex, float ry);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(FName inTag, int32 inIndex, FVector pos);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionNo(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, int32 motionNo, float motionFrame, ELuxMotionPriorityType motionPriorityType);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionHokanFrame(FName inTag, int32 inIndex, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionFrame(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, float motionFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlendRate(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, float rate);
    
    UFUNCTION(BlueprintCallable)
    void SetLipSyncFrame(FName inTag, int32 inIndex, float inFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetFingerMotionFrame(FName inTag, int32 index, ELuxFingerSideType side, float frame);
    
    UFUNCTION(BlueprintCallable)
    void SetFingerMotion(FName inTag, int32 index, ELuxFingerSideType side, int32 motionNo, float frame);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePattern(FName inTag, int32 inIndex, ELuxFacePattern facePattern);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeWatchType(FName inTag, int32 inIndex, ELuxEyeWatch inType);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeTargetPosition(FName inTag, int32 inIndex, FVector pos);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeBlink(FName inTag, int32 index, ELuxEyeBlinkType eyeBlinkType);
    
    UFUNCTION(BlueprintCallable)
    void SetDemoSpeedRate(float speedRate);
    
    UFUNCTION(BlueprintCallable)
    bool ResetDemoHumanFromTagged(FName inTag, ULuxBattlePlayerSetup* inSetup);
    
    UFUNCTION(BlueprintCallable)
    bool ResetDemoHumanFromProfileTagged(FName inTag, ULuxCreationProfile* inProfile);
    
    UFUNCTION(BlueprintCallable)
    void ResetDemoHumanFromProfile(int32 index, ULuxCreationProfile* inProfile);
    
    UFUNCTION(BlueprintCallable)
    void ResetDemoHuman(int32 index, ULuxBattlePlayerSetup* inSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartedDemo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTag(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSwayBoneMaxCount(FName inTag, int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMotionPhaseInfo(int32& outMotionNo, int32& outNowFrame, int32& outMaxFrame, FName inTag, int32 inIndex, ELuxMotionPhase motionPhase) const;
    
    UFUNCTION(BlueprintCallable)
    ELuxFacePattern GetFacePattern(FName inTag, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxEyeWatch GetEyeWatchType(FName inTag, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetEyeTargetPosition(FName inTag, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDetailedMotionPhaseInfo(int32& outMotionNo, float& outNowFrame, float& outMaxFrame, FName inTag, int32 inIndex, ELuxMotionPhase motionPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDemoSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALuxBattleChara* GetDemoHumanTagged(FName inTag) const;
    
    UFUNCTION(BlueprintCallable)
    static ALuxDemoHumanManager* GetDemoHumanManager(UObject* inContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALuxBattleChara* GetDemoHuman(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void Genocide();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDemoHumanTagged(FName inTag);
    
    UFUNCTION(BlueprintCallable)
    void DestroyDemoHuman(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDemoHumanTagged(FName inTag, ULuxBattlePlayerSetup* inSetup, ALuxBattleChara* inCustomChara);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDemoHumanFromProfileTagged(FName inTag, ULuxCreationProfile* inProfile, ALuxBattleChara* inCustomChara);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateDemoHumanFromProfile(ULuxCreationProfile* inProfile, ALuxBattleChara* inCustomChara);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateDemoHuman(ULuxBattlePlayerSetup* inSetup, ALuxBattleChara* inCustomChara);
    
};

