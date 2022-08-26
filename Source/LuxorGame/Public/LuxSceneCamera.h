#pragma once
#include "CoreMinimal.h"
#include "LuxCamera.h"
#include "UObject/NoExportTypes.h"
#include "LuxSceneCamera.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxSceneCamera : public ALuxCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCeilingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minNearly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxNearly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchArgRange;
    
public:
    ALuxSceneCamera();
    UFUNCTION(BlueprintCallable)
    void ZoomInCamera(float zoomDistance, bool ignoreBorder);
    
    UFUNCTION(BlueprintCallable)
    void VerticalMove(float upDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetMovingBorder(float ground, float ceiling, float NewMinNearly, float NewMaxNearly);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTargetViewLocation(const FVector& TargetLocation, float movingFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMoveDirection(bool longitudinalInputIsCameraMove, bool lateralInputIsCameraMove);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLocation(const FVector& cameraLocation, float movingFrames);
    
    UFUNCTION(BlueprintCallable)
    void ParallelDisplacement(float moveX, float moveY);
    
    UFUNCTION(BlueprintCallable)
    void MomentarilyMove(const FVector& cameraLocation);
    
    UFUNCTION(BlueprintCallable)
    float GetCameraNearly();
    
    UFUNCTION(BlueprintCallable)
    void CanCameraMoveByInput(bool canMove);
    
};

