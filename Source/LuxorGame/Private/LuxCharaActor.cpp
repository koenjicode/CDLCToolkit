#include "LuxCharaActor.h"
#include "Components/SkeletalMeshComponent.h"

ALuxCharaActor::ALuxCharaActor() {
    this->CharaMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharaMesh0"));
    this->WeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh0"));
}

