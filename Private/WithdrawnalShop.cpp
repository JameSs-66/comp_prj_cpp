#include "WithdrawnalShop"
#include "StatsTrackerLib_BP"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWithdrawnalShop::UWithdrawnalShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	All_Box = nullptr;
	Background_work = nullptr;
	Box_BG = nullptr;
	Box_L = nullptr;
	Box_L_Button_2 = nullptr;
	Box_M = nullptr;
	Box_M_Button_2 = nullptr;
	Box_S = nullptr;
	Box_S_Button_2 = nullptr;
	Box_Xl = nullptr;
	Box_XL_Button_2 = nullptr;
	Exit_Box = nullptr;
	Exit_Button = nullptr;
	Image_87 = nullptr;
	Image_239 = nullptr;
	Image_352 = nullptr;
	Image_461 = nullptr;
	Run = nullptr;
	Work_box = nullptr;
	GetxEnergyxValueTT = TArray<float> ();
	PerviusDay = 0.0f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWithdrawnalShop::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto ComponentDelegateBinding_1 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(ComponentDelegateBinding_1);
	auto WidgetTree = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(WidgetTree);
	ComponentDelegateBinding_1->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	ComponentDelegateBinding_1->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(ComponentDelegateBinding_1->ComponentDelegateBindings.GetData(), 5);
	auto& Exit_Button = ComponentDelegateBinding_1->ComponentDelegateBindings[0];
	Exit_Button.ComponentPropertyName = FName(TEXT("Exit_Button"));
	Exit_Button.DelegatePropertyName = FName(TEXT("OnClicked"));
	Exit_Button.FunctionNameToBind = FName(TEXT("Exit_Button"));
	auto& Box_XL_Button = ComponentDelegateBinding_1->ComponentDelegateBindings[1];
	Box_XL_Button.ComponentPropertyName = FName(TEXT("Box_XL_Button_2"));
	Box_XL_Button.DelegatePropertyName = FName(TEXT("OnClicked"));
	Box_XL_Button.FunctionNameToBind = FName(TEXT("Box_XL_Button_2"));
	auto& Box_M_Button = ComponentDelegateBinding_1->ComponentDelegateBindings[2];
	Box_M_Button.ComponentPropertyName = FName(TEXT("Box_M_Button_2"));
	Box_M_Button.DelegatePropertyName = FName(TEXT("OnClicked"));
	Box_M_Button.FunctionNameToBind = FName(TEXT("Box_M_Button_2"));
	auto& ComponentDelegateBinding_1_comp = ComponentDelegateBinding_1->ComponentDelegateBindings[3];
	Box_L_Button.ComponentPropertyName = FName(TEXT("Box_L_Button_2"));
	ComponentDelegateBinding_1_comp.DelegatePropertyName = FName(TEXT("OnClicked"));
	ComponentDelegateBinding_1_comp.FunctionNameToBind = FName(TEXT("Box_L_Button_2"));
	auto& Box_S_Button = ComponentDelegateBinding_1->ComponentDelegateBindings[4];
	Box_S_Button.ComponentPropertyName = FName(TEXT("Box_S_Button_2"));
	Box_S_Button.DelegatePropertyName = FName(TEXT("OnClicked"));
	Box_S_Button.FunctionNameToBind = FName(TEXT("Box_S_Button_2"));
	auto ScaleBox_0 = NewObject<UScaleBox>(WidgetTree, TEXT("ScaleBox_0"), (EObjectFlags)0x00280008);
	auto& SB_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((ScaleBox_0), UPanelWidget::__PPO__Slots() )));
	SB_comp = TArray<UPanelSlot*> ();
	SB_comp.Reserve(1);
	auto ScaleBoxSlot_0 = NewObject<UScaleBoxSlot>(ScaleBox_0, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	ScaleBoxSlot_0->Parent = ScaleBox_0;
	auto SizeBox_0 = NewObject<USizeBox>(WidgetTree, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	SizeBox_0->WidthOverride = 1920.0f;
	SizeBox_0->HeightOverride = 1080.0f;
	SizeBox_0->bOverride_WidthOverride = true;
	SizeBox_0->bOverride_HeightOverride = true;
	auto& SizeBox_1 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((SizeBox_0), UPanelWidget::__PPO__Slots() )));
	SizeBox_1 = TArray<UPanelSlot*> ();
	SizeBox_1.Reserve(1);
	auto SizeBoxSlot_1 = NewObject<USizeBoxSlot>(SizeBox_0, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	SizeBoxSlot_1->Parent = SizeBox_0;
	auto CanvasPanel_0 = NewObject<UCanvasPanel>(WidgetTree, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& CanvasPanel_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((CanvasPanel_0), UPanelWidget::__PPO__Slots() )));
	CanvasPanel_comp = TArray<UPanelSlot*> ();
	CanvasPanel_comp.Reserve(4);
	auto CanvasPanelSlot_2 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	CanvasPanelSlot_2->LayoutData.Offsets.Left = -416.0f;
	CanvasPanelSlot_2->LayoutData.Offsets.Top = -192.0f;
	CanvasPanelSlot_2->LayoutData.Offsets.Right = -242.7f;
	CanvasPanelSlot_2->LayoutData.Offsets.Bottom = -256.0f;
	CanvasPanelSlot_2->LayoutData.Anchors.Maximum = FVector2D(1.0f, 1.0f);
	CanvasPanelSlot_2->Parent = CanvasPanel_0;
	auto Background = NewObject<UBackgroundBlur>(WidgetTree, TEXT("Background"), (EObjectFlags)0x00280008);
	Background->BlurStrength = 5.0f;
	Background->Slot = CanvasPanelSlot_2;
	CanvasPanelSlot_2->Content = Background;
	CanvasPanel_comp.Add(CanvasPanelSlot_2);
	auto CanvasPanelSlot_0 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	CanvasPanelSlot_0->LayoutData.Offsets.Left = 5.3f;
	CanvasPanelSlot_0->LayoutData.Offsets.Top = 5.3f;
	CanvasPanelSlot_0->LayoutData.Offsets.Right = -1.3f;
	CanvasPanelSlot_0->LayoutData.Offsets.Bottom = 7.3f;
	CanvasPanelSlot_0->LayoutData.Anchors.Minimum = FVector2D(0.3f, 0.2f);
	CanvasPanelSlot_0->LayoutData.Anchors.Maximum = FVector2D(0.8f, 0.8f);
	CanvasPanelSlot_0->Parent = CanvasPanel_0;
	auto Box_BG = NewObject<UImage>(WidgetTree, TEXT("Box_BG"), (EObjectFlags)0x00280008);
	Box_BG->Brush.ImageSize = FVector2D(845.0f, 556.0f);
	auto& Brush = (*(AccessPrivateProperty<UObject* >(&(Box_BG->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Brush = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	Box_BG->Slot = CanvasPanelSlot_0;
	CanvasPanelSlot_0->Content = Box_BG;
	CanvasPanel_comp.Add(CanvasPanelSlot_0);
	auto CanvasPanelSlot_10 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	CanvasPanelSlot_10->LayoutData.Offsets.Left = 14.666809f;
	CanvasPanelSlot_10->LayoutData.Offsets.Top = 6.000061f;
	CanvasPanelSlot_10->LayoutData.Offsets.Right = -2.333740f;
	CanvasPanelSlot_10->LayoutData.Offsets.Bottom = -1.333252f;
	CanvasPanelSlot_10->LayoutData.Anchors.Minimum = FVector2D(0.356944, 0.225926);
	CanvasPanelSlot_10->LayoutData.Anchors.Maximum = FVector2D(0.888889, 0.850617);
	CanvasPanelSlot_10->Parent = CanvasPanel_0;
	auto All_Box = NewObject<UVerticalBox>(WidgetTree, TEXT("All_Box"), (EObjectFlags)0x00280008);
	auto& All_Box_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((All_Box), UPanelWidget::__PPO__Slots() )));
	All_Box_comp = TArray<UPanelSlot*> ();
	All_Box_comp.Reserve(5);
	auto VerticalBoxSlot_0 = NewObject<UVerticalBoxSlot>(All_Box, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_0->Padding.Left = 100.0f;
	VerticalBoxSlot_0->Padding.Top = 80.0f;
	VerticalBoxSlot_0->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	VerticalBoxSlot_0->Parent = All_Box;
	auto Box_S = NewObject<UVerticalBox>(WidgetTree, TEXT("Box_S"), (EObjectFlags)0x00280008);
	auto& Box_S_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_S), UPanelWidget::__PPO__Slots() )));
	Box_S_comp = TArray<UPanelSlot*> ();
	Box_S_comp.Reserve(1);
	auto VerticalBoxSlot_1 = NewObject<UVerticalBoxSlot>(Box_S, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_1->Parent = Box_S;
	auto Box_S_Button_2 = NewObject<UButton>(WidgetTree, TEXT("Box_S_Button_2"), (EObjectFlags)0x00280008);
	auto& Box_S_Button_3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_S_Button_2), UPanelWidget::__PPO__Slots() )));
	Box_S_Button_3 = TArray<UPanelSlot*> ();
	Box_S_Button_3.Reserve(1);
	auto ButtonSlot_0 = NewObject<UButtonSlot>(Box_S_Button_2, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	ButtonSlot_0->Padding.Left = 10.0f;
	ButtonSlot_0->Padding.Top = -4.0f;
	ButtonSlot_0->Parent = Box_S_Button_2;
	auto Overlay_0 = NewObject<UOverlay>(WidgetTree, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& Overlay_1 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Overlay_0), UPanelWidget::__PPO__Slots() )));
	Overlay_1 = TArray<UPanelSlot*> ();
	Overlay_1.Reserve(2);
	auto OverlaySlot_0 = NewObject<UOverlaySlot>(Overlay_0, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	OverlaySlot_0->Parent = Overlay_0;
	auto Image_87 = NewObject<UImage>(WidgetTree, TEXT("Image_87"), (EObjectFlags)0x00280008);
	Image_87->Brush.ImageSize = FVector2D(325.0f, 227.0f);
	auto& Image_87_comp = (*(AccessPrivateProperty<UObject* >(&(Image_87->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Image_87_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	Image_87->Slot = OverlaySlot_0;
	Image_87->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	OverlaySlot_0->Content = Image_87;
	Overlay_1.Add(OverlaySlot_0);
	auto OverlaySlot_1 = NewObject<UOverlaySlot>(Overlay_0, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	OverlaySlot_1->Parent = Overlay_0;
	auto TextBlock_131 = NewObject<UTextBlock>(WidgetTree, TEXT("TextBlock_131"), (EObjectFlags)0x00280008);
	TextBlock_131->Text = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"6FD5EDB440BF87B91DA560858292F274\", \"9\")")	);
	auto& TextBlock_131_comp = (*(AccessPrivateProperty<FLinearColor >(&(TextBlock_131->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	TextBlock_131_comp = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
	TextBlock_131->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	TextBlock_131->Font.OutlineSettings.OutlineSize = 1;
	TextBlock_131->Font.TypefaceFontName = FName(TEXT("Default"));
	TextBlock_131->Slot = OverlaySlot_1;
	TextBlock_131->RenderTransform.Translation = FVector2D(257.0f, 5.0f);
	OverlaySlot_1->Content = TextBlock_131;
	Overlay_1.Add(OverlaySlot_1);
	Overlay_0->Slot = ButtonSlot_0;
	ButtonSlot_0->Content = Overlay_0;
	Box_S_Button_3.Add(ButtonSlot_0);
	Box_S_Button_2->Slot = VerticalBoxSlot_1;
	VerticalBoxSlot_1->Content = Box_S_Button_2;
	Box_S_comp.Add(VerticalBoxSlot_1);
	Box_S->Slot = VerticalBoxSlot_0;
	Box_S->RenderTransform.Scale = FVector2D(0.8f, 0.8f);
	Box_S->bIsVariable = true;
	VerticalBoxSlot_0->Content = Box_S;
	All_Box_comp.Add(VerticalBoxSlot_0);
	auto VerticalBoxSlot_5 = NewObject<UVerticalBoxSlot>(All_Box, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_5->Padding.Left = 100.0f;
	VerticalBoxSlot_5->Padding.Top = 30.0f;
	VerticalBoxSlot_5->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	VerticalBoxSlot_5->Parent = All_Box;
	auto Box_L = NewObject<UVerticalBox>(WidgetTree, TEXT("Box_L"), (EObjectFlags)0x00280008);
	auto& Box_L_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_L), UPanelWidget::__PPO__Slots() )));
	Box_L_comp = TArray<UPanelSlot*> ();
	Box_L_comp.Reserve(1);
	auto VerticalBoxSlot_0_comp = NewObject<UVerticalBoxSlot>(Box_L, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_0_comp->Parent = Box_L;
	auto Box_L_Button_2 = NewObject<UButton>(WidgetTree, TEXT("Box_L_Button_2"), (EObjectFlags)0x00280008);
	auto& Box_L_Button_2_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_L_Button_2), UPanelWidget::__PPO__Slots() )));
	Box_L_Button_2_comp = TArray<UPanelSlot*> ();
	Box_L_Button_2_comp.Reserve(1);
	auto ButtonSlot_0_comp = NewObject<UButtonSlot>(Box_L_Button_2, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	ButtonSlot_0_comp->Padding.Left = 10.0f;
	ButtonSlot_0_comp->Padding.Top = -3.0f;
	ButtonSlot_0_comp->Parent = Box_L_Button_2;
	auto Overlay_1 = NewObject<UOverlay>(WidgetTree, TEXT("Overlay_1"), (EObjectFlags)0x00280008);
	auto& Overlay_1_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Overlay_1), UPanelWidget::__PPO__Slots() )));
	Overlay_1_comp = TArray<UPanelSlot*> ();
	Overlay_1_comp.Reserve(2);
	auto OverlaySlot_0_comp = NewObject<UOverlaySlot>(Overlay_1, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	OverlaySlot_0_comp->Parent = Overlay_1;
	auto Image_239 = NewObject<UImage>(WidgetTree, TEXT("Image_239"), (EObjectFlags)0x00280008);
	Image_239->Brush.ImageSize = FVector2D(329.0f, 232.0f);
	auto& Image_239_comp = (*(AccessPrivateProperty<UObject* >(&(Image_239->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Image_239_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	Image_239->Slot = OverlaySlot_0_comp;
	Image_239->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	OverlaySlot_0_comp->Content = Image_239;
	Overlay_1_comp.Add(OverlaySlot_0_comp);
	auto OverlaySlot_1 = NewObject<UOverlaySlot>(Overlay_1, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	OverlaySlot_1->Parent = Overlay_1;
	auto TextBlock_388 = NewObject<UTextBlock>(WidgetTree, TEXT("TextBlock_388"), (EObjectFlags)0x00280008);
	TextBlock_388->Text = FTextStringHelper::CreateFromBuffer(TEXT(""));
	auto& ColorAndOpacity = (*(AccessPrivateProperty<FLinearColor >(&(TextBlock_388->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	ColorAndOpacity = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
	TextBlock_388->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	TextBlock_388->Font.OutlineSettings.OutlineSize = 1;
	TextBlock_388->Font.TypefaceFontName = FName(TEXT("Default"));
	TextBlock_388->Slot = OverlaySlot_1;
	TextBlock_388->RenderTransform.Translation = FVector2D(240.0f, 5.0f);
	OverlaySlot_1->Content = TextBlock_388;
	Overlay_1_comp.Add(OverlaySlot_1);
	Overlay_1->Slot = ButtonSlot_0_comp;
	ButtonSlot_0_comp->Content = Overlay_1;
	Box_L_Button_2_comp.Add(ButtonSlot_0_comp);
	Box_L_Button_2->Slot = VerticalBoxSlot_0_comp;
	VerticalBoxSlot_0_comp->Content = Box_L_Button_2;
	Box_L_comp.Add(VerticalBoxSlot_0_comp);
	Box_L->Slot = VerticalBoxSlot_5;
	Box_L->RenderTransform.Scale = FVector2D(0.8f, 0.8f);
	Box_L->bIsVariable = true;
	VerticalBoxSlot_5->Content = Box_L;
	All_Box_comp.Add(VerticalBoxSlot_5);
	auto VerticalBoxSlot_6 = NewObject<UVerticalBoxSlot>(All_Box, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_6->Padding.Top = -500.0f;
	VerticalBoxSlot_6->Padding.Right = 100.0f;
	VerticalBoxSlot_6->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	VerticalBoxSlot_6->Parent = All_Box;
	auto Box_M = NewObject<UVerticalBox>(WidgetTree, TEXT("Box_M"), (EObjectFlags)0x00280008);
	auto& Box_M_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_M), UPanelWidget::__PPO__Slots() )));
	Box_M_comp = TArray<UPanelSlot*> ();
	Box_M_comp.Reserve(1);
	auto VerticalBoxSlot_0 = NewObject<UVerticalBoxSlot>(Box_M, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_0->Parent = Box_M;
	auto Box_M_Button_2 = NewObject<UButton>(WidgetTree, TEXT("Box_M_Button_2"), (EObjectFlags)0x00280008);
	auto& Box_M_Button_2_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_M_Button_2), UPanelWidget::__PPO__Slots() )));
	Box_M_Button_2_comp = TArray<UPanelSlot*> ();
	Box_M_Button_2_comp.Reserve(1);
	auto ButtonSlot_0 = NewObject<UButtonSlot>(Box_M_Button_2, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	ButtonSlot_0->Padding.Left = 10.0f;
	ButtonSlot_0->Padding.Top = -4.0f;
	ButtonSlot_0->Parent = Box_M_Button_2;
	auto Overlay_2 = NewObject<UOverlay>(WidgetTree, TEXT("Overlay_2"), (EObjectFlags)0x00280008);
	auto& Overlay_2_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Overlay_2), UPanelWidget::__PPO__Slots() )));
	Overlay_2_comp = TArray<UPanelSlot*> ();
	Overlay_2_comp.Reserve(2);
	auto OverlaySlot_0 = NewObject<UOverlaySlot>(Overlay_2, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	OverlaySlot_0->Parent = Overlay_2;
	auto Image_352 = NewObject<UImage>(WidgetTree, TEXT("Image_352"), (EObjectFlags)0x00280008);
	Image_352->Brush.ImageSize = FVector2D(328.0f, 231.0f);
	auto& Image_352_comp = (*(AccessPrivateProperty<UObject* >(&(Image_352->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Image_352_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	Image_352->Slot = OverlaySlot_0;
	Image_352->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	OverlaySlot_0->Content = Image_352;
	Overlay_2_comp.Add(OverlaySlot_0);
	auto OverlaySlot_1 = NewObject<UOverlaySlot>(Overlay_2, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	OverlaySlot_1->Parent = Overlay_2;
	auto TextBlock_1086 = NewObject<UTextBlock>(WidgetTree, TEXT("TextBlock_1086"), (EObjectFlags)0x00280008);
	TextBlock_1086->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"25A05C034CE1914C44DE0E8C6878CD14\", \"19\")")	);
	auto& TextBlock_1086_comp = (*(AccessPrivateProperty<FLinearColor >(&(TextBlock_1086->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	TextBlock_1086_comp = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
	TextBlock_1086->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	TextBlock_1086->Font.OutlineSettings.OutlineSize = 1;
	TextBlock_1086->Font.TypefaceFontName = FName(TEXT("Default"));
	TextBlock_1086->Slot = OverlaySlot_1;
	TextBlock_1086->RenderTransform.Translation = FVector2D(240.0f, 5.0f);
	OverlaySlot_1->Content = TextBlock_1086;
	Overlay_2_comp.Add(OverlaySlot_1);
	Overlay_2->Slot = ButtonSlot_0;
	ButtonSlot_0->Content = Overlay_2;
	Box_M_Button_2_comp.Add(ButtonSlot_0);
	Box_M_Button_2->Slot = VerticalBoxSlot_0;
	VerticalBoxSlot_0->Content = Box_M_Button_2;
	Box_M_comp.Add(VerticalBoxSlot_0);
	Box_M->Slot = VerticalBoxSlot_6;
	Box_M->RenderTransform.Scale = FVector2D(0.8f, 0.8f);
	Box_M->bIsVariable = true;
	VerticalBoxSlot_6->Content = Box_M;
	All_Box_comp.Add(VerticalBoxSlot_6);
	auto VerticalBoxSlot_7 = NewObject<UVerticalBoxSlot>(All_Box, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_7->Padding.Top = 25.0f;
	VerticalBoxSlot_7->Padding.Right = 90.0f;
	VerticalBoxSlot_7->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	VerticalBoxSlot_7->Parent = All_Box;
	auto Box_Xl = NewObject<UVerticalBox>(WidgetTree, TEXT("Box_Xl"), (EObjectFlags)0x00280008);
	auto& Box_Xl_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_Xl), UPanelWidget::__PPO__Slots() )));
	Box_Xl_comp = TArray<UPanelSlot*> ();
	Box_Xl_comp.Reserve(1);
	auto VerticalBoxSlot_0 = NewObject<UVerticalBoxSlot>(Box_Xl, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_0->Parent = Box_Xl;
	auto Box_XL_Button_2 = NewObject<UButton>(WidgetTree, TEXT("Box_XL_Button_2"), (EObjectFlags)0x00280008);
	auto& Box_XL_Button_2_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Box_XL_Button_2), UPanelWidget::__PPO__Slots() )));
	Box_XL_Button_2_comp = TArray<UPanelSlot*> ();
	Box_XL_Button_2_comp.Reserve(1);
	auto ButtonSlot_0 = NewObject<UButtonSlot>(Box_XL_Button_2, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	ButtonSlot_0->Padding.Left = 10.0f;
	ButtonSlot_0->Padding.Top = -4.0f;
	ButtonSlot_0->Parent = Box_XL_Button_2;
	auto Overlay_3 = NewObject<UOverlay>(WidgetTree, TEXT("Overlay_3"), (EObjectFlags)0x00280008);
	auto& Overlay_3_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Overlay_3), UPanelWidget::__PPO__Slots() )));
	Overlay_3_comp = TArray<UPanelSlot*> ();
	Overlay_3_comp.Reserve(2);
	auto OverlaySlot_0 = NewObject<UOverlaySlot>(Overlay_3, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	OverlaySlot_0->Parent = Overlay_3;
	auto Image_461 = NewObject<UImage>(WidgetTree, TEXT("Image_461"), (EObjectFlags)0x00280008);
	Image_461->Brush.ImageSize = FVector2D(329.0f, 234.0f);
	auto& Image_461_comp = (*(AccessPrivateProperty<UObject* >(&(Image_461->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Image_461_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	Image_461->Slot = OverlaySlot_0;
	Image_461->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	OverlaySlot_0->Content = Image_461;
	Overlay_3_comp.Add(OverlaySlot_0);
	auto OverlaySlot_1 = NewObject<UOverlaySlot>(Overlay_3, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	OverlaySlot_1->Parent = Overlay_3;
	auto TextBlock_711 = NewObject<UTextBlock>(WidgetTree, TEXT("TextBlock_711"), (EObjectFlags)0x00280008);
	TextBlock_711->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"92CDDC2B4BF7647FDB7672B5C3E3D334\", \"69\")")	);
	auto& TextBlock_711_comp = (*(AccessPrivateProperty<FLinearColor >(&(TextBlock_711->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	TextBlock_711_comp = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
	TextBlock_711->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	TextBlock_711->Font.OutlineSettings.OutlineSize = 1;
	TextBlock_711->Font.TypefaceFontName = FName(TEXT("Default"));
	TextBlock_711->Slot = OverlaySlot_1;
	TextBlock_711->RenderTransform.Translation = FVector2D(242.0f, 5.0f);
	OverlaySlot_1->Content = TextBlock_711;
	Overlay_3_comp.Add(OverlaySlot_1);
	Overlay_3->Slot = ButtonSlot_0;
	ButtonSlot_0->Content = Overlay_3;
	Box_XL_Button_2_comp.Add(ButtonSlot_0);
	Box_XL_Button_2->Slot = VerticalBoxSlot_0;
	VerticalBoxSlot_0->Content = Box_XL_Button_2;
	Box_Xl_comp.Add(VerticalBoxSlot_0);
	Box_Xl->Slot = VerticalBoxSlot_7;
	Box_Xl->RenderTransform.Scale = FVector2D(0.8f, 0.8f);
	Box_Xl->bIsVariable = true;
	VerticalBoxSlot_7->Content = Box_Xl;
	All_Box_comp.Add(VerticalBoxSlot_7);
	auto VerticalBoxSlot_9 = NewObject<UVerticalBoxSlot>(All_Box, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_9->Padding.Top = -170.0f;
	VerticalBoxSlot_9->Padding.Right = -106.0f;
	VerticalBoxSlot_9->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	VerticalBoxSlot_9->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	VerticalBoxSlot_9->Parent = All_Box;
	auto Exit_Box = NewObject<UVerticalBox>(WidgetTree, TEXT("Exit_Box"), (EObjectFlags)0x00280008);
	auto& Exit_Box_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Exit_Box), UPanelWidget::__PPO__Slots() )));
	Exit_Box_comp = TArray<UPanelSlot*> ();
	Exit_Box_comp.Reserve(1);
	auto VerticalBoxSlot_0 = NewObject<UVerticalBoxSlot>(Exit_Box, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_0->Parent = Exit_Box;
	auto Exit_Button = NewObject<UButton>(WidgetTree, TEXT("Exit_Button"), (EObjectFlags)0x00280008);
	auto& Exit_Button_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Exit_Button), UPanelWidget::__PPO__Slots() )));
	Exit_Button_comp = TArray<UPanelSlot*> ();
	Exit_Button_comp.Reserve(1);
	auto ButtonSlot_1 = NewObject<UButtonSlot>(Exit_Button, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	ButtonSlot_1->Padding.Left = 0.0f;
	ButtonSlot_1->Padding.Top = 0.0f;
	ButtonSlot_1->Padding.Right = 0.00f;
	ButtonSlot_1->Padding.Bottom = 0.0f;
	ButtonSlot_1->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	ButtonSlot_1->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	ButtonSlot_1->Parent = Exit_Button;
	auto Run = NewObject<UImage>(WidgetTree, TEXT("Run"), (EObjectFlags)0x00280008);
	Run->Brush.ImageSize = FVector2D(252.0f, 304.0f);
	auto& Run_comp = (*(AccessPrivateProperty<UObject* >(&(Run->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Run_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	Run->ColorAndOpacity = FLinearColor(0.7f, 0.7f, 0.7f, 1.0f);
	Run->Slot = ButtonSlot_1;
	Run->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	ButtonSlot_1->Content = Run;
	Exit_Button_comp.Add(ButtonSlot_1);
	Exit_Button->Slot = VerticalBoxSlot_0;
	Exit_Button->RenderTransform.Scale = FVector2D(0.90f, 0.90f);
	VerticalBoxSlot_0->Content = Exit_Button;
	Exit_Box_comp.Add(VerticalBoxSlot_0);
	Exit_Box->Slot = VerticalBoxSlot_9;
	Exit_Box->RenderTransform.Translation = FVector2D(-30.0f, -485.0f);
	Exit_Box->RenderTransform.Scale = FVector2D(0.3f, 0.4f);
	Exit_Box->bIsVariable = true;
	VerticalBoxSlot_9->Content = Exit_Box;
	All_Box_comp.Add(VerticalBoxSlot_9);
	All_Box->Slot = CanvasPanelSlot_10;
	All_Box->bIsVariable = true;
	CanvasPanelSlot_10->Content = All_Box;
	CanvasPanel_comp.Add(CanvasPanelSlot_10);
	auto CanvasPanelSlot_14 = NewObject<UCanvasPanelSlot>(CanvasPanel_0, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	CanvasPanelSlot_14->LayoutData.Offsets.Left = 140.0f;
	CanvasPanelSlot_14->LayoutData.Offsets.Top = 250.0f;
	CanvasPanelSlot_14->LayoutData.Offsets.Right = 480.0f;
	CanvasPanelSlot_14->LayoutData.Offsets.Bottom = 670.0f;
	CanvasPanelSlot_14->Parent = CanvasPanel_0;
	auto Work_box = NewObject<UVerticalBox>(WidgetTree, TEXT("Work_box"), (EObjectFlags)0x00280008);
	auto& Work_box_comp = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((Work_box), UPanelWidget::__PPO__Slots() )));
	Work_box_comp = TArray<UPanelSlot*> ();
	Work_box_comp.Reserve(1);
	auto VerticalBoxSlot_4 = NewObject<UVerticalBoxSlot>(Work_box, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	VerticalBoxSlot_4->Size.SizeRule = ESlateSizeRule::Type::Fill;
	VerticalBoxSlot_4->Padding.Left = 10.0f;
	VerticalBoxSlot_4->Parent = Work_box;
	auto Background_work = NewObject<UImage>(WidgetTree, TEXT("Background_work"), (EObjectFlags)0x00280008);
	Background_work->Brush.ImageSize = FVector2D(600.0f, 778.0f);
	auto& Background_work_comp = (*(AccessPrivateProperty<UObject* >(&(Background_work->Brush), FSlateBrush::__PPO__ResourceObject() )));
	Background_work_comp = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	Background_work->Slot = VerticalBoxSlot_4;
	Background_work->RenderTransform.Scale = FVector2D(1.2f, 1.1f);
	VerticalBoxSlot_4->Content = Background_work;
	Work_box_comp.Add(VerticalBoxSlot_4);
	Work_box->Slot = CanvasPanelSlot_14;
	Work_box->RenderTransform.Scale = FVector2D(0.8f, 0.9f);
	Work_box->bIsVariable = true;
	CanvasPanelSlot_14->Content = Work_box;
	CanvasPanel_comp.Add(CanvasPanelSlot_14);
	CanvasPanel_0->Slot = SizeBoxSlot_1;
	SizeBoxSlot_1->Content = CanvasPanel_0;
	SizeBox_1.Add(SizeBoxSlot_1);
	SizeBox_0->Slot = ScaleBoxSlot_0;
	ScaleBoxSlot_0->Content = SizeBox_0;
	SB_comp.Add(ScaleBoxSlot_0);
	WidgetTree->RootWidget = ScaleBox_0;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWithdrawnalShop::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  Names;
	SlotNames.Append(Names);
}
void UWithdrawnalShop::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  WidgetAnimation;
	TArray<FDelegateRuntimeBinding>  AnimationDeleg;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWithdrawnalShop::StaticClass())->MiscConvertedSubobjects[0]), WidgetAnimation, AnimationDeleg);
}
void UWithdrawnalShop::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWithdrawnalShop::Reset_day(int32 EntryPoint)
{
	bool Greater_FloatFloat_ReturnValue{};
	check(EntryPoint == 41);
	
	UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,  ReadStats);
	Greater_FloatFloat_ReturnValue = UKismetMathLibrary::Greater_FloatFloat(ReadStats, PerviusDay);
	if (!Greater_FloatFloat_ReturnValue)
	{
		return; IfNot
	}
	MakeArray.SetNum(4, true);
	MakeArray[0] = 10.0f;
	MakeArray[1] = 25.0f;
	MakeArray[2] = 50.0f;
	MakeArray[3] = 100.0f;
	GetxEnergyxValueTT = MakeArray;
	return; 
}
void UWithdrawnalShop::Set_Defult(int32 EntryPoint)
{
	check(EntryPoint == 40);
	
	MakeArray.SetNum(4, true);
	MakeArray[0] = 10.0f;
	MakeArray[1] = 25.0f;
	MakeArray[2] = 50.0f;
	MakeArray[3] = 100.0f;
	GetxEnergyxValueTT = MakeArray;
	UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,  ReadStats);
	PerviusDay = ReadStats;
	return; 
}
void UWithdrawnalShop::Exit_Shop(int32 EntryPoint)
{
	check(EntryPoint == 34);
	
	RemoveFromParent();
	UStatsTrackerLib::SetStats(FString(TEXT("ISUIOPENED")), 0.0f, this);
	
	UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,  ReadStats);
	PerviusDay = ReadStats;
	return; 
}
void UWithdrawnalShop::Buy_Food(int32 EntryPoint)
{
	int32 Add_Int{};
	bool GreaterEqual_Float{};
	float Multiply_Float{};
	int32 Array_Length{};
	bool Less_Int{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = EntryPoint;
	do
	{
		switch( CurrentState )
		{
		case 3:
			{
				StateStack.Push(5);
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(GetxEnergyxValueTT, Array_Index,  Get_Item);
				Multiply_Float = UKismetMathLibrary::Multiply_FloatFloat(Get_Item, 0.5f);
				FCustomThunkTemplates::Array_Set(GetxEnergyxValueTT, Array_Index, Multiply_Float, false);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
				break;
			}
		case 5:
			{
				Add_Int = UKismetMathLibrary::Add_IntInt(Loop_Counter, 1);
				Loop_Counter = Add_Int;
			}
		case 6:
			{
				Array_Length = FCustomThunkTemplates::Array_Length(GetxEnergyxValueTT);
				Less_Int = UKismetMathLibrary::Less_IntInt(Loop_Counter, Array_Length);
				if (!Less_Int)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 7:
			{
				Array_Index = Loop_Counter;
				CurrentState = 3;
				break;
			}
		case 8:
			{
				Array_Index = 0;
				CurrentState = 6;
				break;
			}
		case 9:
			{
				Loop_Counter = 0;
				CurrentState = 8;
				break;
			}
		case 10:
			{
				CurrentState = 11;
				break;
			}
		case 11:
			{
				UStatsTrackerLib::ReadStats(FString(TEXT("Money")), false, this,  ReadStats);
			}
		case 12:
			{
				GreaterEqual_Float = UKismetMathLibrary::GreaterEqual_FloatFloat(ReadStats, 9.0f);
				if (!GreaterEqual_Float)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 13:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Money")), -9.0f, this);
			}
		case 14:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Health")), -2.0f, this);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(GetxEnergyxValueTT, 0,  Get_Item);
				UStatsTrackerLib::AddStats(FString(TEXT("Energy")), Get_Item, this);
				CurrentState = 9;
				break;
			}
		case 16:
			{
				CurrentState = 17;
				break;
			}
		case 17:
			{
				UStatsTrackerLib::ReadStats(FString(TEXT("Money")), false, this,  ReadStats);
			}
		case 18:
			{
				GreaterEqual_Float = UKismetMathLibrary::GreaterEqual_FloatFloat(ReadStats, 39.0f);
				if (!GreaterEqual_Float)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 19:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Money")), -39.0f, this);
			}
		case 20:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Health")), -10.0f, this);
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(GetxEnergyxValueTT, 2,  Get_Item);
				UStatsTrackerLib::AddStats(FString(TEXT("Energy")), Get_Item, this);
				CurrentState = 9;
				break;
			}
		case 22:
			{
				CurrentState = 23;
				break;
			}
		case 23:
			{
				UStatsTrackerLib::ReadStats(FString(TEXT("Money")), false, this, ReadStats);
			}
		case 24:
			{
				GreaterEqual_Float = UKismetMathLibrary::GreaterEqual_FloatFloat(ReadStats, 19.0f);
				if (!GreaterEqual_Float)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop( false) : -1;
					break;
				}
			}
		case 25:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Money")), -19.0f, this);
			}
		case 26:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Health")), -6.0f, this);
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(GetxEnergyxValueTT, 1,  Get_Item);
				UStatsTrackerLib::AddStats(FString(TEXT("Energy")), Get_Item, this);
				CurrentState = 9;
				break;
			}
		case 28:
			{
				CurrentState = 29;
				break;
			}
		case 29:
			{
				UStatsTrackerLib::ReadStats(FString(TEXT("Money")), false, this,  ReadStats);
			}
		case 30:
			{
				GreaterEqual_Float = UKismetMathLibrary::GreaterEqual_FloatFloat(ReadStats, 69.0f);
				if (!GreaterEqual_Float)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
					break;
				}
			}
		case 31:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Money")), -69.0f, this);
			}
		case 32:
			{
				UStatsTrackerLib::AddStats(FString(TEXT("Health")), -18.0f, this);
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(GetxEnergyxValueTT, 3,  Get_Item);
				UStatsTrackerLib::AddStats(FString(TEXT("Energy")), Get_Item, this);
				CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}

