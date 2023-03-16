#include "Gamewin.h"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif

PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UGamewin::UGamewin(const FObject &Object) : Super(Object) {
  Image = nullptr;
  No = nullptr;
  Overlay = nullptr;
  Return = nullptr;
  TextBlock = nullptr;
  TextBlock_1 = nullptr;
  TextBlock_45 = nullptr;
  Yes = nullptr;
  DelayTime = 10;
  IsEnd = false;
  bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGamewin::loadsubobjects(FobjectGraph *OuterInstanceGraph) {
  Super::loadsubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin::CustomDynamicClassInitialization(UDynamicClass *IClass) {
  ensure(0 == IClass->ReferencedConvertedFields.Num());
  ensure(0 == IClass->MiscConvertedSubobjects.Num());
  ensure(0 == IClass->DynamicBindingObjects.Num());
  ensure(0 == IClass->ComponentTemplates.Num());
  ensure(0 == IClass->Timelines.Num());
  ensure(0 == IClass->ComponentClassOverrides.Num());
  ensure(nullptr == IClass->AnimClassImplementation);
  IClass->AssembleReferenceTokenStream();
  IClass->ReferencedConvertedFields.Add(UGameInstance::StaticClass());
  IClass->ReferencedConvertedFields.Add(UStatsTrackerLib::StaticClass());
  UIgamewin::FillUsedAssetsIClass(IClass,
                                  &StaticDependencies_DirectlyUsedAssets);
  auto Comp0 = NewObject<UComponentDelegateBinding>(
      IClass, UComponentDelegateBinding::StaticClass(),
      TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x0f00);
  IClass->DynamicBindingObjects.Add(Comp0);
  auto Comp1 = NewObject<UWidgetTree>(IClass, UWidgetTree::StaticClass(),
                                      TEXT("WidgetTree"), (EObjectFlags)0x0f08);
  IClass->MiscConvertedSubobjects.Add(Comp1);
  Comp0->ComponentDelegateBindings =
      TArray<FBlueprintComponentDelegateBinding>();
  Comp0->ComponentDelegateBindings.AddUninitialized(6);
  FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(
      Comp0->ComponentDelegateBindings.GetData(), 6);
  auto &Comp2 = Comp0->ComponentDelegateBindings[0];
  Comp2.ComponentPropertyName = FName(TEXT("Yes"));
  Comp2.DelegatePropertyName = FName(TEXT("OnUnhovered"));
  Comp2.FunctionNameToBind = FName(TEXT("GamewinComponent6Event"));
  auto &Comp3 = Comp0->ComponentDelegateBindings[1];
  Comp3.ComponentPropertyName = FName(TEXT("No"));
  Comp3.DelegatePropertyName = FName(TEXT("OnUnhovered"));
  Comp3.FunctionNameToBind = FName(TEXT("GamewinComponent5Event"));
  auto &Comp4 = Comp0->ComponentDelegateBindings[2];
  Comp4.ComponentPropertyName = FName(TEXT("No"));
  Comp4.DelegatePropertyName = FName(TEXT("OnClicked"));
  Comp4.FunctionNameToBind = FName(TEXT("GamewinComponent4Event"));
  auto &Comp5 = Comp0->ComponentDelegateBindings[3];
  Comp5.ComponentPropertyName = FName(TEXT("Yes"));
  Comp5.DelegatePropertyName = FName(TEXT("OnClicked"));
  Comp5.FunctionNameToBind = FName(TEXT("GamewinComponent3Event"));
  auto &Comp6 = Comp0->ComponentDelegateBindings[4];
  Comp6.ComponentPropertyName = FName(TEXT("No"));
  Comp6.DelegatePropertyName = FName(TEXT("OnHovered"));
  Comp6.FunctionNameToBind = FName(TEXT("GamewinComponent2Event"));
  auto &Comp7 = Comp0->ComponentDelegateBindings[5];
  Comp7.ComponentPropertyName = FName(TEXT("Yes"));
  Comp7.DelegatePropertyName = FName(TEXT("OnHovered"));
  Comp7.FunctionNameToBind = FName(TEXT("GamewinComponent0Event"));
  auto Comp8 = NewObject<UCanvasPanel>(Comp1, TEXT("CanvasPanel_0"),
                                       (EObjectFlags)0x00280008);
  auto &Comp9 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (Comp8), UPanelWidget::Slots())));
  Comp9 = TArray<UPanelSlot *>();
  Comp9.Reserve(6);
  auto Comp10 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_28"),
                                            (EObjectFlags)0x00280008);
  Comp10->LayoutData.Offsets.Left = 442.5f;
  Comp10->LayoutData.Offsets.Top = 394.5f;
  Comp10->LayoutData.Offsets.Right = 1046.5f;
  Comp10->LayoutData.Offsets.Bottom = 424.5f;
  Comp10->Parent = Comp8;
  auto Comp11 =
      NewObject<UImage>(Comp1, TEXT("Image_260"), (EObjectFlags)0x00280008);
  Comp11->Brush.ImageSize = FVector2D(256.0f, 256.0f);
  auto &Comp12 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp11->Brush.TintColor), FSlateColor::SpecifiedColor())));
  Comp12 = FLinearColor(1.0f, 1.0f, 1.0f, 0.5f);
  auto &Comp13 = (*(AccessPrivateProperty<UObject *>(
      &(Comp11->Brush), FSlateBrush::ResourceObject())));
  Comp13 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  Comp11->ColorAndOpacity = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
  Comp11->Slot = Comp10;
  Comp10->Content = Comp11;
  Comp9.Add(Comp10);
  auto Comp14 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_10"),
                                            (EObjectFlags)0x00280008);
  Comp14->LayoutData.Offsets.Right = 854.0f;
  Comp14->LayoutData.Offsets.Bottom = 195.95f;
  Comp14->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Comp14->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Comp14->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  Comp14->Parent = Comp8;
  auto Comp15 = NewObject<UTextBlock>(Comp1, TEXT("TextBlock_45"),
                                      (EObjectFlags)0x00280008);
  Comp15->Text =
      FTextStringHelper::CreateFromBuffer(TEXT(\"Are you ready for CEO?\")"));
  auto &Comp16 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp15->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp16 = FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp15->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp15->Font.OutlineSettings.OutlineSize = 4;
  Comp15->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp15->Font.TypefaceFontName = FName(TEXT("Default"));
  Comp15->Font.Size = 64;
  Comp15->Font.LetterSpacing = 100;
  auto &Comp17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp15), UTextLayoutWidget::Justification())));
  Comp17 = ETextJustify::Type::Center;
  Comp15->Slot = Comp14;
  Comp15->bIsVariable = true;
  Comp15->Visibility = ESlateVisibility::HitTestInvisible;
  Comp14->Content = Comp15;
  Comp9.Add(Comp14);
  auto Comp18 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_19"),
                                            (EObjectFlags)0x00280008);
  Comp18->LayoutData.Offsets.Left = -408.0f;
  Comp18->LayoutData.Offsets.Top = 156.0f;
  Comp18->LayoutData.Offsets.Right = 380.0f;
  Comp18->LayoutData.Offsets.Bottom = 100.0f;
  Comp18->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Comp18->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Comp18->Parent = Comp8;
  auto Comp19 =
      NewObject<UButton>(Comp1, TEXT("Yes"), (EObjectFlags)0x00280008);
  Comp19->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  Comp19->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  Comp19->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  auto &Comp20 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (Comp19), UPanelWidget::Slots())));
  Comp20 = TArray<UPanelSlot *>();
  Comp20.Reserve(1);
  auto Comp21 = NewObject<UButtonSlot>(Comp19, TEXT("ButtonSlot_0"),
                                       (EObjectFlags)0x00280008);
  Comp21->Parent = Comp19;
  auto Comp22 =
      NewObject<UTextBlock>(Comp1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
  Comp22->Text = FTextStringHelper::CreateFromBuffer(TEXT("\"Yes!!\")"));
  auto &Comp23 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp22->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp23 = FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp22->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp22->Font.OutlineSettings.OutlineSize = 3;
  Comp22->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp22->Font.TypefaceFontName = FName(TEXT("Default"));
  Comp22->Font.Size = 40;
  Comp22->Font.LetterSpacing = 100;
  auto &Comp24 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp22), UTextLayoutWidget::Justification())));
  Comp24 = ETextJustify::Type::Center;
  Comp22->Slot = Comp21;
  Comp22->bIsVariable = true;
  Comp22->Visibility = ESlateVisibility::HitTestInvisible;
  Comp21->Content = Comp22;
  Comp20.Add(Comp21);
  Comp19->Slot = Comp18;
  Comp18->Content = Comp19;
  Comp9.Add(Comp18);
  auto Comp25 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_20"),
                                            (EObjectFlags)0x00280008);
  Comp25->LayoutData.Offsets.Left = 40.0f;
  Comp25->LayoutData.Offsets.Top = 156.0f;
  Comp25->LayoutData.Offsets.Right = 380.0f;
  Comp25->LayoutData.Offsets.Bottom = 100.0f;
  Comp25->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Comp25->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Comp25->Parent = Comp8;
  auto Comp26 = NewObject<UButton>(Comp1, TEXT("No"), (EObjectFlags)0x00280008);
  Comp26->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  Comp26->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  Comp26->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
  auto &Comp27 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (Comp26), UPanelWidget::Slots())));
  Comp27 = TArray<UPanelSlot *>();
  Comp27.Reserve(1);
  auto Comp28 = NewObject<UButtonSlot>(Comp26, TEXT("ButtonSlot_0"),
                                       (EObjectFlags)0x00280008);
  Comp28->Parent = Comp26;
  auto Comp29 = NewObject<UTextBlock>(Comp1, TEXT("TextBlock_1"),
                                      (EObjectFlags)0x00280008);
  Comp29->Text =
      FTextStringHelper::CreateFromBuffer(TEXT("\"Give me a sec.\")"));
  auto &Comp30 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp29->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp30 = FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp29->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp29->Font.OutlineSettings.OutlineSize = 3;
  Comp29->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp29->Font.TypefaceFontName = FName(TEXT("Default"));
  Comp29->Font.Size = 40;
  Comp29->Font.LetterSpacing = 100;
  auto &Comp31 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp29), UTextLayoutWidget::Justification())));
  Comp31 = ETextJustify::Type::Center;
  Comp29->Slot = Comp28;
  Comp29->bIsVariable = true;
  Comp29->Visibility = ESlateVisibility::HitTestInvisible;
  Comp28->Content = Comp29;
  Comp27.Add(Comp28);
  Comp26->Slot = Comp25;
  Comp25->Content = Comp26;
  Comp9.Add(Comp25);
  auto Comp32 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_21"),
                                            (EObjectFlags)0x00280008);
  Comp32->LayoutData.Offsets.Left = 534.666687f;
  Comp32->LayoutData.Offsets.Top = 584.0f;
  Comp32->LayoutData.Offsets.Right = 849.666626f;
  Comp32->LayoutData.Offsets.Bottom = 40.0f;
  Comp32->Parent = Comp8;
  auto Comp33 = NewObject<UTextBlock>(Comp1, TEXT("TextBlock_0"),
                                      (EObjectFlags)0x00280008);
  Comp33->Text = FTextStringHelper::CreateFromBuffer(
      TEXT("\"The real game start after this.\")"));
  auto &Comp34 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp33->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp34 = FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp33->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp33->Font.OutlineSettings.OutlineSize = 1;
  Comp33->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  Comp33->Font.TypefaceFontName = FName(TEXT("Default"));
  auto &Comp35 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp33), UTextLayoutWidget::Justification())));
  Comp35 = ETextJustify::Type::Center;
  Comp33->Slot = Comp32;
  Comp32->Content = Comp33;
  Comp9.Add(Comp32);
  auto Comp36 = NewObject<UCanvasPanelSlot>(Comp8, TEXT("CanvasPanelSlot_26"),
                                            (EObjectFlags)0x00280008);
  Comp36->LayoutData.Offsets.Right = 2060.0f;
  Comp36->LayoutData.Offsets.Bottom = 1198.0f;
  Comp36->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  Comp36->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  Comp36->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  Comp36->Parent = Comp8;
  auto Comp37 =
      NewObject<UOverlay>(Comp1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
  auto &Comp38 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (Comp37), UPanelWidget::Slots())));
  Comp38 = TArray<UPanelSlot *>();
  Comp38.Reserve(3);
  auto Comp39 = NewObject<UOverlaySlot>(Comp37, TEXT("OverlaySlot_3"),
                                        (EObjectFlags)0x00280008);
  Comp39->Parent = Comp37;
  auto Comp40 =
      NewObject<UImage>(Comp1, TEXT("Image_201"), (EObjectFlags)0x00280008);
  Comp40->Brush.ImageSize = FVector2D(3086.0f, 2182.0f);
  auto &Comp41 = (*(AccessPrivateProperty<UObject *>(
      &(Comp40->Brush), FSlateBrush::ResourceObject())));
  Comp41 = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[2],
      ECastCheckedType::NullAllowed);
  Comp40->Slot = Comp39;
  Comp40->bIsVariable = false;
  Comp39->Content = Comp40;
  Comp38.Add(Comp39);
  auto Comp42 = NewObject<UOverlaySlot>(Comp37, TEXT("OverlaySlot_4"),
                                        (EObjectFlags)0x00280008);
  Comp42->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
  Comp42->VerticalAlignment = EVerticalAlignment::VAlign_Center;
  Comp42->Parent = Comp37;
  auto Comp43 = NewObject<UTextBlock>(Comp1, TEXT("TextBlock_149"),
                                      (EObjectFlags)0x00280008);
  Comp43->Text =
      FTextStringHelper::CreateFromBuffer(TEXT("\"Thanks for playing.\")"));
  auto &Comp44 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp43->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp44 = FLinearColor(0.0f, 0.000911, 0.020289, 1.0f);
  Comp43->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp43->Font.OutlineSettings.OutlineSize = 3;
  Comp43->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.0f, 0.001075, 0.020833, 1.0f);
  Comp43->Font.TypefaceFontName = FName(TEXT("Default"));
  Comp43->Font.Size = 72;
  auto &Comp45 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp43), UTextLayoutWidget::Justification())));
  Comp45 = ETextJustify::Type::Center;
  Comp43->Slot = Comp42;
  Comp43->RenderTransform.Translation = FVector2D(169.0f, -354.0f);
  Comp42->Content = Comp43;
  Comp38.Add(Comp42);
  auto Comp46 = NewObject<UOverlaySlot>(Comp37, TEXT("OverlaySlot_6"),
                                        (EObjectFlags)0x00280008);
  Comp46->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
  Comp46->VerticalAlignment = EVerticalAlignment::VAlign_Center;
  Comp46->Parent = Comp37;
  auto Comp47 =
      NewObject<UTextBlock>(Comp1, TEXT("Return"), (EObjectFlags)0x00280008);
  Comp47->Text = FTextStringHelper::CreateFromBuffer(TEXT("\"ntice\")"));
  auto &Comp48 = (*(AccessPrivateProperty<FLinearColor>(
      &(Comp47->ColorAndOpacity), FSlateColor::SpecifiedColor())));
  Comp48 = FLinearColor(0.0f, 0.000911, 0.020289, 1.0f);
  Comp47->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGamewin::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  Comp47->Font.OutlineSettings.OutlineSize = 2;
  Comp47->Font.OutlineSettings.OutlineColor =
      FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
  Comp47->Font.TypefaceFontName = FName(TEXT("Default"));
  Comp47->Font.Size = 39;
  Comp47->Font.LetterSpacing = 100;
  auto &Comp49 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (Comp47), UTextLayoutWidget::Justification())));
  Comp49 = ETextJustify::Type::Center;
  Comp47->Slot = Comp46;
  Comp47->RenderTransform.Translation = FVector2D(169.0f, 468.0f);
  Comp47->bIsVariable = true;
  Comp47->Visibility = ESlateVisibility::HitTestInvisible;
  Comp46->Content = Comp47;
  Comp38.Add(Comp46);
  Comp37->Slot = Comp36;
  Comp37->bIsVariable = true;
  Comp36->Content = Comp37;
  Comp9.Add(Comp36);
  Comp1->RootWidget = Comp8;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGamewin::GetSlotNames(TArray<FName> &SlotNames) const {
  TArray<FName> Comp50;
  SlotNames.Append(Comp50);
}
void UGamewin::InitializeNativeClassData() {
  TArray<UWidgetAnimation *> Comp51;
  TArray<FDelegateRuntimeBinding> Comp52;
  UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(
      this, GetClass(),
      CastChecked<UWidgetTree>(
          CastChecked<UDynamicClass>(UGamewin::StaticClass())
              ->MiscConvertedSubobjects[0]),
      Comp51, Comp52);
}
void UGamewin::PreSave(const class ITargetPlatform *TargetPlatform) {
  Super::PreSave(TargetPlatform);
  TArray<FName> LocalNamedSlots;
  GetSlotNames(LocalNamedSlots);
  RemoveObsoleteBindings(LocalNamedSlots);
}
void UGamewin::Gamewin0(int EntryPoint) {
  bool FuncLessEqual_IntIntReturnValue{};
  int FuncSubtractIntIntReturnValue{};
  UGameInstance *FuncGetGameInstanceReturnValue{};
  FString FuncConvIntToStringReturnValue{};
  FString FuncConcatStrStrReturnValue{};
  FText FuncConvStringToTextReturnValue{};
  int CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 1: {
      CurrentState = 2;
      break;
    }
    case 2: {
      FuncSubtractIntIntReturnValue =
          UKismetMathLibrary::Subtract_IntInt(DelayTime, 1);
      TempintVariable = FuncSubtractIntIntReturnValue;
    }
    case 3: {
      DelayTime = TempintVariable;
    }
    case 4: {
      FuncLessEqual_IntIntReturnValue =
          UKismetMathLibrary::LessEqual_IntInt(TempintVariable, 0);
      if (!FuncLessEqual_IntIntReturnValue) {
        CurrentState = -1;
        break;
      }
    }
    case 5: {
      UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 0.0f, this);
    }
    case 6: {
      FuncGetGameInstanceReturnValue = UGameplayStatics::GetGameInstance(this);
      DynamicCastAsGameInstance =
          Cast<UGameInstance>(FuncGetGameInstanceReturnValue);
      DynamicCastbSuccess = (DynamicCastAsGameInstance != nullptr);
      ;
      if (!DynamicCastbSuccess) {
        CurrentState = -1;
        break;
      }
    }
    case 7: {
      TMap<FString, float> Comp53 = {};
      FCustomThunkTemplates::Map_Clear(
          ((::IsValid(DynamicCastAsGameInstance))
               ? (DynamicCastAsGameInstance->StatsMax)
               : (Comp53)));
    }
    case 8: {
      TMap<FString, float> Comp54 = {};
      FCustomThunkTemplates::Map_Clear(((::IsValid(DynamicCastAsGameInstance))
                                            ? (DynamicCastAsGameInstance->Stats)
                                            : (Comp54)));
    }
    case 9: {
      UGameplayStatics::SetGlobalTimeDilation(this, 1.0f);
    }
    case 10: {
      UGameplayStatics::OpenLevel(this, FName(TEXT("MainMenu")), true,
                                  FString(TEXT("")));
      CurrentState = -1;
      break;
    }
    case 16: {
      CurrentState = 17;
      break;
    }
    case 17: {
      if (!IsEnd) {
        CurrentState = -1;
        break;
      }
    }
    case 18: {
      FuncConvIntToStringReturnValue =
          UKismetStringLibrary::Conv_IntToString(DelayTime);
      FuncConcatStrStrReturnValue = UKismetStringLibrary::Concat_StrStr(
          FString(TEXT("Return to main menu in : ")),
          FuncConvIntToStringReturnValue);
      FuncConvStringToTextReturnValue =
          UKismetTextLibrary::Conv_StringToText(FuncConcatStrStrReturnValue);
      if (::IsValid(Return)) {
        Return->SetText(FuncConvStringToTextReturnValue);
      }
    }
    case 19: {
      UKismetSystemLibrary::Delay(
          this, 1.0f,
          FLatentActionInfo(1, 1276885163, TEXT("ExecuteUbergraph_Gamewin_0"),
                            this));
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void UGamewin::Gamewin1(int EntryPoint) {
  check(EntryPoint == 11);

  UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 1.0f, this);
  if (::IsValid(Overlay)) {
    Overlay->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(TextBlock_1)) {
    TextBlock_1->SetVisibility(ESlateVisibility::Visible);
  }
  if (::IsValid(No)) {
    No->SetVisibility(ESlateVisibility::Visible);
  }
  if (::IsValid(Yes)) {
    Yes->SetVisibility(ESlateVisibility::Visible);
  }
  if (::IsValid(TextBlock_45)) {
    TextBlock_45->SetVisibility(ESlateVisibility::Visible);
  }
  if (::IsValid(TextBlock)) {
    TextBlock->SetVisibility(ESlateVisibility::Visible);
  }
  IsEnd = false;
  return;
}
void UGamewin::Gamewin2(int EntryPoint) {
  check(EntryPoint == 24);

  if (::IsValid(TextBlock_1)) {
    TextBlock_1->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(No)) {
    No->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(Yes)) {
    Yes->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(TextBlock_45)) {
    TextBlock_45->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(TextBlock)) {
    TextBlock->SetVisibility(ESlateVisibility::Hidden);
  }
  if (::IsValid(Overlay)) {
    Overlay->SetVisibility(ESlateVisibility::Visible);
  }
  IsEnd = true;
  return;
}
void UGamewin::Gamewin3(int EntryPoint) {
  check(EntryPoint == 20);

  (*(AccessPrivateProperty<FLinearColor>(&(MSSC3),
                                         FSlateColor::SpecifiedColor()))) =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type>>(
      &(MSSC3), FSlateColor::ColorUseRule()))) =
      ESlateColorStylingMode::UseColor_Specified;
  if (::IsValid(TextBlock)) {
    TextBlock->UTextBlock::SetColorAndOpacity(MSSC3);
  }
  return;
}
void UGamewin::Gamewin4(int EntryPoint) {
  check(EntryPoint == 34);

  (*(AccessPrivateProperty<FLinearColor>(&(MSSC2),
                                         FSlateColor::SpecifiedColor()))) =
      FLinearColor(0.0f, 0.002158, 0.031250, 1.0f);
  (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type>>(
      &(MSSC2), FSlateColor::ColorUseRule()))) =
      ESlateColorStylingMode::UseColor_Specified;
  if (::IsValid(TextBlock)) {
    TextBlock->UTextBlock::SetColorAndOpacity(MSSC2);
  }
  return;
}
void UGamewin::Gamewin5(int EntryPoint) {
  check(EntryPoint == 33);

  (*(AccessPrivateProperty<FLinearColor>(&(MSSC),
                                         FSlateColor::SpecifiedColor()))) =
      FLinearColor(0.0f, 0.002125, 0.030713, 1.0f);
  (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type>>(
      &(MSSC), FSlateColor::ColorUseRule()))) =
      ESlateColorStylingMode::UseColor_Specified;
  if (::IsValid(TextBlock_1)) {
    TextBlock_1->UTextBlock::SetColorAndOpacity(MSSC);
  }
  return;
}
void UGamewin::Gamewin6(int EntryPoint) {
  check(EntryPoint == 22);

  (*(AccessPrivateProperty<FLinearColor>(&(MSSC1),
                                         FSlateColor::SpecifiedColor()))) =
      FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
  (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type>>(
      &(MSSC1), FSlateColor::ColorUseRule()))) =
      ESlateColorStylingMode::UseColor_Specified;
  if (::IsValid(TextBlock_1)) {
    TextBlock_1->UTextBlock::SetColorAndOpacity(MSSC1);
  }
  return;
}
void UGamewin::Gamewin7(int EntryPoint) {
  check(EntryPoint == 28);

  RemoveFromParent();
  UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 0.0f, this);
  return;
}
void UGamewin::GamewinComponent6() { Gamewin4(34); }
void UGamewin::GamewinComponent5() { Gamewin5(33); }
void UGamewin::GamewinComponent4() { Gamewin7(28); }
void UGamewin::GamewinComponent3() { Gamewin2(24); }
void UGamewin::GamewinComponent2() { Gamewin6(22); }
void UGamewin::GamewinComponent0() { Gamewin3(20); }
void UGamewin::Tick(FGeometry MyGeometry, float InDeltaTime) {
  Geometry = MyGeometry;
  DeltaTime = InDeltaTime;
  Gamewin0(16);
}
void UGamewin::Construct() { Gamewin1(11); }

// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin::StaticDependencies_DirectlyUsedAssets(TArray<Data>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/ProjectYW-44.ProjectYW-44 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(Data(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin::StaticDependenciesAssets(TArray<Data>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{131, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GameInstance_BP.GameInstance_BP_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(Data(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct StcUIgamewin
{
	StcUIgamewin()
	{
		UIgamewin::Get().RegisterConvertedClass(TEXT("/Game/UI/Gamewin"), &UGamewin::StaticDependenciesAssets);
	}
	static StcUIgamewin Instance;
};

StcUIgamewin StcUIgamewin::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif