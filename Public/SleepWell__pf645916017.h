#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UProgressBar;
class UVerticalBox;
class UButton;
class UTextBlock;
class USlider;
class UCanvasPanel;
class ACharacterBase_BP_C__pf2567911892;
#include "SleepWell__pf645916017.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/RestBuilding/SleepWell.SleepWell_C", OverrideNativeName="SleepWell_C"))
class USleepWell_C__pf645916017 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background_1", Category="SleepWell", OverrideNativeName="Background_1"))
	UImage* bpv__Background_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EnergySleep", Category="SleepWell", OverrideNativeName="EnergySleep"))
	UProgressBar* bpv__EnergySleep__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Box", Category="SleepWell", OverrideNativeName="Exit_Box"))
	UVerticalBox* bpv__Exit_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button_2", Category="SleepWell", OverrideNativeName="Exit_Button_2"))
	UButton* bpv__Exit_Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBarSleep", Category="Default", OverrideNativeName="HealthBarSleep"))
	UProgressBar* bpv__HealthBarSleep__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_12", Category="SleepWell", OverrideNativeName="Image_12"))
	UImage* bpv__Image_12__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_219", Category="SleepWell", OverrideNativeName="Image_219"))
	UImage* bpv__Image_219__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Run", Category="SleepWell", OverrideNativeName="Run"))
	UImage* bpv__Run__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sleep", Category="SleepWell", OverrideNativeName="Sleep"))
	UButton* bpv__Sleep__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SleepText", Category="SleepWell", OverrideNativeName="SleepText"))
	UTextBlock* bpv__SleepText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sleeptime", Category="SleepWell", OverrideNativeName="Sleeptime"))
	USlider* bpv__Sleeptime__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SleepTimeSelect", Category="SleepWell", OverrideNativeName="SleepTimeSelect"))
	UCanvasPanel* bpv__SleepTimeSelect__pf;
	UPROPERTY(Export, meta=(DisplayName="Total_1", OverrideNativeName="Total_1"))
	UTextBlock* bpv__Total_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sleeping Time", Category="Default", MultiLine="true", OverrideNativeName="SleepingTime"))
	FString bpv__SleepingTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time in Min", Category="Default", MultiLine="true", OverrideNativeName="TimeInMin"))
	int32 bpv__TimeInMin__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sleep to Time", Category="Default", MultiLine="true", OverrideNativeName="SleepToTime"))
	float bpv__SleepToTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Looping Time Skip", Category="Default", MultiLine="true", OverrideNativeName="LoopingTimeSkip"))
	bool bpv__LoopingTimeSkip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spend", Category="Default", MultiLine="true", OverrideNativeName="Spend"))
	int32 bpv__Spend__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Price", Category="Default", MultiLine="true", OverrideNativeName="Price"))
	int32 bpv__Price__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pred Health", Category="Default", MultiLine="true", OverrideNativeName="PredHealth"))
	float bpv__PredHealth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Perd Energy", Category="Default", MultiLine="true", OverrideNativeName="PerdEnergy"))
	float bpv__PerdEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bar Opacity", Category="Default", MultiLine="true", OverrideNativeName="BarOpacity"))
	float bpv__BarOpacity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Health", Category="Default", MultiLine="true", OverrideNativeName="GetHealth"))
	float bpv__GetHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Energy", Category="Default", MultiLine="true", OverrideNativeName="GetEnergy"))
	float bpv__GetEnergy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Base_BP"))
	ACharacterBase_BP_C__pf2567911892* b0l__K2Node_DynamicCast_AsCharacter_Base_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_5"))
	float b0l__CallFunc_ReadStats_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_6"))
	float b0l__CallFunc_ReadStats_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Base_BP_1"))
	ACharacterBase_BP_C__pf2567911892* b0l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	USleepWell_C__pf645916017(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SleepWell__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SleepWell__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SleepWell__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SleepWell__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SleepWell_Exit_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SleepWell_Exit_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SleepWell_Sleep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SleepWell_Sleep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_EnergySleep_Percent_0"))
	virtual float  bpf__Get_EnergySleep_Percent_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_HealthBarSleep_Percent_0"))
	virtual float  bpf__Get_HealthBarSleep_Percent_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