void UWithdrawnalShop::Construct()
{
	Reset_day(41);
}

void UWithdrawnalShop::OnInitialized()
{
	Set_Defult(40);
}

void UWithdrawnalShop::Exit_Button()
{
	Exit_Shop(34);
}

void UWithdrawnalShop::Box_XL_Button_2()
{
	Buy_Food(28);
}

void UWithdrawnalShop::Box_M_Button_2()
{
	Buy_Food(22);
}

void UWithdrawnalShop::Box_L_Button_2()
{
	Buy_Food(16);
}

void UWithdrawnalShop::Box_S_Button_2()
{
	Buy_Food(10);
}


/*Unreal Engine Generated*/
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/All_Box_2_Crop.All_Box_2_Crop 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/S_2_Crop.S_2_Crop 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/L_2_Crop.L_2_Crop 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/M_2_Crop.M_2_Crop 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/Xl_2_Crop.Xl_2_Crop 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Exit.Exit 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/People_2_Crop.People_2_Crop 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWithdrawnalShop
{
	FRegisterHelper__UWithdrawnalShop()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/WorldBuilding/Shop_2/WithdrawnalShop"), &UWithdrawnalShop::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWithdrawnalShop Instance;
};
FRegisterHelper__UWithdrawnalShop FRegisterHelper__UWithdrawnalShop::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif