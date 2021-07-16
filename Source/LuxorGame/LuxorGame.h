// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "UObject/AssetPtr.h"
#include "Engine/Texture2D.h"
#include "Engine/SkeletalMesh.h"
#include "Components/StaticMeshComponent.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "LuxBattleStageInfinityTileActor.h"
#include "LuxorGame.Generated.h"

/**---------------------------------------------------------------------------------------
 * ENUMS
 *----------------------------------------------------------------------------------------
 */

UENUM(BlueprintType)
enum class ELuxPartCategory : uint8 {
	EEC_Nude			UMETA(DisplayName = "Nude"),
	EEC_Hair			UMETA(DisplayName = "Hair"),
	EEC_Face			UMETA(DisplayName = "Face"),
	EEC_Face_Optional	UMETA(DisplayName = "Face Optional"),
	EEC_Head			UMETA(DisplayName = "Head"),
	EEC_Mask			UMETA(DisplayName = "Mask"),
	EEC_Inner			UMETA(DisplayName = "Inner"),
	EEC_Upper			UMETA(DisplayName = "Upper"),
	EEC_Lower			UMETA(DisplayName = "Lower"),
	EEC_Neck			UMETA(DisplayName = "Neck"),
	EEC_Arm				UMETA(DisplayName = "Arm"),
	EEC_Shoulder		UMETA(DisplayName = "Shoulder"),
	EEC_Socks			UMETA(DisplayName = "Socks"),
	EEC_Feet			UMETA(DisplayName = "Feet"),
	EEC_Accessory		UMETA(DisplayName = "Accessory"),
	EEC_Outer			UMETA(DisplayName = "Outer"),
	EEC_Waist			UMETA(DisplayName = "Waist"),
	EEC_Mantle			UMETA(DisplayName = "Mantle"),
	EEC_Extra1			UMETA(DisplayName = "Extra 1"),
	EEC_Extra2			UMETA(DisplayName = "Extra 2"),
	EEC_Extra3			UMETA(DisplayName = "Extra 3"),
	EEC_RacialParts1	UMETA(DisplayName = "Racial Parts 1"),
	EEC_RacialParts2	UMETA(DisplayName = "Racial Parts 2"),
	EEC_RacialParts3	UMETA(DisplayName = "Racial Parts 3"),
	EEC_RacialParts4	UMETA(DisplayName = "Racial Parts 4"),
	EEC_Unique			UMETA(DisplayName = "Unique"),
	ENUM_MAX			UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum class ELuxPartSlot : uint8 {

	EPS_Mandatory_Face		UMETA(DisplayName = "Mandatory Face"),
	EPS_Mandatory_Scalp		UMETA(DisplayName = "Mandatory Scalp"),
	EPS_Mandatory_Neck		UMETA(DisplayName = "Mandatory Neck"),
	EPS_Mandatory_Hair		UMETA(DisplayName = "Mandatory Hair"),
	EPS_Mandatory_Hip		UMETA(DisplayName = "Mandatory Hip"),
	EPS_Mandatory_Stomach	UMETA(DisplayName = "Mandatory Stomach"),
	EPS_Mandatory_Chest		UMETA(DisplayName = "Mandatory Chest"),
	EPS_Mandatory_Tanima	UMETA(DisplayName = "Mandatory Upper Chest 'Tanima'"),
	EPS_Mandatory_Hand		UMETA(DisplayName = "Mandatory Hand"),
	EPS_Mandatory_Elbow		UMETA(DisplayName = "Mandatory Elbow"),
	EPS_Mandatory_ForeArm	UMETA(DisplayName = "Mandatory Forearm"),
	EPS_Mandatory_UpperArm	UMETA(DisplayName = "Mandatory Upper Arm"),
	EPS_Mandatory_Shin		UMETA(DisplayName = "Mandatory Shin"),
	EPS_Mandatory_Thigh		UMETA(DisplayName = "Mandatory Thigh"),
	EPS_Mandatory_Knee		UMETA(DisplayName = "Mandatory Knee"),
	EPS_Mandatory_Ankle		UMETA(DisplayName = "Mandatory Ankle"),
	EPS_Optional_Head		UMETA(DisplayName = "Optional Head"),
	EPS_Optional_Glasses	UMETA(DisplayName = "Optional Glasses"),
	EPS_Optional_Necklace	UMETA(DisplayName = "Optional Necklace"), 
	// Outer
	EPS_Optional_ChestFit	UMETA(DisplayName = "Optional Chest Fit"), 
	// Upper
	EPS_Optional_ChestPlate	UMETA(DisplayName = "Optional Chest Plate"), 
	EPS_Optional_BackCloth	UMETA(DisplayName = "Optional Back Cloth"),
	EPS_Optional_UpperArm	UMETA(DisplayName = "Optional Upper Arm"),
	EPS_Optional_Shoulder	UMETA(DisplayName = "Optional Shoulder"),
	EPS_Optional_Gauntlet	UMETA(DisplayName = "Optional Gauntlet"),
	EPS_Optional_UpperLeg	UMETA(DisplayName = "Optional Upper Leg"),
	EPS_Optional_Skirt		UMETA(DisplayName = "Optional Skirt"),
	EPS_Optional_Hem		UMETA(DisplayName = "Optional Hem"),
	EPS_Optional_Belt		UMETA(DisplayName = "Optional Belt"),
	EPS_Optional_Shoes		UMETA(DisplayName = "Optional Shoes"),
	EPS_Optional_UnderShin	UMETA(DisplayName = "Optional UnderShin"),          
	// Used for Extra slot 1
	EPS_Optional_Accessory	UMETA(DisplayName = "Optional Accessory"),          
	// Used for Extra slot 2
	EPS_Optional_Cheek		UMETA(DisplayName = "Optional Cheek"),				
	// Used for Extra slot 3
	EPS_Optional_Mantle		UMETA(DisplayName = "Optional Mantle"),				
	EPS_Optional_Maegami1	UMETA(DisplayName = "Optional Bangs 1"),
	EPS_Optional_Maegami2	UMETA(DisplayName = "Optional Bangs 2"), 
	// Horns
	EPS_Racial_1			UMETA(DisplayName = "Racial 1"), 
	// Ears
	EPS_Racial_2			UMETA(DisplayName = "Racial 2"), 
	// Wings
	EPS_Racial_3			UMETA(DisplayName = "Racial 3"), 
	// Tails
	EPS_Racial_4			UMETA(DisplayName = "Racial 4"), 
	ENUM_MAX				UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum class ELuxPartVariation : uint8 {
	EPV_None	UMETA(DisplayName = "None"),
	EPV_DEFAULT	UMETA(DisplayName = "Default"),
	EPV_A		UMETA(DisplayName = "A"),
	EPV_B		UMETA(DisplayName = "B"),
	EPV_C		UMETA(DisplayName = "C"),
	EPV_D		UMETA(DisplayName = "D"),
	EPV_E		UMETA(DisplayName = "E"),
	EPV_F		UMETA(DisplayName = "F"),
	EPV_G		UMETA(DisplayName = "G"),
	EPV_H		UMETA(DisplayName = "H"), // Variation loaded during Soul Charge
	EPV_Evil	UMETA(DisplayName = "Evil"), // Variation loaded when item is broken. If the item isn't set to be unbreakable this variation won't load unless it is in an unbreakable slot (ex:Inner)
	EPV_Broken	UMETA(DisplayName = "Broken") 
};

UENUM(BlueprintType)
enum class ELuxColorEditableFlag : uint8 {
	ECE_FLAG_None	UMETA(DisplayName = "None"), // Allows patterns and stickers
	ECE_FLAG_Common UMETA(DisplayName = "Common"), // Prevents stickers from being placed in this color slot's affected area
	ECE_FLAG_Tiling UMETA(DisplayName = "Tiling"), // Solid color
	ECE_FLAG_Color	UMETA(DisplayName = "Color") 
};

UENUM(BlueprintType)
enum class ELuxGender : uint8 {
	ELG_MALE	UMETA(DisplayName = "Male"),
	ELG_FEMALE	UMETA(DisplayName = "Female"),
	ELG_NEUTRAL UMETA(DisplayName = "Neutral")
};

UENUM(BlueprintType)
enum class ELuxPartsSE : uint8 {
	ESE_None					  UMETA(DisplayName = "None"),
	ESE_Arm_HeabyIron			  UMETA(DisplayName = "Arm Heavy Iron"),
	ESE_Arm_MediumIron			  UMETA(DisplayName = "Arm Medium Iron"),
	ESE_Arm_LightIron			  UMETA(DisplayName = "Arm Light Iron"),
	ESE_Arm_Yoshimitsu			  UMETA(DisplayName = "Arm Yoshimitsu"),
	ESE_Arm_Gauntlet			  UMETA(DisplayName = "Arm Gauntlet"),
	ESE_Arm_Chain				  UMETA(DisplayName = "Arm Chain"),
	ESE_Arm_Rock				  UMETA(DisplayName = "Arm Rock"),
	ESE_Footwear_StrawSandal	  UMETA(DisplayName = "Footwear Straw Sandal"),
	ESE_Footwear_Barefoot		  UMETA(DisplayName = "Footwear Barefoot"),
	ESE_Footwear_Leather		  UMETA(DisplayName = "Footwear Leather"),
	ESE_Footwear_Normal			  UMETA(DisplayName = "Footwear Normal"),
	ESE_Footwear_Highheel		  UMETA(DisplayName = "Footwear High Heels"),
	ESE_Footwear_Pinheel		  UMETA(DisplayName = "Footwear Pin Heels"),
	ESE_Footwear_HeavyIron		  UMETA(DisplayName = "Footwear Heavy Iron"),
	ESE_Footwear_LightIron		  UMETA(DisplayName = "Footwear Light Iron"),
	ESE_Footwear_Clog             UMETA(DisplayName = "Footwear Clog"),
	ESE_Waist_ChainMail			  UMETA(DisplayName = "Waist Chainmail"),
	ESE_Waist_Leather			  UMETA(DisplayName = "Waist Leather"),
	ESE_Waist_JapaneseArmor		  UMETA(DisplayName = "Waist Japanese Armour"),
	ESE_Waist_Bone				  UMETA(DisplayName = "Waist Bone"),
	ESE_Waist_Iron				  UMETA(DisplayName = "Waist Iron"),
	ESE_Waist_Chain_Long		  UMETA(DisplayName = "Waist Chain Long"),
	ESE_Waist_Chain_Short		  UMETA(DisplayName = "Waist Chain Short"),
	ESE_Leg_LeatherSkirt		  UMETA(DisplayName = "Leg Leather Skirt"),
	ESE_Leg_ClothSkirt			  UMETA(DisplayName = "Leg Cloth Skirt"),
	ESE_Leg_LeatherPants		  UMETA(DisplayName = "Leg Leather Pants"),
	ESE_Leg_Denim				  UMETA(DisplayName = "Leg Denim Pants"),
	ESE_Leg_CargoPants			  UMETA(DisplayName = "Leg Cargo Pants"),
	ESE_Leg_Kimono				  UMETA(DisplayName = "Leg Kimono"),
	ESE_Leg_Dress			      UMETA(DisplayName = "Leg Dress"),
	ESE_Leg_LightIron			  UMETA(DisplayName = "Leg Light Iron"),
	ESE_Leg_MediumIron			  UMETA(DisplayName = "Leg Medium Iron"),
	ESE_Leg_HeavyIron			  UMETA(DisplayName = "Leg Heavy Iron"),
	ESE_Leg_Rock			      UMETA(DisplayName = "Leg Rock"),
	ESE_Mantle_Short			  UMETA(DisplayName = "Mantle Short"),
	ESE_Mnatle_Long				  UMETA(DisplayName = "Mantle Long"),
	ESE_Mantle_Straw			  UMETA(DisplayName = "Mantle Straw"),
	ESE_Mantle_Leather			  UMETA(DisplayName = "Mantle Leather"),
	ESE_Mantle_Chain			  UMETA(DisplayName = "Mantle Chain"),
	ESE_Mantle_Feather			  UMETA(DisplayName = "Mantle Feather"),
	ESE_Accessory_Bell			  UMETA(DisplayName = "Accessory Bell"),
	ESE_Accessory_A			      UMETA(DisplayName = "Accessory A"),
	ESE_Accessory_B			      UMETA(DisplayName = "Accessory B"),
	ESE_Accessory_C			      UMETA(DisplayName = "Accessory C"),
	ESE_Accessory_D			      UMETA(DisplayName = "Accessory D"),
	ESE_Accessory_E			      UMETA(DisplayName = "Accessory E"),
	ESE_Accessory_F			      UMETA(DisplayName = "Accessory F"),
	ESE_Accessory_GunProp	      UMETA(DisplayName = "Accessory Gun Prop"),
    ESE_Accessory_Beadroll		  UMETA(DisplayName = "Accessory Beadroll"),
	ESE_Accessory_Cat			  UMETA(DisplayName = "Accessory Cat"),
	ESE_Accessory_Machine_Gimmick UMETA(DisplayName = "Accessory Machine Gimmick"),
	ESE_Waist_Gimmick			  UMETA(DisplayName = "Waist Gimmick")
};

UENUM(BlueprintType)
enum class ELuxOffsetParentBone : uint8 {
	EPB_HEAD		UMETA(DisplayName = "Head"),
	EPB_CLAVICLE_R	UMETA(DisplayName = "CLAVICLE_R"),
	EPB_CLAVICLE_L	UMETA(DisplayName = "CLAVICLE_L"),
	EPB_SHOULDER_R	UMETA(DisplayName = "SHOULDER_R"),
	EPB_SHOULDER_L	UMETA(DisplayName = "SHOULDER_L"),
	EPB_BREAST		UMETA(DisplayName = "BREAST"),
	EPB_ARM_R		UMETA(DisplayName = "ARM_R"),
	EPB_ARM_L		UMETA(DisplayName = "ARM_L"),
	EPB_HAND_R		UMETA(DisplayName = "HAND_R"),
	EPB_HAND_L		UMETA(DisplayName = "HAND_L"),
	EPB_WAIST		UMETA(DisplayName = "WAIST"),
	EPB_THIGH_R		UMETA(DisplayName = "THIGH_R"),
	EPB_THIGH_L		UMETA(DisplayName = "THIGH_L"),
	EPB_KNEE_R		UMETA(DisplayName = "KNEE_R"),
	EPB_KNEE_L		UMETA(DisplayName = "KNEE_L"),
	EPB_FOOT_R		UMETA(DisplayName = "FOOT_R"),
	EPB_FOOT_L		UMETA(DisplayName = "FOOT_L")
};

UENUM(BlueprintType)
enum class ELuxOffsetPartsSymmetryFlag : uint8 {
	EOS_TRANS_X		UMETA(DisplayName = "Translation X"),
	EOS_TRANS_Y     UMETA(DisplayName = "Translation Y"),
	EOS_TRANS_Z     UMETA(DisplayName = "Translation Z"),
	EOS_ROTATE_X    UMETA(DisplayName = "Rotation X"),
	EOS_ROTATE_Y	UMETA(DisplayName = "Rotation Y"),
	EOS_ROTATE_Z	UMETA(DisplayName = "Rotation Z")
};

UENUM(BlueprintType)
enum class ELuxPartsBreak : uint8 {
	EPB_NONE	UMETA(DisplayName = "None"),
	EPB_HIGH	UMETA(DisplayName = "High"),
	EPB_MID		UMETA(DisplayName = "Mid"),
	EPB_LOW		UMETA(DisplayName = "Low")
};

UENUM(BlueprintType)
enum class ELuxPartPriority : uint8 {
	EEP_Null		UMETA(DisplayName = " "),
	EEP_Nude		UMETA(DisplayName = "Nude"),
	EEP_Chin		UMETA(DisplayName = "Chin"),
	EEP_Mask		UMETA(DisplayName = "Mask"),
	EEP_Head		UMETA(DisplayName = "Head"),
	EEP_Face		UMETA(DisplayName = "Face"),
	EEP_Hair		UMETA(DisplayName = "Hair"),
	EEP_Socks		UMETA(DisplayName = "Socks"),
	EEP_Inner		UMETA(DisplayName = "Inner"),
	EEP_Accessory	UMETA(DisplayName = "Accessory"),
	EEP_Arm			UMETA(DisplayName = "Arm"),
	EEP_Upper		UMETA(DisplayName = "Upper"),
	EEP_Outer		UMETA(DisplayName = "Outer"),
	EEP_Shoulder	UMETA(DisplayName = "Shoulder"),
	EEP_Neck		UMETA(DisplayName = "Neck"),
	EEP_Lower		UMETA(DisplayName = "Lower"),
	EEP_Waist		UMETA(DisplayName = "Waist"),
	EEP_Feet		UMETA(DisplayName = "Feet"),
	EEP_All			UMETA(DisplayName = "All")
};

UENUM(BlueprintType)
enum class ELuxCreationModelType : uint8 {
	Common	UMETA(DisplayName = "Common"),
	Model1P UMETA(DisplayName = "P1 Model"),
	Num		UMETA(DisplayName = "Num (?)"),
	Model2P UMETA(DisplayName = "P2 Model")
};

UENUM(BlueprintType)
enum class ELuxRace : uint8 {
	ELR_Human			UMETA(DisplayName = "Human"),
	ELR_Elf				UMETA(DisplayName = "Elf"),
	ELR_Angel			UMETA(DisplayName = "Angel"),
	ELR_Therianthrope	UMETA(DisplayName = "Outcast"),
	ELR_Orc				UMETA(DisplayName = "Orc"),
	ELR_Devil			UMETA(DisplayName = "Devil"),
	ELR_Skeleton		UMETA(DisplayName = "Skeleton"),
	ELR_Lizardman		UMETA(DisplayName = "Lizardman"),
	ELR_Mummy			UMETA(DisplayName = "Mummy"),
	ELR_LightEvil		UMETA(DisplayName = "Malfested"),
	ELR_HeavyEvil		UMETA(DisplayName = "Malfested (Mutated)"),
	ELR_HyperEvil		UMETA(DisplayName = "Malfested (Fully Transformed)"),
	ELR_Shapeshifter	UMETA(DisplayName = "Shapeshifter"),
	ELR_Colossus		UMETA(DisplayName = "Colossus"),
	ELR_Automata		UMETA(DisplayName = "Automaton"),
	ELR_Undead			UMETA(DisplayName = "Undead"),
	ELR_Unknown         UMETA(DisplayName = "Unknown")
};

UENUM(BlueprintType)
enum class ELuxFightStyle : uint8 {
	EFS_MITSURUGI			UMETA(DisplayName = "Mitsurugi"),
	EFS_MINA				UMETA(DisplayName = "Mina"),
	EFS_TAKI				UMETA(DisplayName = "Taki"),
	EFS_MAXI				UMETA(DisplayName = "Maxi"),
	EFS_VOLDO				UMETA(DisplayName = "Voldo"),
	EFS_SOPHITIA			UMETA(DisplayName = "Sophitia"),
	EFS_SIEG				UMETA(DisplayName = "Siegfried"),
	EFS_NIGHTMARE			UMETA(DisplayName = "Nightmare"),
	EFS_IVY					UMETA(DisplayName = "Ivy"),
	EFS_KILIK				UMETA(DisplayName = "Kilik"),
	EFS_EVIL_KILIK			UMETA(DisplayName = "Evil Kilik"),
	EFS_XIANGHUA			UMETA(DisplayName = "Xianghua"),
	EFS_YOSHIMITSU			UMETA(DisplayName = "Yoshimitsu"),
	EFS_YOSHIMITSU2			UMETA(DisplayName = "Yoshimitsu2"),
	EFS_ASTAROTH			UMETA(DisplayName = "Astaroth"),
	EFS_CERVANTES			UMETA(DisplayName = "Cervantes"),
	EFS_RAPHAEL				UMETA(DisplayName = "Raphael"),
	EFS_TALIM				UMETA(DisplayName = "Talim"),
	EFS_TIRA				UMETA(DisplayName = "Tira"),
	EFS_ZASALAMEL			UMETA(DisplayName = "Zasalamel"),
	EFS_GROH				UMETA(DisplayName = "Groh"),
	EFS_EVIL_GROH			UMETA(DisplayName = "Evil Groh"),
	EFS_AZWEL				UMETA(DisplayName = "Azwel"),
	EFS_BOSS_AZWEL			UMETA(DisplayName = "Boss Azwel"),
	EFS_GERALT				UMETA(DisplayName = "Geralt"),
	EFS_INFERNO				UMETA(DisplayName = "Inferno"),
	EFS_LESSER_LIZARDMAN	UMETA(DisplayName = "Lizardman"),
	EFS_2B					UMETA(DisplayName = "2B"),
	EFS_CASSANDRA			UMETA(DisplayName = "Cassandra"),
	EFS_AMY					UMETA(DisplayName = "Amy"),
	EFS_HILDA				UMETA(DisplayName = "Hilde"),
	EFS_RAKSHA				UMETA(DisplayName = "Haohmaru"),
	EFS_SETSUKA				UMETA(DisplayName = "Setsuka"),
	EFS_HWANG				UMETA(DisplayName = "Hwang"),
	EFS_EDGEMASTER			UMETA(DisplayName = "Edge Master"),
	EFS_INVALID_ID			UMETA(DisplayName = "INVALID ID"),
	ENUM_MAX				UMETA(DisplayName = "ENUM_MAX")

	//EFS_REPTILE				UMETA(DisplayName = "REPTILE"),
	//EFS_YELLOW				UMETA(DisplayName = "YELLOW"),
	//EFS_STONE				UMETA(DisplayName = "STONE"),
	//EFS_STAR				UMETA(DisplayName = "STAR"),
	//EFS_SNOW				UMETA(DisplayName = "SNOW"),
	//EFS_YELL				UMETA(DisplayName = "YELL"),
};

UENUM(BlueprintType)
enum class ELuxCharacter : uint8 {
	ELC_MITSURUGI			UMETA(DisplayName = "Mitsurugi"),
	ELC_MINA				UMETA(DisplayName = "Seong Mi-Na"),
	ELC_TAKI				UMETA(DisplayName = "Taki"),
	ELC_MAXI				UMETA(DisplayName = "Maxi"),
	ELC_SIEG				UMETA(DisplayName = "Siegfried"),
	ELC_VOLDO				UMETA(DisplayName = "Voldo"),
	ELC_SOPHITIA			UMETA(DisplayName = "Sophitia"),
	ELC_IVY					UMETA(DisplayName = "Ivy"),
	ELC_KILIK				UMETA(DisplayName = "Kilik"),
	ELC_XIANGHUA			UMETA(DisplayName = "Xianghua"),
	ELC_YOSHIMITSU			UMETA(DisplayName = "Yoshimitsu"),
	ELC_NIGHTMARE			UMETA(DisplayName = "Nightmare"),
	ELC_ASTAROTH			UMETA(DisplayName = "Asteroth"),
	ELC_CERVANTES			UMETA(DisplayName = "Cervantes"),
	ELC_RAPHAEL				UMETA(DisplayName = "Raphael"),
	ELC_TALIM				UMETA(DisplayName = "Talim"),
	ELC_TIRA				UMETA(DisplayName = "Tira"),
	ELC_ZASALAMEL			UMETA(DisplayName = "Zasalamel"),
	ELC_YOSHIMITSU2			UMETA(DisplayName = "Yoshimitsu 2"),
	ELC_GROH				UMETA(DisplayName = "Groh"),
	ELC_AZWEL				UMETA(DisplayName = "Azwel"),
	ELC_GERALT				UMETA(DisplayName = "Geralt"),
	ELC_LESSER_LIZARDMAN	UMETA(DisplayName = "Lesser Lizardman"),
	ELC_EVIL_KILIK			UMETA(DisplayName = "Evil Kilik"),
	ELC_EVIL_GROH			UMETA(DisplayName = "Evil Groh"),
	ELC_BOSS_AZWEL			UMETA(DisplayName = "Boss Azwel"),
	ELC_INFERNO				UMETA(DisplayName = "Inferno"),
	ELC_CREATION			UMETA(DisplayName = "Creation"),
	ELC_2B					UMETA(DisplayName = "2B"),
	ELC_CASSANDRA			UMETA(DisplayName = "Cassandra"),
	ELC_AMY					UMETA(DisplayName = "Amy"),
	ELC_SETSUKA				UMETA(DisplayName = "Setsuka"),
	ELC_HILDA				UMETA(DisplayName = "Hilda"),
	ELC_RAKSHA				UMETA(DisplayName = "Haohmaru"),
	ELC_HWANG				UMETA(DisplayName = "Hwang"),
	ELC_EDGEMASTER			UMETA(DisplayName = "Edge Master"),
	ENUM_MAX				UMETA(DisplayName = "ENUM_MAX")

	//ELC_STAR				UMETA(DisplayName = "Star"),
	//ELC_STONE				UMETA(DisplayName = "Stone"),
//ELC_REPTILE				UMETA(DisplayName = "Reptile"),
//ELC_SNOW				UMETA(DisplayName = "Snow"),
//ELC_YELLOW				UMETA(DisplayName = "Yellow"),
//ELC_YELL				UMETA(DisplayName = "Yell"),

};



UENUM(BlueprintType)
enum class ELuxBodyScale : uint8 {
	EBS_SHOULDER	UMETA(DisplayName = "Shoulders"),
	EBS_UPPER		UMETA(DisplayName = "Upper"),
	EBS_LOWER		UMETA(DisplayName = "Lower"),
	EBS_FACE		UMETA(DisplayName = "Face"),
	EBS_HAND		UMETA(DisplayName = "Hands"),
	EBS_BODY		UMETA(DisplayName = "Body"),
	EBS_UPPERARM	UMETA(DisplayName = "Upper Arms"),
	EBS_FOREARM		UMETA(DisplayName = "Forearms"),
	EBS_CHEST		UMETA(DisplayName = "Chest"),
	EBS_SLENDERNESS UMETA(DisplayName = "Slenderness"),
	EBS_WAIST		UMETA(DisplayName = "Waist"),
	EBS_THIGH		UMETA(DisplayName = "Thighs"),
	EBS_CALF		UMETA(DisplayName = "Calfs"),
	EBS_FATNESS		UMETA(DisplayName = "Fatness"),
	EBS_BREAST		UMETA(DisplayName = "Breasts"),
	ENUM_MAX		UMETA(DisplayName = "ENUM_MAX")
};

UENUM(BlueprintType)
enum class ELuxSoulChargeType : uint8 {
	ESC_NORMAL	UMETA(DisplayName = "Normal"),
	ESC_SAINT	UMETA(DisplayName = "Saint"),
	ESC_EVIL	UMETA(DisplayName = "Evil"),
	ENUM_MAX	UMETA(DisplayName = "ENUM_MAX")
};

UENUM(BlueprintType)
enum class ELuxStickerMode : uint8 {
	ESM_Orthogonal	UMETA(DisplayName = "Orthogonal"),
	ESM_Cylindrical UMETA(DisplayName = "Cylindrical"),
	ENUM_MAX		UMETA(DisplayName = "ENUM MAX")
};

UENUM(BlueprintType)
enum class ELuxStickerGuide : uint8 {
	ESG_Body		UMETA(DisplayName = "Body"),
	ESG_Head		UMETA(DisplayName = "Head"),
	ESG_LeftArm		UMETA(DisplayName = "Left Arm"),
	ESG_RightArm	UMETA(DisplayName = "Right Arm"),
	ESG_Waist		UMETA(DisplayName = "Waist"),
	ESG_LeftLeg		UMETA(DisplayName = "Left Leg"),
	ESG_RightLeg	UMETA(DisplayName = "Right Leg"),
	ESG_All			UMETA(DisplayName = "All"),
	ENUM_MAX		UMETA(DisplayName = "ENUM MAX")

};


UENUM(BlueprintType)
enum class ELuxTracePartsId : uint8 {
	
	TRC_PT_NONE		UMETA(DisplayName = "None"),
	TRC_PT_ARMS1	UMETA(DisplayName = "Arms 1"),
	TRC_PT_ARMS2	UMETA(DisplayName = "Arms 2"),
	TRC_PT_ARMS3	UMETA(DisplayName = "Arms 3"),
	TRC_PT_ARMS4	UMETA(DisplayName = "Arms 4"),
	TRC_PT_ARMS5	UMETA(DisplayName = "Arms 5"),
	TRC_PT_ARMS6	UMETA(DisplayName = "Arms 6"),
	TRC_PT_ARMS7	UMETA(DisplayName = "Arms 7"),
	TRC_PT_ARMS8	UMETA(DisplayName = "Arms 8"),
	TRC_PT_ARMS9	UMETA(DisplayName = "Arms 9"),
	TRC_PT_TAIL		UMETA(DisplayName = "Tail"),
	TRC_PT_MUNE1	UMETA(DisplayName = "Torso 1"),
	TRC_PT_ATAMA	UMETA(DisplayName = "Head"),
	TRC_PT_KATA_R	UMETA(DisplayName = "Right Shoulder"),
	TRC_PT_UDE_R	UMETA(DisplayName = "Right Arm"),
	TRC_PT_TE_R		UMETA(DisplayName = "Right Hand"),
	TRC_PT_KATA_L	UMETA(DisplayName = "Left Shoulder"),
	TRC_PT_UDE_L	UMETA(DisplayName = "Left Arm"),
	TRC_PT_TE_L		UMETA(DisplayName = "Left Hand"),
	TRC_PT_KOSHI	UMETA(DisplayName = "Waist"),
	TRC_PT_MOMO_R	UMETA(DisplayName = "Right Thigh"),
	TRC_PT_HIZA_R	UMETA(DisplayName = "Right Knee"),
	TRC_PT_ASHI_R	UMETA(DisplayName = "Right Leg"),
	TRC_PT_MOMO_L	UMETA(DisplayName = "Left Thigh"),
	TRC_PT_HIZA_L	UMETA(DisplayName = "Left Knee"),
	TRC_PT_ASHI_L	UMETA(DisplayName = "Left Leg"),
	TRC_PT_EYE_R	UMETA(DisplayName = "Eye-R"),
	TRC_PT_EYE_L	UMETA(DisplayName = "Eye-L"),
	TRC_PT_AUO1		UMETA(DisplayName = "AUO 1"),
	TRC_PT_AUO2		UMETA(DisplayName = "AUO 2"),
	TRC_PT_AUO3		UMETA(DisplayName = "AUO 3"),
	TRC_PT_AUO4		UMETA(DisplayName = "AUO 4"),
	TRC_PT_AUO5		UMETA(DisplayName = "AUO 5"),
	TRC_PT_AUO6		UMETA(DisplayName = "AUO 6"),
	TRC_PT_AUO7		UMETA(DisplayName = "AUO 7"),
	TRC_PT_AUO8		UMETA(DisplayName = "AUO 8"),
	TRC_PT_NM_HITO	UMETA(DisplayName = "NM_HITO"),
	TRC_PT_NM_NAKA	UMETA(DisplayName = "NM_NAKA"),
	TRC_PT_NM_OYA	UMETA(DisplayName = "NM_OYA"),
	TRC_PT_SP_01	UMETA(DisplayName = "SP 01"),
	TRC_PT_SP_02	UMETA(DisplayName = "SP 02"),
	TRC_PT_SP_03	UMETA(DisplayName = "SP 03"),
	TRC_PT_SP_04	UMETA(DisplayName = "SP 04"),
	TRC_PT_SP_05	UMETA(DisplayName = "SP 05"),
	TRC_PT_SP_06	UMETA(DisplayName = "SP 06"),
	TRC_PT_SP_07	UMETA(DisplayName = "SP 07"),
	TRC_PT_SP_08	UMETA(DisplayName = "SP 08"),
	TRC_PT_SP_09	UMETA(DisplayName = "SP 09")
};

UENUM(BlueprintType)
enum class ELuxEffectVertexClutId : uint8 {
	LUX_OEF_CL_NONE UMETA(DisplayName = "None"),
	LUX_OEF_CL_RED UMETA(DisplayName = "Red"),
	LUX_OEF_CL_ORANGE UMETA(DisplayName = "Orange"),
	LUX_OEF_CL_YELLOW UMETA(DisplayName = "Yellow"),
	LUX_OEF_CL_LIME UMETA(DisplayName = "Lime"),
	LUX_OEF_CL_GREEN UMETA(DisplayName = "Green"),
	LUX_OEF_CL_EMERALD UMETA(DisplayName = "Emerald"),
	LUX_OEF_CL_CYAN UMETA(DisplayName = "Cyan"),
	LUX_OEF_CL_SKYBLUE UMETA(DisplayName = "Sky Blue"),
	LUX_OEF_CL_BLUE UMETA(DisplayName = "Blue"),
	LUX_OEF_CL_PURPLE UMETA(DisplayName = "Purple"),
	LUX_OEF_CL_MAGENTA UMETA(DisplayName = "Magenta"),
	LUX_OEF_CL_ROSE UMETA(DisplayName = "Rose"),
	LUX_OEF_CL_WHITE UMETA(DisplayName = "White"),
	LUX_OEF_CL_TEX UMETA(DisplayName = "TEX"),
	LUX_OEF_CL_WHITE2 UMETA(DisplayName = "White-2"),
	LUX_OEF_CL_SPECIAL2 UMETA(DisplayName = "Special 2"),
	LUX_OEF_CL_SPECIAL1 UMETA(DisplayName = "Special 1"),
	LUX_OEF_CL_SRC UMETA(DisplayName = "SRC"),
	LUX_OEF_CL_AUTO UMETA(DisplayName = "Auto"),
	LUX_OEF_CL_VERTEX UMETA(DisplayName = "Vertex"),
	LUX_OEF_CL_SCA UMETA(DisplayName = "SCA"),
	LUX_OEF_CL_SCB UMETA(DisplayName = "SBA"),
	LUX_OEF_CL_SCC UMETA(DisplayName = "SCC"),
	LUX_OEF_CL_MAX UMETA(DisplayName = "MAX"),
};

UENUM(BlueprintType)
enum class ELuxWeaponVariation : uint8 {
	EWV_00 UMETA(DisplayName = "Weapon 0"),
	EWV_01 UMETA(DisplayName = "Weapon 1"),
	EWV_02 UMETA(DisplayName = "Weapon 2"),
	EWV_03 UMETA(DisplayName = "Weapon 3"),
	EWV_04 UMETA(DisplayName = "Weapon 4"),
	EWV_05 UMETA(DisplayName = "Weapon 5"),
	EWV_06 UMETA(DisplayName = "Weapon 6"),
	EWV_07 UMETA(DisplayName = "Weapon 7"),
	EWV_08 UMETA(DisplayName = "Weapon 8"),
	EWV_09 UMETA(DisplayName = "Weapon 9"),
	ENUM_MAX UMETA(DisplayName = "ENUM_MAX")
};

UENUM(BlueprintType)
enum class ELuxWeaponAssetType : uint8 {
	EWA_NMD  UMETA(DisplayName = "NMD"),
	ENUM_MAX UMETA(DisplayName = "ENUM MAX")
};

UENUM(BlueprintType)
enum class ELuxMuscleType : uint8 {
	EMT_Default UMETA(DisplayName = "Default"),
	EMT_Least   UMETA(DisplayName = "Least"),
	EMT_Less    UMETA(DisplayName = "Less"),
	EMT_Normal  UMETA(DisplayName = "Normal"), 
	EMT_More    UMETA(DisplayName = "More"),
	EMT_Most    UMETA(DisplayName = "Most"),
	EMT_Unique  UMETA(DisplayName = "Unique"),
	ENUM_MAX    UMETA(DisplayName = "ENUM_MAX")
};

UENUM(BlueprintType)
enum class ELuxModelColorType : uint8 {
	Color1P  UMETA(DisplayName = "Color1P"),
	Color2P  UMETA(DisplayName = "Color2P"),
	ENUM_MAX UMETA(DisplayName = "ENUM_MAX")
};

UENUM(BlueprintType)
enum class ELuxCreationDecorMenuFactorDataKey : uint8 {
	Skin      UMETA(DisplayName = "Skin"),
	Underwear UMETA(DisplayName = "Underwear"),
	FaceParts UMETA(DisplayName = "Face Parts"),
	Hair      UMETA(DisplayName = "Hair"),
	Eyebrow   UMETA(DisplayName = "Eyebrow"),
	Beard     UMETA(DisplayName = "Beard"),
	FacePaint UMETA(DisplayName = "Face Paint"),
	Eye       UMETA(DisplayName = "Eye"),
	Ear       UMETA(DisplayName = "Ear"),
	Horn      UMETA(DisplayName = "Horn"),
	Wing      UMETA(DisplayName = "Wing"),
	Tail      UMETA(DisplayName = "Tail"),
	Head      UMETA(DisplayName = "Head"),
	Mask      UMETA(DisplayName = "Mask"),
	Inner     UMETA(DisplayName = "Inner"),
	Upper     UMETA(DisplayName = "Upper"),
	Outer     UMETA(DisplayName = "Outer"),
	Lower     UMETA(DisplayName = "Lower"),
	Waist     UMETA(DisplayName = "Waist"),
	Neck      UMETA(DisplayName = "Neck"),
	Arm       UMETA(DisplayName = "Arm"),
	Shoulder  UMETA(DisplayName = "Shoulder"),
	Socks     UMETA(DisplayName = "Socks"),
	Feet      UMETA(DisplayName = "Feet"),
	Extra1    UMETA(DisplayName = "Extra 1"),
	Extra2    UMETA(DisplayName = "Extra 2"),
	Extra3    UMETA(DisplayName = "Extra 3"),
	Parts     UMETA(DisplayName = "Parts"),
	Weapon    UMETA(DisplayName = "Weapon"),
	Trace     UMETA(DisplayName = "Trace"),
	Type      UMETA(DisplayName = "Type")

	
};

UENUM(BlueprintType)
enum class ELuxCreationMenuBodyItem : uint8 {
	RacialAndGender   UMETA(DisplayName = "Racial and Gender"),
	Physique          UMETA(DisplayName = "Physique"),
	Face              UMETA(DisplayName = "Face"),
	Hair              UMETA(DisplayName = "Hair"),
	Eyebrows          UMETA(DisplayName = "Eyebrows"),
	Voice             UMETA(DisplayName = "Voice"),
	Horn              UMETA(DisplayName = "Horn"),
	Tail              UMETA(DisplayName = "Tail")

};

UENUM(BlueprintType)
enum class ELuxProfileDatabaseTableId : uint8 {
	CreationType			 UMETA(DisplayName = "CreationType"),
	OriginalProfileTemplate  UMETA(DisplayName = "Original Profile Template"),
	MenuPhisicalChange       UMETA(DisplayName = "Menu Physical Change"),
	PartFace                 UMETA(DisplayName = "PartFace"),
	PartHair                 UMETA(DisplayName = "PartHair"),
	PartEyebrow              UMETA(DisplayName = "PartEyebrow"),
	MenuVoiceEdit            UMETA(DisplayName = "Menu Voice Edit"),
	PartHorn                 UMETA(DisplayName = "PartHorn"),
	PartTail                 UMETA(DisplayName = "PartTail"),
	PartHead                 UMETA(DisplayName = "PartHead"),
	PartMask                 UMETA(DisplayName = "PartMask"),
	PartInner                UMETA(DisplayName = "PartInner"),
	PartUpper                UMETA(DisplayName = "PartUpper"),
	PartOuter                UMETA(DisplayName = "PartOuter"),
	PartLower                UMETA(DisplayName = "PartLower"),
	PartWaist                UMETA(DisplayName = "PartWaist"),
	PartNeck                 UMETA(DisplayName = "PartNeck"),
	PartArm                  UMETA(DisplayName = "PartArm"),
	PartShoulder             UMETA(DisplayName = "PartShoulder"),
	PartSocks                UMETA(DisplayName = "PartSocks"),
	PartFeet                 UMETA(DisplayName = "PartFeet"),
	PartExtra1               UMETA(DisplayName = "PartExtra1"),
	PartExtra2               UMETA(DisplayName = "PartExtra2"),
	PartExtra3               UMETA(DisplayName = "PartExtra3"),
	MenuBodySelect           UMETA(DisplayName = "MenuBodySelect"),
	MenuEquipmentPartsSelect UMETA(DisplayName = "MenuEquipmentPartsSelect"),
	Nil                      UMETA(DisplayName = "Nil"),
	MenuWeaponAndStyleSelect UMETA(DisplayName = "MenuWeaponAndStyleSelect"),
	MenuPersonalityComment   UMETA(DisplayName = "MenuPersonalityComment"),
	MenuPhotograph           UMETA(DisplayName = "MenuPhotograph"),
	StyleType                UMETA(DisplayName = "StyleType"),
	WeaponType               UMETA(DisplayName = "WeaponType"),
	HitEffectType            UMETA(DisplayName = "HitEffectType"),
	SoulChargeEffectType     UMETA(DisplayName = "SoulChargeEffectType"),
	VoiceType                UMETA(DisplayName = "VoiceType")
};

UENUM(BlueprintType)
enum class ELuxCreationMenuWeaponAndStyleItem : uint8 {
	Style                     UMETA(DisplayName = "Style"),
	Weapon                    UMETA(DisplayName = "Weapon"),
	HitEffect                 UMETA(DisplayName = "Hit Effect"),
	SoulChargeEffect          UMETA(DisplayName = "Soul Charge Effect")
};

UENUM(BlueprintType)
enum class ELuxModelPositioningType : uint8 {
	ModelRight    UMETA(DisplayName = "Model Right"),
	ModelCenter   UMETA(DisplayName = "Model Center"),
	ModelLeft     UMETA(DisplayName = "Model Left")
};

UENUM(BlueprintType)
enum class ELuxCreationColorPaletteType : uint8 {
	General     UMETA(DisplayName = "General"),
	Underwear   UMETA(DisplayName = "Underwear"),
	Evilskin    UMETA(DisplayName = "Evil Skin"),
	Bright      UMETA(DisplayName = "Bright")
};

UENUM(BlueprintType)
enum class ELuxCreationMenuHomeItem : uint8 {
	Style          UMETA(DisplayName = "Style"),
	Body           UMETA(DisplayName = "Body"),
	Parts          UMETA(DisplayName = "Parts"),
	Color          UMETA(DisplayName = "Color"),
	Personality    UMETA(DisplayName = "Personality"),
	Photo          UMETA(DisplayName = "Photo"),
	Naming         UMETA(DisplayName = "Naming"),
	TestPlay       UMETA(DisplayName = "test Play"),
	Exit           UMETA(DisplayName = "Exit")
};

UENUM(BlueprintType)
enum class ELuxCreationColorParamType : uint8 {
	Color1     UMETA(DisplayName = "Color 1"),
	Color2     UMETA(DisplayName = "Color 2"),
	Color3     UMETA(DisplayName = "Color 3"),
	Color4     UMETA(DisplayName = "Color 4"),
	Emission1  UMETA(DisplayName = "Emission 1"),
	Emission2  UMETA(DisplayName = "Emission 2"),
	Emission3  UMETA(DisplayName = "Emission 3"),
	Emission4  UMETA(DisplayName = "Emission 4"),
	Num        UMETA(DisplayName = "Num"),
	None       UMETA(DisplayName = "None"),
};

UENUM(BlueprintType)
enum class ELuxPSTimeGroup : uint8 {
	EPT_AUTO  UMETA(DisplayName = "EPT_AUTO")
};

UENUM(BlueprintType)
enum class ELuxPSApplyNodeTransformType : uint8 {
	ENT_AUTO  UMETA(DisplayName = "ENT_AUTO")
};

UENUM(BlueprintType)
enum class ELuxEffectCategory : uint8 {
	EEC_Stage   UMETA(DisplayName = "Stage"),
	EEC_Chara   UMETA(DisplayName = "Chara")
};

UENUM(BlueprintType)
enum class ELuxStageAssetType : uint8 {
	ESA_HitData				UMETA(DisplayName = "Hit Data"),
	ESA_IntroCameraData     UMETA(DisplayName = "Intro Camera Data"),
	ESA_HitData2            UMETA(DisplayName = "Hit Data 2"),
	ESA_StartCameraData     UMETA(DisplayName = "Start Camera Data")

};


/**---------------------------------------------------------------------------------------
 * Structs
 *----------------------------------------------------------------------------------------
 */

//USTRUCT(BlueprintType)
//struct FLuxPartCategory
//{
	//GENERATED_USTRUCT_BODY()

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//TEnumAsByte<ELuxPartCategory> Type;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//TAssetPtr<UDataAsset> Part;

//};

USTRUCT(BlueprintType)
struct FLuxBodyScale
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxBodyScale> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Scale;
	
};


USTRUCT(BlueprintType)
struct FLuxSlotMeshData
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartSlot> Slot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//USkeletalMesh* MeshRef;
	FStringAssetReference MeshRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString NMDPath;

};

