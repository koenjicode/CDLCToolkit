#include "LuxStageHideableMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "LuxStageMeshComponent.h"

void ALuxStageHideableMeshActor::SetMeshHidden(bool inHidden) {
}

void ALuxStageHideableMeshActor::Initialize() {
}

void ALuxStageHideableMeshActor::Finalize() {
}

ALuxStageHideableMeshActor::ALuxStageHideableMeshActor() {
    this->BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->DitherMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>(TEXT("DitherMesh"));
    this->bDitherEnabled = false;
    this->DitherFrame = 10;
}

