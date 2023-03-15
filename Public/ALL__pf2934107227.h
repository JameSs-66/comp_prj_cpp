#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UButton;
#include "ALL__pf2934107227.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/CompanyUI/menu/ALL.ALL_C", OverrideNativeName="ALL_C"))
class UALL_C__pf2934107227 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="exitla", Category="Animations", OverrideNativeName="exitla"))
	UWidgetAnimation* bpv__exitla__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="workla", Category="Animations", OverrideNativeName="workla"))
	UWidgetAnimation* bpv__workla__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="promote1", Category="Animations", OverrideNativeName="promote1"))
	UWidgetAnimation* bpv__promote1__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="wokedplans", Category="Animations", OverrideNativeName="wokedplans"))
	UWidgetAnimation* bpv__wokedplans__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="pomote", Category="Animations", OverrideNativeName="pomote"))
	UWidgetAnimation* bpv__pomote__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="ALL", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CEO", Category="ALL", OverrideNativeName="CEO"))
	UImage* bpv__CEO__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Director", Category="ALL", OverrideNativeName="Director"))
	UImage* bpv__Director__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Employee", Category="ALL", OverrideNativeName="Employee"))
	UImage* bpv__Employee__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="exitMAINMEAU", Category="ALL", OverrideNativeName="exitMAINMEAU"))
	UButton* bpv__exitMAINMEAU__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="exp", Category="ALL", OverrideNativeName="exp"))
	UImage* bpv__exp__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Janitor", Category="ALL", OverrideNativeName="Janitor"))
	UImage* bpv__Janitor__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="learn", Category="ALL", OverrideNativeName="learn"))
	UImage* bpv__learn__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="logo", Category="ALL", OverrideNativeName="logo"))
	UImage* bpv__logo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="LOGOWORKPLAN", Category="ALL", OverrideNativeName="LOGOWORKPLAN"))
	UImage* bpv__LOGOWORKPLAN__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="manager", Category="ALL", OverrideNativeName="manager"))
	UImage* bpv__manager__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="promote", Category="ALL", OverrideNativeName="promote"))
	UButton* bpv__promote__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="work plan", Category="ALL", OverrideNativeName="workplan"))
	UButton* bpv__workplan__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Isopenpromote", Category="Default", MultiLine="true", OverrideNativeName="Isopenpromote"))
	bool bpv__Isopenpromote__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Isopenworkplan", Category="Default", MultiLine="true", OverrideNativeName="Isopenworkplan"))
	bool bpv__Isopenworkplan__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UALL_C__pf2934107227(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ALL__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ALL__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
