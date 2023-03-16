#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
class UImage;
class UButton;
class UTextBlock;
class UProgressBar;
#include "StatsUi.generated.h"
UCLASS(config = Engine, Blueprintable, BlueprintType,
       meta = (ReplaceConverted =
                   "/Game/UI/Ingame/StatsUI/StatsUi.StatsUI_C,/Game/UI/Ingame/"
                   "StatsUi.StatsUi_C,/Game/UI/Ingame/stats.stats_C",
               OverrideNativeName = "StatsUI_C"))
class UStatsUi : public UUserWidget {
public:
  GENERATED_BODY()
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Background", Category = "StatsUI",
                    OverrideNativeName = "Background"))
  UImage *Background;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "ButtonUnpause", Category = "StatsUI",
                    OverrideNativeName = "ButtonUnpause"))
  UButton *ButtonUnpause;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "CharacterProfile", Category = "StatsUI",
                    OverrideNativeName = "CharacterProfile"))
  UImage *CharacterProfile;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "CoinImage", Category = "StatsUI",
                    OverrideNativeName = "CoinImage"))
  UImage *CoinImage;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Day", Category = "StatsUI",
                    OverrideNativeName = "Day"))
  UTextBlock *Day;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "EnergyBar", Category = "StatsUI",
                    OverrideNativeName = "EnergyBar"))
  UProgressBar *EnergyBar;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "HealthBar", Category = "Default",
                    OverrideNativeName = "HealthBar"))
  UProgressBar *HealthBar;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "KnowledgeBar", Category = "StatsUI",
                    OverrideNativeName = "KnowledgeBar"))
  UProgressBar *KnowledgeBar;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "MoneyValue", Category = "Default",
                    OverrideNativeName = "MoneyValue"))
  UTextBlock *MoneyValue;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Pause", Category = "StatsUI",
                    OverrideNativeName = "Pause"))
  UButton *Pause;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "ProfileFrame", Category = "StatsUI",
                    OverrideNativeName = "ProfileFrame"))
  UImage *ProfileFrame;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Speed", Category = "StatsUI",
                    OverrideNativeName = "Speed"))
  UImage *Speed;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "SpeedText", Category = "StatsUI",
                    OverrideNativeName = "SpeedText"))
  UTextBlock *SpeedText;
  UPROPERTY(Export, meta = (DisplayName = "Time", OverrideNativeName = "Time"))
  UTextBlock *Time;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Health", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "DisplayedHealth"))
  float DisplayedHealth;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Energy", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "DisplayedEnergy"))
  float DisplayedEnergy;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Knowledge", Category = "Default",
                    MultiLine = "true",
                    OverrideNativeName = "DisplayedKnowledge"))
  float DisplayedKnowledge;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Time", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "DisplayedTime"))
  FString DisplayedTime;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Days", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "DisplayedDays"))
  FString DisplayedDays;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Minute", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "Minute"))
  int32 Minute;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Current WD", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "CurrentWD"))
  float CurrentWD;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Get Sleep Energy", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "GetSleepEnergy"))
  float GetSleepEnergy;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Get Sleep Health", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "GetSleepHealth"))
  float GetSleepHealth;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Displayed Money", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "DisplayedMoney"))
  int32 DisplayedMoney;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Hour", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "Hour"))
  int32 Hour;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_Event_MyGeometry"))
  FGeometry K2Node_Event_MyGeometry;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_Event_InDeltaTime"))
  float K2Node_Event_InDeltaTime;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value"))
  float CallFunc_ReadStats_Value_0;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_1"))
  float CallFunc_ReadStats_Value_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_2"))
  float CallFunc_ReadStats_Value_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_3"))
  float CallFunc_ReadStats_Value_3;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_4"))
  float CallFunc_ReadStats_Value_4;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_5"))
  float CallFunc_ReadStats_Value_5;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value_6"))
  float CallFunc_ReadStats_Value_6;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_IsClosed_Variable"))
  bool Temp_bool_IsClosed_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Has_Been_Initd_Variable"))
  bool Temp_bool_Has_Been_Initd_Variable;
  UStatsUi(
      const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void
  Pause_BImgTintCustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void Pause_BImgTintStaticDependenciesAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void Pause_BImgTintStaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  void ExecuteUbergraph_StatsUI_0(int32 EntryPoint);
  void ExecuteUbergraph_StatsUI_1(int32 EntryPoint);
  void ExecuteUbergraph_StatsUI_2(int32 EntryPoint);
  void ExecuteUbergraph_StatsUI_3(int32 EntryPoint);
  UFUNCTION(meta = (OverrideNativeName =
                        "BndEvtStatsUI_Button_1_K2Node_ComponentBoundEvent_1_"
                        "OnButtonClickedEventDelegateSignature"))
  virtual void
  BndEvtStatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEventDelegateSignature();
  UFUNCTION(
      BlueprintCosmetic,
      meta =
          (Category = "User Interface",
           Comment =
               "/**\t * Called after the underlying slate widget is "
               "constructed.  Depending on how the slate object is used\t * "
               "this event may be called multiple times due to adding and "
               "removing from the hierarchy.\t * If you need a true "
               "called-once-when-created event, use OnInitialized.\t */",
           Keywords = "Begin Play",
           ToolTip = "Called after the underlying slate widget is constructed. "
                     " Depending on how the slate object is usedthis event may "
                     "be called multiple times due to adding and removing from "
                     "the hierarchy.If you need a true "
                     "called-once-when-created event, use OnInitialized.",
           CppFromBpEvent, OverrideNativeName = "Construct"))
  virtual void Construct();
  UFUNCTION(meta = (OverrideNativeName =
                        "BndEvtStatsUI_Pause_K2Node_ComponentBoundEvent_0_"
                        "OnButtonClickedEventDelegateSignature"))
  virtual void
  BndEvtStatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEventDelegateSignature();
  UFUNCTION(
      BlueprintCosmetic,
      meta = (Category = "User Interface",
              Comment =
                  "/**\t * Ticks this widget.  Override in derived classes, "
                  "but always call the parent implementation.\t *\t * @param  "
                  "MyGeometry The space allotted for this widget\t * @param  "
                  "InDeltaTime  Real time passed since last tick\t */",
              ToolTip = "Ticks this widget.  Override in derived classes, but "
                        "always call the parent implementation.@param  "
                        "MyGeometry The space allotted for this widget@param  "
                        "InDeltaTime  Real time passed since last tick",
              CppFromBpEvent, OverrideNativeName = "Tick"))
  virtual void Tick(FGeometry MyGeometry, float InDeltaTime);
  UFUNCTION(BlueprintCallable, BlueprintPure,
            meta = (Category, OverrideNativeName = "GetMoneyValue"))
  virtual FText GetMoneyValue();
  UFUNCTION(BlueprintCallable, BlueprintPure,
            meta = (Category, OverrideNativeName = "GetProfileFrame"))
  virtual FSlateBrush GetProfileFrame();
  UFUNCTION(BlueprintCallable, BlueprintPure,
            meta = (Category, OverrideNativeName = "GetProfileBackgroundColor"))
  virtual FLinearColor GetProfileBackgroundColor();
  UFUNCTION(BlueprintCallable, BlueprintPure,
            meta = (Category, OverrideNativeName = "Get Speed Image"))
  virtual FSlateBrush GetxSpeedxImageTT();
  UFUNCTION(BlueprintCallable, BlueprintPure,
            meta = (Category, OverrideNativeName = "GetSpeedText"))
  virtual FText GetSpeedText();

public:
  virtual void GetSlotNames(TArray<FName> &SlotNames) const override;
  virtual void PreSave(const class ITargetPlatform *TargetPlatform) override;
  virtual void InitializeNativeClassData() override;
};