USTRUCT(BlueprintType)
struct FLuxMeshDataVariation
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartVariation> Variation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxSlotMeshData> SlotMeshData;
};

USTRUCT(BlueprintType)
struct FLuxVariationRequest
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartVariation> Variation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxPartSlot> > Slots;
};

USTRUCT(BlueprintType)
struct FLuxOffsetPartParent
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxOffsetParentBone> Bone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector DefaultTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector DefaultRotation;
};

USTRUCT(BlueprintType)
struct FLuxOffsetPart
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxOffsetParentBone> DefaultParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxOffsetPartsSymmetryFlag> > SymmetryFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < FLuxOffsetPartParent > CandidateParents;
};

USTRUCT(BlueprintType)
struct FLuxOffsetPartSetting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELuxPartCategory> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELuxOffsetParentBone> parentBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector offsetTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector offsetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector OffsetScale;
};

USTRUCT(BlueprintType)
struct FLuxFacialPaths
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString FacialMotionPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString FacialTablePath;


};

USTRUCT(BlueprintType)
struct FLuxBreastSwingParam
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Inertia;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float VResist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> Y_Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> Z_Range;

};




USTRUCT(BlueprintType)
struct FLuxProfileDBPartsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr <UDataAsset> asset; //Asset (string, struct or UAssetObjectProperty  of sorts

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString locLabelTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr< UTexture2D > thumbnail; //thumbnail (string, struct or UAssetObjectProperty  of sorts

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELuxPartCategory> category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELuxGender> gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELuxCreationModelType> model;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxRace>> disallowedRacialType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxFightStyle>> disallowedRegularType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName tagId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName dlcId;

};

