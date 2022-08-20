#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxBattleInputKeyConfigEnableKeyTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ULuxBattleInputKeyConfigEnableKeyTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    ULuxBattleInputKeyConfigEnableKeyTable();
};

