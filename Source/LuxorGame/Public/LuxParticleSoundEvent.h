#pragma once
#include "CoreMinimal.h"
#include "Particles/Event/ParticleModuleEventSendToGame.h"
#include "ELuxSEBankType.h"
#include "LuxParticleSoundEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxParticleSoundEvent : public UParticleModuleEventSendToGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSEBankType BankType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLocation;
    
    ULuxParticleSoundEvent();
};

