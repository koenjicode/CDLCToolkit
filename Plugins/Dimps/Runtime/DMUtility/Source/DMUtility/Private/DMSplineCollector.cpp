#include "DMSplineCollector.h"
#include "Components/SplineComponent.h"

FTransform ADMSplineCollector::GetOptimalTransform(FVector InLoc) const {
    return FTransform{};
}

ADMSplineCollector::ADMSplineCollector() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Origin = NULL;
    this->bIgnoreLocZ = false;
    this->CalcOffset = 0.00f;
}

