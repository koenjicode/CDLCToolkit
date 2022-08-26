#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UINodeStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUINodeStyle : public UDataAsset {
    GENERATED_BODY()
public:
    UUINodeStyle();
};

