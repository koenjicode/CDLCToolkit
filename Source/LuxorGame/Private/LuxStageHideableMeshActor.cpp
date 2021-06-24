// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxStageHideableMeshActor.h"


// Sets default values
ALuxStageHideableMeshActor::ALuxStageHideableMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	
	DitherMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>("DitherMesh");

	RootComponent = BaseMeshComponent;
	DitherMeshComponent->SetupAttachment(BaseMeshComponent);

	bDitherEnabled = false;
	DitherFrame = 0;

}

// Called when the game starts or when spawned
void ALuxStageHideableMeshActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALuxStageHideableMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