USTRUCT(BlueprintType)
struct FLuxCreationSingleColor
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor Color;
};



USTRUCT(BlueprintType)
struct FLuxCreationSkinColor
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxCreationSingleColor> Slot;
};



USTRUCT(BlueprintType)
struct FLuxPermanentEffectSetting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MetaClass = "ParticleSystem"))
		FStringAssetReference ParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName AttachSocket;

};

USTRUCT(BlueprintType)
struct FLuxTraceColorPalletSetting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxTracePartsId> TracePartsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxEffectVertexClutId> ClutId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxWeaponVariation> > EnableWeaponVariations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor BaseColor;

};

USTRUCT(BlueprintType)
struct FLuxTraceColorApplySetting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxTracePartsId> PartsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxEffectVertexClutId> Clut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxWeaponVariation> > WeaponVariations;

};

USTRUCT(BlueprintType)
struct FLuxTraceColorApplySettingList
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < FLuxTraceColorApplySetting > TraceColorApplySettings;


};

USTRUCT(BlueprintType)
struct FLuxNamedAssetReference
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Identifier;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStringAssetReference Reference;
};

USTRUCT(BlueprintType)
struct FLuxWeaponVariation
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxWeaponVariation> Variation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStringAssetReference Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray< TEnumAsByte<ELuxColorEditableFlag> > ColorEditFlags;

};

