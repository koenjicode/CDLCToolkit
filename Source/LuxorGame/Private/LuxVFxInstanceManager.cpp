#include "LuxVFxInstanceManager.h"

class UParticleSystem;
class USceneComponent;
class ULuxParticleSystemComponent;
class UParticleSystemComponent;
class ULuxGroundDebrisComponent;

int32 ALuxVFxInstanceManager::SpawnParticleAttached(UParticleSystem* Template, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale3D, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return 0;
}

int32 ALuxVFxInstanceManager::SpawnParticleAtLocation(UParticleSystem* Template, FVector Location, FRotator Rotation, FVector Scale3D) {
    return 0;
}

int32 ALuxVFxInstanceManager::SpawnGroundDebris(const FLuxGroundDebrisSetting& Setting, const FTransform& Transform) {
    return 0;
}

void ALuxVFxInstanceManager::SetVectorParam(int32 InstanceID, const FName& ParamName, const FVector& VectorParam) {
}

void ALuxVFxInstanceManager::SetScalarParam(int32 InstanceID, const FName& ParamName, float ScalarParam) {
}

void ALuxVFxInstanceManager::SetHiddenSetting(const FVFxHiddenParam& HiddenParam, bool Hidden) {
}

void ALuxVFxInstanceManager::SetGroupTimeDilation(int32 Group, float TimeDilation) {
}

void ALuxVFxInstanceManager::SetColorParam(int32 InstanceID, const FName& ParamName, const FLinearColor& ColorParam) {
}

int32 ALuxVFxInstanceManager::RequestSpawn(const FVFxSpawnParam& SpawnParam) {
    return 0;
}

void ALuxVFxInstanceManager::RequestGenerateEvent(const FVFxEventParam& EventParam) {
}

void ALuxVFxInstanceManager::RequestDestroy(const FVFxDestroyParam& DestroyParam) {
}

void ALuxVFxInstanceManager::OnParticleSystemFinished(UParticleSystemComponent* FinishedPSComponent) {
}

void ALuxVFxInstanceManager::OnGroundDebrisDeactivated(ULuxGroundDebrisComponent* DeactivatedGDComponent) {
}

ULuxParticleSystemComponent* ALuxVFxInstanceManager::GetParticle(int32 InstanceID) {
    return NULL;
}

ULuxGroundDebrisComponent* ALuxVFxInstanceManager::GetGroundDebris(int32 InstanceID) {
    return NULL;
}

void ALuxVFxInstanceManager::DestroyParticle(int32 InstanceID, bool bImmediately) {
}

void ALuxVFxInstanceManager::DestroyGroundDebris(int32 InstanceID, bool bImmediately) {
}

void ALuxVFxInstanceManager::DestroyAllVFx(bool bImmediately) {
}

void ALuxVFxInstanceManager::DestroyAllParticle(bool bImmediately) {
}

void ALuxVFxInstanceManager::DestroyAllGroundDebris(bool bImmediately) {
}

void ALuxVFxInstanceManager::ClearSettingList() {
}

void ALuxVFxInstanceManager::ClearHiddenSetting() {
}

void ALuxVFxInstanceManager::AddVFxSettingListData(const FVFxSettingListDataKey& Key, const FVFxSettingListDataValue& Value) {
}

ALuxVFxInstanceManager::ALuxVFxInstanceManager() {
}

