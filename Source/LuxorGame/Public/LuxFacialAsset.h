// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxFacialAsset.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, EditInlineNew)
class LUXORGAME_API ULuxFacialAsset : public UDataAsset
{

	GENERATED_BODY()

public:
	ULuxFacialAsset();
	~ULuxFacialAsset();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxFacialPaths FacialPaths;


};
