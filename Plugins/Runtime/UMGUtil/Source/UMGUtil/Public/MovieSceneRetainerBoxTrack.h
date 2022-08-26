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
    
public:
    UMovieSceneRetainerBoxTrack();
};

