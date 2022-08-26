#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameUnlock.h"
#include "ELuxShinEdgeMasterStoryChapter.h"
#include "LuxUIGameUnlockShinEdgeMaster.generated.h"

class ULuxUIGameUnlockShinEdgeMaster;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameUnlockShinEdgeMaster : public ULuxUIGameUnlock {
    GENERATED_BODY()
public:
    ULuxUIGameUnlockShinEdgeMaster();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndOfChapter(ELuxShinEdgeMasterStoryChapter InCheckChapter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSoulLibra();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnablePlayerMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMoveTown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxUIGameUnlockShinEdgeMaster* GetShinEdgeMasterUnlockProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxShinEdgeMasterStoryChapter GetNowChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CharactorMissionCheck(const FString& inMissionID, FString& CharaCode);
    
};