USTRUCT(BlueprintType)
struct FLuxWeaponRawAsset
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxWeaponAssetType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxWeaponVariation> Variation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Path;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBWeaponData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxFightStyle> style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxWeaponVariation> weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locNameTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr< UTexture2D > thumbnail;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBRegularCharaColorData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CharaCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 ColorCount;

};

USTRUCT(BlueprintType)
struct FLuxProfileDBStyleData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxFightStyle> style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr< UTexture2D > thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locNameTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

};

USTRUCT(BlueprintType)
struct FLuxProfileDBRadarChartData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxFightStyle> style;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString difficultTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString typeTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr< UTexture2D > xyChart;

};

USTRUCT(BlueprintType)
struct FLuxProfileDBRegularProfileTemplateData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TEnumAsByte<ELuxFightStyle> style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxModelColorType> color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UDataAsset> profile;


};

USTRUCT(BlueprintType)
struct FLuxProfileDBStickerGuideOption :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationDecorMenuFactorDataKey> key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ELuxStickerGuide> guidelist;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBBodySelectMenuUIData : public FTableRowBase 
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationMenuBodyItem> key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UTexture2D> thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartSlot> cameraFocusOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ELuxRace> disallowedRacialType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ELuxFightStyle> allowedRegularType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxProfileDatabaseTableId> nextDataTableId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool disabled;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBDecorMenuUIData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationDecorMenuFactorDataKey> key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UTexture2D> icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locLabelTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<ELuxRace>> disallowedRacialType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<ELuxFightStyle>> disallowedRegualarType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxProfileDatabaseTableId> nextDataTableId;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBWeaponAndStyleSelectMenuUIData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationMenuWeaponAndStyleItem> key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UTexture2D> thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<ELuxFightStyle>> disallowedRegularType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxProfileDatabaseTableId> nextDataTableId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool disabled;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBHomeMenuUIData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationMenuHomeItem> key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UTexture2D> thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locLabelTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray < TEnumAsByte<ELuxFightStyle>> disallowedRegularType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxModelPositioningType> modelPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxProfileDatabaseTableId> nextDataTableId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool disabled;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBEquipmentPartsSelectMenuUIData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartCategory> category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UTexture2D> thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString locDescriptionTextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxProfileDatabaseTableId> nextDataTableId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartSlot> cameraFocusOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool canPositioning;
};

