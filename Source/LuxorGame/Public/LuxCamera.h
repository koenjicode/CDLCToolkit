#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Camera/PlayerCameraManager.h"
#include "LuxCamera.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxCamera : public ACameraActor {
    GENERATED_BODY()
public:
    ALuxCamera();
    UFUNCTION(BlueprintCallable)
    void SetViewTargetForPlayer(int32 PlayerIndex, const FViewTargetTransitionParams& TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    void SetViewTarget(const FViewTargetTransitionParams& TransitionParams);
    
};

