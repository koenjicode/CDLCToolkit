#pragma once
#include "CoreMinimal.h"
#include "LuxParticleModuleLocationPrimitiveSphere.h"
#include "Particles/ParticleModule.h"
#include "LuxParticleModuleLocationPrimitiveSphere_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxParticleModuleLocationPrimitiveSphere_Seeded : public ULuxParticleModuleLocationPrimitiveSphere {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    ULuxParticleModuleLocationPrimitiveSphere_Seeded();
};

