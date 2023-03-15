#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class UTextBlock;
#include "ResultOfDays__pf645916017.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/RestBuilding/ResultOfDays.ResultOfDays_C", OverrideNativeName="ResultOfDays_C"))
class UResultOfDays_C__pf645916017 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="ResultOfDays", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Continue", Category="ResultOfDays", OverrideNativeName="Continue"))
	UButton* bpv__Continue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Daily_Income", Category="ResultOfDays", OverrideNativeName="Daily_Income"))
	UTextBlock* bpv__Daily_Income__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Days", Category="ResultOfDays", OverrideNativeName="Days"))
	UTextBlock* bpv__Days__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Today_Income", Category="ResultOfDays", OverrideNativeName="Today_Income"))
	UTextBlock* bpv__Today_Income__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Total", Category="ResultOfDays", OverrideNativeName="Total"))
	UTextBlock* bpv__Total__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Yesterday Money Value", Category="Default", MultiLine="true", OverrideNativeName="YesterdayMoneyValue"))
	float bpv__YesterdayMoneyValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Time Delition", Category="Default", MultiLine="true", OverrideNativeName="CurrentTimeDelition"))
	float bpv__CurrentTimeDelition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rank Income", Category="Default", MultiLine="true", OverrideNativeName="RankIncome"))
	float bpv__RankIncome__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Today Income", Category="Default", MultiLine="true", OverrideNativeName="TodayIncome"))
	float bpv__TodayIncome__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b0l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable_1"))
	float b0l__Temp_float_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable"))
	FString b0l__Temp_string_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_1"))
	FString b0l__Temp_string_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_2"))
	FString b0l__Temp_string_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_3"))
	FString b0l__Temp_string_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_4"))
	FString b0l__Temp_string_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_5"))
	FString b0l__Temp_string_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_6"))
	FString b0l__Temp_string_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_7"))
	FString b0l__Temp_string_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FString b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_1"))
	FString b0l__K2Node_Select_Default_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_5"))
	float b0l__CallFunc_ReadStats_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_6"))
	float b0l__CallFunc_ReadStats_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable_2"))
	float b0l__Temp_float_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_2"))
	FString b0l__K2Node_Select_Default_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_7"))
	float b0l__CallFunc_ReadStats_Value_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable_3"))
	float b0l__Temp_float_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b0l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_3"))
	float b0l__K2Node_Select_Default_3__pf;
	UResultOfDays_C__pf645916017(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ResultOfDays__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResultOfDays__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResultOfDays__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ResultOfDays_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ResultOfDays_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
