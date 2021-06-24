// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxFacialAsset.h"
#include "LuxCreationImportedPart.generated.h"





/**---------------------------------------------------------------------------------------
 * CLASS
 *----------------------------------------------------------------------------------------
 */

UCLASS(BlueprintType, Blueprintable)
class LUXORGAME_API ULuxCreationImportedPart : public UDataAsset
{

	GENERATED_BODY()

public:

	ULuxCreationImportedPart();
	~ULuxCreationImportedPart();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Item Category
		TEnumAsByte<ELuxPartCategory> Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ELuxPartPriority> Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Default meshes
		TArray<FLuxSlotMeshData> DefaultMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) //Setup variations for Slots to be used when other items request them with 'VariationRequest'
		TArray<FLuxMeshDataVariation> MeshVariations; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // specifies a variation this item loads as well as slots to load said variation.
		FLuxVariationRequest VariationRequest; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // List of item categories that conflict with this item. The difference between 'DeleteCategory' and 'OnewayDeleteCategory' is unknown atm. Most items use 'OnewayDeleteCategory'.
		TArray< TEnumAsByte<ELuxPartCategory> > DeleteCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // List of item categories that conflict with this item. The difference between 'DeleteCategory' and 'OnewayDeleteCategory' is unknown atm. Most items use 'OnewayDeleteCategory'.
		TArray< TEnumAsByte<ELuxPartCategory> > OnewayDeleteCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // List of Mesh Slots to hide.
		TArray< TEnumAsByte<ELuxPartSlot> > DeleteSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // List of items that conflict with this item. Use the item's 'Identifier' string.
		TArray< FName > DeletePartNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // What this does is currently unknown. All cast character's equipment has this checked.
		bool bIsUnique;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Valid color slots.
		TArray< TEnumAsByte<ELuxColorEditableFlag> > ColorEditFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Specifies which color slots use the limited underwear color pallet.
		TArray< bool > UnderwearColorFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Setup Extra/Movable Item Properties.
		FLuxOffsetPart OffsetPart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Disables breast swing. An example of an item that uses this is the Valkyrie chest piece.
		bool bDisableBreastSwing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Unique Identifier used to reference this item. Other items add this to 'DeletePartNames' for conflicts with said item. It should be the same name as the filename for this item.
		FName Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Gender that uses this item.
		TEnumAsByte<ELuxGender> Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Specifies if this item is Unbreakable.
		bool bIsUnbreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Break category for this item.
		TEnumAsByte<ELuxPartsBreak> BreakType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FStringAssetReference ThumbnailPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) // Specifies what sound effect to use for this item.
		TEnumAsByte<ELuxPartsSE> SEMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced) // Setup LuxFacialAsset to load .mot and .tbl files for facial animation. This is only used for faces.
		TArray<ULuxFacialAsset*> Supplements;

};
