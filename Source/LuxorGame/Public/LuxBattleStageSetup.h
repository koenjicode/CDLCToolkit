// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuxBattleStageSetup.generated.h"

UCLASS()
class LUXORGAME_API ALuxBattleStageSetup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuxBattleStageSetup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ExtraStageParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool WithHole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsAstral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StageIndex;
	
};
