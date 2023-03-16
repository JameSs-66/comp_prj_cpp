#include "WateringPlants.h"
#include "StatsTrackerLib.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION

UWateringPlants::UWateringPlants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	background = nullptr;
	Plant = nullptr;
	WaterDrip = nullptr;
	WateringCan = nullptr;
	WateringTimer = 0.0f;
	DripSpritesTexture = TArray<UTexture2D*> ();
	PlantsTexture = TArray<UTexture2D*> ();
	DripAnimateIndex = 0;
	Done = false;
	bHasScriptImplementedPaint = false;
}

PRAGMA_ENABLE_OPTIMIZATION
void UWateringPlants::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}

PRAGMA_DISABLE_OPTIMIZATION
void UWateringPlants::CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib_BP_C2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
	auto CompDelegate = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(CompDelegate);
	auto WidgetTree = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(WidgetTree);
	auto watercan = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("watercanlana1_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(watercan);
	CompDelegate->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	CompDelegate->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(CompDelegate->ComponentDelegateBindings.GetData(), 2);
	auto& WaterCanButtonR = CompDelegate->ComponentDelegateBindings[0];
	WaterCanButtonR.ComponentPropertyName = FName(TEXT("WateringCan"));
	WaterCanButtonR.DelegatePropertyName = FName(TEXT("OnReleased"));
	WaterCanButtonR.FunctionNameToBind = FName(TEXT("poop_water_watercan_ComponentBoundEvent_OnButtonReleasedEvent"));
	auto& WaterCanButtonP = CompDelegate->ComponentDelegateBindings[1];
	WaterCanButtonP.ComponentPropertyName = FName(TEXT("WateringCan"));
	WaterCanButtonP.DelegatePropertyName = FName(TEXT("OnPressed"));
	WaterCanButtonP.FunctionNameToBind = FName(TEXT("poop_water_watercan_OnButtonPressedEvent"));
	auto CanvasPanel_0 = NewObject<UCanvasPanel>(WidgetTree, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& WTP_6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((CanvasPanel_0), UPanelWidget::__PPO__Slots() )));
	WTP_6 = TArray<UPanelSlot*> ();
	WTP_6.Reserve(2);
	auto WTP_7 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	WTP_7->LayoutData.Offsets.Left = -1116.6f;
	WTP_7->LayoutData.Offsets.Top = -691.8f;
	WTP_7->LayoutData.Offsets.Right = 2206.5f;
	WTP_7->LayoutData.Offsets.Bottom = 1293.4f;
	WTP_7->LayoutData.Anchors.Minimum = FVector2D(0.5f, 0.5f);
	WTP_7->LayoutData.Anchors.Maximum = FVector2D(0.5f, 0.5f);
	WTP_7->Parent = CanvasPanel_0;
	auto WTP_8 = NewObject<UBackgroundBlur>(WidgetTree, TEXT("BackgroundBlur_65"), (EObjectFlags)0x00280008);
	WTP_8->BlurStrength = 5.0f;
	WTP_8->Slot = WTP_7;
	WTP_7->Content = WTP_8;
	WTP_6.Add(WTP_7);
	auto WTP_9 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	WTP_9->LayoutData.Offsets.Left = 7.229462f;
	WTP_9->LayoutData.Offsets.Top = 5.894775f;
	WTP_9->LayoutData.Offsets.Right = 1920.000000f;
	WTP_9->LayoutData.Offsets.Bottom = 1080.000000f;
	WTP_9->Parent = CanvasPanel_0;
	auto WTP_10 = NewObject<UCanvasPanel>(WidgetTree, TEXT("CanvasPanel_30"), (EObjectFlags)0x00280008);
	auto& WTP_11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((WTP_10), UPanelWidget::__PPO__Slots() )));
	WTP_11 = TArray<UPanelSlot*> ();
	WTP_11.Reserve(3);
	auto WTP_12 = NewObject<UCanvasPanelSlot>(WTP_10, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	WTP_12->LayoutData.Offsets.Left = -632.000000f;
	WTP_12->LayoutData.Offsets.Top = -401.957947f;
	WTP_12->LayoutData.Offsets.Right = 1263.052002f;
	WTP_12->LayoutData.Offsets.Bottom = 812.337891f;
	WTP_12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	WTP_12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	WTP_12->Parent = WTP_10;
	auto WTP_13 = NewObject<UImage>(WidgetTree, TEXT("background"), (EObjectFlags)0x00280008);
	WTP_13->Brush.ImageSize = FVector2D(1322.000000, 868.000000);
	auto& WTP_14 = (*(AccessPrivateProperty<UObject* >(&(WTP_13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	WTP_14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	WTP_13->Slot = WTP_12;
	WTP_12->Content = WTP_13;
	WTP_11.Add(WTP_12);
	auto WTP_15 = NewObject<UCanvasPanelSlot>(WTP_10, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	WTP_15->LayoutData.Offsets.Left = -136.000000f;
	WTP_15->LayoutData.Offsets.Top = -136.000000f;
	WTP_15->LayoutData.Offsets.Right = 504.304291f;
	WTP_15->LayoutData.Offsets.Bottom = 624.794800f;
	WTP_15->Parent = WTP_10;
	auto WTP_16 = NewObject<UImage>(WidgetTree, TEXT("Plant"), (EObjectFlags)0x00280008);
	WTP_16->Brush.ImageSize = FVector2D(512.000000, 628.000000);
	auto& WTP_17 = (*(AccessPrivateProperty<UObject* >(&(WTP_16->Brush), FSlateBrush::__PPO__ResourceObject() )));
	WTP_17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	WTP_16->Slot = WTP_15;
	WTP_16->RenderTransform.Translation = FVector2D(498.000000, 373.000000);
	WTP_15->Content = WTP_16;
	WTP_11.Add(WTP_15);
	auto WTP_18 = NewObject<UCanvasPanelSlot>(WTP_10, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	WTP_18->LayoutData.Offsets.Left = -152.000000f;
	WTP_18->LayoutData.Offsets.Top = -132.000000f;
	WTP_18->LayoutData.Offsets.Right = 260.815094f;
	WTP_18->LayoutData.Offsets.Bottom = 218.022308f;
	WTP_18->Parent = WTP_10;
	auto WTP_19 = NewObject<UButton>(WidgetTree, TEXT("WateringCan"), (EObjectFlags)0x00280008);
	WTP_19->WidgetStyle.Normal.ImageSize = FVector2D(701.000000, 634.000000);
	auto& WTP_20 = (*(AccessPrivateProperty<UObject* >(&(WTP_19->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	WTP_20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	WTP_19->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	WTP_19->WidgetStyle.Hovered.ImageSize = FVector2D(701.000000, 634.000000);
	auto& WTP_21 = (*(AccessPrivateProperty<UObject* >(&(WTP_19->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	WTP_21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	WTP_19->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	WTP_19->WidgetStyle.Pressed.ImageSize = FVector2D(701.000000, 634.000000);
	auto& WTP_22 = (*(AccessPrivateProperty<UObject* >(&(WTP_19->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	WTP_22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	WTP_19->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	WTP_19->WidgetStyle.Disabled.ImageSize = FVector2D(701.000000, 634.000000);
	auto& WTP_23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((WTP_19), UPanelWidget::__PPO__Slots() )));
	WTP_23 = TArray<UPanelSlot*> ();
	WTP_23.Reserve(1);
	auto WTP_24 = NewObject<UButtonSlot>(WTP_19, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	WTP_24->Padding.Left = 0.000000f;
	WTP_24->Padding.Top = 0.000000f;
	WTP_24->Padding.Right = 0.000000f;
	WTP_24->Padding.Bottom = 0.000000f;
	WTP_24->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	WTP_24->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	WTP_24->Parent = WTP_19;
	auto WTP_25 = NewObject<UImage>(WidgetTree, TEXT("WaterDrip"), (EObjectFlags)0x00280008);
	WTP_25->Brush.ImageSize = FVector2D(247.000000, 270.000000);
	auto& WTP_26 = (*(AccessPrivateProperty<UObject* >(&(WTP_25->Brush), FSlateBrush::__PPO__ResourceObject() )));
	WTP_26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	WTP_25->Slot = WTP_24;
	WTP_25->RenderTransform.Translation = FVector2D(-220.000000, -132.000000);
	WTP_25->RenderTransform.Scale = FVector2D(0.800000, 1.000000);
	WTP_25->RenderTransform.Angle = 82.000000f;
	WTP_24->Content = WTP_25;
	WTP_23.Add(WTP_24);
	WTP_19->Slot = WTP_18;
	WTP_19->RenderTransform.Translation = FVector2D(1360.000000, 800.000000);
	WTP_18->Content = WTP_19;
	WTP_11.Add(WTP_18);
	WTP_10->Slot = WTP_9;
	WTP_9->Content = WTP_10;
	WTP_6.Add(WTP_9);
	WidgetTree->RootWidget = CanvasPanel_0;
	auto WTP_27 = NewObject<UMovieScene>(watercan, TEXT("watercanlana1"), (EObjectFlags)0x00280008);
	auto& WTP_28 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((WTP_27), UMovieScene::__PPO__Possessables() )));
	WTP_28 = TArray<FMovieScenePossessable> ();
	WTP_28.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(WTP_28.GetData(), 4);
	auto& WTP_29 = WTP_28[0];
	auto& WTP_30 = (*(AccessPrivateProperty<FGuid >(&(WTP_29), FMovieScenePossessable::__PPO__Guid() )));
	WTP_30 = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& WTP_31 = (*(AccessPrivateProperty<FString >(&(WTP_29), FMovieScenePossessable::__PPO__Name() )));
	WTP_31 = FString(TEXT("water1"));
	auto& WTP_32 = (*(AccessPrivateProperty<UClass* >(&(WTP_29), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	WTP_32 = UImage::StaticClass();
	auto& WTP_33 = WTP_28[1];
	auto& WTP_34 = (*(AccessPrivateProperty<FGuid >(&(WTP_33), FMovieScenePossessable::__PPO__Guid() )));
	WTP_34 = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& WTP_35 = (*(AccessPrivateProperty<FString >(&(WTP_33), FMovieScenePossessable::__PPO__Name() )));
	WTP_35 = FString(TEXT("water2"));
	auto& WTP_36 = (*(AccessPrivateProperty<UClass* >(&(WTP_33), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	WTP_36 = UImage::StaticClass();
	auto& WTP_37 = WTP_28[2];
	auto& WTP_38 = (*(AccessPrivateProperty<FGuid >(&(WTP_37), FMovieScenePossessable::__PPO__Guid() )));
	WTP_38 = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& WTP_39 = (*(AccessPrivateProperty<FString >(&(WTP_37), FMovieScenePossessable::__PPO__Name() )));
	WTP_39 = FString(TEXT("water3"));
	auto& WTP_40 = (*(AccessPrivateProperty<UClass* >(&(WTP_37), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	WTP_40 = UImage::StaticClass();
	auto& WTP_41 = WTP_28[3];
	auto& WTP_42 = (*(AccessPrivateProperty<FGuid >(&(WTP_41), FMovieScenePossessable::__PPO__Guid() )));
	WTP_42 = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& WTP_43 = (*(AccessPrivateProperty<FString >(&(WTP_41), FMovieScenePossessable::__PPO__Name() )));
	WTP_43 = FString(TEXT("water4"));
	auto& WTP_44 = (*(AccessPrivateProperty<UClass* >(&(WTP_41), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	WTP_44 = UImage::StaticClass();
	auto& WTP_45 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((WTP_27), UMovieScene::__PPO__ObjectBindings() )));
	WTP_45 = TArray<FMovieSceneBinding> ();
	WTP_45.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(WTP_45.GetData(), 4);
	auto& WTP_46 = WTP_45[0];
	auto& WTP_47 = (*(AccessPrivateProperty<FGuid >(&(WTP_46), FMovieSceneBinding::__PPO__ObjectGuid() )));
	WTP_47 = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& WTP_48 = (*(AccessPrivateProperty<FString >(&(WTP_46), FMovieSceneBinding::__PPO__BindingName() )));
	WTP_48 = FString(TEXT("watar"));
	auto& WTP_49 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(WTP_46), FMovieSceneBinding::__PPO__Tracks() )));
	WTP_49 = TArray<UMovieSceneTrack*> ();
	WTP_49.Reserve(1);
	auto WTP_50 = NewObject<UMovieScene2DTransformTrack>(WTP_27, TEXT("MovieScene2DTransformTrack_7"), (EObjectFlags)0x00280008);
	auto& WTP_51 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((WTP_50), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	WTP_51.PropertyName = FName(TEXT("RenderTransform"));
	WTP_51.PropertyPath = FName(TEXT("RenderTransform"));
	WTP_51.bCanUseClassLookup = true;
	auto& WTP_52 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((WTP_50), UMovieScenePropertyTrack::__PPO__Sections() )));
	WTP_52 = TArray<UMovieSceneSection*> ();
	WTP_52.Reserve(1);
	auto WTP_53 = NewObject<UMovieScene2DTransformSection>(WTP_50, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto WTP_54 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_53->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto WTP_55 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_53->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	auto& WTP_56 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_56 = TArray<FFrameNumber> ();
	WTP_56.Reserve(5);
	WTP_56.Add(FFrameNumber{});
	WTP_56[0].Value = 3000;
	WTP_56.Add(FFrameNumber{});
	WTP_56[1].Value = 6000;
	WTP_56.Add(FFrameNumber{});
	WTP_56[2].Value = 9000;
	WTP_56.Add(FFrameNumber{});
	WTP_56[3].Value = 12000;
	WTP_56.Add(FFrameNumber{});
	WTP_56[4].Value = 15000;
	auto& WTP_57 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_57 = TArray<FMovieSceneFloatValue> ();
	WTP_57.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_57.GetData(), 5);
	auto& WTP_58 = WTP_57[0];
	WTP_58.Value = -142.5f;
	auto& WTP_59 = WTP_57[1];
	WTP_59.Value = -148.2f;
	WTP_59.Tangent.ArriveTangent = 0.0f;
	WTP_59.Tangent.LeaveTangent = 0.0f;
	auto& WTP_60 = WTP_57[2];
	WTP_60.Value = -165.2f;
	WTP_60.Tangent.ArriveTangent = 0.0f;
	WTP_60.Tangent.LeaveTangent = 0.0f;
	auto& WTP_61 = WTP_57[3];
	WTP_61.Value = -178.7f;
	WTP_61.Tangent.ArriveTangent = 0.0f;
	WTP_61.Tangent.LeaveTangent = 0.0f;
	auto& WTP_62 = WTP_57[4];
	WTP_62.Value = -183.7f;
	auto& WTP_63 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_63 = TArray<FFrameNumber> ();
	WTP_63.Reserve(5);
	WTP_63.Add(FFrameNumber{});
	WTP_63[0].Value = 3000;
	WTP_63.Add(FFrameNumber{});
	WTP_63[1].Value = 6000;
	WTP_63.Add(FFrameNumber{});
	WTP_63[2].Value = 9000;
	WTP_63.Add(FFrameNumber{});
	WTP_63[3].Value = 12000;
	WTP_63.Add(FFrameNumber{});
	WTP_63[4].Value = 15000;
	auto& WTP_64 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_64 = TArray<FMovieSceneFloatValue> ();
	WTP_64.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_64.GetData(), 5);
	auto& WTP_65 = WTP_64[0];
	WTP_65.Value = -40.361000f;
	auto& WTP_66 = WTP_64[1];
	WTP_66.Value = -37.611565f;
	WTP_66.Tangent.ArriveTangent = 0.0f;
	WTP_66.Tangent.LeaveTangent = 0.0f;
	auto& WTP_67 = WTP_64[2];
	WTP_67.Value = -31.073494f;
	WTP_67.Tangent.ArriveTangent = 0.0f;
	WTP_67.Tangent.LeaveTangent = 0.0f;
	auto& WTP_68 = WTP_64[3];
	WTP_68.Value = -21.410742f;
	WTP_68.Tangent.ArriveTangent = 0.0f;
	WTP_68.Tangent.LeaveTangent = 0.0f;
	auto& WTP_69 = WTP_64[4];
	WTP_69.Value = -12.7f;
	auto& WTP_70 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_70 = TArray<FFrameNumber> ();
	WTP_70.Reserve(1);
	WTP_70.Add(FFrameNumber{});
	WTP_70[0].Value = 3000;
	auto& WTP_71 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_71 = TArray<FMovieSceneFloatValue> ();
	WTP_71.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_71.GetData(), 1);
	auto& WTP_72 = WTP_71[0];
	auto& WTP_73 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_73 = TArray<FFrameNumber> ();
	WTP_73.Reserve(1);
	WTP_73.Add(FFrameNumber{});
	WTP_73[0].Value = 3000;
	auto& WTP_74 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_74 = TArray<FMovieSceneFloatValue> ();
	WTP_74.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_74.GetData(), 1);
	auto& WTP_75 = WTP_74[0];
	WTP_75.Value = 0.500000f;
	auto& WTP_76 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_76 = TArray<FFrameNumber> ();
	WTP_76.Reserve(1);
	WTP_76.Add(FFrameNumber{});
	WTP_76[0].Value = 3000;
	auto& WTP_77 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_77 = TArray<FMovieSceneFloatValue> ();
	WTP_77.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_77.GetData(), 1);
	auto& WTP_78 = WTP_77[0];
	WTP_78.Value = 0.500000f;
	auto& WTP_79 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_79 = TArray<FFrameNumber> ();
	WTP_79.Reserve(1);
	WTP_79.Add(FFrameNumber{});
	WTP_79[0].Value = 3000;
	auto& WTP_80 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_80 = TArray<FMovieSceneFloatValue> ();
	WTP_80.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_80.GetData(), 1);
	auto& WTP_81 = WTP_80[0];
	auto& WTP_82 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_53->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_82 = TArray<FFrameNumber> ();
	WTP_82.Reserve(1);
	WTP_82.Add(FFrameNumber{});
	WTP_82[0].Value = 3000;
	auto& WTP_83 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_53->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_83 = TArray<FMovieSceneFloatValue> ();
	WTP_83.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_83.GetData(), 1);
	auto& WTP_84 = WTP_83[0];
	WTP_53->Easing.EaseIn = WTP_54;
	WTP_53->Easing.EaseOut = WTP_55;
	WTP_53->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& WTP_85 = (*(AccessPrivateProperty<FGuid >((WTP_53), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_85 = FGuid(0x242F896E, 0x435251C2, 0x168B2DB8, 0x9233602C);
	WTP_52.Add(WTP_53);
	auto& WTP_86 = (*(AccessPrivateProperty<FGuid >((WTP_50), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	WTP_86 = FGuid(0xD5E424EE, 0x46EB4DFE, 0x480BC789, 0x9F3E59CA);
	auto& WTP_87 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((WTP_50), UMovieSceneTrack::__PPO__EvaluationField() )));
	WTP_87.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	WTP_87.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(WTP_87.Entries.GetData(), 1);
	auto& WTP_88 = WTP_87.Entries[0];
	WTP_88.Section = WTP_53;
	static TWeakFieldPtr<FProperty> WTP_90{};
	const FProperty* WTP_89 = WTP_90.Get();
	if (nullptr == WTP_89)
	{
		WTP_89 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(WTP_89);
		WTP_90 = WTP_89;
	}
	auto& WTP_91 = (*(WTP_89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_88.Range), 0)));
	static TWeakFieldPtr<FProperty> WTP_93{};
	const FProperty* WTP_92 = WTP_93.Get();
	if (nullptr == WTP_92)
	{
		WTP_92 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(WTP_92);
		WTP_93 = WTP_92;
	}
	auto& WTP_94 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_91), 0)));
	WTP_94 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> WTP_96{};
	const FProperty* WTP_95 = WTP_96.Get();
	if (nullptr == WTP_95)
	{
		WTP_95 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(WTP_95);
		WTP_96 = WTP_95;
	}
	auto& WTP_97 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_91), 0)));
	WTP_97.Value = 3000;
	static TWeakFieldPtr<FProperty> WTP_99{};
	const FProperty* WTP_98 = WTP_99.Get();
	if (nullptr == WTP_98)
	{
		WTP_98 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(WTP_98);
		WTP_99 = WTP_98;
	}
	auto& WTP_100 = (*(WTP_98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_88.Range), 0)));
	auto& WTP_101 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_100), 0)));
	WTP_101 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_102 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_100), 0)));
	WTP_102.Value = 15000;
	WTP_88.ForcedTime.Value = (-2 - 1);
	auto& WTP_103 = (*(AccessPrivateProperty<FGuid >((WTP_50), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_103 = FGuid(0xD5E424EE, 0x46EB4DFE, 0x480BC789, 0x9F3E59CA);
	WTP_49.Add(WTP_50);
	auto& WTP_104 = WTP_45[1];
	auto& WTP_105 = (*(AccessPrivateProperty<FGuid >(&(WTP_104), FMovieSceneBinding::__PPO__ObjectGuid() )));
	WTP_105 = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& WTP_106 = (*(AccessPrivateProperty<FString >(&(WTP_104), FMovieSceneBinding::__PPO__BindingName() )));
	WTP_106 = FString(TEXT("water2"));
	auto& WTP_107 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(WTP_104), FMovieSceneBinding::__PPO__Tracks() )));
	WTP_107 = TArray<UMovieSceneTrack*> ();
	WTP_107.Reserve(1);
	auto WTP_108 = NewObject<UMovieScene2DTransformTrack>(WTP_27, TEXT("MovieScene2DTransformTrack_8"), (EObjectFlags)0x00280008);
	auto& WTP_109 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((WTP_108), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	WTP_109.PropertyName = FName(TEXT("RenderTransform"));
	WTP_109.PropertyPath = FName(TEXT("RenderTransform"));
	WTP_109.bCanUseClassLookup = true;
	auto& WTP_110 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((WTP_108), UMovieScenePropertyTrack::__PPO__Sections() )));
	WTP_110 = TArray<UMovieSceneSection*> ();
	WTP_110.Reserve(1);
	auto WTP_111 = NewObject<UMovieScene2DTransformSection>(WTP_108, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto WTP_112 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_111->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto WTP_113 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_111->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	auto& WTP_114 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_114 = TArray<FFrameNumber> ();
	WTP_114.Reserve(5);
	WTP_114.Add(FFrameNumber{});
	WTP_114[0].Value = 3000;
	WTP_114.Add(FFrameNumber{});
	WTP_114[1].Value = 6000;
	WTP_114.Add(FFrameNumber{});
	WTP_114[2].Value = 9000;
	WTP_114.Add(FFrameNumber{});
	WTP_114[3].Value = 12000;
	WTP_114.Add(FFrameNumber{});
	WTP_114[4].Value = 15000;
	auto& WTP_115 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_115 = TArray<FMovieSceneFloatValue> ();
	WTP_115.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_115.GetData(), 5);
	auto& WTP_116 = WTP_115[0];
	WTP_116.Value = -142.5f;
	auto& WTP_117 = WTP_115[1];
	WTP_117.Value = -148.2f;
	WTP_117.Tangent.ArriveTangent = 0.0f;
	WTP_117.Tangent.LeaveTangent = 0.0f;
	auto& WTP_118 = WTP_115[2];
	WTP_118.Value = -165.271164f;
	WTP_118.Tangent.ArriveTangent = 0.0f;
	WTP_118.Tangent.LeaveTangent = 0.0f;
	auto& WTP_119 = WTP_115[3];
	WTP_119.Value = -178.786102f;
	WTP_119.Tangent.ArriveTangent = 0.0f;
	WTP_119.Tangent.LeaveTangent = 0.0f;
	auto& WTP_120 = WTP_115[4];
	WTP_120.Value = -183.7f;
	auto& WTP_121 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_121 = TArray<FFrameNumber> ();
	WTP_121.Reserve(5);
	WTP_121.Add(FFrameNumber{});
	WTP_121[0].Value = 3000;
	WTP_121.Add(FFrameNumber{});
	WTP_121[1].Value = 6000;
	WTP_121.Add(FFrameNumber{});
	WTP_121[2].Value = 9000;
	WTP_121.Add(FFrameNumber{});
	WTP_121[3].Value = 12000;
	WTP_121.Add(FFrameNumber{});
	WTP_121[4].Value = 15000;
	auto& WTP_122 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_122 = TArray<FMovieSceneFloatValue> ();
	WTP_122.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_122.GetData(), 5);
	auto& WTP_123 = WTP_122[0];
	WTP_123.Value = -40.3f;
	auto& WTP_124 = WTP_122[1];
	WTP_124.Value = -37.6f;
	WTP_124.Tangent.ArriveTangent = 0.0f;
	WTP_124.Tangent.LeaveTangent = 0.0f;
	auto& WTP_125 = WTP_122[2];
	WTP_125.Value = -31.0f;
	WTP_125.Tangent.ArriveTangent = 0.0f;
	WTP_125.Tangent.LeaveTangent = 0.0f;
	auto& WTP_126 = WTP_122[3];
	WTP_126.Value = -21.4f;
	WTP_126.Tangent.ArriveTangent = 0.0f;
	WTP_126.Tangent.LeaveTangent = 0.0f;
	auto& WTP_127 = WTP_122[4];
	WTP_127.Value = -12.7f;
	auto& WTP_128 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_128 = TArray<FFrameNumber> ();
	WTP_128.Reserve(1);
	WTP_128.Add(FFrameNumber{});
	WTP_128[0].Value = 3000;
	auto& WTP_129 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_129 = TArray<FMovieSceneFloatValue> ();
	WTP_129.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_129.GetData(), 1);
	auto& WTP_130 = WTP_129[0];
	auto& WTP_131 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_131 = TArray<FFrameNumber> ();
	WTP_131.Reserve(1);
	WTP_131.Add(FFrameNumber{});
	WTP_131[0].Value = 3000;
	auto& WTP_132 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_132 = TArray<FMovieSceneFloatValue> ();
	WTP_132.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_132.GetData(), 1);
	auto& WTP_133 = WTP_132[0];
	WTP_133.Value = 0.500000f;
	auto& WTP_134 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_134 = TArray<FFrameNumber> ();
	WTP_134.Reserve(1);
	WTP_134.Add(FFrameNumber{});
	WTP_134[0].Value = 3000;
	auto& WTP_135 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_135 = TArray<FMovieSceneFloatValue> ();
	WTP_135.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_135.GetData(), 1);
	auto& WTP_136 = WTP_135[0];
	WTP_136.Value = 0.500000f;
	auto& WTP_137 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_137 = TArray<FFrameNumber> ();
	WTP_137.Reserve(1);
	WTP_137.Add(FFrameNumber{});
	WTP_137[0].Value = 3000;
	auto& WTP_138 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_138 = TArray<FMovieSceneFloatValue> ();
	WTP_138.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_138.GetData(), 1);
	auto& WTP_139 = WTP_138[0];
	auto& WTP_140 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_111->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_140 = TArray<FFrameNumber> ();
	WTP_140.Reserve(1);
	WTP_140.Add(FFrameNumber{});
	WTP_140[0].Value = 3000;
	auto& WTP_141 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_111->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_141 = TArray<FMovieSceneFloatValue> ();
	WTP_141.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_141.GetData(), 1);
	auto& WTP_142 = WTP_141[0];
	WTP_111->Easing.EaseIn = WTP_112;
	WTP_111->Easing.EaseOut = WTP_113;
	WTP_111->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& WTP_143 = (*(AccessPrivateProperty<FGuid >((WTP_111), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_143 = FGuid(0xAB116922, 0x4FED8265, 0xB9365A95, 0x0AF4644C);
	WTP_110.Add(WTP_111);
	auto& WTP_144 = (*(AccessPrivateProperty<FGuid >((WTP_108), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	WTP_144 = FGuid(0x4EB7BA49, 0x4E70ED3C, 0x579BFB89, 0xB045C62A);
	auto& WTP_145 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((WTP_108), UMovieSceneTrack::__PPO__EvaluationField() )));
	WTP_145.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	WTP_145.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(WTP_145.Entries.GetData(), 1);
	auto& WTP_146 = WTP_145.Entries[0];
	WTP_146.Section = WTP_111;
	auto& WTP_147 = (*(WTP_89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_146.Range), 0)));
	auto& WTP_148 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_147), 0)));
	WTP_148 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_149 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_147), 0)));
	WTP_149.Value = 3000;
	auto& WTP_150 = (*(WTP_98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_146.Range), 0)));
	auto& WTP_151 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_150), 0)));
	WTP_151 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_152 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_150), 0)));
	WTP_152.Value = 15000;
	WTP_146.ForcedTime.Value = (-2147483647 - 1);
	auto& WTP_153 = (*(AccessPrivateProperty<FGuid >((WTP_108), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_153 = FGuid(0x4EB7BA49, 0x4E70ED3C, 0x579BFB89, 0xB045C62A);
	WTP_107.Add(WTP_108);
	auto& WTP_154 = WTP_45[2];
	auto& WTP_155 = (*(AccessPrivateProperty<FGuid >(&(WTP_154), FMovieSceneBinding::__PPO__ObjectGuid() )));
	WTP_155 = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& WTP_156 = (*(AccessPrivateProperty<FString >(&(WTP_154), FMovieSceneBinding::__PPO__BindingName() )));
	WTP_156 = FString(TEXT("water3"));
	auto& WTP_157 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(WTP_154), FMovieSceneBinding::__PPO__Tracks() )));
	WTP_157 = TArray<UMovieSceneTrack*> ();
	WTP_157.Reserve(1);
	auto WTP_158 = NewObject<UMovieScene2DTransformTrack>(WTP_27, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& WTP_159 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((WTP_158), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	WTP_159.PropertyName = FName(TEXT("RenderTransform"));
	WTP_159.PropertyPath = FName(TEXT("RenderTransform"));
	WTP_159.bCanUseClassLookup = true;
	auto& WTP_160 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((WTP_158), UMovieScenePropertyTrack::__PPO__Sections() )));
	WTP_160 = TArray<UMovieSceneSection*> ();
	WTP_160.Reserve(1);
	auto WTP_161 = NewObject<UMovieScene2DTransformSection>(WTP_158, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto WTP_162 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_161->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto WTP_163 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_161->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	auto& WTP_164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_164 = TArray<FFrameNumber> ();
	WTP_164.Reserve(5);
	WTP_164.Add(FFrameNumber{});
	WTP_164[0].Value = 3000;
	WTP_164.Add(FFrameNumber{});
	WTP_164[1].Value = 6000;
	WTP_164.Add(FFrameNumber{});
	WTP_164[2].Value = 9000;
	WTP_164.Add(FFrameNumber{});
	WTP_164[3].Value = 12000;
	WTP_164.Add(FFrameNumber{});
	WTP_164[4].Value = 15000;
	auto& WTP_165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_165 = TArray<FMovieSceneFloatValue> ();
	WTP_165.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_165.GetData(), 5);
	auto& WTP_166 = WTP_165[0];
	WTP_166.Value = -142.5f;
	auto& WTP_167 = WTP_165[1];
	WTP_167.Value = -148.2f;
	WTP_167.Tangent.ArriveTangent = 0.0f;
	WTP_167.Tangent.LeaveTangent = 0.0f;
	auto& WTP_168 = WTP_165[2];
	WTP_168.Value = -165.271164f;
	WTP_168.Tangent.ArriveTangent = 0.0f;
	WTP_168.Tangent.LeaveTangent = 0.0f;
	auto& WTP_169 = WTP_165[3];
	WTP_169.Value = -178.786102f;
	WTP_169.Tangent.ArriveTangent = 0.0f;
	WTP_169.Tangent.LeaveTangent = 0.0f;
	auto& WTP_170 = WTP_165[4];
	WTP_170.Value = -183.7f;
	auto& WTP_171 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_171 = TArray<FFrameNumber> ();
	WTP_171.Reserve(5);
	WTP_171.Add(FFrameNumber{});
	WTP_171[0].Value = 3000;
	WTP_171.Add(FFrameNumber{});
	WTP_171[1].Value = 6000;
	WTP_171.Add(FFrameNumber{});
	WTP_171[2].Value = 9000;
	WTP_171.Add(FFrameNumber{});
	WTP_171[3].Value = 12000;
	WTP_171.Add(FFrameNumber{});
	WTP_171[4].Value = 15000;
	auto& WTP_172 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_172 = TArray<FMovieSceneFloatValue> ();
	WTP_172.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_172.GetData(), 5);
	auto& WTP_173 = WTP_172[0];
	WTP_173.Value = -40.3f;
	auto& WTP_174 = WTP_172[1];
	WTP_174.Value = -37.6f;
	WTP_174.Tangent.ArriveTangent = 0.0f;
	WTP_174.Tangent.LeaveTangent = 0.0f;
	auto& WTP_175 = WTP_172[2];
	WTP_175.Value = -31.0f;
	WTP_175.Tangent.ArriveTangent = 0.0f;
	WTP_175.Tangent.LeaveTangent = 0.0f;
	auto& WTP_176 = WTP_172[3];
	WTP_176.Value = -21.4f;
	WTP_176.Tangent.ArriveTangent = 0.0f;
	WTP_176.Tangent.LeaveTangent = 0.0f;
	auto& WTP_177 = WTP_172[4];
	WTP_177.Value = -12.7f;
	auto& WTP_178 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_178 = TArray<FFrameNumber> ();
	WTP_178.Reserve(1);
	WTP_178.Add(FFrameNumber{});
	WTP_178[0].Value = 3000;
	auto& WTP_179 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_179 = TArray<FMovieSceneFloatValue> ();
	WTP_179.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_179.GetData(), 1);
	auto& WTP_180 = WTP_179[0];
	auto& WTP_181 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_181 = TArray<FFrameNumber> ();
	WTP_181.Reserve(1);
	WTP_181.Add(FFrameNumber{});
	WTP_181[0].Value = 3000;
	auto& WTP_182 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_182 = TArray<FMovieSceneFloatValue> ();
	WTP_182.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_182.GetData(), 1);
	auto& WTP_183 = WTP_182[0];
	WTP_183.Value = 0.5f;
	auto& WTP_184 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_184 = TArray<FFrameNumber> ();
	WTP_184.Reserve(1);
	WTP_184.Add(FFrameNumber{});
	WTP_184[0].Value = 3000;
	auto& WTP_185 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_185 = TArray<FMovieSceneFloatValue> ();
	WTP_185.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_185.GetData(), 1);
	auto& WTP_186 = WTP_185[0];
	WTP_186.Value = 0.5f;
	auto& WTP_187 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_187 = TArray<FFrameNumber> ();
	WTP_187.Reserve(1);
	WTP_187.Add(FFrameNumber{});
	WTP_187[0].Value = 3000;
	auto& WTP_188 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_188 = TArray<FMovieSceneFloatValue> ();
	WTP_188.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_188.GetData(), 1);
	auto& WTP_189 = WTP_188[0];
	auto& WTP_190 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_161->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_190 = TArray<FFrameNumber> ();
	WTP_190.Reserve(1);
	WTP_190.Add(FFrameNumber{});
	WTP_190[0].Value = 3000;
	auto& WTP_191 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_161->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_191 = TArray<FMovieSceneFloatValue> ();
	WTP_191.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_191.GetData(), 1);
	auto& WTP_192 = WTP_191[0];
	WTP_161->Easing.EaseIn = WTP_162;
	WTP_161->Easing.EaseOut = WTP_163;
	WTP_161->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& WTP_193 = (*(AccessPrivateProperty<FGuid >((WTP_161), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_193 = FGuid(0x83407DAD, 0x4B217B8E, 0xE34913A6, 0x536E93A4);
	WTP_160.Add(WTP_161);
	auto& WTP_194 = (*(AccessPrivateProperty<FGuid >((WTP_158), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	WTP_194 = FGuid(0x5D5B1B74, 0x41FC8A08, 0xA46CA398, 0x0AB5F93C);
	auto& WTP_195 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((WTP_158), UMovieSceneTrack::__PPO__EvaluationField() )));
	WTP_195.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	WTP_195.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(WTP_195.Entries.GetData(), 1);
	auto& WTP_196 = WTP_195.Entries[0];
	WTP_196.Section = WTP_161;
	auto& WTP_197 = (*(WTP_89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_196.Range), 0)));
	auto& WTP_198 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_197), 0)));
	WTP_198 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_199 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_197), 0)));
	WTP_199.Value = 3000;
	auto& WTP_200 = (*(WTP_98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_196.Range), 0)));
	auto& WTP_201 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_200), 0)));
	WTP_201 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_202 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_200), 0)));
	WTP_202.Value = 15000;
	WTP_196.ForcedTime.Value = (-2147483647 - 1);
	auto& WTP_203 = (*(AccessPrivateProperty<FGuid >((WTP_158), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_203 = FGuid(0x5D5B1B74, 0x41FC8A08, 0xA46CA398, 0x0AB5F93C);
	WTP_157.Add(WTP_158);
	auto& WTP_204 = WTP_45[3];
	auto& WTP_205 = (*(AccessPrivateProperty<FGuid >(&(WTP_204), FMovieSceneBinding::__PPO__ObjectGuid() )));
	WTP_205 = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& WTP_206 = (*(AccessPrivateProperty<FString >(&(WTP_204), FMovieSceneBinding::__PPO__BindingName() )));
	WTP_206 = FString(TEXT("water4"));
	auto& WTP_207 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(WTP_204), FMovieSceneBinding::__PPO__Tracks() )));
	WTP_207 = TArray<UMovieSceneTrack*> ();
	WTP_207.Reserve(1);
	auto WTP_208 = NewObject<UMovieScene2DTransformTrack>(WTP_27, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& WTP_209 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((WTP_208), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	WTP_209.PropertyName = FName(TEXT("RenderTransform"));
	WTP_209.PropertyPath = FName(TEXT("RenderTransform"));
	WTP_209.bCanUseClassLookup = true;
	auto& WTP_210 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((WTP_208), UMovieScenePropertyTrack::__PPO__Sections() )));
	WTP_210 = TArray<UMovieSceneSection*> ();
	WTP_210.Reserve(1);
	auto WTP_211 = NewObject<UMovieScene2DTransformSection>(WTP_208, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto WTP_212 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_211->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto WTP_213 = CastChecked<UMovieSceneBuiltInEasingFunction>(WTP_211->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	auto& WTP_214 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_214 = TArray<FFrameNumber> ();
	WTP_214.Reserve(5);
	WTP_214.Add(FFrameNumber{});
	WTP_214[0].Value = 3000;
	WTP_214.Add(FFrameNumber{});
	WTP_214[1].Value = 6000;
	WTP_214.Add(FFrameNumber{});
	WTP_214[2].Value = 9000;
	WTP_214.Add(FFrameNumber{});
	WTP_214[3].Value = 12000;
	WTP_214.Add(FFrameNumber{});
	WTP_214[4].Value = 15000;
	auto& WTP_215 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_215 = TArray<FMovieSceneFloatValue> ();
	WTP_215.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_215.GetData(), 5);
	auto& WTP_216 = WTP_215[0];
	WTP_216.Value = -142.4f;
	auto& WTP_217 = WTP_215[1];
	WTP_217.Value = -148.2f;
	WTP_217.Tangent.ArriveTangent = -0.0f;
	WTP_217.Tangent.LeaveTangent = -0.0f;
	auto& WTP_218 = WTP_215[2];
	WTP_218.Value = -165.2f;
	WTP_218.Tangent.ArriveTangent = -0.0f;
	WTP_218.Tangent.LeaveTangent = -0.0f;
	auto& WTP_219 = WTP_215[3];
	WTP_219.Value = -178.7f;
	WTP_219.Tangent.ArriveTangent = -0.0f;
	WTP_219.Tangent.LeaveTangent = -0.0f;
	auto& WTP_220 = WTP_215[4];
	WTP_220.Value = -183.7f;
	auto& WTP_221 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_221 = TArray<FFrameNumber> ();
	WTP_221.Reserve(5);
	WTP_221.Add(FFrameNumber{});
	WTP_221[0].Value = 3000;
	WTP_221.Add(FFrameNumber{});
	WTP_221[1].Value = 6000;
	WTP_221.Add(FFrameNumber{});
	WTP_221[2].Value = 9000;
	WTP_221.Add(FFrameNumber{});
	WTP_221[3].Value = 12000;
	WTP_221.Add(FFrameNumber{});
	WTP_221[4].Value = 15000;
	auto& WTP_222 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_222 = TArray<FMovieSceneFloatValue> ();
	WTP_222.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_222.GetData(), 5);
	auto& WTP_223 = WTP_222[0];
	WTP_223.Value = -40.3f;
	auto& WTP_224 = WTP_222[1];
	WTP_224.Value = -37.6f;
	WTP_224.Tangent.ArriveTangent = 0.0f;
	WTP_224.Tangent.LeaveTangent = 0.0f;
	auto& WTP_225 = WTP_222[2];
	WTP_225.Value = -31.0f;
	WTP_225.Tangent.ArriveTangent = 0.0f;
	WTP_225.Tangent.LeaveTangent = 0.0f;
	auto& WTP_226 = WTP_222[3];
	WTP_226.Value = -21.4f;
	WTP_226.Tangent.ArriveTangent = 0.0f;
	WTP_226.Tangent.LeaveTangent = 0.0f;
	auto& WTP_227 = WTP_222[4];
	WTP_227.Value = -12.7f;
	auto& WTP_228 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_228 = TArray<FFrameNumber> ();
	WTP_228.Reserve(1);
	WTP_228.Add(FFrameNumber{});
	WTP_228[0].Value = 3000;
	auto& WTP_229 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_229 = TArray<FMovieSceneFloatValue> ();
	WTP_229.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_229.GetData(), 1);
	auto& WTP_230 = WTP_229[0];
	auto& WTP_231 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_231 = TArray<FFrameNumber> ();
	WTP_231.Reserve(1);
	WTP_231.Add(FFrameNumber{});
	WTP_231[0].Value = 3000;
	auto& WTP_232 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_232 = TArray<FMovieSceneFloatValue> ();
	WTP_232.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_232.GetData(), 1);
	auto& WTP_233 = WTP_232[0];
	WTP_233.Value = 0.500000f;
	auto& WTP_234 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_234 = TArray<FFrameNumber> ();
	WTP_234.Reserve(1);
	WTP_234.Add(FFrameNumber{});
	WTP_234[0].Value = 3000;
	auto& WTP_235 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_235 = TArray<FMovieSceneFloatValue> ();
	WTP_235.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_235.GetData(), 1);
	auto& WTP_236 = WTP_235[0];
	WTP_236.Value = 0.500000f;
	auto& WTP_237 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_237 = TArray<FFrameNumber> ();
	WTP_237.Reserve(1);
	WTP_237.Add(FFrameNumber{});
	WTP_237[0].Value = 3000;
	auto& WTP_238 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_238 = TArray<FMovieSceneFloatValue> ();
	WTP_238.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_238.GetData(), 1);
	auto& WTP_239 = WTP_238[0];
	auto& WTP_240 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(WTP_211->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	WTP_240 = TArray<FFrameNumber> ();
	WTP_240.Reserve(1);
	WTP_240.Add(FFrameNumber{});
	WTP_240[0].Value = 3000;
	auto& WTP_241 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(WTP_211->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	WTP_241 = TArray<FMovieSceneFloatValue> ();
	WTP_241.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(WTP_241.GetData(), 1);
	auto& WTP_242 = WTP_241[0];
	WTP_211->Easing.EaseIn = WTP_212;
	WTP_211->Easing.EaseOut = WTP_213;
	WTP_211->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& WTP_243 = (*(AccessPrivateProperty<FGuid >((WTP_211), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_243 = FGuid(0x17B1838C, 0x43037749, 0xFC5B10BC, 0x9FB37017);
	WTP_210.Add(WTP_211);
	auto& WTP_244 = (*(AccessPrivateProperty<FGuid >((WTP_208), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	WTP_244 = FGuid(0x9D62A37B, 0x4ECFCE41, 0xB81E12AC, 0xD0047F94);
	auto& WTP_245 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((WTP_208), UMovieSceneTrack::__PPO__EvaluationField() )));
	WTP_245.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	WTP_245.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(WTP_245.Entries.GetData(), 1);
	auto& WTP_246 = WTP_245.Entries[0];
	WTP_246.Section = WTP_211;
	auto& WTP_247 = (*(WTP_89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_246.Range), 0)));
	auto& WTP_248 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_247), 0)));
	WTP_248 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_249 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_247), 0)));
	WTP_249.Value = 3000;
	auto& WTP_250 = (*(WTP_98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(WTP_246.Range), 0)));
	auto& WTP_251 = (*(WTP_92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(WTP_250), 0)));
	WTP_251 = ERangeBoundTypes::Type::Inclusive;
	auto& WTP_252 = (*(WTP_95->ContainerPtrToValuePtr<FFrameNumber >(&(WTP_250), 0)));
	WTP_252.Value = 15000;
	WTP_246.ForcedTime.Value = (-2147483647 - 1);
	auto& WTP_253 = (*(AccessPrivateProperty<FGuid >((WTP_208), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_253 = FGuid(0x9D62A37B, 0x4ECFCE41, 0xB81E12AC, 0xD0047F94);
	WTP_207.Add(WTP_208);
	auto& WTP_254 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((WTP_27), UMovieScene::__PPO__PlaybackRange() )));
	WTP_254 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Exclusive(15001)));
	auto& WTP_255 = (*(AccessPrivateProperty<FFrameRate >((WTP_27), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> WTP_257{};
	const FProperty* WTP_256 = WTP_257.Get();
	if (nullptr == WTP_256)
	{
		WTP_256 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(WTP_256);
		WTP_257 = WTP_256;
	}
	auto& WTP_258 = (*(WTP_256->ContainerPtrToValuePtr<int32 >(&(WTP_255), 0)));
	WTP_258 = 20;
	auto& WTP_259 = (*(AccessPrivateProperty<FGuid >((WTP_27), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_259 = FGuid(0xDAAABCBB, 0x4335CD6D, 0xCE3895B7, 0x37883FC5);
	watercan->MovieScene = WTP_27;
	watercan->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	watercan->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(watercan->AnimationBindings.GetData(), 4);
	auto& WTP_260 = watercan->AnimationBindings[0];
	WTP_260.WidgetName = FName(TEXT("water1"));
	WTP_260.AnimationGuid = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& WTP_261 = watercan->AnimationBindings[1];
	WTP_261.WidgetName = FName(TEXT("water2"));
	WTP_261.AnimationGuid = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& WTP_262 = watercan->AnimationBindings[2];
	WTP_262.WidgetName = FName(TEXT("water3"));
	WTP_262.AnimationGuid = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& WTP_263 = watercan->AnimationBindings[3];
	WTP_263.WidgetName = FName(TEXT("water4"));
	WTP_263.AnimationGuid = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& WTP_264 = (*(AccessPrivateProperty<FString >((watercan), UWidgetAnimation::__PPO__DisplayLabel() )));
	WTP_264 = FString(TEXT("watercanlana1"));
	watercan->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& WTP_265 = (*(AccessPrivateProperty<FGuid >((watercan), UMovieSceneSignedObject::__PPO__Signature() )));
	WTP_265 = FGuid(0xD16F9496, 0x4C2824A1, 0x49AEB8A5, 0xFF285E57);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(watercan);
}
PRAGMA_ENABLE_OPTIMIZATION
void UWateringPlants::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  WTP_266;
	SlotNames.Append(WTP_266);
}
void UWateringPlants::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  WTP_267;
	WTP_267.Reserve(1);
	WTP_267.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  WTP_268;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->MiscConvertedSubobjects[0]), WTP_267, WTP_268);
}
void UWateringPlants::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWateringPlants::SetDefault(int32 EntryPoint)
{
	FVector2D CallFunc_GetMousePositionOnViewport(EForceInit::ForceInit);
	FVector CallFunc_Conv_Vector2DToVector(EForceInit::ForceInit);
	float CallFunc_GetGlobalTimeDilation{};
	float CallFunc_Divide_FloatFloat{};
	float CallFunc_Multiply_FloatFloat{};
	bool CallFunc_LessEqual_FloatFloat{};
	float CallFunc_Add_FloatFloat{};
	FVector CallFunc_MakeVector(EForceInit::ForceInit);
	FVector CallFunc_Subtract_VectorVector(EForceInit::ForceInit);
	int32 CallFunc_Percent_IntInt{};
	float CallFunc_VSize{};
	bool CallFunc_LessEqual_FloatFloat_1{};
	int32 CallFunc_Add_IntInt{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = EntryPoint;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				Done = true;
			}
		case 2:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(3, 125272006, TEXT("SetDefault"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 3:
			{
				CurrentState = 4;
				break;
			}
		case 4:
			{
				RemoveFromParent();
			}
		case 5:
			{
				UStatsTrackerLib_BP_C2132744816::AddStats(FString(TEXT("Money")), 7.000000, this);
			}
		case 6:
			{
				UStatsTrackerLib_BP_C2132744816::AddStats(FString(TEXT("Energy")), -8.000000, this);
			}
		case 7:
			{
				UStatsTrackerLib_BP_C2132744816::SetStats(FString(TEXT("ISUIOPENED")), 0.000000, this);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 8:
			{
				CurrentState = 9;
				break;
			}
		case 9:
			{
				CallFunc_Add_IntInt = UKismetMathLibrary::Add_IntInt(DripAnimateIndex, 1);
				DripAnimateIndex = CallFunc_Add_IntInt;
			}
		case 10:
			{
				CallFunc_Percent_IntInt = UKismetMathLibrary::Percent_IntInt(DripAnimateIndex, 3);
				FCustomThunkTemplates::Array_Get(DripSpritesTexture, CallFunc_Percent_IntInt, Get_Item);
				if(::IsValid(WaterDrip))
				{
					WaterDrip->SetBrushFromTexture(Get_Item, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 11:
			{
				StateStack.Push(14);
			}
		case 12:
			{
				StateStack.Push(25);
			}
		case 13:
			{
				if (!Has_Been_Initd)
				{
					CurrentState = 30;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 14:
			{
				if (!gate_open_or_close)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 15:
			{
				CallFunc_GetMousePositionOnViewport = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
			}
		case 16:
			{
				WidgetTransform_1.Translation = CallFunc_GetMousePositionOnViewport;
				WidgetTransform_1.Scale = FVector2D(1.000000,1.000000);
				WidgetTransform_1.Shear = FVector2D(0.000000,0.000000);
				WidgetTransform_1.Angle = 0.000000;
				if(::IsValid(WateringCan))
				{
					WateringCan->UWidget::SetRenderTransform(WidgetTransform_1);
				}
			}
		case 17:
			{
				CallFunc_Conv_Vector2DToVector = UKismetMathLibrary::Conv_Vector2DToVector(CallFunc_GetMousePositionOnViewport, 0.000000);
				CallFunc_MakeVector = UKismetMathLibrary::MakeVector(800.000000, 450.000000, 0.000000);
				CallFunc_Subtract_VectorVector = UKismetMathLibrary::Subtract_VectorVector(CallFunc_MakeVector, CallFunc_Conv_Vector2DToVector);
				CallFunc_VSize = UKismetMathLibrary::VSize(CallFunc_Subtract_VectorVector);
				CallFunc_LessEqual_FloatFloat_1 = UKismetMathLibrary::LessEqual_FloatFloat(CallFunc_VSize, 200.000000);
				if (!CallFunc_LessEqual_FloatFloat_1)
				{
					CurrentState = 23;
					break;
				}
			}
		case 18:
			{
				CallFunc_LessEqual_FloatFloat = UKismetMathLibrary::LessEqual_FloatFloat(WateringTimer, 12.000000);
				if (!CallFunc_LessEqual_FloatFloat)
				{
					CurrentState = 33;
					break;
				}
			}
		case 19:
			{
				CallFunc_GetGlobalTimeDilation = UGameplayStatics::GetGlobalTimeDilation(this);
				CallFunc_Multiply_FloatFloat = UKismetMathLibrary::Multiply_FloatFloat(CallFunc_GetGlobalTimeDilation, InDeltaTime);
				CallFunc_Add_FloatFloat = UKismetMathLibrary::Add_FloatFloat(CallFunc_Multiply_FloatFloat, WateringTimer);
				WateringTimer = CallFunc_Add_FloatFloat;
			}
		case 20:
			{
				if(::IsValid(WateringCan))
				{
					WateringCan->UWidget::SetRenderTransformAngle(-70.000000);
				}
			}
		case 21:
			{
				if(::IsValid(WaterDrip))
				{
					WaterDrip->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 22:
			{
				CallFunc_GetGlobalTimeDilation = UGameplayStatics::GetGlobalTimeDilation(this);
				CallFunc_Divide_FloatFloat = FCustomThunkTemplates::Divide_FloatFloat(0.100000, CallFunc_GetGlobalTimeDilation);
				UKismetSystemLibrary::Delay(this, CallFunc_Divide_FloatFloat, FLatentActionInfo(8, -1605554632, TEXT("SetDefault"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 23:
			{
				if(::IsValid(WaterDrip))
				{
					WaterDrip->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 24:
			{
				if(::IsValid(WateringCan))
				{
					WateringCan->UWidget::SetRenderTransformAngle(0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 25:
			{
				if (!IsClosed)
				{
					CurrentState = 26;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 26:
			{
				IsClosed = true;
			}
		case 27:
			{
				if (!true)
				{
					CurrentState = 29;
					break;
				}
			}
		case 28:
			{
				gate_open_or_close = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 29:
			{
				gate_open_or_close = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 30:
			{
				Has_Been_Initd = true;
			}
		case 31:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 32:
			{
				IsClosed = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 33:
			{
				if(::IsValid(WaterDrip))
				{
					WaterDrip->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 34:
			{
				if(::IsValid(WateringCan))
				{
					WateringCan->SetVisibility(ESlateVisibility::HitTestInvisible);
				}
				CurrentState = 1;
				break;
			}
		case 35:
			{
				gate_open_or_close = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 36:
			{
				gate_open_or_close = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 37:
			{
				StateStack.Push(36);
				CurrentState = 12;
				break;
			}
		case 38:
			{
				StateStack.Push(35);
				CurrentState = 12;
				break;
			}
		case 39:
			{
				CurrentState = 37;
				break;
			}
		case 40:
			{
				CurrentState = 41;
				break;
			}
		case 41:
			{
				StateStack.Push(42);
				CurrentState = 38;
				break;
			}
		case 42:
			{
				WidgetTransform_0.Translation = FVector2D(1360.000000,800.000000);
				WidgetTransform_0.Scale = FVector2D(1.000000,1.000000);
				WidgetTransform_0.Shear = FVector2D(0.000000,0.000000);
				WidgetTransform_0.Angle = 0.000000;
				if(::IsValid(WateringCan))
				{
					WateringCan->UWidget::SetRenderTransform(WidgetTransform_0);
				}
			}
		case 43:
			{
				if(::IsValid(WaterDrip))
				{
					WaterDrip->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 44:
			{
				CurrentState = 45;
				break;
			}
		case 45:
			{
				if (!Done)
				{
					CurrentState = 11;
					break;
				}
				CurrentState = 42;
				break;
			}
		case 46:
			{
				CurrentState = 47;
				break;
			}
		case 47:
			{
				Done = false;
			}
		case 48:
			{
				MakeArray_1.SetNum(4, true);
				MakeArray_1[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				MakeArray_1[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				MakeArray_1[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				MakeArray_1[3] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
				PlantsTexture = MakeArray_1;
			}
		case 49:
			{
				MakeArray_0.SetNum(3, true);
				MakeArray_0[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				MakeArray_0[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				MakeArray_0[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				DripSpritesTexture = MakeArray_0;
			}
		case 50:
			{
				WateringTimer = 0.000000;
			}
		case 51:
			{
				if(::IsValid(WateringCan))
				{
					WateringCan->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 52:
			{
				FCustomThunkTemplates::Array_Random(PlantsTexture, Random_OutItem, Random_OutIndex);
				if(::IsValid(Plant))
				{
					Plant->SetBrushFromTexture(Random_OutItem, false);
				}
				CurrentState = 42;
				break;
			}
		default:
			check(false); 
			break;
		}
	} while( CurrentState != -1 );
}
void UWateringPlants::Construct()
{
	SetDefault(46);
}
void UWateringPlants::Tick(FGeometry MyGeometry, float InDeltaTime)
{
	MyGeometry = MyGeometry;
	InDeltaTime = InDeltaTime;
	SetDefault(44);
}
void UWateringPlants::poop_water_watercan_OnButtonReleasedEvent()
{
	SetDefault(40);
}
void UWateringPlants::poop_water_watercan_OnButtonPressedEvent()
{
	SetDefault(39);
}

/*Unreal Engine Generated*/
PRAGMA_DISABLE_OPTIMIZATION
void UWateringPlants::StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Backgorund.Backgorund 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant3.Plant3 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/WateringCan.WateringCan 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip2.Drip2 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant0.Plant0 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant1.Plant1 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant2.Plant2 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip0.Drip0 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip1.Drip1 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWateringPlants::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{136, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{199, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper_UWateringPlants
{
	FRegisterHelper_UWateringPlants()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/MiniGame/WateringPlant/WateringPlants_WG"), &UWateringPlants::StaticDependenciesAssets);
	}
	static FRegisterHelper_UWateringPlants Instance;
};
FRegisterHelper_UWateringPlants FRegisterHelper_UWateringPlants::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
