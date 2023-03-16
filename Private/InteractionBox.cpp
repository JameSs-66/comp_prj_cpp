#include "InteractionBox.h"
#include "CharacterBase.h"
#include "StatsTrackerLib.h"

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif

PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AInteractionBox::AInteractionBox(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer) {
  DefaultSceneRoot =
      CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
  InFrontOfDoorCheck =
      CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InFrontOfDoorCheck"));
  Highlight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Highlight"));
  MouseClick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MouseClick"));
  RootComponent = DefaultSceneRoot;
  DefaultSceneRoot->CreationMethod = EComponentCreationMethod::Native;
  InFrontOfDoorCheck->CreationMethod = EComponentCreationMethod::Native;
  InFrontOfDoorCheck->AttachToComponent(
      DefaultSceneRoot, FAttachmentTransformRules::KeepRelativeTransform);
  auto &CollisionBox = (*(AccessPrivateProperty<UStaticMesh *>(
      (InFrontOfDoorCheck), UStaticMeshComponent::PPOStaticMesh())));
  CollisionBox = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  InFrontOfDoorCheck->OverrideMaterials = TArray<UMaterialInterface *>();
  InFrontOfDoorCheck->OverrideMaterials.Reserve(1);
  InFrontOfDoorCheck->OverrideMaterials.Add(CastChecked<UMaterialInterface>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed));
  InFrontOfDoorCheck->CastShadow = false;
  auto &BodyIns = (*(AccessPrivateProperty<FCollisionResponse>(
      &(InFrontOfDoorCheck->BodyInstance),
      FBodyInstance::PPOCollisionResponses())));
  auto &CollisionBoxChannel =
      (*(AccessPrivateProperty<TArray<FResponseChannel>>(
          &(BodyIns), FCollisionResponse::PPOResponseArray())));
  CollisionBoxChannel = TArray<FResponseChannel>();
  CollisionBoxChannel.AddUninitialized(8);
  FResponseChannel::StaticStruct()->InitializeStruct(
      CollisionBoxChannel.GetData(), 8);
  auto &CB_WorldStatic = CollisionBoxChannel[0];
  CB_WorldStatic.Channel = FName(TEXT("WorldStatic"));
  CB_WorldStatic.Response = ECollisionResponse::ECR_Overlap;
  auto &WorldDynamic = CollisionBoxChannel[1];
  CB_WorldDynamic.Channel = FName(TEXT("WorldDynamic"));
  CB_WorldDynamic.Response = ECollisionResponse::ECR_Overlap;
  auto &Pawn = CollisionBoxChannel[2];
  CB_Pawn.Channel = FName(TEXT("Pawn"));
  CB_Pawn.Response = ECollisionResponse::ECR_Overlap;
  auto &PhysicsBody = CollisionBoxChannel[3];
  CB_PhysicsBody.Channel = FName(TEXT("PhysicsBody"));
  CB_PhysicsBody.Response = ECollisionResponse::ECR_Overlap;
  auto &Vehicle = CollisionBoxChannel[4];
  CB_Vehicle.Channel = FName(TEXT("Vehicle"));
  CB_Vehicle.Response = ECollisionResponse::ECR_Overlap;
  auto &Destructible = CollisionBoxChannel[5];
  CB_Destructible.Channel = FName(TEXT("Destructible"));
  CB_Destructible.Response = ECollisionResponse::ECR_Overlap;
  auto &Camera = CollisionBoxChannel[6];
  CB_Camera.Channel = FName(TEXT("Camera"));
  CB_Camera.Response = ECollisionResponse::ECR_Ignore;
  auto &Door = CollisionBoxChannel[7];
  CB_Door.Channel = FName(TEXT("Door"));
  CB_Door.Response = ECollisionResponse::ECR_Ignore;
  InFrontOfDoorCheck->SetCollisionProfileName(FName(TEXT("Custom")));
  auto &DoorCheck = (*(AccessPrivateProperty<FVector>(
      (InFrontOfDoorCheck), USceneComponent::PPORelativeScale3D())));
  DoorCheck = FVector(0.5f, 1.0f, 1.0f);
  Highlight->CreationMethod = EComponentCreationMethod::Native;
  Highlight->AttachToComponent(
      InFrontOfDoorCheck, FAttachmentTransformRules::KeepRelativeTransform);
  auto &HL_Comp = (*(AccessPrivateProperty<UStaticMesh *>(
      (Highlight), UStaticMeshComponent::PPOStaticMesh())));
  HL_Comp = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[2],
      ECastCheckedType::NullAllowed);
  Highlight->OverrideMaterials = TArray<UMaterialInterface *>();
  Highlight->OverrideMaterials.Reserve(1);
  Highlight->OverrideMaterials.Add(CastChecked<UMaterialInterface>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed));
  Highlight->CastShadow = false;
  auto &HL_Ins = (*(AccessPrivateProperty<FCollisionResponse>(
      &(Highlight->BodyInstance), FBodyInstance::PPOCollisionResponses())));
  auto &HL_Channel = (*(AccessPrivateProperty<TArray<FResponseChannel>>(
      &(HL_Ins), FCollisionResponse::PPOResponseArray())));
  HL_Channel = TArray<FResponseChannel>();
  HL_Channel.AddUninitialized(7);
  FResponseChannel::StaticStruct()->InitializeStruct(HL_Channel.GetData(), 7);
  auto &HL_WorldStatic = HL_Channel[0];
  HL_WorldStatic.Channel = FName(TEXT("WorldStatic"));
  HL_WorldStatic.Response = ECollisionResponse::ECR_Overlap;
  auto &HL_WorldDynamic = HL_Channel[1];
  HL_WorldDynamic.Channel = FName(TEXT("WorldDynamic"));
  HL_WorldDynamic.Response = ECollisionResponse::ECR_Overlap;
  auto &HL_Pawn = HL_Channel[2];
  HL_Pawn.Channel = FName(TEXT("Pawn"));
  HL_Pawn.Response = ECollisionResponse::ECR_Overlap;
  auto &HL_Camera = HL_Channel[3];
  HL_Camera.Channel = FName(TEXT("Camera"));
  HL_Camera.Response = ECollisionResponse::ECR_Ignore;
  auto &HL_PhysicsBody = HL_Channel[4];
  HL_PhysicsBody.Channel = FName(TEXT("PhysicsBody"));
  HL_PhysicsBody.Response = ECollisionResponse::ECR_Overlap;
  auto &HL_Vehicle = HL_Channel[5];
  HL_Vehicle.Channel = FName(TEXT("Vehicle"));
  HL_Vehicle.Response = ECollisionResponse::ECR_Overlap;
  auto &HL_Destructible = HL_Channel[6];
  HL_Destructible.Channel = FName(TEXT("Destructible"));
  HL_Destructible.Response = ECollisionResponse::ECR_Overlap;
  Highlight->SetCollisionProfileName(FName(TEXT("Custom")));
  auto &HighL = (*(AccessPrivateProperty<FVector>(
      (Highlight), USceneComponent::PPORelativeScale3D())));
  HighL = FVector(1.0f, 0.5f, 0.5f);
  MouseClick->CreationMethod = EComponentCreationMethod::Native;
  MouseClick->AttachToComponent(
      InFrontOfDoorCheck, FAttachmentTransformRules::KeepRelativeTransform);
  auto &MouseDetect = (*(AccessPrivateProperty<UStaticMesh *>(
      (MouseClick), UStaticMeshComponent::PPOStaticMesh())));
  MouseDetect = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  MouseClick->OverrideMaterials = TArray<UMaterialInterface *>();
  MouseClick->OverrideMaterials.Reserve(1);
  MouseClick->OverrideMaterials.Add(CastChecked<UMaterialInterface>(
      CastChecked<UDynamicClass>(AInteractionBox::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed));
  MouseClick->CastShadow = false;
  auto &MD_Ins = (*(AccessPrivateProperty<FCollisionResponse>(
      &(MouseClick->BodyInstance), FBodyInstance::PPOCollisionResponses())));
  auto &MD_Channel = (*(AccessPrivateProperty<TArray<FResponseChannel>>(
      &(MD_Ins), FCollisionResponse::PPOResponseArray())));
  MD_Channel = TArray<FResponseChannel>();
  MD_Channel.AddUninitialized(7);
  FResponseChannel::StaticStruct()->InitializeStruct(MD_Channel.GetData(), 7);
  auto &MD_WorldStatic = MD_Channel[0];
  MD_WorldStatic.Channel = FName(TEXT("WorldStatic"));
  MD_WorldStatic.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_WorldDynamic = MD_Channel[1];
  MD_WorldDynamic.Channel = FName(TEXT("WorldDynamic"));
  MD_WorldDynamic.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_Pawn = MD_Channel[2];
  MD_Pawn.Channel = FName(TEXT("Pawn"));
  MD_Pawn.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_PhysicsBody = MD_Channel[3];
  MD_PhysicsBody.Channel = FName(TEXT("PhysicsBody"));
  MD_PhysicsBody.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_Vehicle = MD_Channel[4];
  MD_Vehicle.Channel = FName(TEXT("Vehicle"));
  MD_Vehicle.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_Destructible = MD_Channel[5];
  MD_Destructible.Channel = FName(TEXT("Destructible"));
  MD_Destructible.Response = ECollisionResponse::ECR_Ignore;
  auto &MD_Camera = MD_Channel[6];
  MD_Camera.Channel = FName(TEXT("Camera"));
  MD_Camera.Response = ECollisionResponse::ECR_Ignore;
  MouseClick->SetCollisionProfileName(FName(TEXT("Custom")));
  auto &MouseClickDetect = (*(AccessPrivateProperty<FVector>(
      (MouseClick), USceneComponent::PPORelativeScale3D())));
  MouseClickDetect = FVector(2.0f, 1.0f, 0.125f);

  IsCharactorInFrontOfObject = false;
  ResetNextDay = true;
  EnableRank = 0;
  HavePriority = true;
  UIReset = false;
  EnableCompanyPriority = false;
  CanInteract = false;
  IsDoor = false;
  Day = 0.0f;
  CanDoQuest = false;
  AllDone = false;
  PrimaryActorTick.bCanEverTick = true;
  auto &OverlapsComp = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod>(
      (this), AActor::PPODefaultUpdateOverlapsMethodDuringLevelStreaming())));
  OverlapsComp = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}

