#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "EVitalGaugeEvent.h"
#include "EGuardGaugeState.h"
#include "ELuxFightStyle.h"
#include "ESoulGaugeState.h"
#include "EBattleTimerState.h"
#include "LuxBattleModeChangeParam.h"
#include "Styling/SlateColor.h"
#include "LuxCockpitEventListener.generated.h"

class UUITextField;

UCLASS(Blueprintable)
class ALuxCockpitEventListener : public ALuxActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVitalGaugeEvent, int32, player_num, EVitalGaugeEvent, vital_event);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSoulGaugeEvent, int32, player_num, ESoulGaugeState, change_state);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGuardGaugeEvent, int32, player_num, EGuardGaugeState, change_state);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharaUIStatusEvent, int32, player_num, FText, txt);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCharaPointEvent, int32, player_num, ELuxFightStyle, STYLE, int32, ui_index, int32, tex_index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleTimerEvent, EBattleTimerState, change_state);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleModeChangeEvent, const FLuxBattleModeChangeParam&, inEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleTimerEvent OnBattleTimerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuardGaugeEvent OnGuardGaugeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSoulGaugeEvent OnSoulGaugeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVitalGaugeEvent OnVitalGaugeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleModeChangeEvent OnBattleModeChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharaPointEvent OnCharaPointEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharaUIStatusEvent OnCharaUIStatusEvent;
    
    ALuxCockpitEventListener();
    UFUNCTION(BlueprintCallable)
    void SetUIText();
    
    UFUNCTION(BlueprintCallable)
    void SetDummyCharaPoint(int32 side, int32 CharaPnt1, int32 CharaPnt2, int32 CharaPnt3, int32 CharaPnt4, int32 CharaPnt5, int32 CharaPnt6, int32 CharaPnt7, int32 CharaPnt8);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyCharaModePoint(int32 side, int32 mode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaUIDebugMode(bool isDebug);
    
    UFUNCTION(BlueprintCallable)
    bool IsStyleIconFlip(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void AssignUITextField(int32 side, UUITextField* textField1, UUITextField* textField2);
    
    UFUNCTION(BlueprintCallable)
    void AssignSiegUITextColor(const FSlateColor white, const FSlateColor blue);
    
};

