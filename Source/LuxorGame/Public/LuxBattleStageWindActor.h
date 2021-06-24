// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuxBattleStageWindActor.generated.h"

UCLASS()
class LUXORGAME_API ALuxBattleStageWindActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuxBattleStageWindActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FarScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FarDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NearReduceScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bTimeReduce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Power;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NoiseInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BaseInterval;
	
};
