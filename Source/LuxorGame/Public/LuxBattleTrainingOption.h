#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LuxBattleHUDBase.h"
#include "UIDataObject.h"
#include "LuxBattleTrainingOption.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ALuxBattleTrainingOption : public ALuxBattleHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> TrainingOptionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> TrainingOptionInstance;
    
    ALuxBattleTrainingOption();
    UFUNCTION(BlueprintCallable)
    void OnDataLoadComplete(const FUIDataObject& Event);
    
};

