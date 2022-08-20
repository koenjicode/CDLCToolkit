#include "LuxStageMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "LuxStageMeshComponent.h"

ALuxStageMeshActor::ALuxStageMeshActor() {
    this->BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->SoftOpacityMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>(TEXT("SoftOpacityMesh"));
    this->TranslucentMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TranslucentMesh"));
    this->FadeFrame = 10;
    this->TestEnabled = false;
}

