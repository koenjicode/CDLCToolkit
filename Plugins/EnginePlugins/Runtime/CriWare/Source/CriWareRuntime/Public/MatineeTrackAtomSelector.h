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


    virtual FColor GetKeyframeColor(int32 KeyIndex) const override;
    virtual const FString	GetEdHelperClassName() const override;
    virtual const FString	GetSlateHelperClassName() const override;
#if WITH_EDITORONLY_DATA
    virtual class UTexture2D* GetTrackIcon() const override;
#endif
};

