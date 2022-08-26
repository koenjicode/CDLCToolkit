#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DMSplineMarker.generated.h"

class UArrowComponent;
class UCameraComponent;

UCLASS(Blueprintable)
class ADMSplineMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredFOV;
    
    ADMSplineMarker();
};

