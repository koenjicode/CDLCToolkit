#include "MatineeTrackAtomSelector.h"

UMatineeTrackAtomSelector::UMatineeTrackAtomSelector() {
}

FColor UMatineeTrackAtomSelector::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0,0,0);
}

const FString UMatineeTrackAtomSelector::GetEdHelperClassName() const
{
	return FString( TEXT("UnrealEd.InterpTrackAnimControlHelper") );
}

const FString UMatineeTrackAtomSelector::GetSlateHelperClassName() const
{
	return FString( TEXT("Matinee.MatineeTrackAnimControlHelper") );
}


#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomSelector::GetTrackIcon() const
{
	return TrackIcon;
}
#endif