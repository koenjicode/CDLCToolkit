#include "MovieSceneRetainerBoxTrack.h"

#include "MovieSceneParameterTemplate.h"
#include "MovieSceneRetainerBoxTrackTemplate.h"

UMovieSceneRetainerBoxTrack::UMovieSceneRetainerBoxTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneRetainerBoxTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneRetainerBoxTrackTemplate();
}

#if WITH_EDITORONLY_DATA
FText UMovieSceneRetainerBoxTrack::GetDefaultDisplayName() const
{
	return FText::GetEmpty();
}
#endif
