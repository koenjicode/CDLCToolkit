#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameWeaponData.h"
#include "LuxGameSaveObject.h"
#include "ELuxShinEdgeMasterCaptureImageType.h"
#include "LuxUIGameItemData.h"
#include "LuxShinEdgeMasterSaveSlot.h"
#include "LuxShinEdgeMasterAssistChara.h"
#include "LuxUITextureParam.h"
#include "UIDataObject.h"
#include "UObject/NoExportTypes.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "UObject/NoExportTypes.h"
#include "ELuxUIPlayerSoulLevel.h"
#include "ELuxUIPlayerSoulCondition.h"
#include "ELuxGender.h"
#include "Kismet/KismetTextLibrary.h"
#include "LuxShinEdgeMasterSaveObject.generated.h"

class ULuxShinEdgeMasterSaveObject;
class UTexture2D;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxShinEdgeMasterSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxShinEdgeMasterSaveSlot> ShinEdgeMasterSaveSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLuxUIGameItemData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLuxUIGameWeaponData> SEMWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> TutorialUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefaultWeaponNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlinePlayerAuthorIDs;
    
    ULuxShinEdgeMasterSaveObject();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayTime(int32 InSaveSlotIndex, int32 InPlaySecondTime);
    
    UFUNCTION(BlueprintCallable)
    bool SubWeapon(int32 InWeaponIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SubItem(const FString& inItemId);
    
    UFUNCTION(BlueprintCallable)
    bool SubAssistor(const FLuxShinEdgeMasterAssistChara& InSubAssist);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateDateTime(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileFactoryId(int32 InEditSaveSlotIndex, int32 InFactoryId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerThumbnail(int32 InEditSaveSlotIndex, const FLuxUITextureParam& InThumbnail);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerItem(const FString& inItemId);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemNum(const FString& inItemId, uint8 inValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetEquipWeaponIndex(int32 InWeaponIndex, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetEquipAssistor(const FLuxShinEdgeMasterAssistChara& InEquipAssist);
    
    UFUNCTION(BlueprintCallable)
    void SetEncountRate(const int32 InEncountRate);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSaveSlotIndex(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSaveSlot(const FLuxShinEdgeMasterSaveSlot& InSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureImage(int32 InEditSaveSlotIndex, ELuxShinEdgeMasterCaptureImageType inType, const FLuxUITextureParam& InImageParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetAssistorEquipWeapon(int32 InWeaponIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAssistorEquipFoodID(const FString& InFoodID);
    
    UFUNCTION(BlueprintCallable)
    void ResetEncountRate();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquipAssistor();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAssistorEquipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssistorEquipFoodID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSaveSlot(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShopAllMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRandomMissionAvailable(const FString& inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipWeaponSaveSlot(int32 InWeaponIndex, TArray<int32>& EqiopSlotNo);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnoughMoneyCurrentSlot(int32 InMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultWeaponIndex(int32 InWeaponIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssistorEquipWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssistorEquipFood();
    
    UFUNCTION(BlueprintCallable)
    bool ImplantWeaponBattleSkillFromWeapon(int32 InBaseWeaponIndex, int32 InMaterialWeaponIndex, const FString& InImplantSkill);
    
    UFUNCTION(BlueprintCallable)
    bool ImplantWeaponBattleSkillFromItem(int32 InBaseWeaponIndex, const FString& inItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponList(TArray<int32>& Key, TArray<FUIDataObject>& SEMWeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeapon(int32 InWeaponIndex, FUIDataObject& SEMWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetUpdateDateTime(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubMissionClearCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecificStyleWeaponList(int32 InStyle, TArray<int32>& Key, TArray<FUIDataObject>& SEMWeaponList);
    
    UFUNCTION(BlueprintCallable)
    FLuxShinEdgeMasterSaveSlot GetSaveSlot(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxShinEdgeMasterSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetPlayTimespan(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxUIPlayerSoulLevel GetPlayerSoulLevel(int32 InSaveSlotIndex, ELuxUIPlayerSoulCondition InSoulCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSoulConditionBonus(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxUIPlayerSoulCondition GetPlayerSoulCondition(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLevel(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerItem(FString& outItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewestUpdateTimeSlotNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoneyCurrentSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject GetMissionDataObject(const FString& inMissionID, bool& IsData);
    
    UFUNCTION(BlueprintPure)
    uint8 GetItemNum(const FString& inItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemListSortName(bool asc_type, TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemList(TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxGender GetGender(int32 InSaveSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeWeaponNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetExploreItemList(TArray<FString>& Key, TArray<FLuxUIGameItemData>& SEMItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipWeaponIndex(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEquipWeapon(FUIDataObject& SEMWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEquipAssistor(FLuxShinEdgeMasterAssistChara& InEquipAssist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEncountRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultWeaponIndex(const FString& inCharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDefaultWeapon(const FString& inCharaCode, FUIDataObject& SEMWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextGender GetCurrentTextGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSaveSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxShinEdgeMasterSaveSlot GetCurrentSaveSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCaptureImage(int32 InEditSaveSlotIndex, ELuxShinEdgeMasterCaptureImageType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssistorNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAssistorFoodID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssistorEquipWeaponIndex();
    
    UFUNCTION(BlueprintCallable)
    bool EquipWeaponToDefault(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveSlot(int32 InSaveSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void CreateDefaultWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertUpdateDateTimeToText(const FDateTime& InUpdateDateTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertPlayTimespanToText(const FTimespan& InPlayTimespan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertPlayerLevelToText(int32 InPlayerLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsValidWeapons() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsValidEquipWeapon(TArray<int32>& IsInvalidIndices);
    
    UFUNCTION(BlueprintCallable)
    int32 AddWeapon(const FUIDataObject& inWeapon);
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyCurrentSlot(int32 InAddMoney);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const FString& inItemId);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultWeapon(const FUIDataObject& inWeapon, const FString& inCharaCode);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssistor(const FString& InAssistId, int32 InAssistIndex);
    
};

