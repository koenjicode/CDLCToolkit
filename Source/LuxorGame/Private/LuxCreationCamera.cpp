#include "LuxCreationCamera.h"

void ALuxCreationCamera::SetMoveSpeedCoefficient(float zoomSpeed, float analogStickSpeed, float verticalMoveSpeed, float parallelMoveSpeed) {
}

void ALuxCreationCamera::SetDefaultDirection(const FRotator& inRotation) {
}

void ALuxCreationCamera::SetCameraInFront(const FVector& TargetLocation, float closeness) {
}

void ALuxCreationCamera::SelectCameraMode(ELuxModelPositioningType Type, bool immediatelyReflect) {
}

void ALuxCreationCamera::MoveDefaultPosition() {
}

bool ALuxCreationCamera::IsFocusChange(ELuxPartSlot part) {
    return false;
}

FTransform ALuxCreationCamera::GetVirtualParallelMovePos(float moveX, float moveY, float zoomDistance) {
    return FTransform{};
}

ELuxModelPositioningType ALuxCreationCamera::GetCameraPosMode() const {
    return ELuxModelPositioningType::ModelCenter;
}

void ALuxCreationCamera::ChangeCameraFocusPart(ELuxPartSlot part) {
}

void ALuxCreationCamera::CanVirticalMove(bool inputFlag) {
}

void ALuxCreationCamera::CanSphereMoveByCrossKey(bool inputFlag) {
}

void ALuxCreationCamera::CameraInitialize(const FVector& cameraLocation, const FVector& TargetLocation, const FRotator& defaultDirectionRotation) {
}

ALuxCreationCamera::ALuxCreationCamera() {
    this->ZoomSpeedCoefficient = 1.00f;
    this->AnalogStickSpeedCoefficient = 1.00f;
    this->VerticalMoveSpeedCoefficient = 1.00f;
    this->ParallelDisplacementSpeedCoefficient = 1.00f;
    this->CameraShiftMoveVertical = 1.50f;
}

