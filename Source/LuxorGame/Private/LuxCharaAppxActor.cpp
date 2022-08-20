#include "LuxCharaAppxActor.h"
#include "Components/SkeletalMeshComponent.h"


ALuxCharaAppxActor::ALuxCharaAppxActor() {
    this->AppxMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AppxMeshComponent"));
    this->TargetBoneID = 0;
    this->TargetModeID = 0;
    this->TargetModeValue = 0;
    this->LastHeaderFrame = 0.00f;
    this->TargetHeaderPhase = 0;
}

