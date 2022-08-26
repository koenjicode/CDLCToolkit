#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "MatineeTrackAtomBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UMatineeTrackAtomBase();

    virtual FColor GetKeyframeColor(int32 KeyIndex) const override;
    virtual const FString	GetEdHelperClassName() const override;
    virtual const FString	GetSlateHelperClassName() const override;
#if WITH_EDITORONLY_DATA
    virtual class UTexture2D* GetTrackIcon() const override;
#endif
};

