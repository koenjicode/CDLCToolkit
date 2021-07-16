// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuxActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "LuxCharaActor.generated.h"

/**
 * 
 */
UCLASS()
class LUXORGAME_API ALuxCharaActor : public ALuxActor
{
	GENERATED_BODY()
public:
	ALuxCharaActor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* CharaMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* WeaponMeshComponent;
	
	
};
