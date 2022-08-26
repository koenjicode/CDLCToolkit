#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxCharaActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxCharaActor : public ALuxActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharaMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMeshComponent;
    
public:
    ALuxCharaActor();
};

