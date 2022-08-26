#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELuxTournamentSubmitResultErrorType.h"
#include "ELuxTournamentListErrorType.h"
#include "ELuxTournamentLaunchSystemErrorType.h"
#include "ELuxTournamentMatchListErrorType.h"
#include "ELuxTournamentBattleResultType.h"
#include "LuxTournamentManager.generated.h"

class ULuxTournamentMatchInfo;
class ULuxTournamentInfo;

UCLASS(Blueprintable)
class ULuxTournamentManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnSystemProfileClosed);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSubmitResultComplete, ELuxTournamentSubmitResultErrorType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetTournamentListComplete, ELuxTournamentListErrorType, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetMatchListComplete, ELuxTournamentMatchListErrorType, Result);
    
    ULuxTournamentManager();
    UFUNCTION(BlueprintCallable)
    void SubmitMatchResult();
    
    UFUNCTION(BlueprintCallable)
    void SetStartMatch(const ULuxTournamentMatchInfo* InMatchInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetOnSystemProfileClosed(ULuxTournamentManager::FOnSystemProfileClosed InOnSystemProfileClosed);
    
    UFUNCTION(BlueprintCallable)
    void SetOnSubmitResultComplete(ULuxTournamentManager::FOnSubmitResultComplete InOnSubmitResultComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetOnGetTournamentListComplete(ULuxTournamentManager::FOnGetTournamentListComplete InOnGetTournamentListComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetOnGetMatchtListComplete(ULuxTournamentManager::FOnGetMatchListComplete InOnGetTournamentMatchComplete);
    
    UFUNCTION(BlueprintCallable)
    bool SetMyBattleResult(ELuxTournamentBattleResultType Result);
    
    UFUNCTION(BlueprintCallable)
    void ResetStartMatch();
    
    UFUNCTION(BlueprintCallable)
    void RequestTournamentList();
    
    UFUNCTION(BlueprintCallable)
    void RequestMatchListByInfo(const ULuxTournamentInfo* InTournamentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestMatchListById(const FString& InTournamentId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnSystemProfileClosed();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnSubmitResultComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnGetTournamentListComplete();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnGetMatchtListComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxTournamentLaunchSystemErrorType LaunchSystemTournamentMatch(const ULuxTournamentMatchInfo* InMatchInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxTournamentLaunchSystemErrorType LaunchSystemTournamentList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxTournamentLaunchSystemErrorType LaunchSystemTournament(const ULuxTournamentInfo* InTournamentInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxTournamentLaunchSystemErrorType LaunchSystemProfile(const ULuxTournamentMatchInfo* InMatchInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULuxTournamentInfo*> GetTournamentList() const;
    
    UFUNCTION(BlueprintCallable)
    ULuxTournamentMatchInfo* GetPrevMatch();
    
    UFUNCTION(BlueprintCallable)
    ULuxTournamentMatchInfo* GetNextMatchById(const FString& InTournamentId);
    
    UFUNCTION(BlueprintCallable)
    ULuxTournamentMatchInfo* GetNextMatch(const ULuxTournamentInfo* InTournamentInfo);
    
};

