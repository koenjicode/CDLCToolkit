#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIDataObject.h"
#include "LuxChronicleUtil.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxChronicleUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxChronicleUtil();
    UFUNCTION(BlueprintCallable)
    static void SetNoticeNavi();
    
    UFUNCTION(BlueprintCallable)
    static void SetChronologyNavi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetChronicleAllMissionData(FUIDataObject& MissionData);
    
};

