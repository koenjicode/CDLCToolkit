#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "ELuxAchievementsList.h"
#include "LuxAchievementSaveObject.generated.h"

class ULuxAchievementSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxAchievementSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    ULuxAchievementSaveObject();
    UFUNCTION(BlueprintCallable)
    static void SetInt32Value(ELuxAchievementsList enAchievement, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatValue(ELuxAchievementsList enAchievement, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolValue(ELuxAchievementsList enAchievement, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxAchievementSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable)
    static void AddInt32Value(ELuxAchievementsList enAchievement, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddFloatValue(ELuxAchievementsList enAchievement, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AchievementUnlock(ELuxAchievementsList enAchievement);
    
    UFUNCTION(BlueprintCallable)
    static void AchievementCheckLog(ELuxAchievementsList enAchievement);
    
    UFUNCTION(BlueprintCallable)
    static void AchievementAutoUnlock(ELuxAchievementsList enAchievement);
    
};

