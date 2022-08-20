#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxReplayListItemData.h"
#include "LuxReplayListUtil.generated.h"

class ULuxorMatchData;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxReplayListUtil : public UObject {
    GENERATED_BODY()
public:
    ULuxReplayListUtil();
    UFUNCTION(BlueprintPure)
    static TArray<uint8> GetRaw(const FLuxReplayListItemData& ReplayListItemData);
    
    UFUNCTION(BlueprintPure)
    static bool GetData(const TArray<uint8>& Raw, FLuxReplayListItemData& OutItemData);
    
    UFUNCTION(BlueprintCallable)
    static FLuxReplayListItemData CreateReplayListItemData(const ULuxorMatchData* matchData);
    
};

