// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxCharaActor.h"

ALuxCharaActor::ALuxCharaActor()
{
	// Setup Components
	PrimaryActorTick.bCanEverTick = true;

	CharaMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character Mesh"));
	WeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));

}

