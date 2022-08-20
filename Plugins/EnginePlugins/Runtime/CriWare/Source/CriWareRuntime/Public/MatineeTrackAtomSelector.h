#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorTrackKeyframe.h"
#include "Matinee/InterpTrack.h"
#include "MatineeTrackAtomSelector.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomSelector : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomSelector();
};

