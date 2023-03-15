#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class UImage;
class UVerticalBox;
class UProgressBar;
class UTexture2D;
#include "Recruit_widget__pf2914304342.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/recruit/Recruit_widget.Recruit_widget_C", OverrideNativeName="Recruit_widget_C"))
class URecruit_widget_C__pf2914304342 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="com_value", Category="Recruit_widget", OverrideNativeName="com_value"))
	UTextBlock* bpv__com_value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="False_Button", Category="Recruit_widget", OverrideNativeName="False_Button"))
	UButton* bpv__False_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_58", Category="Recruit_widget", OverrideNativeName="Image_58"))
	UImage* bpv__Image_58__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_98", Category="Recruit_widget", OverrideNativeName="Image_98"))
	UImage* bpv__Image_98__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="max_com", Category="Recruit_widget", OverrideNativeName="max_com"))
	UTextBlock* bpv__max_com__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Max_mis", Category="Recruit_widget", OverrideNativeName="Max_mis"))
	UTextBlock* bpv__Max_mis__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Mis_value", Category="Recruit_widget", OverrideNativeName="Mis_value"))
	UTextBlock* bpv__Mis_value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Progress_Box", Category="Recruit_widget", OverrideNativeName="Progress_Box"))
	UVerticalBox* bpv__Progress_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_1", Category="probar", OverrideNativeName="ProgressBar_1"))
	UProgressBar* bpv__ProgressBar_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_2", Category="Probar", OverrideNativeName="ProgressBar_2"))
	UProgressBar* bpv__ProgressBar_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_3", Category="Probar", OverrideNativeName="ProgressBar_3"))
	UProgressBar* bpv__ProgressBar_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_4", Category="Probar", OverrideNativeName="ProgressBar_4"))
	UProgressBar* bpv__ProgressBar_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_949", Category="Recruit_widget", OverrideNativeName="TextBlock_949"))
	UTextBlock* bpv__TextBlock_949__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="True_button", Category="Recruit_widget", OverrideNativeName="True_button"))
	UButton* bpv__True_button__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Com", Category="Default", MultiLine="true", OverrideNativeName="Max com"))
	float bpv__Maxxcom__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar 1value", Category="Barvalue", MultiLine="true", OverrideNativeName="Bar1value"))
	float bpv__Bar1value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar 2value", Category="Barvalue", MultiLine="true", OverrideNativeName="Bar2value"))
	float bpv__Bar2value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar 3value", Category="Barvalue", MultiLine="true", OverrideNativeName="Bar3value"))
	float bpv__Bar3value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bar 4value", Category="Barvalue", MultiLine="true", OverrideNativeName="Bar4value"))
	float bpv__Bar4value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Com Value", Category="Default", MultiLine="true", OverrideNativeName="com value"))
	float bpv__comxvalue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Complete G", Category="Default", MultiLine="true", OverrideNativeName="complete_g"))
	bool bpv__complete_g__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mis Max", Category="Default", MultiLine="true", OverrideNativeName="mis max"))
	float bpv__misxmax__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mis Value", Category="Default", MultiLine="true", OverrideNativeName="mis value"))
	float bpv__misxvalue__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mis G", Category="Default", MultiLine="true", OverrideNativeName="mis_g"))
	bool bpv__mis_g__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Veee", Category="Default", MultiLine="true", OverrideNativeName="Veee"))
	UTexture2D* bpv__Veee__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<float> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutItem"))
	float b0l__CallFunc_Array_Random_OutItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutIndex"))
	int32 b0l__CallFunc_Array_Random_OutIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_sum_NewParam"))
	float b0l__CallFunc_sum_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_sum_NewParam_1"))
	float b0l__CallFunc_sum_NewParam_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<float> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutItem_1"))
	float b0l__CallFunc_Array_Random_OutItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutIndex_1"))
	int32 b0l__CallFunc_Array_Random_OutIndex_1__pf;
	URecruit_widget_C__pf2914304342(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Recruit_widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Recruit_widget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Recruit_widget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__recruit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__recruit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__recruit_Button_453_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__recruit_Button_453_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Random"))
	virtual void bpf__Random__pf(/*out*/ float& bpp__rend__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="changestat"))
	virtual void bpf__changestat__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="sum"))
	virtual void bpf__sum__pf(/*out*/ float& bpp__NewParam__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
