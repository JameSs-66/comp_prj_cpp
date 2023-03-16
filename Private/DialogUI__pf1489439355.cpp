#include "DialogUI.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UDialogUI::UDialogUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__TextBlock_0__pf = nullptr;
	bpv__Dialogs__pf = FString(TEXT(""));
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UDialogUI::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UDialogUI::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Right = 1920.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = 74.000000f;
	__Local__6->LayoutData.Offsets.Top = 493.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__7->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__7->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UDialogUI::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Font.OutlineSettings.OutlineSize = 2;
	__Local__7->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__7->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__7->Font.Size = 36;
	auto& __Local__8 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__7), UTextLayoutWidget::__PPO__Justification() )));
	__Local__8 = ETextJustify::Type::Center;
	__Local__7->Slot = __Local__6;
	__Local__7->bIsVariable = true;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UDialogUI::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__9;
	SlotNames.Append(__Local__9);
}
void UDialogUI::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__10;
	TArray<FDelegateRuntimeBinding>  __Local__11;
	__Local__11.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__11.GetData(), 1);
	auto& __Local__12 = __Local__11[0];
	__Local__12.ObjectName = FString(TEXT("TextBlock_0"));
	__Local__12.PropertyName = FName(TEXT("Text"));
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__12.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__13 = TArray<FPropertyPathSegment> ();
	__Local__13.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__13.GetData(), 1);
	auto& __Local__14 = __Local__13[0];
	__Local__14.Name = FName(TEXT("Dialogs"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UDialogUI::StaticClass())->MiscConvertedSubobjects[0]), __Local__10, __Local__11);
}
void UDialogUI::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UDialogUI::bpf__ExecuteUbergraph_DialogUI__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				RemoveFromParent();
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				__CurrentState = 1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__TextBlock_0__pf))
				{
					bpv__TextBlock_0__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 5:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(2, 1516415986, TEXT("ExecuteUbergraph_DialogUI_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UDialogUI::bpf__ExecuteUbergraph_DialogUI__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__TextBlock_0__pf))
	{
		bpv__TextBlock_0__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; //KCST_EndOfThread
}
void UDialogUI::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_DialogUI__pf_1(6);
}
void UDialogUI::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_DialogUI__pf_0(3);
}
void UDialogUI::bpf__DialogToShow__pf(const FString& bpp__Text__pf__const)
{
	typedef FString  T__Local__16;
	T__Local__16& bpp__Text__pf = *const_cast<T__Local__16 *>(&bpp__Text__pf__const);
	bpv__Dialogs__pf = bpp__Text__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UDialogUI::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void UDialogUI::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UDialogUI
{
	FRegisterHelper__UDialogUI()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/DialogUI"), &UDialogUI::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDialogUI Instance;
};
FRegisterHelper__UDialogUI FRegisterHelper__UDialogUI::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
