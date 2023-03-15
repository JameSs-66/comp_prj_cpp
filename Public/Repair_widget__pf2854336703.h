#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
#include "Repair_widget__pf2854336703.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/Repair/Repair_widget.Repair_widget_C", OverrideNativeName="Repair_widget_C"))
class URepair_widget_C__pf2854336703 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image", Category="Repair_widget", OverrideNativeName="Image"))
	UImage* bpv__Image__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_52", Category="Repair_widget", OverrideNativeName="Image_52"))
	UImage* bpv__Image_52__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_62", Category="Repair_widget", OverrideNativeName="Image_62"))
	UImage* bpv__Image_62__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Table_leg_1", Category="Drag and Drop", OverrideNativeName="Table_leg_1"))
	UButton* bpv__Table_leg_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Table_leg_2", Category="Drag and Drop", OverrideNativeName="Table_leg_2"))
	UButton* bpv__Table_leg_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Table_leg_3", Category="Drag and Drop", OverrideNativeName="Table_leg_3"))
	UButton* bpv__Table_leg_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Table_leg_4", Category="Drag and Drop", OverrideNativeName="Table_leg_4"))
	UButton* bpv__Table_leg_4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Drag and Drop", MultiLine="true", OverrideNativeName="NewVar_0"))
	TMap<int32,FText> bpv__NewVar_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", MultiLine="true", OverrideNativeName="NewVar_1"))
	FText bpv__NewVar_1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leg 1", Category="Default", MultiLine="true", OverrideNativeName="leg 1"))
	bool bpv__legx1__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leg 2", Category="Default", MultiLine="true", OverrideNativeName="leg 2"))
	bool bpv__legx2__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leg 3", Category="Default", MultiLine="true", OverrideNativeName="leg 3"))
	bool bpv__legx3__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Leg 4", Category="Default", MultiLine="true", OverrideNativeName="leg 4"))
	bool bpv__legx4__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="L 1", Category="Default", MultiLine="true", OverrideNativeName="l1"))
	bool bpv__l1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="L 2", Category="Default", MultiLine="true", OverrideNativeName="l2"))
	bool bpv__l2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="L 3", Category="Default", MultiLine="true", OverrideNativeName="l3"))
	bool bpv__l3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="L 4", Category="Default", MultiLine="true", OverrideNativeName="l4"))
	bool bpv__l4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X", Category="Default", MultiLine="true", OverrideNativeName="x"))
	bool bpv__x__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_1"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_2"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_3"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_4"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_5"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_6"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_7"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_8"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_9"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_10"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_2"))
	bool b0l__Temp_bool_IsClosed_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_11"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_3"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_12"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_3"))
	bool b0l__Temp_bool_IsClosed_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_13"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_14"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_15"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_15__pf;
	URepair_widget_C__pf2854336703(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Repair_widget_0"))
	void bpf__ExecuteUbergraph_Repair_widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Repair_widget__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_4_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_4_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_4_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_4_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_3_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_3_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_3_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_3_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_2_K2Node_ComponentBoundEvent_34_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_2_K2Node_ComponentBoundEvent_34_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_2_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_2_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Repair_widget_Table_leg_1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Repair_widget_Table_leg_1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
