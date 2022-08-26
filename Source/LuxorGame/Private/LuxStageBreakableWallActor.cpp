#include "LuxStageBreakableWallActor.h"
#include "LuxSkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "LuxStageSkeletalMeshComponent.h"
#include "LuxStageMeshComponent.h"

class UParticleSystemComponent;

void ALuxStageBreakableWallActor::OnParticleSystemFinished(UParticleSystemComponent* FinishedPSComponent) {
}

void ALuxStageBreakableWallActor::Broken(bool Immediately) {
}

ALuxStageBreakableWallActor::ALuxStageBreakableWallActor() {
    this->BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->BaseTranslucentMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>(TEXT("BaseTranslucentMesh"));
    this->BrokenMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrokenMesh"));
    this->BrokenTranslucentMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>(TEXT("BrokenTranslucentMesh"));
    this->BreakingMeshComponent = CreateDefaultSubobject<ULuxSkeletalMeshComponent>(TEXT("BreakingMeshComponent"));
    this->BreakingTranslucentMeshComponent = CreateDefaultSubobject<ULuxStageSkeletalMeshComponent>(TEXT("BreakingTranslucentMeshComponent"));
    this->ID = -1;
    this->FadeFrame = 10;
    this->ParticleSystem = NULL;
    this->ParticleSystemComponent = NULL;
}

