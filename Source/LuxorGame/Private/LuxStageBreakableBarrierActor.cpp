#include "LuxStageBreakableBarrierActor.h"
#include "LuxSkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

class UParticleSystemComponent;

void ALuxStageBreakableBarrierActor::OnParticleSystemFinished(UParticleSystemComponent* FinishedPSComponent) {
}

void ALuxStageBreakableBarrierActor::Initialize(int32 HitCount) {
}

void ALuxStageBreakableBarrierActor::Hit(const FVector& Position) {
}

ALuxStageBreakableBarrierActor::ALuxStageBreakableBarrierActor() {
    this->BarrierFace = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrierFace"));
    this->BarrierBack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrierBack"));
    this->BarrierFloor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrierFloor"));
    this->BarrierBreaking = CreateDefaultSubobject<ULuxSkeletalMeshComponent>(TEXT("BarrierBreaking"));
    this->ID = -1;
    this->Endurance = 1;
    this->FadeFrame = 15;
    this->BreakPS = NULL;
    this->HitEffect = NULL;
    this->BreakEffect = NULL;
    this->MID_Face = NULL;
    this->MID_Back = NULL;
    this->MID_Floor = NULL;
    this->MID_Breaking = NULL;
}

