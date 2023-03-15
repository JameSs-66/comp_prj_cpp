#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class UTextBlock;
class UProgressBar;
#include "StatsUi__pf2748595663.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/StatsUI/StatsUi.StatsUI_C,/Game/UI/Ingame/StatsUi.StatsUi_C,/Game/UI/Ingame/stats.stats_C", OverrideNativeName="StatsUI_C"))
class UStatsUI_C__pf2748595663 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="StatsUI", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ButtonUnpause", Category="StatsUI", OverrideNativeName="ButtonUnpause"))
	UButton* bpv__ButtonUnpause__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CharacterProfile", Category="StatsUI", OverrideNativeName="CharacterProfile"))
	UImage* bpv__CharacterProfile__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CoinImage", Category="StatsUI", OverrideNativeName="CoinImage"))
	UImage* bpv__CoinImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Day", Category="StatsUI", OverrideNativeName="Day"))
	UTextBlock* bpv__Day__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EnergyBar", Category="StatsUI", OverrideNativeName="EnergyBar"))
	UProgressBar* bpv__EnergyBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar", Category="Default", OverrideNativeName="HealthBar"))
	UProgressBar* bpv__HealthBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="KnowledgeBar", Category="StatsUI", OverrideNativeName="KnowledgeBar"))
	UProgressBar* bpv__KnowledgeBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MoneyValue", Category="Default", OverrideNativeName="MoneyValue"))
	UTextBlock* bpv__MoneyValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Pause", Category="StatsUI", OverrideNativeName="Pause"))
	UButton* bpv__Pause__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProfileFrame", Category="StatsUI", OverrideNativeName="ProfileFrame"))
	UImage* bpv__ProfileFrame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Speed", Category="StatsUI", OverrideNativeName="Speed"))
	UImage* bpv__Speed__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpeedText", Category="StatsUI", OverrideNativeName="SpeedText"))
	UTextBlock* bpv__SpeedText__pf;
	UPROPERTY(Export, meta=(DisplayName="Time", OverrideNativeName="Time"))
	UTextBlock* bpv__Time__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Health", Category="Default", MultiLine="true", OverrideNativeName="DisplayedHealth"))
	float bpv__DisplayedHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Energy", Category="Default", MultiLine="true", OverrideNativeName="DisplayedEnergy"))
	float bpv__DisplayedEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Knowledge", Category="Default", MultiLine="true", OverrideNativeName="DisplayedKnowledge"))
	float bpv__DisplayedKnowledge__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Time", Category="Default", MultiLine="true", OverrideNativeName="DisplayedTime"))
	FString bpv__DisplayedTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Days", Category="Default", MultiLine="true", OverrideNativeName="DisplayedDays"))
	FString bpv__DisplayedDays__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Minute", Category="Default", MultiLine="true", OverrideNativeName="Minute"))
	int32 bpv__Minute__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current WD", Category="Default", MultiLine="true", OverrideNativeName="CurrentWD"))
	float bpv__CurrentWD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Get Sleep Energy", Category="Default", MultiLine="true", OverrideNativeName="GetSleepEnergy"))
	float bpv__GetSleepEnergy__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Get Sleep Health", Category="Default", MultiLine="true", OverrideNativeName="GetSleepHealth"))
	float bpv__GetSleepHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Money", Category="Default", MultiLine="true", OverrideNativeName="DisplayedMoney"))
	int32 bpv__DisplayedMoney__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hour", Category="Default", MultiLine="true", OverrideNativeName="Hour"))
	int32 bpv__Hour__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_5"))
	float b0l__CallFunc_ReadStats_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_6"))
	float b0l__CallFunc_ReadStats_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UStatsUI_C__pf2748595663(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_StatsUI__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StatsUI__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StatsUI__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StatsUI__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetMoneyValue"))
	virtual FText  bpf__GetMoneyValue__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetProfileFrame"))
	virtual FSlateBrush  bpf__GetProfileFrame__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetProfileBackgroundColor"))
	virtual FLinearColor  bpf__GetProfileBackgroundColor__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Speed Image"))
	virtual FSlateBrush  bpf__GetxSpeedxImage__pfTT();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetSpeedText"))
	virtual FText  bpf__GetSpeedText__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
