#include "MatineeTrackAtomFloatBase.h"

UMatineeTrackAtomFloatBase::UMatineeTrackAtomFloatBase() {
}

FColor UMatineeTrackAtomFloatBase::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0,0,0);
}

const FString UMatineeTrackAtomFloatBase::GetEdHelperClassName() const
{
	return FString( TEXT("UnrealEd.InterpTrackAnimControlHelper") );
}

const FString UMatineeTrackAtomFloatBase::GetSlateHelperClassName() const
{
	return FString( TEXT("Matinee.MatineeTrackAnimControlHelper") );
}


#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomFloatBase::GetTrackIcon() const
{
	return TrackIcon;
}
#endif
