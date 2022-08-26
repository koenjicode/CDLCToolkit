#include "DMLockableActorBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/ArrowComponent.h"
#include "DMLockableComponent.h"

class AActor;




void ADMLockableActorBase::OnSetLock(AActor* inLocker) {
}

void ADMLockableActorBase::OnReleaseLock(AActor* inLocker) {
}




void ADMLockableActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADMLockableActorBase, Lockers);
}

ADMLockableActorBase::ADMLockableActorBase() {
    this->CustomRoot = CreateDefaultSubobject<UArrowComponent>(TEXT("CustomRoot"));
    this->LockHandler = CreateDefaultSubobject<UDMLockableComponent>(TEXT("LockHandler"));
    this->NumLockers = 0;
}

