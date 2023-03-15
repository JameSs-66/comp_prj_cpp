#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UVerticalBox;
class UProgressBar;
class UTextBlock;
class UTexture2D;
#include "Present_widget__pf3227831806.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/Present/Present_widget.Present_widget_C", OverrideNativeName="Present_widget_C"))
class UPresent_widget_C__pf3227831806 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_130", Category="Present_widget", OverrideNativeName="Button_130"))
	UButton* bpv__Button_130__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="employee", Category="Present_widget", OverrideNativeName="employee"))
	UImage* bpv__employee__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Fight", Category="Present_widget", OverrideNativeName="Fight"))
	UVerticalBox* bpv__Fight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_42", Category="Present_widget", OverrideNativeName="Image_42"))
	UImage* bpv__Image_42__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="manager", Category="Present_widget", OverrideNativeName="manager"))
	UImage* bpv__manager__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_42", Category="Progress Bar", OverrideNativeName="ProgressBar_42"))
	UProgressBar* bpv__ProgressBar_42__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start", Category="Present_widget", OverrideNativeName="Start"))
	UVerticalBox* bpv__Start__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="time_value", Category="Present_widget", OverrideNativeName="time_value"))
	UTextBlock* bpv__time_value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar Value", Category="progressBar", MultiLine="true", tooltip, OverrideNativeName="bar value"))
	float bpv__barxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar Max", Category="Progress Bar", MultiLine="true", OverrideNativeName="bar max"))
	float bpv__barxmax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value", Category="Progress Bar", MultiLine="true", OverrideNativeName="Value"))
	float bpv__Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Complete", Category="Default", MultiLine="true", OverrideNativeName="complete"))
	bool bpv__complete__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", OverrideNativeName="time"))
	float bpv__time__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar Value Display", Category="Progress Bar", MultiLine="true", OverrideNativeName="Bar value display"))
	float bpv__Barxvaluexdisplay__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fail", Category="Default", MultiLine="true", OverrideNativeName="Fail"))
	bool bpv__Fail__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Pre", Category="Default", MultiLine="true", OverrideNativeName="start_pre"))
	bool bpv__start_pre__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emp Animation", Category="Default", MultiLine="true", OverrideNativeName="Emp Animation"))
	int32 bpv__EmpxAnimation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mana Animation", Category="Default", MultiLine="true", OverrideNativeName="Mana Animation"))
	int32 bpv__ManaxAnimation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emp T", Category="Default", MultiLine="true", OverrideNativeName="emp t"))
	TArray<UTexture2D*> bpv__empxt__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Man T", Category="Default", MultiLine="true", OverrideNativeName="man t"))
	TArray<UTexture2D*> bpv__manxt__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_3__pf;
	UPresent_widget_C__pf3227831806(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Present_widget__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Present_widget_1"))
	void bpf__ExecuteUbergraph_Present_widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Present_widget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Present_widget_Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Present_widget_Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPercent_0"))
	virtual float  bpf__GetPercent_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Bar +"))
	virtual void bpf__Barxx__pfTI(float bpp__value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Bar -"))
	virtual void bpf__Barxx__pfTG(float bpp__value__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
