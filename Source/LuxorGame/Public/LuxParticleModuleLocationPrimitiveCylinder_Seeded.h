#pragma once
#include "CoreMinimal.h"
#include "LuxParticleModuleLocationPrimitiveCylinder.h"
#include "Particles/ParticleModule.h"
#include "LuxParticleModuleLocationPrimitiveCylinder_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxParticleModuleLocationPrimitiveCylinder_Seeded : public ULuxParticleModuleLocationPrimitiveCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    ULuxParticleModuleLocationPrimitiveCylinder_Seeded();
};

