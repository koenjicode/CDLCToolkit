#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIDataObject.h"
#include "LuxListContainerBase.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxListContainerBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxLeaderboardReadComplete, bool, bSuccessful);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxLeaderboardReadComplete OnLeaderboardReadComplete;
    
    ULuxListContainerBase();
    UFUNCTION(BlueprintCallable)
    void RequestReadLeaderboards(const FName& LeaderboardName, int32 index, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    bool CreateProvideData(FUIDataObject& DataObject);
    
};

