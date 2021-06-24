// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxorGame.h"
#include "LuxAssetPathsBase.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class LUXORGAME_API ULuxAssetPathsBase : public UDataAsset
{
	GENERATED_BODY()

public:
	ULuxAssetPathsBase();
	~ULuxAssetPathsBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FLuxNamedAssetReference> NamedReferences;

};
