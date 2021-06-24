// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuxorGame.h"
#include "LuxStageMeshActor.generated.h"

UCLASS()
class LUXORGAME_API ALuxStageMeshActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuxStageMeshActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32  FadeFrame;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* BaseMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	ULuxStageMeshComponent* SoftOpacityMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* TranslucentMeshComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
