// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxStageMeshActor.h"


// Sets default values
ALuxStageMeshActor::ALuxStageMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");

	SoftOpacityMeshComponent = CreateDefaultSubobject<ULuxStageMeshComponent>("SoftOpacityMesh");

	TranslucentMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("TranslucentMesh");

	RootComponent = BaseMeshComponent;
	SoftOpacityMeshComponent->SetupAttachment(BaseMeshComponent);
	TranslucentMeshComponent->SetupAttachment(BaseMeshComponent);

	TestEnabled = false;
	FadeFrame = 0;
}

// Called when the game starts or when spawned
void ALuxStageMeshActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALuxStageMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

