#include "LuxVFxFunctionLibrary.h"

class UParticleSystem;
class UObject;
class USceneComponent;
class ULuxParticleSystemComponent;
class ULuxGroundDebrisComponent;
class APostProcessVolume;
class UMaterialInterface;

ULuxParticleSystemComponent* ULuxVFxFunctionLibrary::SpawnLuxEmitterAttached(UParticleSystem* Template, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale3D, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy) {
    return NULL;
}

ULuxParticleSystemComponent* ULuxVFxFunctionLibrary::SpawnLuxEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* Template, FVector Location, FRotator Rotation, FVector Scale3D, bool bAutoDestroy) {
    return NULL;
}

ULuxGroundDebrisComponent* ULuxVFxFunctionLibrary::SpawnGroundDebris(UObject* WorldContextObject, const FLuxGroundDebrisSetting& Setting, const FTransform& Transform, bool bAutoDestroy) {
    return NULL;
}

void ULuxVFxFunctionLibrary::RemovePostProcessMaterial(APostProcessVolume* PostProcessVolume, int32 index) {
}

APostProcessVolume* ULuxVFxFunctionLibrary::GetPostProcessVolume(UObject* WorldContextObject) {
    return NULL;
}

void ULuxVFxFunctionLibrary::DeactivatePostProcess(APostProcessVolume* PostProcessVolume, int32 index) {
}

int32 ULuxVFxFunctionLibrary::AddPostProcessMaterial(APostProcessVolume* PostProcessVolume, UMaterialInterface* Material) {
    return 0;
}

void ULuxVFxFunctionLibrary::ActivatePostProcess(APostProcessVolume* PostProcessVolume, int32 index) {
}

ULuxVFxFunctionLibrary::ULuxVFxFunctionLibrary() {
}

