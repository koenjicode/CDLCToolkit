#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#include "LuxParticleModuleLocationPrimitiveCylinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChainRandom;
    
    ULuxParticleModuleLocationPrimitiveCylinder();
};

