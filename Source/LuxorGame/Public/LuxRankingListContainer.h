#pragma once
#include "CoreMinimal.h"
#include "LuxListContainerBase.h"
#include "LuxRankingListContainer.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxRankingListContainer : public ULuxListContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLuxMyRankReadComplete, bool, Successful, int32, MyRank);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxMyRankReadComplete OnMyRankReadComplete;
    
    ULuxRankingListContainer();
    UFUNCTION(BlueprintCallable)
    void RequestReadMyRank(const FName& LeaderboardName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistRankingData() const;
    
};

