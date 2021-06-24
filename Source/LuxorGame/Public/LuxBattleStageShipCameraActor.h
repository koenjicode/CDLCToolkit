// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuxorGame.h"
#include "LuxBattleStageShipCameraActor.generated.h"


UCLASS()
class LUXORGAME_API ALuxBattleStageShipCameraActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuxBattleStageShipCameraActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsFighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Range;

	UPROPERTY(VisibleAnywhere)
		FLuxBattleStageShipScendState ScendStateX;

	UPROPERTY(VisibleAnywhere)
		FLuxBattleStageShipScendState ScendStateZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxBattleStageShipScendParam ScendParamX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLuxBattleStageShipScendParam ScendParamZ;
	
};