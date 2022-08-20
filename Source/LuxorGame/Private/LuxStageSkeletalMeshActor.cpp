#include "LuxStageSkeletalMeshActor.h"
#include "LuxRootMotionComponent.h"
#include "LuxSkeletalMeshComponent.h"


ALuxStageSkeletalMeshActor::ALuxStageSkeletalMeshActor() {
    this->LuxSkeletalMeshComponent = CreateDefaultSubobject<ULuxSkeletalMeshComponent>(TEXT("LuxSkeletalMeshComponent0"));
    this->LuxRootMotionComponent = CreateDefaultSubobject<ULuxRootMotionComponent>(TEXT("LuxRootMotionComponent0"));
    this->TimeDilation = 1.00f;
}

