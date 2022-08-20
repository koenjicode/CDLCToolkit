#include "LuxSceneCamera.h"

void ALuxSceneCamera::ZoomInCamera(float zoomDistance, bool ignoreBorder) {
}

void ALuxSceneCamera::VerticalMove(float upDistance) {
}

void ALuxSceneCamera::SetMovingBorder(float ground, float ceiling, float NewMinNearly, float NewMaxNearly) {
}

void ALuxSceneCamera::SetCameraTargetViewLocation(const FVector& TargetLocation, float movingFrames) {
}

void ALuxSceneCamera::SetCameraMoveDirection(bool longitudinalInputIsCameraMove, bool lateralInputIsCameraMove) {
}

void ALuxSceneCamera::SetCameraLocation(const FVector& cameraLocation, float movingFrames) {
}

void ALuxSceneCamera::ParallelDisplacement(float moveX, float moveY) {
}

void ALuxSceneCamera::MomentarilyMove(const FVector& cameraLocation) {
}

float ALuxSceneCamera::GetCameraNearly() {
    return 0.0f;
}

void ALuxSceneCamera::CanCameraMoveByInput(bool canMove) {
}

ALuxSceneCamera::ALuxSceneCamera() {
    this->AutoMoveTime = 0.80f;
    this->GroundHeight = 10.00f;
    this->TargetCeilingHeight = 230.00f;
    this->minNearly = 200.00f;
    this->maxNearly = 800.00f;
    this->PitchArgRange = 60.00f;
}

