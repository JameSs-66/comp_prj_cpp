#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UTextBlock;
class UVerticalBox;
class UTexture2D;
#include "Working_widget__pf518243491.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/Working/Working_widget.Working_widget_C", OverrideNativeName="Working_widget_C"))
class UWorking_widget_C__pf518243491 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_64", Category="Working_widget", OverrideNativeName="Button_64"))
	UButton* bpv__Button_64__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="employee", Category="Working_widget", OverrideNativeName="employee"))
	UImage* bpv__employee__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_156", Category="Working_widget", OverrideNativeName="Image_156"))
	UImage* bpv__Image_156__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="time_value", Category="Working_widget", OverrideNativeName="time_value"))
	UTextBlock* bpv__time_value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VerticalBox_56", Category="Working_widget", OverrideNativeName="VerticalBox_56"))
	UVerticalBox* bpv__VerticalBox_56__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", OverrideNativeName="time"))
	float bpv__time__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Hidden", Category="Default", MultiLine="true", OverrideNativeName="button_hidden"))
	bool bpv__button_hidden__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fail", Category="Default", MultiLine="true", OverrideNativeName="fail"))
	bool bpv__fail__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="0", Category="Default", MultiLine="true", OverrideNativeName="0"))
	bool bpv__0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emp Texture", Category="Default", MultiLine="true", OverrideNativeName="emp_texture"))
	TArray<UTexture2D*> bpv__emp_texture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emp Animation", Category="Default", MultiLine="true", OverrideNativeName="emp animation"))
	int32 bpv__empxanimation__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_1__pf;
	UWorking_widget_C__pf518243491(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Working_widget_0"))
	void bpf__ExecuteUbergraph_Working_widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Working_widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Working_widget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Working_widget_Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Working_widget_Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
