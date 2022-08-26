#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "LuxParticleSystemComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDBaseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDTranslucentList;
    
public:
    ULuxParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseFixedTime(bool inUseFixedTime);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const TArray<UMaterialInterface*>& inBaseMaterialList, float inLifeTime, float inFadeoutTime, const TArray<UMaterialInterface*>& inTranslucentMaterialList);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTimeDilation(float inBaseTimeDilation);
    
};

