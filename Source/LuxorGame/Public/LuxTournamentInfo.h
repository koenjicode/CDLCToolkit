#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxTournamentInfoDateStatus.h"
#include "LuxTournamentInfo.generated.h"

UCLASS(Blueprintable)
class ULuxTournamentInfo : public UObject {
    GENERATED_BODY()
public:
    ULuxTournamentInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTournamentStartDateText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRegistrationEndDateText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxTournamentInfoDateStatus GetDateStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCheckInEndDateText() const;
    
};

