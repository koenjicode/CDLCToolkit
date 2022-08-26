#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LuxGroundDebrisSetting.h"
#include "UObject/NoExportTypes.h"
#include "LuxVFxFunctionLibrary.generated.h"

class ULuxParticleSystemComponent;
class ULuxGroundDebrisComponent;
class UParticleSystem;
class UObject;
class USceneComponent;
class APostProcessVolume;
class UMaterialInterface;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxVFxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxVFxFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static ULuxParticleSystemComponent* SpawnLuxEmitterAttached(UParticleSystem* Template, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale3D, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static ULuxParticleSystemComponent* SpawnLuxEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* Template, FVector Location, FRotator Rotation, FVector Scale3D, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static ULuxGroundDebrisComponent* SpawnGroundDebris(UObject* WorldContextObject, const FLuxGroundDebrisSetting& Setting, const FTransform& Transform, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePostProcessMaterial(APostProcessVolume* PostProcessVolume, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APostProcessVolume* GetPostProcessVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivatePostProcess(APostProcessVolume* PostProcessVolume, int32 index);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddPostProcessMaterial(APostProcessVolume* PostProcessVolume, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static void ActivatePostProcess(APostProcessVolume* PostProcessVolume, int32 index);
    
};

