#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "MatineeTrackInstAtom.generated.h"

class UMatineeTrackAtomSoundBase;
class UAtomComponent;

UCLASS(Blueprintable)
class UMatineeTrackInstAtom : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeTrackAtomSoundBase* AtomTrack;
    
    UMatineeTrackInstAtom();


    
};

