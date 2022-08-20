#pragma once
#include "CoreMinimal.h"
#include "LuxListContainerBase.h"
#include "ELuxReplayListResult.h"
#include "UIDataObject.h"
#include "LuxReplayListItemData.h"
#include "LuxReplayListContainer.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxReplayListContainer : public ULuxListContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReadyReplayCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLuxRequestReplayFileComplete, ELuxReplayListResult, bResult, const FUIDataObject&, DataObject);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxRequestReplayFileComplete OnRequestReplayFileComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyReplayCompleted OnReadyReplayCompleted;
    
    ULuxReplayListContainer();
    UFUNCTION(BlueprintCallable)
    bool RequestReplayFile(const FString& Key, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RequestReadyReplay();
    
    UFUNCTION(BlueprintCallable)
    bool RequestPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistReplayData(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRightPlayerNetIdStr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLeftPlayerNetIdStr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxReplayListItemData GetCurrentItemData();
    
    UFUNCTION(BlueprintCallable)
    bool CreateProvideDataByMyReplay(FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable)
    bool CreateProvideDataByBattleLog(FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDescriptionProvideData(FUIDataObject& DataObject);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTemporaryData();
    
};

