#include "LuxEmitter.h"
#include "LuxParticleSystemComponent.h"

ALuxEmitter::ALuxEmitter() {
    this->LuxParticleSystemComponent = CreateDefaultSubobject<ULuxParticleSystemComponent>(TEXT("LuxParticleSystemComponent0"));
}

