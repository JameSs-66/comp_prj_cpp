#include "Gameover.h"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UGameove::UGameove(const FObject &Object) : Super(Object) {

  Return = nullptr;
  WhyOver = nullptr;
  DelayTime = 5;
  GameOverBys = FString(TEXT(""));
  bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGameove::loadsubobjects(FobjectGraph *OuterInstanceGraph) {
  Super::loadsubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGameove::DClass(UDynamicClass *IClass) {
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
  Dependencies::FillUsedAssetsIClass(IClass,
                                     &__StaticDependencies_DirectlyUsedAssets);
  auto comp0 =
      NewObject<UWidgetTree>(IClass, UWidgetTree::StaticClass(),
                             TEXT("WidgetTree"), (EObjectFlags)0x00000008);
  IClass->MiscConvertedSubobjects.Add(comp0);
  auto comp1 = NewObject<UCanvasPanel>(comp0, TEXT("CanvasPanel_0"),
                                       (EObjectFlags)0x00280008);
  auto &comp2 = (*(AccessPrivateProperty<TArray<UPanelSlot *>>(
      (comp1), UPanelWidget::__PPO__Slots())));
  comp2 = TArray<UPanelSlot *>();
  comp2.Reserve(5);
  auto comp3 = NewObject<UCanvasPanelSlot>(comp1, TEXT("CanvasPanelSlot_12"),
                                           (EObjectFlags)0x00280008);
  comp3->LayoutData.Offsets.Right = 2428.0f;
  comp3->LayoutData.Offsets.Bottom = 1400.5f;
  comp3->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  comp3->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  comp3->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  comp3->Parent = comp1;
  auto comp4 = NewObject<UBackgroundBlur>(comp0, TEXT("BackgroundBlur_36"),
                                          (EObjectFlags)0x00280008);
  comp4->BlurStrength = 10.0f;
  comp4->Slot = comp3;
  comp3->Content = comp4;
  comp2.Add(comp3);
  auto comp5 = NewObject<UCanvasPanelSlot>(comp1, TEXT("CanvasPanelSlot_5"),
                                           (EObjectFlags)0x00280008);
  comp5->LayoutData.Offsets.Right = 2060.0f;
  comp5->LayoutData.Offsets.Bottom = 1198.0f;
  comp5->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  comp5->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  comp5->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  comp5->Parent = comp1;
  auto comp6 =
      NewObject<UOverlay>(comp0, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
  comp6->Slot = comp5;
  comp5->Content = comp6;
  comp2.Add(comp5);
  auto comp7 = NewObject<UCanvasPanelSlot>(comp1, TEXT("CanvasPanelSlot_10"),
                                           (EObjectFlags)0x00280008);
  comp7->LayoutData.Offsets.Right = 854.0f;
  comp7->LayoutData.Offsets.Bottom = 195.0f;
  comp7->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  comp7->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  comp7->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  comp7->Parent = comp1;
  auto comp8 = NewObject<UTextBlock>(comp0, TEXT("TextBlock_45"),
                                     (EObjectFlags)0x00280008);
  comp8->Text = FTextStringHelper::CreateFromBuffer(TEXT("\"Game Over\")"));
  comp8->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGameove::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  comp8->Font.OutlineSettings.OutlineSize = 7;
  comp8->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  comp8->Font.TypefaceFontName = FName(TEXT("Default"));
  comp8->Font.Size = 120;
  comp8->Font.LetterSpacing = 100;
  auto &comp9 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (comp8), UTextLayoutWidget::__PPO__Justification())));
  comp9 = ETextJustify::Type::Center;
  comp8->Slot = comp7;
  comp8->Visibility = ESlateVisibility::HitTestInvisible;
  comp7->Content = comp8;
  comp2.Add(comp7);
  auto comp10 = NewObject<UCanvasPanelSlot>(comp1, TEXT("CanvasPanelSlot_7"),
                                            (EObjectFlags)0x00280008);
  comp10->LayoutData.Offsets.Top = 330.0f;
  comp10->LayoutData.Offsets.Right = 854.0f;
  comp10->LayoutData.Offsets.Bottom = 195.0f;
  comp10->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  comp10->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  comp10->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  comp10->Parent = comp1;
  auto comp11 =
      NewObject<UTextBlock>(comp0, TEXT("Return"), (EObjectFlags)0x00280008);
  comp11->Text = FTextStringHelper::CreateFromBuffer(TEXT("\"ntice\")"));
  comp11->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGameove::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  comp11->Font.OutlineSettings.OutlineSize = 3;
  comp11->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  comp11->Font.TypefaceFontName = FName(TEXT("Default"));
  comp11->Font.Size = 39;
  comp11->Font.LetterSpacing = 100;
  auto &comp12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (comp11), UTextLayoutWidget::__PPO__Justification())));
  comp12 = ETextJustify::Type::Center;
  comp11->Slot = comp10;
  comp11->bIsVariable = true;
  comp11->Visibility = ESlateVisibility::HitTestInvisible;
  comp10->Content = comp11;
  comp2.Add(comp10);
  auto comp13 = NewObject<UCanvasPanelSlot>(comp1, TEXT("CanvasPanelSlot_8"),
                                            (EObjectFlags)0x00280008);
  comp13->LayoutData.Offsets.Top = 220.0f;
  comp13->LayoutData.Offsets.Right = 854.0f;
  comp13->LayoutData.Offsets.Bottom = 195.0f;
  comp13->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
  comp13->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
  comp13->LayoutData.Alignment = FVector2D(0.5f, 0.5f);
  comp13->Parent = comp1;
  auto comp14 =
      NewObject<UTextBlock>(comp0, TEXT("WhyOver"), (EObjectFlags)0x00280008);
  comp14->Text = FTextStringHelper::CreateFromBuffer(TEXT("\"Game Over\")"));
  comp14->Font.FontObject = CastChecked<UObject>(
      CastChecked<UDynamicClass>(UGameove::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  comp14->Font.OutlineSettings.OutlineSize = 3;
  comp14->Font.OutlineSettings.OutlineColor =
      FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
  comp14->Font.TypefaceFontName = FName(TEXT("Default"));
  comp14->Font.Size = 39;
  comp14->Font.LetterSpacing = 100;
  auto &comp15 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type>>(
      (comp14), UTextLayoutWidget::__PPO__Justification())));
  comp15 = ETextJustify::Type::Center;
  comp14->Slot = comp13;
  comp14->Visibility = ESlateVisibility::HitTestInvisible;
  comp13->Content = comp14;
  comp2.Add(comp13);
  comp0->RootWidget = comp1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGameove::GetSlotNames(TArray<FName> &SlotNames) const {
  TArray<FName> comp16;
  SlotNames.Append(comp16);
}
void UGameove::InitializeNativeClassData() {
  TArray<UWidgetAnimation *> comp17;
  TArray<FDelegateRuntimeBinding> comp18;
  comp18.AddUninitialized(1);
  FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(comp18.GetData(),
                                                            1);
  auto &comp19 = comp18[0];
  comp19.ObjectName = FString(TEXT("WhyOver"));
  comp19.PropertyName = FName(TEXT("Text"));
  auto &comp20 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment>>(
      &(comp19.SourcePath), FCachedPropertyPath::__PPO__Segments())));
  comp20 = TArray<FPropertyPathSegment>();
  comp20.AddUninitialized(1);
  FPropertyPathSegment::StaticStruct()->InitializeStruct(comp20.GetData(), 1);
  auto &comp21 = comp20[0];
  comp21.Name = FName(TEXT("GameOverBys"));
  UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(
      this, GetClass(),
      CastChecked<UWidgetTree>(
          CastChecked<UDynamicClass>(UGameove::StaticClass())
              ->MiscConvertedSubobjects[0]),
      comp17, comp18);
}
void UGameove::PreSave(const class ITargetPlatform *TargetPlatform) {
  Super::PreSave(TargetPlatform);
  TArray<FName> NameSlots;
  GetSlotNames(NameSlots);
  RemoveObsoleteBindings(NameSlots);
}
void UGameove::Gameover0(int EntryPoint) {
  check(EntryPoint == 11);
  UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 1.0f, this);
  return;
}
void UGameove::Gameover1(int EntryPoint) {
  int SubtractIntIntReturnValue{};
  bool LessEqualIntIntReturnValue{};
  UGameInstance *GetGameInstanceReturnValue{};
  FString ConvIntToStringReturnValue{};
  FString ConcatStrStrReturnValue{};
  FText ConvStringToTextReturnValue{};
  int CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 1: {
      UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 0.000000, this);
    }
    case 2: {
      GetGameInstanceReturnValue = UGameplayStatics::GetGameInstance(this);
      dynamicCastAsGameInstance =
          Cast<UGameInstance>(GetGameInstanceReturnValue);
      dynamicCastSuccess = (dynamicCastAsGameInstance != nullptr);
      ;
      if (!dynamicCastSuccess) {
        CurrentState = -1;
        break;
      }
    }
    case 3: {
      TMap<FString, float> comp22 = {};
      FCustomThunkTemplates::Map_Clear(
          ((::IsValid(dynamicCastAsGameInstance))
               ? (dynamicCastAsGameInstance->StatsMax)
               : (comp22)));
    }
    case 4: {
      TMap<FString, float> comp23 = {};
      FCustomThunkTemplates::Map_Clear(((::IsValid(dynamicCastAsGameInstance))
                                            ? (dynamicCastAsGameInstance->Stats)
                                            : (comp23)));
    }
    case 5: {
      UGameplayStatics::SetGlobalTimeDilation(this, 1.0f);
    }
    case 6: {
      UGameplayStatics::OpenLevel(this, FName(TEXT("MainMenu")), true,
                                  FString(TEXT("")));
      CurrentState = -1;
      break;
    }
    case 7: {
      CurrentState = 8;
      break;
    }
    case 8: {
      SubtractIntIntReturnValue =
          UKismetMathLibrary::Subtract_IntInt(DelayTime, 1);
      tempintVariable = SubtractIntIntReturnValue;
    }
    case 9: {
      DelayTime = tempintVariable;
    }
    case 10: {
      LessEqualIntIntReturnValue =
          UKismetMathLibrary::LessEqual_IntInt(tempintVariable, 0);
      if (!LessEqualIntIntReturnValue) {
        CurrentState = -1;
        break;
      }
      CurrentState = 1;
      break;
    }
    case 13: {
      CurrentState = 14;
      break;
    }
    case 14: {
      ConvIntToStringReturnValue =
          UKismetStringLibrary::Conv_IntToString(DelayTime);
      Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
          FString(TEXT("Return to main menu in : ")),
          ConvIntToStringReturnValue);
      ConvStringToTextReturnValue =
          UKismetTextLibrary::Conv_StringToText(Concat_StrStr_ReturnValue);
      if (::IsValid(Return)) {
        Return->SetText(ConvStringToTextReturnValue);
      }
    }
    case 15: {
      UKismetSystemLibrary::Delay(
          this, 1.0f,
          FLatentActionInfo(7, -35464803, TEXT("Gameover1"), this));
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void UGameove::Tick(FGeometry MyGeometry, float InDeltaTime) {
  geometry = MyGeometry;
  deltaTime = InDeltaTime;
  Gameover1(13);
}
void UGameove::Construct() { Gameover0(11); }

// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void UGameove::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UGameove::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GameInstance_BP.GameInstance_BP_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct UGameover
{
	UGameover()
	{
		Dependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Gameover"), &UGameove::__StaticDependenciesAssets);
	}
	static UGameover Instance;
};
UGameover UGameover::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
