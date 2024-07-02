#include "LuxOffsetPart.h"

FLuxOffsetPart::FLuxOffsetPart() {
    this->bIsValid = false;
    this->DefaultParent = ELuxOffsetParentBone::EPB_HEAD;
	this->CandidateParents.AddDefaulted(17);

	this->CandidateParents[1].Bone = ELuxOffsetParentBone::EPB_CLAVICLE_R;
	this->CandidateParents[2].Bone = ELuxOffsetParentBone::EPB_CLAVICLE_L;
	this->CandidateParents[3].Bone = ELuxOffsetParentBone::EPB_SHOULDER_R;
	this->CandidateParents[4].Bone = ELuxOffsetParentBone::EPB_SHOULDER_L;
	this->CandidateParents[5].Bone = ELuxOffsetParentBone::EPB_BREAST;
	this->CandidateParents[6].Bone = ELuxOffsetParentBone::EPB_ARM_R;
	this->CandidateParents[7].Bone = ELuxOffsetParentBone::EPB_ARM_L;
	this->CandidateParents[8].Bone = ELuxOffsetParentBone::EPB_HAND_R;
	this->CandidateParents[9].Bone = ELuxOffsetParentBone::EPB_HAND_L;
	this->CandidateParents[10].Bone = ELuxOffsetParentBone::EPB_WAIST;
	this->CandidateParents[11].Bone = ELuxOffsetParentBone::EPB_THIGH_R;
	this->CandidateParents[12].Bone = ELuxOffsetParentBone::EPB_THIGH_L;
	this->CandidateParents[13].Bone = ELuxOffsetParentBone::EPB_KNEE_R;
	this->CandidateParents[14].Bone = ELuxOffsetParentBone::EPB_KNEE_L;
	this->CandidateParents[15].Bone = ELuxOffsetParentBone::EPB_FOOT_R;
	this->CandidateParents[16].Bone = ELuxOffsetParentBone::EPB_FOOT_L;

	for (int i = 0; i < 17; i++)
	{
		this->CandidateParents[i].DefaultRotation = FVector(0, 0, 0);
		this->CandidateParents[i].DefaultTranslation = FVector(0, 0, 0);
	}
}

