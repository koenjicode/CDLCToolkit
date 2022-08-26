#pragma once
#include "CoreMinimal.h"
#include "LuxSceneCamera.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELuxModelPositioningType.h"
#include "UObject/NoExportTypes.h"
#include "ELuxPartSlot.h"
#include "LuxCreationCamera.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxCreationCamera : public ALuxSceneCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeedCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogStickSpeedCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalMoveSpeedCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParallelDisplacementSpeedCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShiftMoveVertical;
    
public:
    ALuxCreationCamera();
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeedCoefficient(float zoomSpeed, float analogStickSpeed, float verticalMoveSpeed, float parallelMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDirection(const FRotator& inRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraInFront(const FVector& TargetLocation, float closeness);
    
    UFUNCTION(BlueprintCallable)
    void SelectCameraMode(ELuxModelPositioningType Type, bool immediatelyReflect);
    
    UFUNCTION(BlueprintCallable)
    void MoveDefaultPosition();
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusChange(ELuxPartSlot part);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetVirtualParallelMovePos(float moveX, float moveY, float zoomDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxModelPositioningType GetCameraPosMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraFocusPart(ELuxPartSlot part);
    
    UFUNCTION(BlueprintCallable)
    void CanVirticalMove(bool inputFlag);
    
    UFUNCTION(BlueprintCallable)
    void CanSphereMoveByCrossKey(bool inputFlag);
    
    UFUNCTION(BlueprintCallable)
    void CameraInitialize(const FVector& cameraLocation, const FVector& TargetLocation, const FRotator& defaultDirectionRotation);
    
};

