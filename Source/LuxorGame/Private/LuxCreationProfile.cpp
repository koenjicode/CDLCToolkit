#include "LuxCreationProfile.h"

void ULuxCreationProfile::SetDisableCreationTex(bool bDisable) {
}

bool ULuxCreationProfile::IsRenderStickerComplete() const {
    return false;
}

ULuxCreationProfile::ULuxCreationProfile() {
    this->STYLE = ELuxFightStyle::EFS_MITSURUGI;
    this->Race = ELuxRace::ELR_Human;
    this->BodyScales.AddDefaulted(15);
    this->Muscle = ELuxMuscleType::EMT_Default;
    this->bUniqueColorMask = false;
    this->PARTS.AddDefaulted(25);
    this->partsColor.AddDefaulted(25);
    this->ExtraPartsSettings.AddDefaulted(3);
    this->sticker.AddDefaulted(13);
    this->bDisableCreationTex = true;
    this->bRestrictCommentOpenFriendOnly = false;
    this->PartsBreakableUpper = true;
    this->PartsBreakableMiddle = true;
    this->PartsBreakableLower = true;

	//Body Scales
	this->BodyScales[1].Type = ELuxBodyScale::EBS_UPPER;
	this->BodyScales[2].Type = ELuxBodyScale::EBS_LOWER;
	this->BodyScales[3].Type = ELuxBodyScale::EBS_FACE;
	this->BodyScales[4].Type = ELuxBodyScale::EBS_HAND;
	this->BodyScales[5].Type = ELuxBodyScale::EBS_BODY;
	this->BodyScales[6].Type = ELuxBodyScale::EBS_UPPERARM;
	this->BodyScales[7].Type = ELuxBodyScale::EBS_FOREARM;
	this->BodyScales[8].Type = ELuxBodyScale::EBS_CHEST;
	this->BodyScales[9].Type = ELuxBodyScale::EBS_SLENDERNESS;
	this->BodyScales[10].Type = ELuxBodyScale::EBS_WAIST;
	this->BodyScales[11].Type = ELuxBodyScale::EBS_THIGH;
	this->BodyScales[12].Type = ELuxBodyScale::EBS_CALF;
	this->BodyScales[13].Type = ELuxBodyScale::EBS_FATNESS;
	this->BodyScales[14].Type = ELuxBodyScale::EBS_BREAST;

	//Parts
	this->PARTS[1].Type = ELuxPartCategory::EEC_Hair;
	this->PARTS[2].Type = ELuxPartCategory::EEC_Face;
	this->PARTS[3].Type = ELuxPartCategory::EEC_Face_Optional;
	this->PARTS[4].Type = ELuxPartCategory::EEC_Head;
	this->PARTS[5].Type = ELuxPartCategory::EEC_Mask;
	this->PARTS[6].Type = ELuxPartCategory::EEC_Inner;
	this->PARTS[7].Type = ELuxPartCategory::EEC_Upper;
	this->PARTS[8].Type = ELuxPartCategory::EEC_Lower;
	this->PARTS[9].Type = ELuxPartCategory::EEC_Neck;
	this->PARTS[10].Type = ELuxPartCategory::EEC_Arm;
	this->PARTS[11].Type = ELuxPartCategory::EEC_Shoulder;
	this->PARTS[12].Type = ELuxPartCategory::EEC_Socks;
	this->PARTS[13].Type = ELuxPartCategory::EEC_Feet;
	this->PARTS[14].Type = ELuxPartCategory::EEC_Accessory;
	this->PARTS[15].Type = ELuxPartCategory::EEC_Outer;
	this->PARTS[16].Type = ELuxPartCategory::EEC_Waist;
	this->PARTS[17].Type = ELuxPartCategory::EEC_Mantle;
	this->PARTS[18].Type = ELuxPartCategory::EEC_Extra1;
	this->PARTS[19].Type = ELuxPartCategory::EEC_Extra2;
	this->PARTS[20].Type = ELuxPartCategory::EEC_Extra3;
	this->PARTS[21].Type = ELuxPartCategory::EEC_RacialParts1;
	this->PARTS[22].Type = ELuxPartCategory::EEC_RacialParts2;
	this->PARTS[23].Type = ELuxPartCategory::EEC_RacialParts3;
	this->PARTS[24].Type = ELuxPartCategory::EEC_RacialParts4;

	//Part Color 
	this->partsColor[1].Type = ELuxPartCategory::EEC_Hair;
	this->partsColor[2].Type = ELuxPartCategory::EEC_Face;
	this->partsColor[3].Type = ELuxPartCategory::EEC_Face_Optional;
	this->partsColor[4].Type = ELuxPartCategory::EEC_Head;
	this->partsColor[5].Type = ELuxPartCategory::EEC_Mask;
	this->partsColor[6].Type = ELuxPartCategory::EEC_Inner;
	this->partsColor[7].Type = ELuxPartCategory::EEC_Upper;
	this->partsColor[8].Type = ELuxPartCategory::EEC_Lower;
	this->partsColor[9].Type = ELuxPartCategory::EEC_Neck;
	this->partsColor[10].Type = ELuxPartCategory::EEC_Arm;
	this->partsColor[11].Type = ELuxPartCategory::EEC_Shoulder;
	this->partsColor[12].Type = ELuxPartCategory::EEC_Socks;
	this->partsColor[13].Type = ELuxPartCategory::EEC_Feet;
	this->partsColor[14].Type = ELuxPartCategory::EEC_Accessory;
	this->partsColor[15].Type = ELuxPartCategory::EEC_Outer;
	this->partsColor[16].Type = ELuxPartCategory::EEC_Waist;
	this->partsColor[17].Type = ELuxPartCategory::EEC_Mantle;
	this->partsColor[18].Type = ELuxPartCategory::EEC_Extra1;
	this->partsColor[19].Type = ELuxPartCategory::EEC_Extra2;
	this->partsColor[20].Type = ELuxPartCategory::EEC_Extra3;
	this->partsColor[21].Type = ELuxPartCategory::EEC_RacialParts1;
	this->partsColor[22].Type = ELuxPartCategory::EEC_RacialParts2;
	this->partsColor[23].Type = ELuxPartCategory::EEC_RacialParts3;
	this->partsColor[24].Type = ELuxPartCategory::EEC_RacialParts4;

	//Extra Part Settings
	this->ExtraPartsSettings[0].Type = ELuxPartCategory::EEC_Extra1;
	this->ExtraPartsSettings[1].Type = ELuxPartCategory::EEC_Extra2;
	this->ExtraPartsSettings[2].Type = ELuxPartCategory::EEC_Extra3;

	//Sticker
	this->sticker[1].Type = ELuxPartCategory::EEC_Head;
	this->sticker[2].Type = ELuxPartCategory::EEC_Mask;
	this->sticker[3].Type = ELuxPartCategory::EEC_Inner;
	this->sticker[4].Type = ELuxPartCategory::EEC_Upper;
	this->sticker[5].Type = ELuxPartCategory::EEC_Lower;
	this->sticker[6].Type = ELuxPartCategory::EEC_Neck;
	this->sticker[7].Type = ELuxPartCategory::EEC_Arm;
	this->sticker[8].Type = ELuxPartCategory::EEC_Shoulder;
	this->sticker[9].Type = ELuxPartCategory::EEC_Socks;
	this->sticker[10].Type = ELuxPartCategory::EEC_Feet;
	this->sticker[11].Type = ELuxPartCategory::EEC_Outer;
	this->sticker[12].Type = ELuxPartCategory::EEC_Waist;
}

