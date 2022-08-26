#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneMaterialTrack.h"
#include "MovieSceneRetainerBoxTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneRetainerBoxTrack : public UMovieSceneComponentMaterialTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;

    // UMovieSceneTrack interface

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;


#if WITH_EDITORONLY_DATA
    virtual FText GetDefaultDisplayName() const override;
#endif

    
public:
    UMovieSceneRetainerBoxTrack();
};

