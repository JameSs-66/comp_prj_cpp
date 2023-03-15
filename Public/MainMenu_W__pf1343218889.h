#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UVerticalBox;
class UButton;
class UScrollBox;
class USlider;
class AGameModeBase;
#include "MainMenu_W__pf1343218889.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/MainMenu/MainMenu_W.MainMenu_W_C,/Game/MainMenu/MainMenu_W.MainMenu_W_C", OverrideNativeName="MainMenu_W_C"))
class UMainMenu_W_C__pf1343218889 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BACK", Category="MainMenu_W", OverrideNativeName="BACK"))
	UImage* bpv__BACK__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="MainMenu_W", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Back to main", Category="MainMenu_W", OverrideNativeName="Backtomain"))
	UVerticalBox* bpv__Backtomain__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Black_BG", Category="MainMenu_W", OverrideNativeName="Black_BG"))
	UImage* bpv__Black_BG__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_1", Category="MainMenu_W", OverrideNativeName="Box_1"))
	UImage* bpv__Box_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_2", Category="MainMenu_W", OverrideNativeName="Box_2"))
	UImage* bpv__Box_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Back_Main menu", Category="MainMenu_W", OverrideNativeName="Button_Back_Mainmenu"))
	UButton* bpv__Button_Back_Mainmenu__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Effects", Category="MainMenu_W", OverrideNativeName="Effects"))
	UImage* bpv__Effects__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit", Category="MainMenu_W", OverrideNativeName="Exit"))
	UImage* bpv__Exit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_BT", Category="MainMenu_W", OverrideNativeName="Exit_BT"))
	UButton* bpv__Exit_BT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button", Category="MainMenu_W", OverrideNativeName="Exit_Button"))
	UVerticalBox* bpv__Exit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit to Main", Category="MainMenu_W", OverrideNativeName="ExittoMain"))
	UButton* bpv__ExittoMain__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="go back", Category="MainMenu_W", OverrideNativeName="goback"))
	UButton* bpv__goback__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_2106", Category="MainMenu_W", OverrideNativeName="Image_2106"))
	UImage* bpv__Image_2106__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Line_BG", Category="MainMenu_W", OverrideNativeName="Line_BG"))
	UVerticalBox* bpv__Line_BG__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MainMenuVB", Category="MainMenu_W", OverrideNativeName="MainMenuVB"))
	UVerticalBox* bpv__MainMenuVB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MEME", Category="MainMenu_W", OverrideNativeName="MEME"))
	UImage* bpv__MEME__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MEME_ver", Category="MainMenu_W", OverrideNativeName="MEME_ver"))
	UVerticalBox* bpv__MEME_ver__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play", Category="MainMenu_W", OverrideNativeName="Play"))
	UImage* bpv__Play__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play_BT", Category="MainMenu_W", OverrideNativeName="Play_BT"))
	UButton* bpv__Play_BT__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play_Button", Category="MainMenu_W", OverrideNativeName="Play_Button"))
	UVerticalBox* bpv__Play_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="S", Category="MainMenu_W", OverrideNativeName="S"))
	UButton* bpv__S__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_Effects", Category="MainMenu_W", OverrideNativeName="ScrollBox_Effects"))
	UScrollBox* bpv__ScrollBox_Effects__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_Song", Category="MainMenu_W", OverrideNativeName="ScrollBox_Song"))
	UScrollBox* bpv__ScrollBox_Song__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Setting", Category="MainMenu_W", OverrideNativeName="Setting"))
	UImage* bpv__Setting__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Setting_BG", Category="MainMenu_W", OverrideNativeName="Setting_BG"))
	UVerticalBox* bpv__Setting_BG__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Setting_BG_1", Category="MainMenu_W", OverrideNativeName="Setting_BG_1"))
	UVerticalBox* bpv__Setting_BG_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Setting_Bt", Category="MainMenu_W", OverrideNativeName="Setting_Bt"))
	UButton* bpv__Setting_Bt__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Setting_Button", Category="MainMenu_W", OverrideNativeName="Setting_Button"))
	UVerticalBox* bpv__Setting_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Settings Menu", Category="MainMenu_W", OverrideNativeName="SettingsMenu"))
	UVerticalBox* bpv__SettingsMenu__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_236", Category="MainMenu_W", OverrideNativeName="Slider_236"))
	USlider* bpv__Slider_236__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_423", Category="MainMenu_W", OverrideNativeName="Slider_423"))
	USlider* bpv__Slider_423__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Song", Category="MainMenu_W", OverrideNativeName="Song"))
	UImage* bpv__Song__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sound", Category="MainMenu_W", OverrideNativeName="Sound"))
	UImage* bpv__Sound__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SS", Category="MainMenu_W", OverrideNativeName="SS"))
	UVerticalBox* bpv__SS__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sun", Category="MainMenu_W", OverrideNativeName="Sun"))
	UImage* bpv__Sun__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sun move", Category="MainMenu_W", OverrideNativeName="Sunmove"))
	UVerticalBox* bpv__Sunmove__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="White_BG", Category="MainMenu_W", OverrideNativeName="White_BG"))
	UImage* bpv__White_BG__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Game Mode Base", Category="Default", MultiLine="true", OverrideNativeName="MainGameModeBase"))
	AGameModeBase* bpv__MainGameModeBase__pf;
	UMainMenu_W_C__pf1343218889(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_W__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_goback_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_goback_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_S_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_S_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_ExittoMain_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_ExittoMain_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_Button_Back_Mainmenu_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_Button_Back_Mainmenu_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_Setting_Bt_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_Setting_Bt_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mainwidget_Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Mainwidget_Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
