#include "MatineeTrackAtomBase.h"

UMatineeTrackAtomBase::UMatineeTrackAtomBase() {
}

FColor UMatineeTrackAtomBase::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0,0,0);
}

const FString UMatineeTrackAtomBase::GetEdHelperClassName() const
{
	return FString( TEXT("UnrealEd.InterpTrackAnimControlHelper") );
}

const FString UMatineeTrackAtomBase::GetSlateHelperClassName() const
{
	return FString( TEXT("Matinee.MatineeTrackAnimControlHelper") );
}


#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomBase::GetTrackIcon() const
{
	return TrackIcon;
}
#endif 