PRAGMA_ENABLE_OPTIMIZATION
void AInteractionBox::PostLoadSubobjects(
    FObjectInstancingGraph *OuterInstanceGraph) {
  Super::PostLoadSubobjects(OuterInstanceGraph);
  if (DefaultSceneRoot) {
    DefaultSceneRoot->CreationMethod = EComponentCreationMethod::Native;
  }
  if (InFrontOfDoorCheck) {
    InFrontOfDoorCheck->CreationMethod = EComponentCreationMethod::Native;
  }
  if (Highlight) {
    Highlight->CreationMethod = EComponentCreationMethod::Native;
  }
  if (MouseClick) {
    MouseClick->CreationMethod = EComponentCreationMethod::Native;
  }
}

PRAGMA_DISABLE_OPTIMIZATION
void AInteractionBox::CustomDynamicClassInitialization(
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
      UStatsTrackerLib::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(ACharacterBase::StaticClass());
  FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(
      InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
}

PRAGMA_ENABLE_OPTIMIZATION
void AInteractionBox::SetDefault(int32 EntryPoint) {
  int32 FTrunc_ReturnValue{};
  bool Equal_Int{};
  bool Not_PreBool{};
  ACharacter *GetPlayerCharacter{};
  bool IsValid_ReturnValue{};
  bool Equal_Object{};
  bool Greater_FloatFloat_ReturnValue{};
  bool Not_PreBool{};
  bool BooleanAND{};
  TArray<int32, TInlineAllocator<8>> StateStack;
  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 1: {
      UKismetSystemLibrary::Delay(
          this, 2.0f,
          FLatentActionInfo(2, -4, TEXT("SetDefault"),
                            this));
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 2: {
      CurrentState = 3;
      break;
    }
    case 3: {
      UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,
                                  ReadStats);
    }
    case 4: {
      Day = ReadStats;
    }
    case 5: {
      CanDoQuest = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 9: {
      CurrentState = 10;
      break;
    }
    case 10: {
      Not_PreBool =
          UKismetMathLibrary::Not_PreBool(IsDoor);
      if (!Not_PreBool) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 11: {
      if (!EnableCompanyPriority) {
        CurrentState = 14;
        break;
      }
    }
    case 12: {
      UStatsTrackerLib::ReadStats(FString(TEXT("CompanyRank")), false, this,
                                  ReadStats_Value);
    }
    case 13: {
      FTrunc_ReturnValue =
          UKismetMathLibrary::FTrunc(ReadStats_Value);
      Equal_Int =
          UKismetMathLibrary::EqualEqual_IntInt(FTrunc_ReturnValue,
                                                EnableRank);
      if (!Equal_Int) {
        CurrentState = 20;
        break;
      }
    }
    case 14: {
      StateStack.Push(21);
    }
    case 15: {
      Not_PreBool =
          UKismetMathLibrary::Not_PreBool(AllDone);
      BooleanAND = UKismetMathLibrary::BooleanAND(
          Not_PreBool, CanDoQuest);
      if (!BooleanAND) {
        CurrentState = 24;
        break;
      }
    }
    case 16: {
      SetActorHiddenInGame(false);
    }
    case 17: {
      if (!ResetNextDay) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 18: {
      UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,
                                  ReadStats);
    }
    case 19: {
      Greater_FloatFloat_ReturnValue =
          UKismetMathLibrary::Greater_FloatFloat(ReadStats,
                                                 Day);
      if (!Greater_FloatFloat_ReturnValue) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
      CurrentState = 1;
      break;
    }
    case 20: {
      SetActorHiddenInGame(true);
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 21: {
      if (UKismetMathLibrary::IsValid(InFrontOfDoorCheck)) {
        (GetOverlappingActors).Reset();
        InFrontOfDoorCheck->UPrimitiveComponent::GetOverlappingActors(
            GetOverlappingActors,
            ACharacterBase::StaticClass());
      }
      FCustomThunkTemplates::Array_Get(
          GetOverlappingActors, 0,
          Array_Get_Item);
      IsValid_ReturnValue =
          UKismetSystemLibrary::IsValid(Array_Get_Item);
      if (!IsValid_ReturnValue) {
        CurrentState = 23;
        break;
      }
    }
    case 22: {
      GetPlayerCharacter =
          UGameplayStatics::GetPlayerCharacter(this, 0);
      if (::IsValid(InFrontOfDoorCheck)) {
        (GetOverlappingActors).Reset();
        InFrontOfDoorCheck->UPrimitiveComponent::GetOverlappingActors(
            GetOverlappingActors,
            ACharacterBase::StaticClass());
      }
      FCustomThunkTemplates::Array_Get(
          GetOverlappingActors, 0,
          Array_Get_Item);
      Equal_Object =
          UKismetMathLibrary::Equal_Object(
              Array_Get_Item, GetPlayerCharacter);
      IsCharactorInFrontOfObject = Equal_Object;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 23: {
      IsCharactorInFrontOfObject = false;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 24: {
      SetActorHiddenInGame(true);
      CurrentState = 17;
      break;
    }
    default:
      check(false);
      break;
    }
  } while (CurrentState != -1);
}

void AInteractionBox::ShowHighLight(int32 EntryPoint) {
  bool Not_PreBool_1{};
  check(EntryPoint == 28);

  Not_PreBool_1 = UKismetMathLibrary::Not_PreBool(IsDoor);
  if (!Not_PreBool_1) {
    return;
  }
  SetActorHiddenInGame(true);
  CanDoQuest = true;
  return;
}

void AInteractionBox::ShowHighLight(int32 EntryPoint) {
  check(EntryPoint == 27);

  if (::IsValid(Highlight)) {
    Highlight->UPrimitiveComponent::SetRenderCustomDepth(true);
  }

  if (::IsValid(Highlight)) {
    Highlight->SetMaterial(
        0, CastChecked<UMaterialInterface>(
               CastChecked<UDynamicClass>(AInteractionBox::StaticClass())
                   ->UsedAssets[3],
               ECastCheckedType::NullAllowed));
  }
  return;
}

void AInteractionBox::HideHighLight(int32 EntryPoint) {
  check(EntryPoint == 6);

  if (::IsValid(Highlight)) {
    Highlight->UPrimitiveComponent::SetRenderCustomDepth(false);
  }
  if (::IsValid(Highlight)) {
    Highlight->SetMaterial(
        0, CastChecked<UMaterialInterface>(
               CastChecked<UDynamicClass>(AInteractionBox::StaticClass())
                   ->UsedAssets[1],
               ECastCheckedType::NullAllowed));
  }
  return;
}

void AInteractionBox::ReceiveBeginPlay() {
  SetDefault(28);
}

void AInteractionBox::ReceiveTick(float DeltaSeconds) {
  Event_DeltaSeconds = DeltaSeconds;
  UpdateVisibility(9);
}

void AInteractionBox::ReceiveActorEndCursorOver() {
  HideHighLight(6);
}

void AInteractionBox::ReceiveActorBeginCursorOver() {
  ShowHighLight(27);
}

// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void AInteractionBox::StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/Invisible_M.Invisible_M 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame.DoorFrame 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame_M.DoorFrame_M 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AInteractionBox::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperCharacter 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbookComponent 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_idle_FB.M_crt_idle_FB 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_idle_FB.E_crt_idle_FB 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_idle_FB.J_crt_idle_FB 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_Walk_FB.M_crt_Walk_FB 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_Walk_FB.E_crt_Walk_FB 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_Walk_FB.J_crt_Walk_FB 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Assets/Materials/DefaultLitSpriteMaterial_FlipN.DefaultLitSpriteMaterial_FlipN 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0603.0603 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/ProjectYW-44.ProjectYW-44 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0401.0401 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0109.0109 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0403.0403 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0402.0402 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0404.0404 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0405.0405 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0406.0406 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0407.0407 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0408.0408 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0305.0305 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0601.0601 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0602.0602 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0301.0301 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0302.0302 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0303.0303 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0501.0501 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0502.0502 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0105.0105 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0503.0503 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0504.0504 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0507.0507 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0508.0508 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0505.0505 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0506.0506 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0113.0113 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/L_2_Crop.L_2_Crop 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/M_2_Crop.M_2_Crop 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/Xl_2_Crop.Xl_2_Crop 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/People_2_Crop.People_2_Crop 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0201.0201 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0109.0109 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0107.0107 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0203.0203 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0205.0205 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0204.0204 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0202.0202 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0206.0206 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0207.0207 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0208.0208 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0209.0209 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0210.0210 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0211.0211 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0212.0212 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0213.0213 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0214.0214 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/DayResult.DayResult 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/continuebutton.continuebutton 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/SleepUI.SleepUI 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/CoinImage.CoinImage 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/FillBar.FillBar 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/SleepSlider.SleepSlider 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/Sleepbutton.Sleepbutton 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Exit.Exit 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Bar.Bar 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0101.0101 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0102.0102 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0103.0103 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0104.0104 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0105.0105 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0106.0106 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0110.0110 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0107.0107 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0108.0108 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0111.0111 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0112.0112 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Background_crop.Background_crop 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/7_001.7_001 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_1_crop.Book_1_crop 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/16RM.16RM 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Professer_crop.Professer_crop 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_2crop.Book_2crop 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_3_crop.Book_3_crop 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/1RM.1RM 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/2RM.2RM 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/3RM.3RM 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/4RM.4RM 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/5RM.5RM 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/6RM.6RM 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/7RM.7RM 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/8RM.8RM 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/9RM.9RM 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/10RM.10RM 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/11RM.11RM 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/12RM.12RM 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/13RM.13RM 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/14RM.14RM 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/15RM.15RM 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/17RM.17RM 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/18RM.18RM 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/All_Box_2_Crop.All_Box_2_Crop 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/S_2_Crop.S_2_Crop 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/All_Box_crop.All_Box_crop 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/S_crop.S_crop 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/L_crop.L_crop 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/M_crop.M_crop 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/XL_crop.XL_crop 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/People_crop.People_crop 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Backgorund.Backgorund 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant3.Plant3 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/WateringCan.WateringCan 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip2.Drip2 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant0.Plant0 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant1.Plant1 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant2.Plant2 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip0.Drip0 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip1.Drip1 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileBG.ProfileBG 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/slaveProfile.slaveProfile 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileFrame.ProfileFrame 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed3x.Speed3x 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/PauseButton.PauseButton 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed1x.Speed1x 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed2x.Speed2x 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/EmployeeeProfile.EmployeeeProfile 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ManagerProfile.ManagerProfile 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/DirectorProfile.DirectorProfile 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/CharacterBP/CharacterBase_BP.CharacterBase_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperAInteractionBox
{
	FRegisterHelperAInteractionBox()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/InteractionBox_BP"), &AInteractionBox::StaticDependenciesAssets);
	}
	static FRegisterHelperAInteractionBox Instance;
};
FRegisterHelperAInteractionBox FRegisterHelperAInteractionBox::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
