#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxDemoHumanActor.h"
#include "PreviewHumanMotionData.h"
#include "ELuxFacePattern.h"
#include "PreviewHumanWeaponPartVisibilityData.h"
#include "ELuxEyeBlinkType.h"
#include "PreviewHumanTraceData.h"
#include "UObject/NoExportTypes.h"
#include "PreviewHumanActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class LUXORGAME_API APreviewHumanActor : public ALuxDemoHumanActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMotionStarted, int32, motionNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMotionFinished, int32, motionNo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewHumanMotionData CurrentMotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFacePattern CurrentFacePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewHumanVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentWeaponVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotionStarted OnMotionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotionFinished OnMotionFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EyeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleDelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponVisibleDelayFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* EyeTargetComponent;
    
public:
    APreviewHumanActor();
    UFUNCTION(BlueprintCallable)
    void UpdateExtraPartsVisibility(int32 PartNo, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopTrace();
    
    UFUNCTION(BlueprintCallable)
    void StepMotion();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisible(bool InWeaponVisible, int32 InDelayFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponPartVisiblityData(const TArray<FPreviewHumanWeaponPartVisibilityData>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetupVoice();
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewHumanVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPositonOffset(const FVector& InPositionOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionSpeed(float InMotionSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionFrame(float InPlayMotionFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceMotion(ELuxFacePattern InFacePattern);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeTarget(USceneComponent* InEyeTargetComponent, const FVector& InEyeTargetOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeBlink(ELuxEyeBlinkType InEyeBlinkType);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMotion();
    
    UFUNCTION(BlueprintCallable)
    void ResetWeaponPartVisiblityData();
    
    UFUNCTION(BlueprintCallable)
    void RequestToRefreshAppearance();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayMotionByMotionData(FPreviewHumanMotionData InRequestMotionData, float InRequestPlayMotionFrame, float InRequestPlayMotionBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(int32 InCueId);
    
    UFUNCTION(BlueprintCallable)
    void PlayTrace(FPreviewHumanTraceData InTraceData);
    
    UFUNCTION(BlueprintCallable)
    void PlayMotionByMotionData(FPreviewHumanMotionData InMotionData, float InPlayMotionFrame, float InPlayMotionBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void PauseMotion(float InPauseMotionFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyPreview() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentMotionPhaseInfo(int32& motionNo, int32& NowMotionFrame, int32& MaxMotionFrame) const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneTransformFromObjId(int32 ObjId, bool InWithScale);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneLocalTransformFromObjId(int32 ObjId, bool InWithScale);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    
};

