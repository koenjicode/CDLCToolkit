#include "PreviewHumanActor.h"

class USceneComponent;

void APreviewHumanActor::UpdateExtraPartsVisibility(int32 PartNo, bool Visibility) {
}

void APreviewHumanActor::StopVoice() {
}

void APreviewHumanActor::StopTrace() {
}

void APreviewHumanActor::StepMotion() {
}

void APreviewHumanActor::SetWeaponVisible(bool InWeaponVisible, int32 InDelayFrame) {
}

void APreviewHumanActor::SetupWeaponPartVisiblityData(const TArray<FPreviewHumanWeaponPartVisibilityData>& Data) {
}

void APreviewHumanActor::SetupVoice() {
}

void APreviewHumanActor::SetPreviewHumanVisibility(bool InVisibility) {
}

void APreviewHumanActor::SetPositonOffset(const FVector& InPositionOffset) {
}

void APreviewHumanActor::SetMotionSpeed(float InMotionSpeed) {
}

void APreviewHumanActor::SetMotionFrame(float InPlayMotionFrame) {
}

void APreviewHumanActor::SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}

void APreviewHumanActor::SetFaceMotion(ELuxFacePattern InFacePattern) {
}

void APreviewHumanActor::SetEyeTarget(USceneComponent* InEyeTargetComponent, const FVector& InEyeTargetOffset) {
}

void APreviewHumanActor::SetEyeBlink(ELuxEyeBlinkType InEyeBlinkType) {
}

void APreviewHumanActor::ResumeMotion() {
}

void APreviewHumanActor::ResetWeaponPartVisiblityData() {
}

void APreviewHumanActor::RequestToRefreshAppearance() {
}

void APreviewHumanActor::RequestPlayMotionByMotionData(FPreviewHumanMotionData InRequestMotionData, float InRequestPlayMotionFrame, float InRequestPlayMotionBlendRate) {
}

void APreviewHumanActor::PlayVoice(int32 InCueId) {
}

void APreviewHumanActor::PlayTrace(FPreviewHumanTraceData InTraceData) {
}

void APreviewHumanActor::PlayMotionByMotionData(FPreviewHumanMotionData InMotionData, float InPlayMotionFrame, float InPlayMotionBlendRate) {
}

void APreviewHumanActor::PauseMotion(float InPauseMotionFrame) {
}

bool APreviewHumanActor::IsReadyPreview() const {
    return false;
}

bool APreviewHumanActor::GetCurrentMotionPhaseInfo(int32& motionNo, int32& NowMotionFrame, int32& MaxMotionFrame) const {
    return false;
}

FTransform APreviewHumanActor::GetBoneTransformFromObjId(int32 ObjId, bool InWithScale) {
    return FTransform{};
}

FTransform APreviewHumanActor::GetBoneLocalTransformFromObjId(int32 ObjId, bool InWithScale) {
    return FTransform{};
}

void APreviewHumanActor::ForceUpdate() {
}

APreviewHumanActor::APreviewHumanActor() {
    this->CurrentFacePattern = ELuxFacePattern::EFP_NORMAL;
    this->bPreviewHumanVisibility = true;
    this->bCurrentWeaponVisible = true;
    this->VisibleDelayFrame = 0;
    this->WeaponVisibleDelayFrame = 0;
    this->EyeTargetComponent = NULL;
}

