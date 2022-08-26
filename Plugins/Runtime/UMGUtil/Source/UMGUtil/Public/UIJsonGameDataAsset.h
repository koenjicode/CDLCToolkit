#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UIJsonGameDataAsset.generated.h"

class UUIGameDataObject;

UCLASS(Blueprintable)
class UMGUTIL_API UUIJsonGameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUIGameDataObject>> GameDataClasses;
    
    UUIJsonGameDataAsset();
};

