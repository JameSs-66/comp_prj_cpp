#include "StatsUi.h"
#include "StatsTrackerLib.h"

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UStatsUI::UStatsUI(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer) {

  Background = nullptr;
  ButtonUnpause = nullptr;
  CharacterProfile = nullptr;
  CoinImage = nullptr;
  Day = nullptr;
  EnergyBar = nullptr;
  HealthBar = nullptr;
  KnowledgeBar = nullptr;
  MoneyValue = nullptr;
  Pause = nullptr;
  ProfileFrame = nullptr;
  Speed = nullptr;
  SpeedText = nullptr;
  Time = nullptr;
  DisplayedHealth = 0.0f;
  DisplayedEnergy = 0.0f;
  DisplayedKnowledge = 0.0f;
  DisplayedTime = FString(TEXT(""));
  DisplayedDays = FString(TEXT(""));
  Minute = 0;
  CurrentWD = 0.0f;
  GetSleepEnergy = 0.0f;
  GetSleepHealth = 0.0f;
  DisplayedMoney = 0;
  Hour = 7;
  bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsUI::PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) {
  Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI::CustomDynamicClassInitialization(
    UDynamicClass *InDynamicClass) {
  ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
  ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
  ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
  ensure(0 == InDynamicClass->ComponentTemplates.Num());
  ensure(0 == InDynamicClass->Timelines.Num());
  ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
  ensure(nullptr == InDynamicClass->AnimClassImplementation);

  InDynamicClass->AssembleReferenceTokenStream();
  InDynamicClass->ReferencedConvertedFields.Add(
      UStatsTrackerLib_BP_C2132744816::StaticClass());
  FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(
      InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
  auto StatsComp = NewObject<UComponentDelegateBinding>(
      InDynamicClass, UComponentDelegateBinding::StaticClass(),
      TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x0f00);
  InDynamicClass->DynamicBindingObjects.Add(StatsComp);
  auto WidgetT =
      NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(),
                             TEXT("WidgetTree"), (EObjectFlags)0x0f08);
  InDynamicClass->MiscConvertedSubobjects.Add(WidgetT);
  StatsComp->ComponentDelegateBindings =
      TArray<FBlueprintComponentDelegateBinding>();
  StatsComp->ComponentDelegateBindings.AddUninitialized(2);
  FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(
      StatsComp->ComponentDelegateBindings.GetData(), 2);
  auto &ButtonUnpause = StatsComp->ComponentDelegateBindings[0];
  ButtonUnpause.ComponentPropertyName = FName(TEXT("ButtonUnpause"));
  ButtonUnpause.DelegatePropertyName = FName(TEXT("OnClicked"));
  ButtonUnpause.FunctionNameToBind =
      FName(TEXT("BndEvtStatsUI_Button_1_K2Node_ComponentBoundEvent_1_"
                 "OnButtonClickedEventDelegateSignature"));
  auto &ButtonPause = StatsComp->ComponentDelegateBindings[1];
  ButtonPause.ComponentPropertyName = FName(TEXT("Pause"));
  ButtonPause.DelegatePropertyName = FName(TEXT("OnClicked"));
  ButtonPause.FunctionNameToBind =
      FName(TEXT("BndEvtStatsUI_Pause_K2Node_ComponentBoundEvent_0_"
                 "OnButtonClickedEventDelegateSignature"));
  auto CanvasPanel_0 = NewObject<UCanvasPanel>(WidgetT, TEXT("CanvasPanel_0"),
                                               (EObjectFlags)0x00280008);
  auto &Day_Value = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (CanvasPanel_0), UPanelWidget::PPOSlots())));
  Day_Value = TArray<UPanelSlot *>();
  Day_Value.Reserve(5);
  auto CP_0_Padding = NewObject<UCanvasPanelSlot>(
      CanvasPanel_0, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
  CP_0_Padding->LayoutData.Offsets.Left = -4.0f;
  CP_0_Padding->LayoutData.Offsets.Top = -4.0f;
  CP_0_Padding->LayoutData.Offsets.Right = 650.0f;
  CP_0_Padding->LayoutData.Offsets.Bottom = 350.0f;
  CP_0_Padding->Parent = CanvasPanel_0;

  auto CanvasPanel_1 = NewObject<UCanvasPanel>(WidgetT, TEXT("CanvasPanel_1"),
                                               (EObjectFlags)0x00280008);
  auto &SpeedValue = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (CanvasPanel_1), UPanelWidget::PPOSlots())));
  SpeedValue = TArray<UPanelSlot *>();
  SpeedValue.Reserve(8);
  auto CP_1_Padding = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
  CP_1_Padding->LayoutData.Offsets.Left = 32.0f;
  CP_1_Padding->LayoutData.Offsets.Top = 32.0f;
  CP_1_Padding->LayoutData.Offsets.Right = 250.0f;
  CP_1_Padding->LayoutData.Offsets.Bottom = 250.0f;
  CP_1_Padding->Parent = CanvasPanel_1;
  auto Overlay = NewObject<UOverlay>(WidgetT, TEXT("Overlay_116"),
                                     (EObjectFlags)0x00280008);
  auto &O_0_Comp = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (Overlay), UPanelWidget::PPOSlots())));
  O_0_Comp = TArray<UPanelSlot *>();
  O_0_Comp.Reserve(3);
  auto O_0_Par = NewObject<UOverlaySlot>(Overlay, TEXT("OverlaySlot_5"),
                                         (EObjectFlags)0x00280008);
  O_0_Par->Parent = Overlay;
  auto BG_Color =
      NewObject<UImage>(WidgetT, TEXT("Background"), (EObjectFlags)0x00280008);
  BG_Color->Brush.ImageSize = FVector2D(256.0f, 256.0f);
  auto &BG_Brush = (*(AccessPrivateProperty<UObject *>(
      &(BG_Color->Brush), FSlateBrush::PPOResourceObject())));
  BG_Brush = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  BG_Color->ColorAndOpacity = FLinearColor(1.0f, 0.390625, 0.390625, 1.0f);
  BG_Color->Slot = O_0_Par;
  O_0_Par->Content = BG_Color;
  O_0_Comp.Add(O_0_Par);
  auto O_1_Par = NewObject<UOverlaySlot>(Overlay, TEXT("OverlaySlot_3"),
                                         (EObjectFlags)0x00280008);
  O_1_Par->Parent = Overlay;
  auto Char_Image = NewObject<UImage>(WidgetT, TEXT("CharacterProfile"),
                                    (EObjectFlags)0x00280008);
  Char_Image->Brush.ImageSize = FVector2D(256.0f, 256.0f);
  auto &Char_Tint = (*(AccessPrivateProperty<UObject *>(
      &(Char_Image->Brush), FSlateBrush::PPOResourceObject())));
  Char_Tint = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Char_Image->Slot = O_1_Par;
  Char_Image->RenderTransformPivot = FVector2D(0.0f, 0.0f);
  O_1_Par->Content = Char_Image;
  O_0_Comp.Add(O_1_Par);
  auto O_2_Par = NewObject<UOverlaySlot>(Overlay, TEXT("OverlaySlot_2"),
                                          (EObjectFlags)0x00280008);
  O_2_Par->Parent = Overlay;
  auto Profile_Frame = NewObject<UImage>(WidgetT, TEXT("ProfileFrame"),
                                    (EObjectFlags)0x00280008);
  Profile_Frame->Brush.ImageSize = FVector2D(256.0f, 256.0f);
  auto &ButtonUnpause0 = (*(AccessPrivateProperty<UObject *>(
      &(Profile_Frame->Brush), FSlateBrush::PPOResourceObject())));
  ButtonUnpause0 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[2],
      ECastCheckedType::NullAllowed);
  Profile_Frame->Slot = O_2_Par;
  Profile_Frame->RenderTransformPivot = FVector2D(0.0f, 0.0f);
  O_2_Par->Content = Profile_Frame;
  O_0_Comp.Add(O_2_Par);
  Overlay->Slot = CP_1_Padding;
  CP_1_Padding->Content = Overlay;
  SpeedValue.Add(CP_1_Padding);
  auto CP_1_Padding = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
  CP_1_Padding->LayoutData.Offsets.Left = 312.0f;
  CP_1_Padding->LayoutData.Offsets.Top = 32.0f;
  CP_1_Padding->LayoutData.Offsets.Right = 300.0f;
  CP_1_Padding->Parent = CanvasPanel_1;
  auto HealthBar = NewObject<UProgressBar>(WidgetT, TEXT("HealthBar"),
                                                (EObjectFlags)0x00280008);
  HealthBar->WidgetStyle.BackgroundImage.ImageSize =
      FVector2D(561.0f, 105.0f);
  HealthBar->WidgetStyle.BackgroundImage.Margin.Left = 0.0f;
  HealthBar->WidgetStyle.BackgroundImage.Margin.Top = 0.0f;
  HealthBar->WidgetStyle.BackgroundImage.Margin.Right = 0.0f;
  HealthBar->WidgetStyle.BackgroundImage.Margin.Bottom = 0.0f;
  auto &BackgrondHBar = (*(AccessPrivateProperty<UObject *>(
      &(HealthBar->WidgetStyle.BackgroundImage),
      FSlateBrush::PPOResourceObject())));
  BackgrondHBar = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[3],
      ECastCheckedType::NullAllowed);
  HealthBar->WidgetStyle.BackgroundImage.DrawAs =
      ESlateBrushDrawType::Type::Image;
  HealthBar->WidgetStyle.FillImage.ImageSize = FVector2D(561.0f, 105.0f);
  auto &HBar_Tint = (*(AccessPrivateProperty<FLinearColor>(
      &(HealthBar->WidgetStyle.FillImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  HBar_Tint = FLinearColor(1.0f, 0.1f, 0.1f, 1.0f);
  auto &HBar_FilImg = (*(
      AccessPrivateProperty<UObject *>(&(HealthBar->WidgetStyle.FillImage),
                                       FSlateBrush::PPOResourceObject())));
  HBar_FilImg = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[4],
      ECastCheckedType::NullAllowed);
  auto &HBar_Tint = (*(AccessPrivateProperty<FLinearColor>(
      &(HealthBar->WidgetStyle.MarqueeImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  HBar_Tint = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  HealthBar->WidgetStyle.MarqueeImage.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  HealthBar->Percent = 0.4f;
  HealthBar->Slot = CP_1_Padding;
  CP_1_Padding->Content = HealthBar;
  SpeedValue.Add(CP_1_Padding);
  auto CP_3_Padding = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
  CP_3_Padding->LayoutData.Offsets.Left = 312.0f;
  CP_3_Padding->LayoutData.Offsets.Top = 128.0f;
  CP_3_Padding->LayoutData.Offsets.Right = 300.0f;
  CP_3_Padding->Parent = CanvasPanel_1;
  auto KnowlegdeBar = NewObject<UProgressBar>(WidgetT, TEXT("KnowledgeBar"),
                                                (EObjectFlags)0x00280008);
  KnowlegdeBar->WidgetStyle.BackgroundImage.ImageSize =
      FVector2D(561.0f, 105.0f);
  KnowlegdeBar->WidgetStyle.BackgroundImage.Margin.Left = 0.0f;
  KnowlegdeBar->WidgetStyle.BackgroundImage.Margin.Top = 0.0f;
  KnowlegdeBar->WidgetStyle.BackgroundImage.Margin.Right = 0.0f;
  KnowlegdeBar->WidgetStyle.BackgroundImage.Margin.Bottom = 0.0f;
  auto &ButtonUnpause9 = (*(AccessPrivateProperty<UObject *>(
      &(KnowlegdeBar->WidgetStyle.BackgroundImage),
      FSlateBrush::PPOResourceObject())));
  ButtonUnpause9 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[3],
      ECastCheckedType::NullAllowed);
  KnowlegdeBar->WidgetStyle.FillImage.ImageSize = FVector2D(561.0f, 105.0f);
  KnowlegdeBar->WidgetStyle.FillImage.Margin.Left = 0.0f;
  KnowlegdeBar->WidgetStyle.FillImage.Margin.Top = 0.0f;
  KnowlegdeBar->WidgetStyle.FillImage.Margin.Right = 0.0f;
  KnowlegdeBar->WidgetStyle.FillImage.Margin.Bottom = 0.0f;
  auto &ButtonPause0 = (*(AccessPrivateProperty<FLinearColor>(
      &(KnowlegdeBar->WidgetStyle.FillImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  ButtonPause0 = FLinearColor(0.423268, 0.564712, 0.623961, 1.0f);
  auto &ButtonPause1 = (*(
      AccessPrivateProperty<UObject *>(&(KnowlegdeBar->WidgetStyle.FillImage),
                                       FSlateBrush::PPOResourceObject())));
  ButtonPause1 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[4],
      ECastCheckedType::NullAllowed);
  auto &ButtonPause2 = (*(AccessPrivateProperty<FLinearColor>(
      &(KnowlegdeBar->WidgetStyle.MarqueeImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  ButtonPause2 = FLinearColor(0.989583, 0.979167, 1.0f, 1.0f);
  KnowlegdeBar->WidgetStyle.MarqueeImage.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  KnowlegdeBar->Percent = 0.5ff;
  KnowlegdeBar->Slot = CP_3_Padding;
  CP_3_Padding->Content = KnowlegdeBar;
  SpeedValue.Add(CP_3_Padding);
  auto EnergyBar = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
  EnergyBar->LayoutData.Offsets.Left = 312.0f;
  EnergyBar->LayoutData.Offsets.Top = 80.0f;
  EnergyBar->LayoutData.Offsets.Right = 300.0f;
  EnergyBar->Parent = CanvasPanel_1;
  auto EBar_BG = NewObject<UProgressBar>(WidgetT, TEXT("EnergyBar"),
                                              (EObjectFlags)0x00280008);
  EBar_BG->WidgetStyle.BackgroundImage.ImageSize =
      FVector2D(561.0f, 105.0f);
  EBar_BG->WidgetStyle.BackgroundImage.Margin.Left = 0.0f;
  EBar_BG->WidgetStyle.BackgroundImage.Margin.Top = 0.0f;
  EBar_BG->WidgetStyle.BackgroundImage.Margin.Right = 0.0f;
  EBar_BG->WidgetStyle.BackgroundImage.Margin.Bottom = 0.0f;
  auto &ButtonPause5 = (*(AccessPrivateProperty<UObject *>(
      &(EBar_BG->WidgetStyle.BackgroundImage),
      FSlateBrush::PPOResourceObject())));
  ButtonPause5 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[3],
      ECastCheckedType::NullAllowed);
  EBar_BG->WidgetStyle.BackgroundImage.DrawAs =
      ESlateBrushDrawType::Type::Image;
  EBar_BG->WidgetStyle.FillImage.ImageSize = FVector2D(561.0f, 105.0f);
  auto &EBar_Fill = (*(AccessPrivateProperty<FLinearColor>(
      &(EBar_BG->WidgetStyle.FillImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  EBar_Fill = FLinearColor(1.0f, 1.0f, 0.3f, 1.0f);
  auto &EBar_FillImg = (*(
      AccessPrivateProperty<UObject *>(&(EBar_BG->WidgetStyle.FillImage),
                                       FSlateBrush::PPOResourceObject())));
  EBar_FillImg = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[4],
      ECastCheckedType::NullAllowed);
  auto &EBar_FillTint = (*(AccessPrivateProperty<FLinearColor>(
      &(EBar_BG->WidgetStyle.MarqueeImage.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  EBar_FillTint = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  EBar_BG->WidgetStyle.MarqueeImage.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  EBar_BG->Percent = 0.5ff;
  EBar_BG->Slot = EnergyBar;
  EnergyBar->Content = EBar_BG;
  SpeedValue.Add(EnergyBar);
  auto Money = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_34"), (EObjectFlags)0x00280008);
  Money->LayoutData.Offsets.Left = 336.0f;
  Money->LayoutData.Offsets.Top = 180.0f;
  Money->LayoutData.Offsets.Right = 50.0f;
  Money->LayoutData.Offsets.Bottom = 50.0f;
  Money->Parent = CanvasPanel_1;
  auto Money_Coin =
      NewObject<UImage>(WidgetT, TEXT("CoinImage"), (EObjectFlags)0x00280008);
  Money_Coin->Brush.ImageSize = FVector2D(167.0f, 166.0f);
  auto &Money_Img = (*(AccessPrivateProperty<UObject *>(
      &(Money_Coin->Brush), FSlateBrush::PPOResourceObject())));
  Money_Img = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[5],
      ECastCheckedType::NullAllowed);
  Money_Coin->Slot = Money;
  Money_Coin->RenderTransformPivot = FVector2D(0.1f, 0.1f);
  Money->Content = Money_Coin;
  SpeedValue.Add(Money);
  auto Money_Text = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_36"), (EObjectFlags)0x00280008);
  Money_Text->LayoutData.Offsets.Left = 408.0f;
  Money_Text->LayoutData.Offsets.Top = 184.0f;
  Money_Text->LayoutData.Offsets.Right = 150.0f;
  Money_Text->Parent = CanvasPanel_1;
  auto Money_Apper = NewObject<UTextBlock>(WidgetT, TEXT("MoneyValue"),
                                              (EObjectFlags)0x00280008);
  Money_Apper->Text = FTextStringHelper::CreateFromBuffer(
      TEXT("\"0\")"));
  Money_Apper->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Money_Apper->Font.OutlineSettings.OutlineSize = 1;
  Money_Apper->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  Money_Apper->Font.TypefaceFontName = FName(TEXT("Default"));
  auto &CanvasPanel_04 = (*(AccessPrivateProperty<FLinearColor>(
      &(Money_Apper->StrikeBrush.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  CanvasPanel_04 = FLinearColor(0.010960, 0.016807, 0.023153, 1.0f);
  Money_Apper->Slot = Money_Text;
  Money_Apper->RenderTransformPivot = FVector2D(0.0f, 0.0f);
  Money_Apper->bIsVariable = true;
  Money_Text->Content = Money_Apper;
  SpeedValue.Add(Money_Text);
  auto Speed_Img = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_54"), (EObjectFlags)0x00280008);
  Speed_Img->LayoutData.Offsets.Left = 52.0f;
  Speed_Img->LayoutData.Offsets.Top = 288.0f;
  Speed_Img->LayoutData.Offsets.Right = 88.214287f;
  Speed_Img->LayoutData.Offsets.Bottom = 43.142857f;
  Speed_Img->Parent = CanvasPanel_1;
  auto Speed_Appear =
      NewObject<UImage>(WidgetT, TEXT("Speed"), (EObjectFlags)0x00280008);
  Speed_Appear->Brush.ImageSize = FVector2D(384.0f, 256.0f);
  auto &CanvasPanel_07 = (*(AccessPrivateProperty<UObject *>(
      &(Speed_Appear->Brush), FSlateBrush::PPOResourceObject())));
  CanvasPanel_07 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[7],
      ECastCheckedType::NullAllowed);
  Speed_Appear->ColorAndOpacity =
      FLinearColor(0.489583, 0.605302, 1.0f, 1.0f);
  Speed_Appear->Slot = Speed_Img;
  Speed_Appear->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
  Speed_Img->Content = Speed_Appear;
  SpeedValue.Add(Speed_Img);
  auto Speed_Text = NewObject<UCanvasPanelSlot>(
      CanvasPanel_1, TEXT("CanvasPanelSlot_55"), (EObjectFlags)0x00280008);
  Speed_Text->LayoutData.Offsets.Left = 128.0f;
  Speed_Text->LayoutData.Offsets.Top = 288.0f;
  Speed_Text->LayoutData.Offsets.Right = 151.0f;
  Speed_Text->LayoutData.Offsets.Bottom = 61.500000f;
  Speed_Text->Parent = CanvasPanel_1;
  auto Speed_Appear = NewObject<UTextBlock>(WidgetT, TEXT("SpeedText"),
                                              (EObjectFlags)0x00280008);
  Speed_Appear->Text = FTextStringHelper::CreateFromBuffer(
      TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", "
           "\"ACC97DE04934F4DE28A72FA399B0DC91\", \"Speed x2\")"));
  Speed_Appear->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Speed_Appear->Font.OutlineSettings.OutlineSize = 2;
  Speed_Appear->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  Speed_Appear->Font.TypefaceFontName = FName(TEXT("Default"));
  Speed_Appear->Font.LetterSpacing = 105;
  Speed_Appear->ShadowColorAndOpacity = FLinearColor(1.0f, 1.0f, 1.0f, 0.0f);
  Speed_Appear->Slot = Speed_Text;
  Speed_Appear->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
  Speed_Appear->bIsVariable = true;
  Speed_Text->Content = Speed_Appear;
  SpeedValue.Add(Speed_Text);
  CanvasPanel_1->Slot = CP_0_Padding;
  CP_0_Padding->Content = CanvasPanel_1;
  Day_Value.Add(CP_0_Padding);
  auto Time_Text = NewObject<UCanvasPanelSlot>(
      CanvasPanel_0, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
  Time_Text->LayoutData.Offsets.Top = -430.0f;
  Time_Text->LayoutData.Offsets.Right = 151.0f;
  Time_Text->LayoutData.Offsets.Bottom = 40.0f;
  Time_Text->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Time_Text->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Time_Text->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  Time_Text->Parent = CanvasPanel_0;
  auto Time_Appear =
      NewObject<UTextBlock>(WidgetT, TEXT("Time"), (EObjectFlags)0x00280008);
  Time_Appear->Text = FTextStringHelper::CreateFromBuffer(
      TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", "
           "\"13A9AAD14BCB1D3E167BAF9AB37C6BC0\", \"00 : 00\")"));
  Time_Appear->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Time_Appear->Font.OutlineSettings.OutlineSize = 1;
  Time_Appear->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  Time_Appear->Font.TypefaceFontName = FName(TEXT("Default"));
  auto &Time_Text_Ap = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Time_Appear), UTextLayoutWidget::PPOJustification())));
  Time_Text_Ap = ETextJustify::Type::Center;
  Time_Appear->Slot = Time_Text;
  Time_Text->Content = Time_Appear;
  Day_Value.Add(Time_Text);
  auto Day_Text = NewObject<UCanvasPanelSlot>(
      CanvasPanel_0, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
  Day_Text->LayoutData.Offsets.Top = -480.0f;
  Day_Text->LayoutData.Offsets.Right = 151.0f;
  Day_Text->LayoutData.Offsets.Bottom = 40.0f;
  Day_Text->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Day_Text->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Day_Text->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  Day_Text->Parent = CanvasPanel_0;
  auto Day_Appear =
      NewObject<UTextBlock>(WidgetT, TEXT("Day"), (EObjectFlags)0x00280008);
  Day_Appear->Text = FTextStringHelper::CreateFromBuffer(
      TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", "
           "\"577A751D4C5720D785C10B9AC13ABAD4\", \"Day : 00\")"));
  Day_Appear->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Day_Appear->Font.OutlineSettings.OutlineSize = 1;
  Day_Appear->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  Day_Appear->Font.TypefaceFontName = FName(TEXT("Default"));
  auto &Day_Value5 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Day_Appear), UTextLayoutWidget::PPOJustification())));
  Day_Value5 = ETextJustify::Type::Center;
  Day_Appear->Slot = Day_Text;
  Day_Appear->bIsVariable = true;
  Day_Text->Content = Day_Appear;
  Day_Value.Add(Day_Text);
  auto Pause_Bottton = NewObject<UCanvasPanelSlot>(
      CanvasPanel_0, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
  Pause_Bottton->LayoutData.Offsets.Left = 1832.0f;
  Pause_Bottton->LayoutData.Offsets.Top = 24.0f;
  Pause_Bottton->LayoutData.Offsets.Right = 67.666664f;
  Pause_Bottton->LayoutData.Offsets.Bottom = 58.333336f;
  Pause_Bottton->Parent = CanvasPanel_0;
  auto Pause_BotttonImg =
      NewObject<UButton>(WidgetT, TEXT("Pause"), (EObjectFlags)0x00280008);
  Pause_BotttonImg->WidgetStyle.Normal.ImageSize = FVector2D(128.0f, 128.0f);
  auto &Pause_BColor = (*(AccessPrivateProperty<FLinearColor>(
      &(Pause_BotttonImg->WidgetStyle.Normal.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  Pause_BColor = FLinearColor(0.010960, 0.016807, 0.023153, 1.0f);
  auto &Pause_BImg = (*(
      AccessPrivateProperty<UObject *>(&(Pause_BotttonImg->WidgetStyle.Normal),
                                       FSlateBrush::PPOResourceObject())));
  Pause_BImg = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[8],
      ECastCheckedType::NullAllowed);
  Pause_BotttonImg->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
  Pause_BotttonImg->WidgetStyle.Hovered.ImageSize = FVector2D(128.0f, 128.0f);
  auto &Pause_BHImg = (*(
      AccessPrivateProperty<UObject *>(&(Pause_BotttonImg->WidgetStyle.Hovered),
                                       FSlateBrush::PPOResourceObject())));
  Pause_BHImg = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[8],
      ECastCheckedType::NullAllowed);
  Pause_BotttonImg->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
  Pause_BotttonImg->WidgetStyle.Pressed.ImageSize = FVector2D(128.0f, 128.0f);
  auto &Pause_BImgTint = (*(AccessPrivateProperty<FLinearColor>(
      &(Pause_BotttonImg->WidgetStyle.Pressed.TintColor),
      FSlateColor::PPOSpecifiedColor())));
  Pause_BImgTint = FLinearColor(0.010960, 0.016807, 0.023153, 1.0f);
  auto &CP_2_Comp = (*(
      AccessPrivateProperty<UObject *>(&(Pause_BotttonImg->WidgetStyle.Pressed),
                                       FSlateBrush::PPOResourceObject())));
  CP_2_Comp = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[8],
      ECastCheckedType::NullAllowed);
  Pause_BotttonImg->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
  Pause_BotttonImg->WidgetStyle.Disabled.ImageSize = FVector2D(128.0f, 128.0f);
  auto &CP_0_Padding3 = (*(
      AccessPrivateProperty<UObject *>(&(Pause_BotttonImg->WidgetStyle.Disabled),
                                       FSlateBrush::PPOResourceObject())));
  CP_0_Padding3 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[8],
      ECastCheckedType::NullAllowed);
  Pause_BotttonImg->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
  Pause_BotttonImg->Slot = Pause_Bottton;
  Pause_Bottton->Content = Pause_BotttonImg;
  Day_Value.Add(Pause_Bottton);
  auto CP_4_Padding = NewObject<UCanvasPanelSlot>(
      CanvasPanel_0, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
  CP_4_Padding->LayoutData.Offsets.Left = -1500.0f;
  CP_4_Padding->LayoutData.Offsets.Top = -1000.0f;
  CP_4_Padding->LayoutData.Offsets.Right = 3000.0f;
  CP_4_Padding->LayoutData.Offsets.Bottom = 2000.0f;
  CP_4_Padding->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  CP_4_Padding->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  CP_4_Padding->Parent = CanvasPanel_0;
  auto CP_0_Padding5 = NewObject<UButton>(WidgetT, TEXT("ButtonUnpause"),
                                          (EObjectFlags)0x00280008);
  CP_0_Padding5->WidgetStyle.Normal.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  CP_0_Padding5->WidgetStyle.Hovered.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  CP_0_Padding5->WidgetStyle.Pressed.DrawAs =
      ESlateBrushDrawType::Type::NoDrawType;
  auto &CP_0_Padding6 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (CP_0_Padding5), UPanelWidget::PPOSlots())));
  CP_0_Padding6 = TArray<UPanelSlot *>();
  CP_0_Padding6.Reserve(1);
  auto CP_0_Padding7 = NewObject<UButtonSlot>(
      CP_0_Padding5, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
  CP_0_Padding7->Parent = CP_0_Padding5;
  auto CP_0_Padding8 = NewObject<UTextBlock>(WidgetT, TEXT("TextBlock_0"),
                                             (EObjectFlags)0x00280008);
  CP_0_Padding8->Text = FTextStringHelper::CreateFromBuffer(
      TEXT( \"Click any space to continue.\")"));
  CP_0_Padding8->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  CP_0_Padding8->Font.OutlineSettings.OutlineSize = 1;
  CP_0_Padding8->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  CP_0_Padding8->Font.TypefaceFontName = FName(TEXT("Default"));
  CP_0_Padding8->Font.Size = 40;
  CP_0_Padding8->Slot = CP_0_Padding7;
  CP_0_Padding8->RenderTransform.Translation = FVector2D(0.0f, 448.0f);
  CP_0_Padding7->Content = CP_0_Padding8;
  CP_0_Padding6.Add(CP_0_Padding7);
  CP_0_Padding5->Slot = CP_4_Padding;
  CP_4_Padding->Content = CP_0_Padding5;
  Day_Value.Add(CP_4_Padding);
  CanvasPanel_0->RenderTransformPivot = FVector2D(0.0f, 0.0f);
  WidgetT->RootWidget = CanvasPanel_0;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsUI::GetSlotNames(TArray<FName> &SlotNames) const {
  TArray<FName> CP_0_Padding9;
  SlotNames.Append(CP_0_Padding9);
}
void UStatsUI::InitializeNativeClassData() {
  TArray<UWidgetAnimation *> CanvasPanel_10;
  TArray<FDelegateRuntimeBinding> CanvasPanel_11;
  CanvasPanel_11.AddUninitialized(10);
  FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(
      CanvasPanel_11.GetData(), 10);
  auto &CanvasPanel_12 = CanvasPanel_11[0];
  CanvasPanel_12.ObjectName = FString(TEXT("MoneyValue"));
  CanvasPanel_12.PropertyName = FName(TEXT("Text"));
  CanvasPanel_12.FunctionName = FName(TEXT("GetMoneyValue"));
  auto &CanvasPanel_13 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CanvasPanel_12.SourcePath), FCachedPropertyPath::PPOSegments())));
  CanvasPanel_13 = TArray<FPropertyPathSegment>();
  CanvasPanel_13.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CanvasPanel_13.GetData(), 1);
  auto &CanvasPanel_14 = CanvasPanel_13[0];
  CanvasPanel_14.Name = FName(TEXT("GetMoneyValue"));
  CanvasPanel_12.Kind = EBindingKind::Function;
  auto &CanvasPanel_15 = CanvasPanel_11[1];
  CanvasPanel_15.ObjectName = FString(TEXT("CharacterProfile"));
  CanvasPanel_15.PropertyName = FName(TEXT("Brush"));
  CanvasPanel_15.FunctionName = FName(TEXT("GetProfileFrame"));
  auto &CanvasPanel_16 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CanvasPanel_15.SourcePath), FCachedPropertyPath::PPOSegments())));
  CanvasPanel_16 = TArray<FPropertyPathSegment>();
  CanvasPanel_16.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CanvasPanel_16.GetData(), 1);
  auto &CanvasPanel_17 = CanvasPanel_16[0];
  CanvasPanel_17.Name = FName(TEXT("GetProfileFrame"));
  CanvasPanel_15.Kind = EBindingKind::Function;
  auto &CanvasPanel_18 = CanvasPanel_11[2];
  CanvasPanel_18.ObjectName = FString(TEXT("Background"));
  CanvasPanel_18.PropertyName = FName(TEXT("ColorAndOpacity"));
  CanvasPanel_18.FunctionName = FName(TEXT("GetProfileBackgroundColor"));
  auto &CanvasPanel_19 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CanvasPanel_18.SourcePath), FCachedPropertyPath::PPOSegments())));
  CanvasPanel_19 = TArray<FPropertyPathSegment>();
  CanvasPanel_19.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CanvasPanel_19.GetData(), 1);
  auto &SpeedValue0 = CanvasPanel_19[0];
  SpeedValue0.Name = FName(TEXT("GetProfileBackgroundColor"));
  CanvasPanel_18.Kind = EBindingKind::Function;
  auto &SpeedValue1 = CanvasPanel_11[3];
  SpeedValue1.ObjectName = FString(TEXT("HealthBar"));
  SpeedValue1.PropertyName = FName(TEXT("Percent"));
  auto &SpeedValue2 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(SpeedValue1.SourcePath), FCachedPropertyPath::PPOSegments())));
  SpeedValue2 = TArray<FPropertyPathSegment>();
  SpeedValue2.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(SpeedValue2.GetData(),
                                                         1);
  auto &SpeedValue3 = SpeedValue2[0];
  SpeedValue3.Name = FName(TEXT("DisplayedHealth"));
  auto &SpeedValue4 = CanvasPanel_11[4];
  SpeedValue4.ObjectName = FString(TEXT("EnergyBar"));
  SpeedValue4.PropertyName = FName(TEXT("Percent"));
  auto &SpeedValue5 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(SpeedValue4.SourcePath), FCachedPropertyPath::PPOSegments())));
  SpeedValue5 = TArray<FPropertyPathSegment>();
  SpeedValue5.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(SpeedValue5.GetData(),
                                                         1);
  auto &SpeedValue6 = SpeedValue5[0];
  SpeedValue6.Name = FName(TEXT("DisplayedEnergy"));
  auto &SpeedValue7 = CanvasPanel_11[5];
  SpeedValue7.ObjectName = FString(TEXT("KnowledgeBar"));
  SpeedValue7.PropertyName = FName(TEXT("Percent"));
  auto &SpeedValue8 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(SpeedValue7.SourcePath), FCachedPropertyPath::PPOSegments())));
  SpeedValue8 = TArray<FPropertyPathSegment>();
  SpeedValue8.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(SpeedValue8.GetData(),
                                                         1);
  auto &SpeedValue9 = SpeedValue8[0];
  SpeedValue9.Name = FName(TEXT("DisplayedKnowledge"));
  auto &CP_1_Padding0 = CanvasPanel_11[6];
  CP_1_Padding0.ObjectName = FString(TEXT("Speed"));
  CP_1_Padding0.PropertyName = FName(TEXT("Brush"));
  CP_1_Padding0.FunctionName = FName(TEXT("Get Speed Image"));
  auto &CP_1_Padding1 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CP_1_Padding0.SourcePath), FCachedPropertyPath::PPOSegments())));
  CP_1_Padding1 = TArray<FPropertyPathSegment>();
  CP_1_Padding1.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CP_1_Padding1.GetData(), 1);
  auto &CP_1_Padding2 = CP_1_Padding1[0];
  CP_1_Padding2.Name = FName(TEXT("Get Speed Image"));
  CP_1_Padding0.Kind = EBindingKind::Function;
  auto &CP_1_Padding3 = CanvasPanel_11[7];
  CP_1_Padding3.ObjectName = FString(TEXT("SpeedText"));
  CP_1_Padding3.PropertyName = FName(TEXT("Text"));
  CP_1_Padding3.FunctionName = FName(TEXT("GetSpeedText"));
  auto &CP_1_Padding4 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CP_1_Padding3.SourcePath), FCachedPropertyPath::PPOSegments())));
  CP_1_Padding4 = TArray<FPropertyPathSegment>();
  CP_1_Padding4.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CP_1_Padding4.GetData(), 1);
  auto &CP_1_Padding5 = CP_1_Padding4[0];
  CP_1_Padding5.Name = FName(TEXT("GetSpeedText"));
  CP_1_Padding3.Kind = EBindingKind::Function;
  auto &CP_1_Padding6 = CanvasPanel_11[8];
  CP_1_Padding6.ObjectName = FString(TEXT("Time"));
  CP_1_Padding6.PropertyName = FName(TEXT("Text"));
  auto &CP_1_Padding7 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CP_1_Padding6.SourcePath), FCachedPropertyPath::PPOSegments())));
  CP_1_Padding7 = TArray<FPropertyPathSegment>();
  CP_1_Padding7.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(
      CP_1_Padding7.GetData(), 1);
  auto &CP_1_Padding8 = CP_1_Padding7[0];
  CP_1_Padding8.Name = FName(TEXT("DisplayedTime"));
  auto &CP_1_Padding9 = CanvasPanel_11[9];
  CP_1_Padding9.ObjectName = FString(TEXT("Day"));
  CP_1_Padding9.PropertyName = FName(TEXT("Text"));
  auto &Overlay0 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(CP_1_Padding9.SourcePath), FCachedPropertyPath::PPOSegments())));
  Overlay0 = TArray<FPropertyPathSegment>();
  Overlay0.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(Overlay0.GetData(), 1);
  auto &Overlay1 = Overlay0[0];
  Overlay1.Name = FName(TEXT("DisplayedDays"));
  UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(
      this, GetClass(),
      CastChecked<UWidgetTree>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())
              ->MiscConvertedSubobjects[0]),
      CanvasPanel_10, CanvasPanel_11);
}
void UStatsUI::PreSave(const class ITargetPlatform *TargetPlatform) {
  Super::PreSave(TargetPlatform);
  TArray<FName> LocalNamedSlots;
  GetSlotNames(LocalNamedSlots);
  RemoveObsoleteBindings(LocalNamedSlots);
}
void UStatsUI::ExecuteUbergraph_StatsUI_0(int32 EntryPoint) {
  float CallFunc_Lerp_ReturnValue{};
  float CallFunc_Lerp_ReturnValue_1{};
  float CallFunc_Lerp_ReturnValue_2{};
  float CallFunc_Multiply_FloatFloat_ReturnValue{};
  float CallFunc_Divide_FloatFloat_ReturnValue{};
  float CallFunc_Multiply_FloatFloat_ReturnValue_1{};
  int32 CallFunc_FFloor_ReturnValue{};
  float CallFunc_Divide_FloatFloat_ReturnValue_1{};
  int32 CallFunc_Percent_IntInt_ReturnValue{};
  int32 CallFunc_FFloor_ReturnValue_1{};
  int32 CallFunc_Percent_IntInt_ReturnValue_1{};
  int32 CallFunc_Percent_IntInt_ReturnValue_2{};
  bool CallFunc_EqualEqual_IntInt_ReturnValue{};
  int32 CallFunc_FTrunc_ReturnValue{};
  int32 CallFunc_Subtract_IntInt_ReturnValue{};
  FString CallFunc_Conv_IntToString_ReturnValue{};
  bool CallFunc_GreaterEqual_IntInt_ReturnValue{};
  FString CallFunc_Concat_StrStr_ReturnValue{};
  FString CallFunc_Conv_IntToString_ReturnValue_1{};
  FString CallFunc_Concat_StrStr_ReturnValue_1{};
  int32 CallFunc_FTrunc_ReturnValue_1{};
  bool CallFunc_Less_IntInt_ReturnValue{};
  FString CallFunc_Conv_IntToString_ReturnValue_2{};
  FString CallFunc_Concat_StrStr_ReturnValue_2{};
  FString CallFunc_Conv_IntToString_ReturnValue_3{};
  FString CallFunc_SelectString_ReturnValue{};
  FString CallFunc_Concat_StrStr_ReturnValue_3{};
  FString CallFunc_Concat_StrStr_ReturnValue_4{};
  TArray<int32, TInlineAllocator<8>> StateStack;

  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 4: {
      CurrentState = 5;
      break;
    }
    case 5: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("Health")), true, this, CallFunc_ReadStats_Value);
    }
    case 6: {
      CallFunc_Lerp_ReturnValue = UKismetMathLibrary::Lerp(
          DisplayedHealth, CallFunc_ReadStats_Value, 0.1f);
      DisplayedHealth = CallFunc_Lerp_ReturnValue;
    }
    case 7: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("Energy")), true, this, CallFunc_ReadStats_Value_1);
    }
    case 8: {
      CallFunc_Lerp_ReturnValue_1 = UKismetMathLibrary::Lerp(
          DisplayedEnergy, CallFunc_ReadStats_Value_1, 0.1f);
      DisplayedEnergy = CallFunc_Lerp_ReturnValue_1;
    }
    case 9: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("Knowledge")), true, this, CallFunc_ReadStats_Value_2);
    }
    case 10: {
      CallFunc_Lerp_ReturnValue_2 = UKismetMathLibrary::Lerp(
          DisplayedKnowledge, CallFunc_ReadStats_Value_2, 0.1f);
      DisplayedKnowledge = CallFunc_Lerp_ReturnValue_2;
    }
    case 11: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("Money")), false, this, CallFunc_ReadStats_Value_6);
    }
    case 12: {
      CallFunc_FTrunc_ReturnValue_1 =
          UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value_6);
      DisplayedMoney = CallFunc_FTrunc_ReturnValue_1;
    }
    case 13: {
      CallFunc_Less_IntInt_ReturnValue =
          UKismetMathLibrary::Less_IntInt(Minute, 10);
      CallFunc_Conv_IntToString_ReturnValue_2 =
          UKismetStringLibrary::Conv_IntToString(Minute);
      CallFunc_Concat_StrStr_ReturnValue_2 =
          UKismetStringLibrary::Concat_StrStr(
              FString(TEXT("0")), CallFunc_Conv_IntToString_ReturnValue_2);
      CallFunc_Conv_IntToString_ReturnValue_3 =
          UKismetStringLibrary::Conv_IntToString(Hour);
      CallFunc_SelectString_ReturnValue = UKismetMathLibrary::SelectString(
          CallFunc_Concat_StrStr_ReturnValue_2,
          CallFunc_Conv_IntToString_ReturnValue_2,
          CallFunc_Less_IntInt_ReturnValue);
      CallFunc_Concat_StrStr_ReturnValue_3 =
          UKismetStringLibrary::Concat_StrStr(
              CallFunc_Conv_IntToString_ReturnValue_3, FString(TEXT(" : ")));
      CallFunc_Concat_StrStr_ReturnValue_4 =
          UKismetStringLibrary::Concat_StrStr(
              CallFunc_Concat_StrStr_ReturnValue_3,
              CallFunc_SelectString_ReturnValue);
      DisplayedTime = CallFunc_Concat_StrStr_ReturnValue_4;
    }
    case 14: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("WORLDDATE")), false, this, CallFunc_ReadStats_Value_4);
    }
    case 15: {
      CallFunc_FTrunc_ReturnValue =
          UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value_4);
      CallFunc_GreaterEqual_IntInt_ReturnValue =
          UKismetMathLibrary::GreaterEqual_IntInt(CallFunc_FTrunc_ReturnValue,
                                                  23);
      if (!CallFunc_GreaterEqual_IntInt_ReturnValue) {
        CurrentState = 22;
        break;
      }
    }
    case 16: {
      CallFunc_FTrunc_ReturnValue =
          UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value_4);
      CallFunc_Subtract_IntInt_ReturnValue =
          UKismetMathLibrary::Subtract_IntInt(30, CallFunc_FTrunc_ReturnValue);
      CallFunc_Conv_IntToString_ReturnValue =
          UKismetStringLibrary::Conv_IntToString(
              CallFunc_Subtract_IntInt_ReturnValue);
      CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
          CallFunc_Conv_IntToString_ReturnValue,
          FString(TEXT(" Days left!!!")));
      DisplayedDays = CallFunc_Concat_StrStr_ReturnValue;
    }
    case 17: {
      UStatsTrackerLib_BP_C2132744816::ReadStats(
          FString(TEXT("WORLDTIME")), false, this, CallFunc_ReadStats_Value_3);
    }
    case 18: {
      CallFunc_Multiply_FloatFloat_ReturnValue_1 =
          UKismetMathLibrary::Multiply_FloatFloat(CallFunc_ReadStats_Value_3,
                                                  24.0f);
      CallFunc_Divide_FloatFloat_ReturnValue_1 =
          FCustomThunkTemplates::Divide_FloatFloat(
              CallFunc_Multiply_FloatFloat_ReturnValue_1, 509.0f);
      CallFunc_FFloor_ReturnValue_1 =
          UKismetMathLibrary::FFloor(CallFunc_Divide_FloatFloat_ReturnValue_1);
      CallFunc_Percent_IntInt_ReturnValue_2 =
          UKismetMathLibrary::Percent_IntInt(CallFunc_FFloor_ReturnValue_1, 24);
      Hour = CallFunc_Percent_IntInt_ReturnValue_2;
    }
    case 19: {
      CallFunc_Multiply_FloatFloat_ReturnValue =
          UKismetMathLibrary::Multiply_FloatFloat(CallFunc_ReadStats_Value_3,
                                                  1440.0f);
      CallFunc_Divide_FloatFloat_ReturnValue =
          FCustomThunkTemplates::Divide_FloatFloat(
              CallFunc_Multiply_FloatFloat_ReturnValue, 509.0f);
      CallFunc_FFloor_ReturnValue =
          UKismetMathLibrary::FFloor(CallFunc_Divide_FloatFloat_ReturnValue);
      CallFunc_Percent_IntInt_ReturnValue =
          UKismetMathLibrary::Percent_IntInt(CallFunc_FFloor_ReturnValue, 60);
      CallFunc_Percent_IntInt_ReturnValue_1 =
          UKismetMathLibrary::Percent_IntInt(
              CallFunc_Percent_IntInt_ReturnValue, 5);
      CallFunc_EqualEqual_IntInt_ReturnValue =
          UKismetMathLibrary::EqualEqual_IntInt(
              CallFunc_Percent_IntInt_ReturnValue_1, 0);
      if (!CallFunc_EqualEqual_IntInt_ReturnValue) {
        CurrentState = 23;
        break;
      }
    }
    case 20: {
      StateStack.Push(25);
    }
    case 21: {
      if (!Temp_bool_Has_Been_Initd_Variable) {
        CurrentState = 28;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 22: {
      CallFunc_FTrunc_ReturnValue =
          UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value_4);
      CallFunc_Conv_IntToString_ReturnValue_1 =
          UKismetStringLibrary::Conv_IntToString(CallFunc_FTrunc_ReturnValue);
      CallFunc_Concat_StrStr_ReturnValue_1 =
          UKismetStringLibrary::Concat_StrStr(
              FString(TEXT("Day : ")), CallFunc_Conv_IntToString_ReturnValue_1);
      DisplayedDays = CallFunc_Concat_StrStr_ReturnValue_1;
      CurrentState = 17;
      break;
    }
    case 23: {
      Temp_bool_IsClosed_Variable = false;
    }
    case 24: {
      Temp_bool_Has_Been_Initd_Variable = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 25: {
      if (!Temp_bool_IsClosed_Variable) {
        CurrentState = 26;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 26: {
      Temp_bool_IsClosed_Variable = true;
    }
    case 27: {
      CallFunc_Multiply_FloatFloat_ReturnValue =
          UKismetMathLibrary::Multiply_FloatFloat(CallFunc_ReadStats_Value_3,
                                                  1440.0f);
      CallFunc_Divide_FloatFloat_ReturnValue =
          FCustomThunkTemplates::Divide_FloatFloat(
              CallFunc_Multiply_FloatFloat_ReturnValue, 509.0f);
      CallFunc_FFloor_ReturnValue =
          UKismetMathLibrary::FFloor(CallFunc_Divide_FloatFloat_ReturnValue);
      CallFunc_Percent_IntInt_ReturnValue =
          UKismetMathLibrary::Percent_IntInt(CallFunc_FFloor_ReturnValue, 60);
      Minute = CallFunc_Percent_IntInt_ReturnValue;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 28: {
      Temp_bool_Has_Been_Initd_Variable = true;
    }
    case 29: {
      if (!false) {
        CurrentState =
            (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 30: {
      Temp_bool_IsClosed_Variable = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    default:
      check(false);
      break;
    }
  } while (CurrentState != -1);
}
void UStatsUI::ExecuteUbergraph_StatsUI_1(int32 EntryPoint) {
  check(EntryPoint == 31);
  UStatsTrackerLib_BP_C2132744816::SetStats(
      FString(TEXT("WORLDTIMEMUITIPLIER")), 0.0f, this);
  UStatsTrackerLib_BP_C2132744816::ReadStats(
      FString(TEXT("WORLDDILATION")), false, this, CallFunc_ReadStats_Value_5);
  CurrentWD = CallFunc_ReadStats_Value_5;
  UGameplayStatics::SetGlobalTimeDilation(this, 0.0f);
  if (::IsValid(ButtonUnpause)) {
    ButtonUnpause->SetVisibility(ESlateVisibility::Visible);
  }
  return;
}
void UStatsUI::ExecuteUbergraph_StatsUI_2(int32 EntryPoint) {
  check(EntryPoint == 39);
  UStatsTrackerLib_BP_C2132744816::SetStats(
      FString(TEXT("WORLDTIMEMUITIPLIER")), 1.0f, this);
  UGameplayStatics::SetGlobalTimeDilation(this, CurrentWD);
  if (::IsValid(ButtonUnpause)) {
    ButtonUnpause->SetVisibility(ESlateVisibility::Hidden);
  }
  return;
}
void UStatsUI::ExecuteUbergraph_StatsUI_3(int32 EntryPoint) {
  check(EntryPoint == 37);
  if (::IsValid(ButtonUnpause)) {
    ButtonUnpause->SetVisibility(ESlateVisibility::Hidden);
  }
  return;
}
void UStatsUI::
    BndEvtStatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEventDelegateSignature() {
  ExecuteUbergraph_StatsUI_2(39);
}
void UStatsUI::Construct() { ExecuteUbergraph_StatsUI_3(37); }
void UStatsUI::
    BndEvtStatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEventDelegateSignature() {
  ExecuteUbergraph_StatsUI_1(31);
}
void UStatsUI::Tick(FGeometry MyGeometry, float InDeltaTime) {
  K2Node_Event_MyGeometry = MyGeometry;
  K2Node_Event_InDeltaTime = InDeltaTime;
  ExecuteUbergraph_StatsUI_0(4);
}
FText UStatsUI::GetMoneyValue() {
  FText ReturnValue{};
  float CallFunc_Conv_IntToFloat_ReturnValue{};
  int32 CallFunc_FTrunc_ReturnValue{};
  FText CallFunc_Conv_IntToText_ReturnValue{};
  CallFunc_Conv_IntToFloat_ReturnValue =
      UKismetMathLibrary::Conv_IntToFloat(DisplayedMoney);
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_Conv_IntToFloat_ReturnValue);
  CallFunc_Conv_IntToText_ReturnValue = UKismetTextLibrary::Conv_IntToText(
      CallFunc_FTrunc_ReturnValue, false, true, 1, 324);
  ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
  return ReturnValue;
}
FSlateBrush UStatsUI::GetProfileFrame() {
  FSlateBrush ReturnValue{};
  TArray<FSlateBrush> ProfileSlate{};
  FSlateBrush K2Node_MakeStruct_SlateBrush{};
  FSlateBrush K2Node_MakeStruct_SlateBrush_1{};
  FSlateBrush K2Node_MakeStruct_SlateBrush_2{};
  TArray<FSlateBrush> K2Node_MakeArray_Array{};
  FSlateBrush K2Node_MakeStruct_SlateBrush_3{};
  TArray<FSlateBrush> K2Node_MakeArray_Array_1{};
  float CallFunc_ReadStats_Value{};
  int32 CallFunc_FTrunc_ReturnValue{};
  K2Node_MakeArray_Array.SetNum(4, true);
  const UScriptStruct *Overlay3 = FSlateBrush::StaticStruct();
  uint8 *Overlay4 = (uint8 *)FMemory_Alloca(Overlay3->GetStructureSize());
  Overlay3->InitializeStruct(Overlay4);
  FSlateBrush &Overlay2 = *reinterpret_cast<FSlateBrush *>(Overlay4);
  K2Node_MakeArray_Array[0] = Overlay2;
  const UScriptStruct *Overlay6 = FSlateBrush::StaticStruct();
  uint8 *Overlay7 = (uint8 *)FMemory_Alloca(Overlay6->GetStructureSize());
  Overlay6->InitializeStruct(Overlay7);
  FSlateBrush &Overlay5 = *reinterpret_cast<FSlateBrush *>(Overlay7);
  K2Node_MakeArray_Array[1] = Overlay5;
  const UScriptStruct *Overlay9 = FSlateBrush::StaticStruct();
  uint8 *O_0_Comp0 = (uint8 *)FMemory_Alloca(Overlay9->GetStructureSize());
  Overlay9->InitializeStruct(O_0_Comp0);
  FSlateBrush &Overlay8 = *reinterpret_cast<FSlateBrush *>(O_0_Comp0);
  K2Node_MakeArray_Array[2] = Overlay8;
  const UScriptStruct *O_0_Comp2 = FSlateBrush::StaticStruct();
  uint8 *O_0_Comp3 = (uint8 *)FMemory_Alloca(O_0_Comp2->GetStructureSize());
  O_0_Comp2->InitializeStruct(O_0_Comp3);
  FSlateBrush &O_0_Comp1 = *reinterpret_cast<FSlateBrush *>(O_0_Comp3);
  K2Node_MakeArray_Array[3] = O_0_Comp1;
  ProfileSlate = K2Node_MakeArray_Array;
  UStatsTrackerLib_BP_C2132744816::ReadStats(
      FString(TEXT("CompanyRank")), false, this, CallFunc_ReadStats_Value);
  K2Node_MakeStruct_SlateBrush.ImageSize = FVector2D(256.0f, 256.0f);
  const UScriptStruct *O_0_Comp5 = FMargin::StaticStruct();
  uint8 *O_0_Comp6 = (uint8 *)FMemory_Alloca(O_0_Comp5->GetStructureSize());
  O_0_Comp5->InitializeStruct(O_0_Comp6);
  FMargin &O_0_Comp4 = *reinterpret_cast<FMargin *>(O_0_Comp6);
  K2Node_MakeStruct_SlateBrush.Margin = O_0_Comp4;
  const UScriptStruct *O_0_Comp8 = FSlateColor::StaticStruct();
  uint8 *O_0_Comp9 = (uint8 *)FMemory_Alloca(O_0_Comp8->GetStructureSize());
  O_0_Comp8->InitializeStruct(O_0_Comp9);
  FSlateColor &O_0_Comp7 = *reinterpret_cast<FSlateColor *>(O_0_Comp9);
  auto &O_0_Par0 = (*(AccessPrivateProperty<FLinearColor>(
      &(O_0_Comp7), FSlateColor::PPOSpecifiedColor())));
  O_0_Par0 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush.TintColor = O_0_Comp7;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[9],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeStruct_SlateBrush_1.ImageSize = FVector2D(256.0f, 256.0f);
  const UScriptStruct *O_0_Par2 = FMargin::StaticStruct();
  uint8 *O_0_Par3 = (uint8 *)FMemory_Alloca(O_0_Par2->GetStructureSize());
  O_0_Par2->InitializeStruct(O_0_Par3);
  FMargin &O_0_Par1 = *reinterpret_cast<FMargin *>(O_0_Par3);
  K2Node_MakeStruct_SlateBrush_1.Margin = O_0_Par1;
  const UScriptStruct *O_0_Par5 = FSlateColor::StaticStruct();
  uint8 *O_0_Par6 = (uint8 *)FMemory_Alloca(O_0_Par5->GetStructureSize());
  O_0_Par5->InitializeStruct(O_0_Par6);
  FSlateColor &O_0_Par4 = *reinterpret_cast<FSlateColor *>(O_0_Par6);
  auto &O_0_Par7 = (*(AccessPrivateProperty<FLinearColor>(
      &(O_0_Par4), FSlateColor::PPOSpecifiedColor())));
  O_0_Par7 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush_1.TintColor = O_0_Par4;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush_1),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[10],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush_1.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush_1.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush_1.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeStruct_SlateBrush_2.ImageSize = FVector2D(256.0f, 256.0f);
  const UScriptStruct *O_0_Par9 = FMargin::StaticStruct();
  uint8 *BG_Color0 = (uint8 *)FMemory_Alloca(O_0_Par9->GetStructureSize());
  O_0_Par9->InitializeStruct(BG_Color0);
  FMargin &O_0_Par8 = *reinterpret_cast<FMargin *>(BG_Color0);
  K2Node_MakeStruct_SlateBrush_2.Margin = O_0_Par8;
  const UScriptStruct *BG_Color2 = FSlateColor::StaticStruct();
  uint8 *BG_Color3 = (uint8 *)FMemory_Alloca(BG_Color2->GetStructureSize());
  BG_Color2->InitializeStruct(BG_Color3);
  FSlateColor &BG_Color1 = *reinterpret_cast<FSlateColor *>(BG_Color3);
  auto &BG_Color4 = (*(AccessPrivateProperty<FLinearColor>(
      &(BG_Color1), FSlateColor::PPOSpecifiedColor())));
  BG_Color4 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush_2.TintColor = BG_Color1;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush_2),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[11],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush_2.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush_2.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush_2.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeStruct_SlateBrush_3.ImageSize = FVector2D(256.0f, 256.0f);
  const UScriptStruct *BG_Color6 = FMargin::StaticStruct();
  uint8 *BG_Color7 = (uint8 *)FMemory_Alloca(BG_Color6->GetStructureSize());
  BG_Color6->InitializeStruct(BG_Color7);
  FMargin &BG_Color5 = *reinterpret_cast<FMargin *>(BG_Color7);
  K2Node_MakeStruct_SlateBrush_3.Margin = BG_Color5;
  const UScriptStruct *BG_Color9 = FSlateColor::StaticStruct();
  uint8 *BG_Brush0 = (uint8 *)FMemory_Alloca(BG_Color9->GetStructureSize());
  BG_Color9->InitializeStruct(BG_Brush0);
  FSlateColor &BG_Color8 = *reinterpret_cast<FSlateColor *>(BG_Brush0);
  auto &BG_Brush1 = (*(AccessPrivateProperty<FLinearColor>(
      &(BG_Color8), FSlateColor::PPOSpecifiedColor())));
  BG_Brush1 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush_3.TintColor = BG_Color8;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush_3),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[1],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush_3.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush_3.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush_3.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeArray_Array_1.SetNum(4, true);
  K2Node_MakeArray_Array_1[0] = K2Node_MakeStruct_SlateBrush_3;
  K2Node_MakeArray_Array_1[1] = K2Node_MakeStruct_SlateBrush;
  K2Node_MakeArray_Array_1[2] = K2Node_MakeStruct_SlateBrush_1;
  K2Node_MakeArray_Array_1[3] = K2Node_MakeStruct_SlateBrush_2;
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value);
  ReturnValue = K2Node_MakeArray_Array_1[CallFunc_FTrunc_ReturnValue];
  return ReturnValue;
}
FLinearColor UStatsUI::GetProfileBackgroundColor() {
  FLinearColor ReturnValue(EForceInit::ForceInit);
  TArray<FLinearColor> K2Node_MakeArray_Array{};
  float CallFunc_ReadStats_Value{};
  int32 CallFunc_FTrunc_ReturnValue{};
  UStatsTrackerLib_BP_C2132744816::ReadStats(
      FString(TEXT("CompanyRank")), false, this, CallFunc_ReadStats_Value);
  K2Node_MakeArray_Array.SetNum(4, true);
  K2Node_MakeArray_Array[0] = FLinearColor(0.6f, 0.6f, 0.5f, 1.0f);
  K2Node_MakeArray_Array[1] = FLinearColor(0.3f, 0.5f, 0.6f, 1.0f);
  K2Node_MakeArray_Array[2] = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
  K2Node_MakeArray_Array[3] = FLinearColor(1.0f, 0.6f, 0.0f, 1.0f);
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value);
  ReturnValue = K2Node_MakeArray_Array[CallFunc_FTrunc_ReturnValue];
  return ReturnValue;
}
FSlateBrush UStatsUI::GetxSpeedxImageTT() {
  FSlateBrush ReturnValue{};
  FSlateBrush K2Node_MakeStruct_SlateBrush{};
  FSlateBrush K2Node_MakeStruct_SlateBrush_1{};
  FSlateBrush K2Node_MakeStruct_SlateBrush_2{};
  float CallFunc_ReadStats_Value{};
  TArray<FSlateBrush> K2Node_MakeArray_Array{};
  float CallFunc_Subtract_FloatFloat_ReturnValue{};
  int32 CallFunc_FTrunc_ReturnValue{};
  FSlateBrush CallFunc_Array_Get_Item{};
  UStatsTrackerLib_BP_C2132744816::ReadStats(
      FString(TEXT("WORLDDILATION")), false, this, CallFunc_ReadStats_Value);
  K2Node_MakeStruct_SlateBrush.ImageSize = FVector2D(32.0f, 32.0f);
  const UScriptStruct *BG_Brush3 = FMargin::StaticStruct();
  uint8 *BG_Brush4 = (uint8 *)FMemory_Alloca(BG_Brush3->GetStructureSize());
  BG_Brush3->InitializeStruct(BG_Brush4);
  FMargin &BG_Brush2 = *reinterpret_cast<FMargin *>(BG_Brush4);
  K2Node_MakeStruct_SlateBrush.Margin = BG_Brush2;
  const UScriptStruct *BG_Brush6 = FSlateColor::StaticStruct();
  uint8 *BG_Brush7 = (uint8 *)FMemory_Alloca(BG_Brush6->GetStructureSize());
  BG_Brush6->InitializeStruct(BG_Brush7);
  FSlateColor &BG_Brush5 = *reinterpret_cast<FSlateColor *>(BG_Brush7);
  auto &BG_Brush8 = (*(AccessPrivateProperty<FLinearColor>(
      &(BG_Brush5), FSlateColor::PPOSpecifiedColor())));
  BG_Brush8 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush.TintColor = BG_Brush5;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[12],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeStruct_SlateBrush_1.ImageSize = FVector2D(32.0f, 32.0f);
  const UScriptStruct *O_1_Par0 = FMargin::StaticStruct();
  uint8 *O_1_Par1 = (uint8 *)FMemory_Alloca(O_1_Par0->GetStructureSize());
  O_1_Par0->InitializeStruct(O_1_Par1);
  FMargin &BG_Brush9 = *reinterpret_cast<FMargin *>(O_1_Par1);
  K2Node_MakeStruct_SlateBrush_1.Margin = BG_Brush9;
  const UScriptStruct *O_1_Par3 = FSlateColor::StaticStruct();
  uint8 *O_1_Par4 = (uint8 *)FMemory_Alloca(O_1_Par3->GetStructureSize());
  O_1_Par3->InitializeStruct(O_1_Par4);
  FSlateColor &O_1_Par2 = *reinterpret_cast<FSlateColor *>(O_1_Par4);
  auto &O_1_Par5 = (*(AccessPrivateProperty<FLinearColor>(
      &(O_1_Par2), FSlateColor::PPOSpecifiedColor())));
  O_1_Par5 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush_1.TintColor = O_1_Par2;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush_1),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[13],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush_1.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush_1.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush_1.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeStruct_SlateBrush_2.ImageSize = FVector2D(32.0f, 32.0f);
  const UScriptStruct *O_1_Par7 = FMargin::StaticStruct();
  uint8 *O_1_Par8 = (uint8 *)FMemory_Alloca(O_1_Par7->GetStructureSize());
  O_1_Par7->InitializeStruct(O_1_Par8);
  FMargin &O_1_Par6 = *reinterpret_cast<FMargin *>(O_1_Par8);
  K2Node_MakeStruct_SlateBrush_2.Margin = O_1_Par6;
  const UScriptStruct *Char_Image0 = FSlateColor::StaticStruct();
  uint8 *Char_Image1 = (uint8 *)FMemory_Alloca(Char_Image0->GetStructureSize());
  Char_Image0->InitializeStruct(Char_Image1);
  FSlateColor &O_1_Par9 = *reinterpret_cast<FSlateColor *>(Char_Image1);
  auto &Char_Image2 = (*(AccessPrivateProperty<FLinearColor>(
      &(O_1_Par9), FSlateColor::PPOSpecifiedColor())));
  Char_Image2 = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  K2Node_MakeStruct_SlateBrush_2.TintColor = O_1_Par9;
  (*(AccessPrivateProperty<UObject *>(&(K2Node_MakeStruct_SlateBrush_2),
                                      FSlateBrush::PPOResourceObject()))) =
      CastChecked<UObject>(
          CastChecked<UDynamicClass>(UStatsUI::StaticClass())->UsedAssets[7],
          ECastCheckedType::NullAllowed);
  K2Node_MakeStruct_SlateBrush_2.DrawAs = ESlateBrushDrawType::Image;
  K2Node_MakeStruct_SlateBrush_2.Tiling = ESlateBrushTileType::NoTile;
  K2Node_MakeStruct_SlateBrush_2.Mirroring = ESlateBrushMirrorType::NoMirror;
  K2Node_MakeArray_Array.SetNum(3, true);
  K2Node_MakeArray_Array[0] = K2Node_MakeStruct_SlateBrush;
  K2Node_MakeArray_Array[1] = K2Node_MakeStruct_SlateBrush_1;
  K2Node_MakeArray_Array[2] = K2Node_MakeStruct_SlateBrush_2;
  CallFunc_Subtract_FloatFloat_ReturnValue =
      UKismetMathLibrary::Subtract_FloatFloat(CallFunc_ReadStats_Value, 1.0f);
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_Subtract_FloatFloat_ReturnValue);
  FCustomThunkTemplates::Array_Get(K2Node_MakeArray_Array,
                                   CallFunc_FTrunc_ReturnValue,
                                   CallFunc_Array_Get_Item);
  ReturnValue = CallFunc_Array_Get_Item;
  return ReturnValue;
}
FText UStatsUI::GetSpeedText() {
  FText ReturnValue{};
  float CallFunc_ReadStats_Value{};
  FString CallFunc_Conv_FloatToString_ReturnValue{};
  FString CallFunc_Concat_StrStr_ReturnValue{};
  FText CallFunc_Conv_StringToText_ReturnValue{};
  UStatsTrackerLib_BP_C2132744816::ReadStats(
      FString(TEXT("WORLDDILATION")), false, this, CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("Speed x")), CallFunc_Conv_FloatToString_ReturnValue);
  CallFunc_Conv_StringToText_ReturnValue =
      UKismetTextLibrary::Conv_StringToText(CallFunc_Concat_StrStr_ReturnValue);
  ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
  return ReturnValue;
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI::StaticDependencies_DirectlyUsedAssets(
    TArray<FBlueprintDependencyData> &AssetsToLoad) {
  const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] = {
      {74, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/ProfileBG.ProfileBG
      {75, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/slaveProfile.slaveProfile
      {76, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/ProfileFrame.ProfileFrame
      {77, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/Bar.Bar
      {78, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/FillBar.FillBar
      {79, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/CoinImage.CoinImage
      {30, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font
      {80, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/Speed3x.Speed3x
      {81, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/PauseButton.PauseButton
      {82, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/EmployeeeProfile.EmployeeeProfile
      {83, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/ManagerProfile.ManagerProfile
      {84, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D
                    //  /Game/UI/Ingame/StatsUI/DirectorProfile.DirectorProfile
      {85, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/Speed1x.Speed1x
      {86, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Texture2D /Game/UI/Ingame/StatsUI/Speed2x.Speed2x
  };
  for (const FCompactBlueprintDependencyData &CompactData :
       LocCompactBlueprintDependencyData) {
    AssetsToLoad.Add(FBlueprintDependencyData(
        FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
  }
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI::StaticDependenciesAssets(
    TArray<FBlueprintDependencyData> &AssetsToLoad) {
  StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
  const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] = {
      {72, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  ScriptStruct /Script/SlateCore.Geometry
      {14, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.GameplayStatics
      {39, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/UMG.Button
      {15, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.KismetMathLibrary
      {87, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.KismetStringLibrary
      {24, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/UMG.UserWidget
      {18, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.KismetTextLibrary
      {88, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  ScriptStruct /Script/SlateCore.SlateBrush
      {89, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  ScriptStruct /Script/SlateCore.Margin
      {90, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  ScriptStruct /Script/SlateCore.SlateColor
      {91, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Enum /Script/SlateCore.ESlateBrushDrawType
      {92, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Enum /Script/SlateCore.ESlateBrushTileType
      {93, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Enum /Script/SlateCore.ESlateBrushMirrorType
      {36, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.KismetArrayLibrary
      {22, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  ScriptStruct /Script/Engine.PointerToUberGraphFrame
      {38, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/UMG.Image
      {73, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/UMG.TextBlock
      {94, FBlueprintDependencyType(true, false, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/UMG.ProgressBar
      {25, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.BlueprintFunctionLibrary
      {26, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  Class /Script/Engine.BlueprintMapLibrary
      {23, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(false, false, false,
                                false)}, //  Class /Script/Engine.GameInstance
      {40, FBlueprintDependencyType(false, true, false, false),
       FBlueprintDependencyType(
           false, false, false,
           false)}, //  BlueprintGeneratedClass
                    //  /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C
  };
  for (const FCompactBlueprintDependencyData &CompactData :
       LocCompactBlueprintDependencyData) {
    AssetsToLoad.Add(FBlueprintDependencyData(
        FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
  }
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperUStatsUI {
  FRegisterHelperUStatsUI() {
    FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(
        TEXT("/Game/UI/Ingame/StatsUI/StatsUi"),
        &UStatsUI::StaticDependenciesAssets);
  }
  static FRegisterHelperUStatsUI Instance;
};
FRegisterHelperUStatsUI FRegisterHelperUStatsUI::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning(pop)
#endif
