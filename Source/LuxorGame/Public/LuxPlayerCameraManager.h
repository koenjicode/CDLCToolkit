#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LuxPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ALuxPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ALuxPlayerCameraManager();
};

