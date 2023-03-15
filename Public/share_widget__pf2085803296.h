#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "share_widget__pf2085803296.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/playstock/share_widget.share_widget_C", OverrideNativeName="share_widget_C"))
class Ushare_widget_C__pf2085803296 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Buy_button", Category="share_widget", OverrideNativeName="Buy_button"))
	UButton* bpv__Buy_button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_29", Category="share_widget", OverrideNativeName="Image_29"))
	UImage* bpv__Image_29__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sell_button", Category="share_widget", OverrideNativeName="Sell_button"))
	UButton* bpv__Sell_button__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Up", Category="Default", MultiLine="true", OverrideNativeName="Up"))
	bool bpv__Up__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Exp", Category="Default", MultiLine="true", OverrideNativeName="exp"))
	float bpv__exp__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Money", Category="Default", MultiLine="true", OverrideNativeName="money"))
	float bpv__money__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Energy", Category="Default", MultiLine="true", OverrideNativeName="energy"))
	float bpv__energy__pf;
	Ushare_widget_C__pf2085803296(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_share_widget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_share_widget__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__share_widget_Sell_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__share_widget_Sell_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__share_widget_Buy_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__share_widget_Buy_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
