#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UTextBlock;
class UImage;
class UTexture2D;
#include "Coffee_widget__pf575078304.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/Coffee/Coffee_widget.Coffee_widget_C", OverrideNativeName="Coffee_widget_C"))
class UCoffee_widget_C__pf575078304 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Accept_button", Category="Coffee_widget", OverrideNativeName="Accept_button"))
	UButton* bpv__Accept_button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Coffe_cup_text", Category="Coffee_widget", OverrideNativeName="Coffe_cup_text"))
	UTextBlock* bpv__Coffe_cup_text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Coffe_powder_text", Category="Coffee_widget", OverrideNativeName="Coffe_powder_text"))
	UTextBlock* bpv__Coffe_powder_text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Coffee_cup", Category="Coffee_widget", OverrideNativeName="Coffee_cup"))
	UButton* bpv__Coffee_cup__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Coffee_powder", Category="Coffee_widget", OverrideNativeName="Coffee_powder"))
	UButton* bpv__Coffee_powder__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Cp_animation", Category="Coffee_widget", OverrideNativeName="Cp_animation"))
	UImage* bpv__Cp_animation__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="M_animation", Category="Coffee_widget", OverrideNativeName="M_animation"))
	UImage* bpv__M_animation__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Milk", Category="Coffee_widget", OverrideNativeName="Milk"))
	UButton* bpv__Milk__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Milk_Text", Category="Coffee_widget", OverrideNativeName="Milk_Text"))
	UTextBlock* bpv__Milk_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="S_animation", Category="Coffee_widget", OverrideNativeName="S_animation"))
	UImage* bpv__S_animation__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sugar", Category="Coffee_widget", OverrideNativeName="Sugar"))
	UButton* bpv__Sugar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sugar_Text", Category="Coffee_widget", OverrideNativeName="Sugar_Text"))
	UTextBlock* bpv__Sugar_Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cu Value", Category="Default", MultiLine="true", OverrideNativeName="Cu value"))
	int32 bpv__Cuxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cu Max", Category="Default", MultiLine="true", OverrideNativeName="Cu max"))
	int32 bpv__Cuxmax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cp Value", Category="Default", MultiLine="true", OverrideNativeName="Cp value"))
	int32 bpv__Cpxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cp Max", Category="Default", MultiLine="true", OverrideNativeName="Cp max"))
	int32 bpv__Cpxmax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="M Value", Category="Default", MultiLine="true", OverrideNativeName="M value"))
	int32 bpv__Mxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="M Max", Category="Default", MultiLine="true", OverrideNativeName="M max"))
	int32 bpv__Mxmax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="S Value", Category="Default", MultiLine="true", OverrideNativeName="S value"))
	int32 bpv__Sxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="S Max", Category="Default", MultiLine="true", OverrideNativeName="S max"))
	int32 bpv__Sxmax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cu", Category="Default", MultiLine="true", OverrideNativeName="cu"))
	bool bpv__cu__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cp Texture", Category="Default", MultiLine="true", OverrideNativeName="Cp_texture"))
	TArray<UTexture2D*> bpv__Cp_texture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="M Texture", Category="Default", MultiLine="true", OverrideNativeName="M_texture"))
	TArray<UTexture2D*> bpv__M_texture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="S Textrue", Category="Default", MultiLine="true", OverrideNativeName="S_textrue"))
	TArray<UTexture2D*> bpv__S_textrue__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cp Animation", Category="Default", MultiLine="true", OverrideNativeName="cp animation"))
	bool bpv__cpxanimation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="M", Category="Default", MultiLine="true", OverrideNativeName="M"))
	bool bpv__M__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="S", Category="Default", MultiLine="true", OverrideNativeName="S"))
	bool bpv__S__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_1"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_2"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_2"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_3"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_4"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_5"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_6"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_7"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_7"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_8"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_8__pf;
	UCoffee_widget_C__pf575078304(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Coffee_widget__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Coffee_widget_1"))
	void bpf__ExecuteUbergraph_Coffee_widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coffee_widget__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coffee_widget__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coffee_widget__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Coffee_powder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Coffee_powder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Sugar_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Sugar_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Milk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Milk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Accept_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Accept_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
