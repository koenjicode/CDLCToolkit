// Fill out your copyright notice in the Description page of Project Settings.

#include "LuxCreationTextureAsset.h"

ULuxCreationTextureAsset::ULuxCreationTextureAsset()
{
	DefaultColor.Add(FLinearColor::White);
	DefaultColor.Add(FLinearColor::White);
	DefaultColor.Add(FLinearColor::White);
	DefaultColor.Add(FLinearColor::White);
	Identifier = FName(this->GetFName());
}