USTRUCT(BlueprintType)
struct FLuxProfileDBColorPaletteParameter : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationColorPaletteType> type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 brightnessNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D rangeH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D rangeS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D rangev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float deltaS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float deltaV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float minV;
};


USTRUCT(BlueprintType)
struct FLuxProfileDBRacialColorSetting : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxRace> racialType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<ELuxCreationColorParamType>> skin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationColorParamType> iris;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxCreationColorParamType> sclera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor defaultUnderwearColor;

};

USTRUCT(BlueprintType)
struct FLuxPhysicsDebrisData {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UStaticMesh> DebrisMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> BaseMaterialList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> TranslucentMaterialList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MassOverrideInKg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float OverrideDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float OverrideImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector OverrideImpulseLocationOffset;

};

USTRUCT(BlueprintType)
struct FLuxPhysicsDebrisSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxPhysicsDebrisData> PhysicsDebrisDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Impulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector ImpulseLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator LocalRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool RandomRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool EnableGravity;
};

USTRUCT(BlueprintType)
struct FLuxAnimationDebrisSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UObject> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UObject> Animation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 HeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> BaseMaterialList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> TranslucentMaterialList;
};

USTRUCT(BlueprintType)
struct FLuxGroundDebrisSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxPhysicsDebrisSetting PhysicsDebrisSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxAnimationDebrisSetting AnimationDebrisSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FadeoutTime;

};

