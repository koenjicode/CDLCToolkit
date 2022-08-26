#include "DMSplineMarker.h"
#include "Components/ArrowComponent.h"
#include "Camera/CameraComponent.h"

ADMSplineMarker::ADMSplineMarker() {
    this->Direction = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
    this->CameraViewer = CreateDefaultSubobject<UCameraComponent>(TEXT("CamView"));
    this->DesiredFOV = 50.00f;
}

