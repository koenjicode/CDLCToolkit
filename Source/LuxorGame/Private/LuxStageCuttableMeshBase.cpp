#include "LuxStageCuttableMeshBase.h"
#include "AtomComponent.h"
#include "ProceduralMeshComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void ALuxStageCuttableMeshBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALuxStageCuttableMeshBase::Initialize() {
}

ALuxStageCuttableMeshBase::ALuxStageCuttableMeshBase() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InitialStaticMesh"));
    this->ProceduralMeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CuttableProceduralMesh"));
    this->SliceSEComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("SliceSE"));
    this->SliceParticle = NULL;
    this->SliceLeafParticle = NULL;
    this->SLeapRate = 0.70f;
    this->TranslucentMaterial = NULL;
    this->TransparentMaterial = NULL;
    this->FadeFrame = 0;
    this->MinCuttableDistance = 10.00f;
    this->TestEnabled = false;
    this->MID_CuttedMaterial = NULL;
    this->Cutted_ProceduralMeshComponent = NULL;
}

