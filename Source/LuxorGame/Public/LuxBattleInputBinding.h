#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxBattleInputPairs.h"
#include "LuxBattleInputBinding.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleInputBinding : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleInputPairs Bindings;
    
    ULuxBattleInputBinding();
};

