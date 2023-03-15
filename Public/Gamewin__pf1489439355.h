#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class UOverlay;
class UTextBlock;
class UGameInstance_BP_C__pf2132744816;
#include "Gamewin__pf1489439355.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Gamewin.Gamewin_C", OverrideNativeName="Gamewin_C"))
class UGamewin_C__pf1489439355 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_260", Category="Gamewin", OverrideNativeName="Image_260"))
	UImage* bpv__Image_260__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="No", Category="Gamewin", OverrideNativeName="No"))
	UButton* bpv__No__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Overlay_0", Category="Gamewin", OverrideNativeName="Overlay_0"))
	UOverlay* bpv__Overlay_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Return", Category="Gamewin", OverrideNativeName="Return"))
	UTextBlock* bpv__Return__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock", Category="Gamewin", OverrideNativeName="TextBlock"))
	UTextBlock* bpv__TextBlock__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_1", Category="Gamewin", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_45", Category="Gamewin", OverrideNativeName="TextBlock_45"))
	UTextBlock* bpv__TextBlock_45__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Yes", Category="Gamewin", OverrideNativeName="Yes"))
	UButton* bpv__Yes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Time", Category="Default", MultiLine="true", OverrideNativeName="DelayTime"))
	int32 bpv__DelayTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is End", Category="Default", MultiLine="true", OverrideNativeName="IsEnd"))
	bool bpv__IsEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_1"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_2"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_3"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Instance_BP"))
	UGameInstance_BP_C__pf2132744816* b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UGamewin_C__pf1489439355(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Gamewin_0"))
	void bpf__ExecuteUbergraph_Gamewin__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Gamewin__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
