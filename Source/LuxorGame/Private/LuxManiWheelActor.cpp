#include "LuxManiWheelActor.h"
#include "Components/StaticMeshComponent.h"
#include "AtomComponent.h"

class AActor;

void ALuxManiWheelActor::EventActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ALuxManiWheelActor::EventActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ALuxManiWheelActor::ALuxManiWheelActor() {
    this->rool_set01_component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("root_set01_component"));
    this->rool_set02_component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("root_set02_component"));
    this->sound_component = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
}

