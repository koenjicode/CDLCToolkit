#pragma once
#include "CoreMinimal.h"
#include "Particles/RotationRate/ParticleModuleRotationRate.h"
#include "LuxParticleModuleRotationRate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxParticleModuleRotationRate : public UParticleModuleRotationRate {
    GENERATED_BODY()
public:
    ULuxParticleModuleRotationRate();
    
    //Begin UObject Interface
    #if WITH_EDITOR
    	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    #endif // WITH_EDITOR
    	virtual void	PostInitProperties() override;
    	//End UObject Interface
    
    	//~ Begin UParticleModule Interface
    	virtual void CompileModule( struct FParticleEmitterBuildInfo& EmitterInfo ) override;
    	virtual void Spawn(FParticleEmitterInstance* Owner, int32 Offset, float SpawnTime, FBaseParticle* ParticleBase) override;
    	virtual void SetToSensibleDefaults(UParticleEmitter* Owner) override;
    	//~ Begin UParticleModule Interface
    
};

