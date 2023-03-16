#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
class UImage;
class UVerticalBox;
class UButton;
class UScrollBox;
class USlider;
class AGameModeBase;
#include "MainMenu.generated.h"

class UMainMenu : public UUserWidget {
public:
  GENERATED_BODY()
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "BACK", Category = "MainMenu_W",
                    OverrideNativeName = "BACK"))
  UImage *BACK;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Background", Category = "MainMenu_W",
                    OverrideNativeName = "Background"))
  UImage *Background;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Back to main", Category = "MainMenu_W",
                    OverrideNativeName = "Backtomain"))
  UVerticalBox *Backtomain;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Black_BG", Category = "MainMenu_W",
                    OverrideNativeName = "Black_BG"))
  UImage *Black_BG;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Box_1", Category = "MainMenu_W",
                    OverrideNativeName = "Box_1"))
  UImage *Box_1;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Box_2", Category = "MainMenu_W",
                    OverrideNativeName = "Box_2"))
  UImage *Box_2;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Button_Back_Main menu",
                    Category = "MainMenu_W",
                    OverrideNativeName = "Button_Back_Mainmenu"))
  UButton *Button_Back_Mainmenu;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Effects", Category = "MainMenu_W",
                    OverrideNativeName = "Effects"))
  UImage *Effects;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Exit", Category = "MainMenu_W",
                    OverrideNativeName = "Exit"))
  UImage *Exit;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Exit_BT", Category = "MainMenu_W",
                    OverrideNativeName = "Exit_BT"))
  UButton *Exit_BT;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Exit_Button", Category = "MainMenu_W",
                    OverrideNativeName = "Exit_Button"))
  UVerticalBox *Exit_Button;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Exit to Main", Category = "MainMenu_W",
                    OverrideNativeName = "ExittoMain"))
  UButton *ExittoMain;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "go back", Category = "MainMenu_W",
                    OverrideNativeName = "goback"))
  UButton *goback;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Image_2106", Category = "MainMenu_W",
                    OverrideNativeName = "Image_2106"))
  UImage *Image_2106;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Line_BG", Category = "MainMenu_W",
                    OverrideNativeName = "Line_BG"))
  UVerticalBox *Line_BG;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "MainMenuVB", Category = "MainMenu_W",
                    OverrideNativeName = "MainMenuVB"))
  UVerticalBox *MainMenuVB;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "MEME", Category = "MainMenu_W",
                    OverrideNativeName = "MEME"))
  UImage *MEME;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "MEME_ver", Category = "MainMenu_W",
                    OverrideNativeName = "MEME_ver"))
  UVerticalBox *MEME_ver;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Play", Category = "MainMenu_W",
                    OverrideNativeName = "Play"))
  UImage *Play;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Play_BT", Category = "MainMenu_W",
                    OverrideNativeName = "Play_BT"))
  UButton *Play_BT;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Play_Button", Category = "MainMenu_W",
                    OverrideNativeName = "Play_Button"))
  UVerticalBox *Play_Button;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "S", Category = "MainMenu_W",
                    OverrideNativeName = "S"))
  UButton *S;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "ScrollBox_Effects", Category = "MainMenu_W",
                    OverrideNativeName = "ScrollBox_Effects"))
  UScrollBox *ScrollBox_Effects;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "ScrollBox_Song", Category = "MainMenu_W",
                    OverrideNativeName = "ScrollBox_Song"))
  UScrollBox *ScrollBox_Song;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Setting", Category = "MainMenu_W",
                    OverrideNativeName = "Setting"))
  UImage *Setting;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Setting_BG", Category = "MainMenu_W",
                    OverrideNativeName = "Setting_BG"))
  UVerticalBox *Setting_BG;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Setting_BG_1", Category = "MainMenu_W",
                    OverrideNativeName = "Setting_BG_1"))
  UVerticalBox *Setting_BG_1;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Setting_Bt", Category = "MainMenu_W",
                    OverrideNativeName = "Setting_Bt"))
  UButton *Setting_Bt;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Setting_Button", Category = "MainMenu_W",
                    OverrideNativeName = "Setting_Button"))
  UVerticalBox *Setting_Button;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Settings Menu", Category = "MainMenu_W",
                    OverrideNativeName = "SettingsMenu"))
  UVerticalBox *SettingsMenu;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Slider_236", Category = "MainMenu_W",
                    OverrideNativeName = "Slider_236"))
  USlider *Slider_236;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Slider_423", Category = "MainMenu_W",
                    OverrideNativeName = "Slider_423"))
  USlider *Slider_423;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Song", Category = "MainMenu_W",
                    OverrideNativeName = "Song"))
  UImage *Song;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Sound", Category = "MainMenu_W",
                    OverrideNativeName = "Sound"))
  UImage *Sound;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "SS", Category = "MainMenu_W",
                    OverrideNativeName = "SS"))
  UVerticalBox *SS;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Sun", Category = "MainMenu_W",
                    OverrideNativeName = "Sun"))
  UImage *Sun;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "Sun move", Category = "MainMenu_W",
                    OverrideNativeName = "Sunmove"))
  UVerticalBox *Sunmove;
  UPROPERTY(BlueprintReadWrite, Export,
            meta = (DisplayName = "White_BG", Category = "MainMenu_W",
                    OverrideNativeName = "White_BG"))
  UImage *White_BG;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Main Game Mode Base", Category = "Default",
                    MultiLine = "true",
                    OverrideNativeName = "MainGameModeBase"))
  AGameModeBase *MainGameModeBase;
  UMainMenu(
      const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void __CustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void
  __StaticDependenciesAssets(TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void __StaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  void ExecuteUbergraph_MainMenu_W_0(int32 EntryPoint);
  void ExecuteUbergraph_MainMenu_W_1(int32 EntryPoint);
  void ExecuteUbergraph_MainMenu_W_2(int32 EntryPoint);
  void ExecuteUbergraph_MainMenu_W_3(int32 EntryPoint);
  void ExecuteUbergraph_MainMenu_W_4(int32 EntryPoint);
  void ExecuteUbergraph_MainMenu_W_5(int32 EntryPoint);
  UFUNCTION(
      meta = (OverrideNativeName =
                  "goback_Clicked"))
  virtual void goback_Clicked();
  UFUNCTION(meta = (OverrideNativeName =
                        "S_Clicked"))
  virtual void S_Clicked();
  UFUNCTION(
      meta =
          (OverrideNativeName =
               "ExittoMain_Clicked"))
  virtual void ExittoMain_Clicked();
  UFUNCTION(meta = (OverrideNativeName =
                        "Back_Comp"
                        "OnButtonClickedEvent"))
  virtual void
  Back_Mainmenu_Clicked();
  UFUNCTION(
      meta =
          (OverrideNativeName =
               "Setting_Clicked"))
  virtual void Setting_Clicked();
  UFUNCTION(
      meta = (OverrideNativeName =
                  "Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent"))
  virtual void Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent();
  UFUNCTION(
      meta = (OverrideNativeName =
                  "Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent"))
  virtual void Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent();

public:
  virtual void GetSlotNames(TArray<FName> &SlotNames) const override;
  virtual void PreSave(const class ITargetPlatform *TargetPlatform) override;
  virtual void InitializeNativeClassData() override;
};
