/*#pragma once
#include "CoreMinimal.h"
#include "Particles/Event/ParticleModuleEventSendToGame.h"
#include "ELuxSEBankType.h"
#include "SocketSubsystem.h"
#include "Runtime/Networking/Public/Networking.h"
#include "LuxParticleSoundEvent.generated.h"

UCLASS()
class ULuxParticleSoundEvent : public UParticleModuleEventSendToGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxSEBankType BankType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLocation;
    
    ULuxParticleSoundEvent(const FObjectInitializer& ObjectInitializer);


    /** This is our function to allow subclasses to "do the event action" *#1#
    virtual void DoEvent( const FVector& InCollideDirection, const FVector& InHitLocation, const FVector& InHitNormal, const FName& InBoneName ) override;
    
};*/

