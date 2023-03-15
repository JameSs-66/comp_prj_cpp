#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "QuestUI__pf2748595663.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/StatsUI/QuestUI.QuestUI_C", OverrideNativeName="QuestUI_C"))
class UQuestUI_C__pf2748595663 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CEO", Category="QuestUI", OverrideNativeName="CEO"))
	UTextBlock* bpv__CEO__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Prom", Category="QuestUI", OverrideNativeName="Prom"))
	UTextBlock* bpv__Prom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quest1", Category="QuestUI", OverrideNativeName="Quest1"))
	UTextBlock* bpv__Quest1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quest2", Category="QuestUI", OverrideNativeName="Quest2"))
	UTextBlock* bpv__Quest2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quest3", Category="QuestUI", OverrideNativeName="Quest3"))
	UTextBlock* bpv__Quest3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Quest 1 Text", Category="Default", MultiLine="true", OverrideNativeName="Quest1_Text"))
	FString bpv__Quest1_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Quest 2 Text", Category="Default", MultiLine="true", OverrideNativeName="Quest2_Text"))
	FString bpv__Quest2_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Quest 3 Text", Category="Default", MultiLine="true", OverrideNativeName="Quest3_Text"))
	FString bpv__Quest3_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable"))
	FString b0l__Temp_string_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_1"))
	FString b0l__Temp_string_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_2"))
	FString b0l__Temp_string_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_3"))
	FString b0l__Temp_string_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_4"))
	FString b0l__Temp_string_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_5"))
	FString b0l__Temp_string_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b0l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_6"))
	FString b0l__Temp_string_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_7"))
	FString b0l__Temp_string_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_8"))
	FString b0l__Temp_string_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_3"))
	int32 b0l__Temp_int_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_9"))
	FString b0l__Temp_string_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_10"))
	FString b0l__Temp_string_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_11"))
	FString b0l__Temp_string_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_4"))
	int32 b0l__Temp_int_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_12"))
	FString b0l__Temp_string_Variable_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_13"))
	FString b0l__Temp_string_Variable_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_14"))
	FString b0l__Temp_string_Variable_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_5"))
	int32 b0l__Temp_int_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_15"))
	FString b0l__Temp_string_Variable_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_16"))
	FString b0l__Temp_string_Variable_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_17"))
	FString b0l__Temp_string_Variable_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_6"))
	int32 b0l__Temp_int_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_18"))
	FString b0l__Temp_string_Variable_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_19"))
	FString b0l__Temp_string_Variable_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_20"))
	FString b0l__Temp_string_Variable_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_7"))
	int32 b0l__Temp_int_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_21"))
	FString b0l__Temp_string_Variable_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_22"))
	FString b0l__Temp_string_Variable_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_23"))
	FString b0l__Temp_string_Variable_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_8"))
	int32 b0l__Temp_int_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_24"))
	FString b0l__Temp_string_Variable_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_25"))
	FString b0l__Temp_string_Variable_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_26"))
	FString b0l__Temp_string_Variable_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FString b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_1"))
	FString b0l__K2Node_Select_Default_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_2"))
	FString b0l__K2Node_Select_Default_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_3"))
	FString b0l__K2Node_Select_Default_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_4"))
	FString b0l__K2Node_Select_Default_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_5"))
	FString b0l__K2Node_Select_Default_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_6"))
	FString b0l__K2Node_Select_Default_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_7"))
	FString b0l__K2Node_Select_Default_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_8"))
	FString b0l__K2Node_Select_Default_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UQuestUI_C__pf2748595663(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_QuestUI__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_QuestUI__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
