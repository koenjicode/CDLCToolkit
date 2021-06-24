// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxCreationImportedPart.h"

ULuxCreationImportedPart::ULuxCreationImportedPart()
{
	Category = ELuxPartCategory::EEC_Nude;
	OffsetPart.DefaultParent = ELuxOffsetParentBone::EPB_HEAD;
	
	FLuxOffsetPartParent head;
	head.Bone = ELuxOffsetParentBone::EPB_HEAD;
	OffsetPart.CandidateParents.Add(head);

	FLuxOffsetPartParent clavical_r;
	clavical_r.Bone = ELuxOffsetParentBone::EPB_CLAVICLE_R;
	OffsetPart.CandidateParents.Add(clavical_r);

	FLuxOffsetPartParent clavical_l;
	clavical_l.Bone = ELuxOffsetParentBone::EPB_CLAVICLE_L;
	OffsetPart.CandidateParents.Add(clavical_l);

	FLuxOffsetPartParent shoulder_r;
	shoulder_r.Bone = ELuxOffsetParentBone::EPB_SHOULDER_R;
	OffsetPart.CandidateParents.Add(shoulder_r);

	FLuxOffsetPartParent shoulder_l;
	shoulder_l.Bone = ELuxOffsetParentBone::EPB_SHOULDER_L;
	OffsetPart.CandidateParents.Add(shoulder_l);

	FLuxOffsetPartParent breast;
	breast.Bone = ELuxOffsetParentBone::EPB_BREAST;
	OffsetPart.CandidateParents.Add(breast);

	FLuxOffsetPartParent arm_r;
	arm_r.Bone = ELuxOffsetParentBone::EPB_ARM_R;
	OffsetPart.CandidateParents.Add(arm_r);

	FLuxOffsetPartParent arm_l;
	arm_l.Bone = ELuxOffsetParentBone::EPB_ARM_L;
	OffsetPart.CandidateParents.Add(arm_l);

	FLuxOffsetPartParent hand_r;
	hand_r.Bone = ELuxOffsetParentBone::EPB_HAND_R;
	OffsetPart.CandidateParents.Add(hand_r);

	FLuxOffsetPartParent hand_l;
	hand_l.Bone = ELuxOffsetParentBone::EPB_HAND_L;
	OffsetPart.CandidateParents.Add(hand_l);

	FLuxOffsetPartParent waist;
	waist.Bone = ELuxOffsetParentBone::EPB_WAIST;
	OffsetPart.CandidateParents.Add(waist);

	FLuxOffsetPartParent thigh_r;
	thigh_r.Bone = ELuxOffsetParentBone::EPB_THIGH_R;
	OffsetPart.CandidateParents.Add(thigh_r);

	FLuxOffsetPartParent thigh_l;
	thigh_l.Bone = ELuxOffsetParentBone::EPB_THIGH_L;
	OffsetPart.CandidateParents.Add(thigh_l);

	FLuxOffsetPartParent knee_r;
	knee_r.Bone = ELuxOffsetParentBone::EPB_KNEE_R;
	OffsetPart.CandidateParents.Add(knee_r);

	FLuxOffsetPartParent knee_l;
	knee_l.Bone = ELuxOffsetParentBone::EPB_KNEE_L;
	OffsetPart.CandidateParents.Add(knee_l);

	FLuxOffsetPartParent foot_r;
	foot_r.Bone = ELuxOffsetParentBone::EPB_FOOT_R;
	OffsetPart.CandidateParents.Add(foot_r);

	FLuxOffsetPartParent foot_l;
	foot_l.Bone = ELuxOffsetParentBone::EPB_FOOT_L;
	OffsetPart.CandidateParents.Add(foot_l);

	Identifier = FName(this->GetFName());
}

ULuxCreationImportedPart::~ULuxCreationImportedPart()
{
}
