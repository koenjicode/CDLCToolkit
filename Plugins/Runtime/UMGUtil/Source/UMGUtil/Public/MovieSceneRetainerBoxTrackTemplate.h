#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "MovieSceneRetainerBoxTrackTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneRetainerBoxTrackTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    UMGUTIL_API FMovieSceneRetainerBoxTrackTemplate();
};

