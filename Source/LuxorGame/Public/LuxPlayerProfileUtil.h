#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxorBlueprintUserProfileData.h"
#include "LuxPlayerProfileUtil.generated.h"

UCLASS(Blueprintable)
class ULuxPlayerProfileUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxPlayerProfileUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsServerDirty(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinningStreak(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWinningAverage(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<bool> GetWinLossRecords(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStyleRank(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShougouPlateId(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRegionStr(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRegion(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetRankMatchWinLoseCount(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRankedMatchWonNum(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRankedMatchNum(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerPoint(const FLuxorBlueprintUserProfileData& inProfData, int32 StyleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMatchWonNum(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMatchNum(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMostRankId(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLocalPlayerProfile(FLuxorBlueprintUserProfileData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLanguageStr(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLanguage(const FLuxorBlueprintUserProfileData& inProfData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayNameByProfile(const FLuxorBlueprintUserProfileData& inProfData);
    
};

