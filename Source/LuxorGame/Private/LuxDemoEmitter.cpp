#include "LuxDemoEmitter.h"
#include "Particles/ParticleSystemComponent.h"

ALuxDemoEmitter::ALuxDemoEmitter() {
    this->ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"));
    this->DemoCharacter = NULL;
    this->AttachBone = ELuxDemoEmitterAttachBone::EAB_BASE;
}

