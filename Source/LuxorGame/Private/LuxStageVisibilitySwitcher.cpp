// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxStageVisibilitySwitcher.h"


// Sets default values
ALuxStageVisibilitySwitcher::ALuxStageVisibilitySwitcher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");

	RootComponent = ArrowComponent;
}

// Called when the game starts or when spawned
void ALuxStageVisibilitySwitcher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALuxStageVisibilitySwitcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