USTRUCT(BlueprintType)
struct FLuxGroundDebrisSettingListItem {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxGroundDebrisSetting GDSetting;
};


USTRUCT(BlueprintType)
struct FLuxVFxScalarParam {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Scalar;
};

USTRUCT(BlueprintType)
struct FLuxVFxVectorParam {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Vector;
};

USTRUCT(BlueprintType)
struct FLuxVFxColorParam {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor Color;
};
USTRUCT(BlueprintType)
struct FLuxVFxMaterialParams {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxVFxScalarParam> ScalarParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxVFxVectorParam> VectorParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxVFxColorParam> ColorParams;
};

USTRUCT(BlueprintType)
struct FLuxVFxMaterialParamsInfo {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxVFxMaterialParams Params;
};

USTRUCT(BlueprintType)
struct FLuxPSOverrideSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPSTimeGroup> timeGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPSApplyNodeTransformType> ApplyNodeTransformType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool EnableMirroring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ApplyOwnerCharaDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ApplyTargetCharaDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ApplyFixDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool FacingCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IgnoreCancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool NumberRestriction;
};

USTRUCT(BlueprintType)
struct FLuxPSFadeoutSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FadeoutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> TranslucentMaterialList;
};

USTRUCT(BlueprintType)
struct FLuxPSSetting {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<UMaterial>> BaseMaterialList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SortPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool SingleExistence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxPSFadeoutSetting FadeoutSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxPSOverrideSetting OverrideSetting;

};

