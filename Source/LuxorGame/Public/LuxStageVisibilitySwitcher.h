// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "LuxorGame.h"
#include "LuxStageVisibilitySwitcher.generated.h"

UCLASS()
class LUXORGAME_API ALuxStageVisibilitySwitcher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuxStageVisibilitySwitcher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Extras)
		class UArrowComponent* ArrowComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> ActorList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BackAngleThresholdOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool EnablePositionCheck;
	
};