USTRUCT(BlueprintType)
struct FLuxParticleSystemSettingListItem {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UParticleSystem> Template;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxPSSetting Setting;
};

USTRUCT(BlueprintType)
struct FLuxVFxSettingListItem {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxEffectCategory> Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SubCategory;

	//Particle System Setting List
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UDataAsset> PSSettingList;
	// Ground Debris Setting List
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<UDataAsset> GDSettingList;
};

USTRUCT(BlueprintType)
struct FLuxBattleStageShipScendState {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Cycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RollCoeff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ElapsedTime;

};

USTRUCT(BlueprintType)
struct FLuxBattleStageShipScendParam {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CycleMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CycleMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RollCoeffMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RollCoeffMin;

};

USTRUCT(BlueprintType)
struct FLuxStageRawAsset {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxStageAssetType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Path;
};

USTRUCT(BlueprintType)
struct FLuxStageSetting {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAnomalyStageVFxEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bWet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bBreath;
};

/**---------------------------------------------------------------------------------------
 * Classes
 *----------------------------------------------------------------------------------------
 */


UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxStageMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()




};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxGroundDebrisSettingListDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxGroundDebrisSettingListItem> GDSettingList;


};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxVFxMaterialParameterPresetDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxVFxMaterialParamsInfo> MaterialParamsPresetInfoList;

};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxParticleSystemSettingListDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxParticleSystemSettingListItem> PSSettingList;

	
};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxVFxSettingListDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxVFxSettingListItem> VFxSettingList;


};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class LUXORGAME_API ULuxBatleStageInfinitySettingDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MapChipSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MapChipTilingCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TAssetPtr<ALuxBattleStageInfinityTileActor>> MapChipList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxDistanecFromOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool UseNormalBattleCamera;


};
