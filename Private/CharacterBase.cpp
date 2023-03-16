#include "CharacterBase.h"
#include "Coffee_widget.h"
#include "DialogUI.h"
#include "FlipbooksState.h"
#include "Gamewin.h"
#include "GeneratedCodeHelpers.h"
#include "InteractionBox.h"
#include "Present_widget.h"
#include "QuestUI.h"
#include "Recruit_widget.h"
#include "Repair_widget.h"
#include "ResultOfDays.h"
#include "School.h"
#include "ShopHealthty.h"
#include "SleepWell.h"
#include "StatsTrackerLib.h"
#include "StatsUi"
#include "WateringPlants_WG.h"
#include "WithdrawnalShop.h"
#include "Working_widget.h"
#include "share_widget.h"

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ACharacterBase::ACharacterBase(const FObjectInitializer &ObjectInitializer)
    : Super() {
  auto CollisionCylinder = CastChecked<UCapsuleComponent>(
      this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")),
      ECastCheckedType::NullAllowed);
  auto CharMoveComp = CastChecked<UCharacterMovementComponent>(
      this->GetDefaultSubobjectByName(TEXT("CharMoveComp")),
      ECastCheckedType::NullAllowed);
  auto CharSprite = CastChecked<UPaperFlipbookComponent>(
      this->GetDefaultSubobjectByName(TEXT("Sprite")),
      ECastCheckedType::NullAllowed);

  if (CollisionCylinder) {
    auto &CollisionHeight = (*(AccessPrivateProperty<float>(
        (CollisionCylinder), UCapsuleComponent::CapsuleHalfHeight())));
    CollisionHeight = 10.0f;
    auto &CollisionRadius = (*(AccessPrivateProperty<float>(
        (CollisionCylinder), UCapsuleComponent::CapsuleRadius())));
    CollisionRadius = 5.0f;
    auto &CollisionChannel =
        (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel>>(
            &(CollisionCylinder->BodyInstance), FBodyInstance::ObjectType())));
    CollisionChannel = ECollisionChannel::ECC_WorldStatic;
    auto &CollisionResponse = (*(AccessPrivateProperty<FCollisionResponse>(
        &(CollisionCylinder->BodyInstance),
        FBodyInstance::CollisionResponses())));
    auto &CollisionDefault = (*(AccessPrivateProperty<TArray<FResponseChannel>>(
        &(CollisionResponse), FCollisionResponse::ResponseArray())));
    CollisionDefault = TArray<FResponseChannel>();
    CollisionDefault.AddUninitialized(3);
    FResponseChannel::StaticStruct()->InitializeStruct(
        CollisionDefault.GetData(), 3);
    auto &HitboxDefault = CollisionDefault[0];
    HitboxDefault.Channel = FName(TEXT("Visibility"));
    HitboxDefault.Response = ECollisionResponse::ECR_Ignore;
    auto &CameraDefault = CollisionDefault[1];
    CameraDefault.Channel = FName(TEXT("Camera"));
    CameraDefault.Response = ECollisionResponse::ECR_Ignore;
    auto &CharMoveCompDefault = CollisionDefault[2];
    CharMoveCompDefault.Channel = FName(TEXT("Door"));
    CharMoveCompDefault.Response = ECollisionResponse::ECR_Ignore;
    CollisionCylinder->SetCollisionProfileName(FName(TEXT("Custom")));

    static TWeakFieldPtr<FProperty> CollisionPtr{};
    const FProperty *CCollisionNavigation = CollisionPtr.Get();
    if (nullptr == CCollisionNavigation) {
      CCollisionNavigation =
          (UActorComponent::StaticClass())
              ->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
      check(CCollisionNavigation);
      CollisionPtr = CCollisionNavigation;
    }
    (((FBoolProperty *)CCollisionNavigation)
         ->SetPropertyValue_InContainer((CollisionCylinder), false, 0));
  }

  if (CharMoveComp) {
    static TWeakFieldPtr<FProperty> CharMoveCompPtr_0{};
    const FProperty *Acceleration = CharMoveCompPtr_0.Get();
    if (nullptr == Acceleration) {
      Acceleration =
          (UNavMovementComponent::StaticClass())
              ->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
      check(Acceleration);
      CharMoveCompPtr_0 = Acceleration;
    }
    (((FBoolProperty *)Acceleration)
         ->SetPropertyValue_InContainer((CharMoveComp), false, 0));

    static TWeakFieldPtr<FProperty> CharMoveCompPtr_1{};
    const FProperty *CMoveCNavigation = CharMoveCompPtr_1.Get();
    if (nullptr == CMoveCNavigation) {
      CMoveCNavigation =
          (UActorComponent::StaticClass())
              ->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
      check(CMoveCNavigation);
      CharMoveCompPtr_1 = CMoveCNavigation;
    }
    (((FBoolProperty *)CMoveCNavigation)
         ->SetPropertyValue_InContainer((CharMoveComp), false, 0));
  }

  if (CharSprite) {
    auto &PlayerFlipbook = (*(AccessPrivateProperty<UPaperFlipbook *>(
        (CharSprite), UPaperFlipbookComponent::SourceFlipbook())));
    PlayerFlipbook = CastChecked<UPaperFlipbook>(
        CastChecked<UDynamicClass>(ACharacterBase::StaticClass())
            ->UsedAssets[0],
        ECastCheckedType::NullAllowed);
    CharSprite->OverrideMaterials = TArray<UMaterialInterface *>();
    CharSprite->OverrideMaterials.Reserve(1);
    CharSprite->OverrideMaterials.Add(CastChecked<UMaterialInterface>(
        CastChecked<UDynamicClass>(ACharacterBase::StaticClass())
            ->UsedAssets[1],
        ECastCheckedType::NullAllowed));
    CharSprite->bRenderInDepthPass = false;
    CharSprite->CastShadow = true;
    CharSprite->bCastHiddenShadow = true;
    CharSprite->LightingChannels.bChannel2 = true;
    CharSprite->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_128;
    CharSprite->CustomDepthStencilValue = 5;
    auto &EnableCollision =
        (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type>>(
            &(CharSprite->BodyInstance), FBodyInstance::CollisionEnabled())));
    EnableCollision = ECollisionEnabled::Type::QueryAndPhysics;
    auto &ResponseCollision = (*(AccessPrivateProperty<FCollisionResponse>(
        &(CharSprite->BodyInstance), FBodyInstance::CollisionResponses())));
    auto &CharSprite = (*(AccessPrivateProperty<TArray<FResponseChannel>>(
        &(ResponseCollision), FCollisionResponse::ResponseArray())));
    CharSprite = TArray<FResponseChannel>();
    CharSprite.AddUninitialized(1);
    FResponseChannel::StaticStruct()->InitializeStruct(CharSprite.GetData(), 1);
    auto &CharSpriteDefault = CharSprite[0];
    CharSpriteDefault.Channel = FName(TEXT("Door"));
    CharSpriteDefault.Response = ECollisionResponse::ECR_Ignore;
    CharSprite->SetCollisionProfileName(FName(TEXT("Custom")));
    auto &CharSpriteAttachP = (*(AccessPrivateProperty<UCapsuleComponent *>(
        (CharSprite), USceneComponent::AttachParent())));
    CharSpriteAttachP = CollisionCylinder;
    auto &CharSpritePosition = (*(AccessPrivateProperty<FVector>(
        (CharSprite), USceneComponent::RelativeLocation())));
    CharSpritePosition = FVector(-1.0f, 0.0f, -12.0f);
    auto &CharSpriteRotation = (*(AccessPrivateProperty<FVector>(
        (CharSprite), USceneComponent::RelativeScale3D())));
    CharSpriteRotation = FVector(0.425f, 0.425f, 0.425f);
    static TWeakFieldPtr<FProperty> CharSpritePtr{};
    const FProperty *CSpriteNavigation = CharSpritePtr.Get();
    if (nullptr == CSpriteNavigation) {
      CSpriteNavigation =
          (UActorComponent::StaticClass())
              ->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
      check(CSpriteNavigation);
      CharSpritePtr = CSpriteNavigation;
    }
    (((FBoolProperty *)CSpriteNavigation)
         ->SetPropertyValue_InContainer((CharSprite), false, 0));
  }

  SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
  Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
  InteractionHitBox =
      CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractionHitBox"));
  SpringArm->CreationMethod = EComponentCreationMethod::Native;
  SpringArm->AttachToComponent(
      CollisionCylinder, FAttachmentTransformRules::KeepRelativeTransform);
  SpringArm->TargetArmLength = 400.0f;
  SpringArm->bUsePawnControlRotation = true;
  SpringArm->bInheritPitch = false;
  SpringArm->bInheritYaw = false;
  SpringArm->bInheritRoll = false;
  auto &SpringArmPosition = (*(AccessPrivateProperty<FVector>(
      (SpringArm), USceneComponent::RelativeLocation())));
  SpringArmPosition = FVector(0.0f, 0.0f, 35.0f);
  auto &SpringArmRotation = (*(AccessPrivateProperty<FRotator>(
      (SpringArm), USceneComponent::RelativeRotation())));
  SpringArmRotation = FRotator(3.0f, -90.0f, 0.0f);

  static TWeakFieldPtr<FProperty> SpringArmPtr{};
  const FProperty *CSpringANavigation = SpringArmPtr.Get();
  if (nullptr == CSpringANavigation) {
    CSpringANavigation =
        (UActorComponent::StaticClass())
            ->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
    check(CSpringANavigation);
    SpringArmPtr = CSpringANavigation;
  }
  (((FBoolProperty *)CSpringANavigation)
       ->SetPropertyValue_InContainer((SpringArm), false, 0));

  Camera->CreationMethod = EComponentCreationMethod::Native;
  Camera->AttachToComponent(SpringArm,
                            FAttachmentTransformRules::KeepRelativeTransform);
  auto &CameraRotation = (*(AccessPrivateProperty<FRotator>(
      (Camera), USceneComponent::RelativeRotation())));
  CameraRotation = FRotator(12.0f, 0.0f, 0.0f);
  (((FBoolProperty *)CSpringANavigation)
       ->SetPropertyValue_InContainer((Camera), false, 0));
  InteractionHitBox->CreationMethod = EComponentCreationMethod::Native;
  InteractionHitBox->AttachToComponent(
      CollisionCylinder, FAttachmentTransformRules::KeepRelativeTransform);
  auto &InteractHitBoxMesh = (*(AccessPrivateProperty<UStaticMesh *>(
      (InteractionHitBox), UStaticMeshComponent::StaticMesh())));
  InteractHitBoxMesh = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[2],
      ECastCheckedType::NullAllowed);
  InteractionHitBox->OverrideMaterials = TArray<UMaterialInterface *>();
  InteractionHitBox->OverrideMaterials.Reserve(1);
  InteractionHitBox->OverrideMaterials.Add(CastChecked<UMaterialInterface>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[3],
      ECastCheckedType::NullAllowed));
  auto &IHitBoxResponses = (*(AccessPrivateProperty<FCollisionResponse>(
      &(InteractionHitBox->BodyInstance),
      FBodyInstance::CollisionResponses())));
  auto &IHitBoxChannel = (*(AccessPrivateProperty<TArray<FResponseChannel>>(
      &(IHitBoxResponses), FCollisionResponse::ResponseArray())));
  IHitBoxChannel = TArray<FResponseChannel>();
  IHitBoxChannel.AddUninitialized(9);

  FResponseChannel::StaticStruct()->InitializeStruct(IHitBoxChannel.GetData(),
                                                     9);
  auto &IHBCWorldStatic = IHitBoxChannel[0];
  IHBCWorldStatic.Channel = FName(TEXT("WorldStatic"));
  IHBCWorldStatic.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCWorldDynamic = IHitBoxChannel[1];
  IHBCWorldDynamic.Channel = FName(TEXT("WorldDynamic"));
  IHBCWorldDynamic.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCPawn = IHitBoxChannel[2];
  IHBCPawn.Channel = FName(TEXT("Pawn"));
  IHBCPawn.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCVisibility = IHitBoxChannel[3];
  IHBCVisibility.Channel = FName(TEXT("Visibility"));
  IHBCVisibility.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCCamera = IHitBoxChannel[4];
  IHBCCamera.Channel = FName(TEXT("Camera"));
  IHBCCamera.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCPhysicsBody = IHitBoxChannel[5];
  IHBCPhysicsBody.Channel = FName(TEXT("PhysicsBody"));
  IHBCPhysicsBody.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCVehicle = IHitBoxChannel[6];
  IHBCVehicle.Channel = FName(TEXT("Vehicle"));
  IHBCVehicle.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCDestructible = IHitBoxChannel[graph_CharacterBase];
  IHBCDestructible.Channel = FName(TEXT("Destructible"));
  IHBCDestructible.Response = ECollisionResponse::ECR_Overlap;
  auto &IHBCDoor = IHitBoxChannel[8];
  IHBCDoor.Channel = FName(TEXT("Door"));
  IHBCDoor.Response = ECollisionResponse::ECR_Overlap;

  InteractionHitBox->SetCollisionProfileName(FName(TEXT("Custom")));
  auto &IHitBoxPosition = (*(AccessPrivateProperty<FVector>(
      (InteractionHitBox), USceneComponent::RelativeLocation())));
  IHitBoxPosition = FVector(0.0f, 0.0f, 15.0f);
  auto &IHitBoxScale = (*(AccessPrivateProperty<FVector>(
      (InteractionHitBox), USceneComponent::RelativeScale3D())));
  IHitBoxScale = FVector(0.25f, 1.0f, 1.0f);
  (((FBoolProperty *)CSpringANavigation)
       ->SetPropertyValue_InContainer((InteractionHitBox), true, 0));
  IsMouseInput = false;
  Speed = 180.0f;
  TimeSpeed = 1.0f;
  IsClickedOnDoor = false;
  IsInFrontOfDoor = false;
  CanTeleport = false;
  ElevatorUp = false;
  IsInFrontOfQuest = false;
  ZOrder = 0;
  MiniGameWidget = TArray<UObject *>();
  CanMove = false;
  UIArray = TArray<UClass *>();
  UIWidgetCreated = TArray<UUserWidget *>();
  TeleportToLocation = FVector(0.0f, 0.0f, 0.0f);
  auto &PlayerFlipbook = (*(AccessPrivateProperty<UPaperFlipbookComponent *>(
      (this), APaperCharacter::Sprite())));
  PlayerFlipbook = CharSprite;
  auto &PlayerMoveComp =
      (*(AccessPrivateProperty<UCharacterMovementComponent *>(
          (this), ACharacter::CharacterMovement())));
  PlayerMoveComp = CharMoveComp;
  auto &PlayerHitbox = (*(AccessPrivateProperty<UCapsuleComponent *>(
      (this), ACharacter::CapsuleComponent())));
  PlayerHitbox = CollisionCylinder;
  auto &PlayerChannel = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod>(
      (this), AActor::DefaultUpdateOverlapsMethodDuringLevelStreaming())));
  PlayerChannel = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}

PRAGMA_ENABLE_OPTIMIZATION
void ACharacterBase::PostLoadSubobjects(
    FObjectInstancingGraph *OuterInstanceGraph) {
  Super::PostLoadSubobjects(OuterInstanceGraph);
  if (SpringArm) {
    SpringArm->CreationMethod = EComponentCreationMethod::Native;
  }
  if (Camera) {
    Camera->CreationMethod = EComponentCreationMethod::Native;
  }
  if (InteractionHitBox) {
    InteractionHitBox->CreationMethod = EComponentCreationMethod::Native;
  }
}

PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase::CustomDynamicClassInitialization(
    UDynamicClass *InDynamicClass) {
  ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
  ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
  ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
  ensure(0 == InDynamicClass->ComponentTemplates.Num());
  ensure(0 == InDynamicClass->Timelines.Num());
  ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
  ensure(nullptr == InDynamicClass->AnimClassImplementation);
  InDynamicClass->AssembleReferenceTokenStream();

  // State อนิเมชั่น ตัวละคร
  InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(
      nullptr,
      TEXT("/Game/Blueprints/CharacterBP/FlipbooksState_E.FlipbooksState_E")));

  // UI เควสมินิเกมทั้งหมด
  InDynamicClass->ReferencedConvertedFields.Add(UStatsUI::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UQuestUI::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(
      UStatsTrackerLib::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UWateringPlants::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UShopHealthty::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(
      UWithdrawnalShop::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(USchool::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(URecruit_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(USleepWell::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UResultOfDays::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UCoffee_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UDialogUI::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UPresent_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(Ushare_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(URepair_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UWorking_widget::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(UGamewin::StaticClass());
  InDynamicClass->ReferencedConvertedFields.Add(AInteractionBox::StaticClass());

  FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(
      InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
  auto ActorCharVariable = NewObject<USceneComponent>(
      InDynamicClass, USceneComponent::StaticClass(),
      TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00000000);
  InDynamicClass->ComponentTemplates.Add(ActorCharVariable);
  auto ACPlayerKeyBinding = NewObject<UInputKeyDelegateBinding>(
      InDynamicClass, UInputKeyDelegateBinding::StaticClass(),
      TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
  InDynamicClass->DynamicBindingObjects.Add(ACPlayerKeyBinding);
  auto ACPlayerInputEvent = NewObject<UInputActionDelegateBinding>(
      InDynamicClass, UInputActionDelegateBinding::StaticClass(),
      TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
  InDynamicClass->DynamicBindingObjects.Add(ACPlayerInputEvent);
  auto ACPlayerInputAxis = NewObject<UInputAxisDelegateBinding>(
      InDynamicClass, UInputAxisDelegateBinding::StaticClass(),
      TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
  InDynamicClass->DynamicBindingObjects.Add(ACPlayerInputAxis);

  static TWeakFieldPtr<FProperty> ACPlayerPtr{};
  const FProperty *ACPlayerNavigation = ACPlayerPtr.Get();
  if (nullptr == ACPlayerNavigation) {
    ACPlayerNavigation =
        (UActorComponent::StaticClass())
            ->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
    check(ACPlayerNavigation);
    ACPlayerPtr = ACPlayerNavigation;
  }
  (((FBoolProperty *)ACPlayerNavigation)
       ->SetPropertyValue_InContainer((ActorCharVariable), false, 0));

  ACPlayerKeyBinding->InputKeyDelegateBindings =
      TArray<FBlueprintInputKeyDelegateBinding>();
  ACPlayerKeyBinding->InputKeyDelegateBindings.AddUninitialized(6);
  FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(
      ACPlayerKeyBinding->InputKeyDelegateBindings.GetData(), 6);
  auto &RightMouseReleased = ACPlayerKeyBinding->InputKeyDelegateBindings[0];
  RightMouseReleased.InputChord.Key = FKey(TEXT("RightMouseButton"));
  RightMouseReleased.InputKeyEvent = EInputEvent::IE_Released;
  RightMouseReleased.FunctionNameToBind =
      FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5"));
  auto &RightMouseClicked = ACPlayerKeyBinding->InputKeyDelegateBindings[1];
  RightMouseClicked.InputChord.Key = FKey(TEXT("RightMouseButton"));
  RightMouseClicked.FunctionNameToBind =
      FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4"));
  auto &LeftMouseReleased = ACPlayerKeyBinding->InputKeyDelegateBindings[2];
  LeftMouseReleased.InputChord.Key = FKey(TEXT("LeftMouseButton"));
  LeftMouseReleased.InputKeyEvent = EInputEvent::IE_Released;
  LeftMouseReleased.FunctionNameToBind =
      FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"));
  auto &LeftMouseClicked = ACPlayerKeyBinding->InputKeyDelegateBindings[3];
  LeftMouseClicked.InputChord.Key = FKey(TEXT("LeftMouseButton"));
  LeftMouseClicked.FunctionNameToBind =
      FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"));

  auto &TabKey = ACPlayerKeyBinding->InputKeyDelegateBindings[5];
  TabKey.InputChord.Key = FKey(TEXT("Tab"));
  TabKey.FunctionNameToBind =
      FName(TEXT("InpActEvt_Tab_K2Node_InputKeyEvent_1"));
  ACPlayerInputEvent->InputActionDelegateBindings =
      TArray<FBlueprintInputActionDelegateBinding>();
  ACPlayerInputEvent->InputActionDelegateBindings.AddUninitialized(4);
  FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(
      ACPlayerInputEvent->InputActionDelegateBindings.GetData(), 4);
  auto &Debugkey_1 = ACPlayerInputEvent->InputActionDelegateBindings[0];
  Debugkey_1.InputActionName = FName(TEXT("DebugKey1"));
  Debugkey_1.FunctionNameToBind =
      FName(TEXT("InpActEvt_DebugKey1_K2Node_InputActionEvent_1"));
  auto &Debugkey_2 = ACPlayerInputEvent->InputActionDelegateBindings[1];
  Debugkey_2.InputActionName = FName(TEXT("DebugKey2"));
  Debugkey_2.FunctionNameToBind =
      FName(TEXT("InpActEvt_DebugKey2_K2Node_InputActionEvent_0"));
  auto &CancelPathReleased = ACPlayerInputEvent->InputActionDelegateBindings[2];
  CancelPathReleased.InputActionName = FName(TEXT("CancelPath"));
  CancelPathReleased.InputKeyEvent = EInputEvent::IE_Released;
  CancelPathReleased.FunctionNameToBind =
      FName(TEXT("InpActEvt_CancelPath_K2Node_InputActionEvent_3"));
  auto &CancelPathEntered = ACPlayerInputEvent->InputActionDelegateBindings[3];
  CancelPathEntered.InputActionName = FName(TEXT("CancelPath"));
  CancelPathEntered.FunctionNameToBind =
      FName(TEXT("InpActEvt_CancelPath_K2Node_InputActionEvent_2"));
  ACPlayerInputAxis->InputAxisDelegateBindings =
      TArray<FBlueprintInputAxisDelegateBinding>();
  ACPlayerInputAxis->InputAxisDelegateBindings.AddUninitialized(1);
  FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(
      ACPlayerInputAxis->InputAxisDelegateBindings.GetData(), 1);
  auto &AxisADInput = ACPlayerInputAxis->InputAxisDelegateBindings[0];
  AxisADInput.InputAxisName = FName(TEXT("KeyboardMovement"));
  AxisADInput.FunctionNameToBind =
      FName(TEXT("InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1"));
}

PRAGMA_ENABLE_OPTIMIZATION
void ACharacterBase::DebuggingKeys(int32 EntryPoint) {
  FString CallFunc_Conv_FloatToString_ReturnValue{};
  FString CallFunc_Concat_StrStr_ReturnValue{};
  check(EntryPoint == 127);
  UStatsTrackerLib::ReadStats(FString(TEXT("Health")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("H_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("Energy")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("E_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("Knowledge")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("K_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("CompanyRank")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("CR_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("REPAIR")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("JR_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("WATERPLANT")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("JW_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("EMWORK")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("EW_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("COFFE")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("EC_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("PRESENT")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("MP_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("SHARE")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("MS_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("RECURIT")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("MR_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("PRESENT")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("MP_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("WORLDTIME")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("WT_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDATE")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("WD_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);
  UStatsTrackerLib::ReadStats(FString(TEXT("CCEEOO")), false, this,
                              CallFunc_ReadStats_Value);
  CallFunc_Conv_FloatToString_ReturnValue =
      UKismetStringLibrary::Conv_FloatToString(CallFunc_ReadStats_Value);
  CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(
      FString(TEXT("CEO_")), CallFunc_Conv_FloatToString_ReturnValue);
  UKismetSystemLibrary::PrintString(
      this, CallFunc_Concat_StrStr_ReturnValue, true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  check(EntryPoint == 158);
  UStatsTrackerLib::AddStats(FString(TEXT("Money")), 200.0f, this);
  UKismetSystemLibrary::PrintString(
      this, FString(TEXT("Added 200 Money")), true, true,
      FLinearColor(0.0f, 0.65f, 1.0f, 1.0f), 2.0f);

  return;
}

void ACharacterBase::MouseMovement(int32 EntryPoint) {
  bool CallFunc_IsValid_ReturnValue{};
  bool CallFunc_EqualEqual_FloatFloat_ReturnValue{};
  bool CallFunc_BooleanAND_ReturnValue{};
  bool CallFunc_K2_SetActorLocation_ReturnValue{};
  TArray<int32, TInlineAllocator<8>> StateStack;

  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 5: {
      CurrentState = 6;
      break;
    }
    case 6: {
      IsClosed = false;
    }
    case 7: {
      HasBeenInitd = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 20: {
      if (!IsClosed) {
        CurrentState = 21;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 21: {
      IsClosed = true;
    }
    case 22: {
      if (!true) {
        CurrentState = 24;
        break;
      }
    }
    case 23: {
      gate_open_or_close = false;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 24: {
      gate_open_or_close = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 25: {
      IsClosed = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 26: {
      gate_open_or_close = false;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 27: {
      gate_open_or_close = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 28: {
      if (!gate_open_or_close) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 29: {
      CanTeleport = true;
    }
    case 30: {
      GetClickedLocation(CallFunc_GetClickedLocation_Destination,
                         CallFunc_GetClickedLocation_ClickedActor,
                         CallFunc_GetClickedLocation_IsCleckedOnDoor);
    }
    case 31: {
      if (!CallFunc_GetClickedLocation_IsCleckedOnDoor) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 32: {
      MoveToLocatedPoint(CallFunc_GetClickedLocation_Destination);
    }
    case 33: {
      if (!IsInFrontOfDoor) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 34: {
      CallFunc_IsValid_ReturnValue = UKismetSystemLibrary::IsValid(
          CallFunc_GetClickedLocation_ClickedActor);
      if (!CallFunc_IsValid_ReturnValue) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 35: {
      if (!CanTeleport) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 36: {
      StateStack.Push(38);
    }
    case 37: {
      if (!HasBeenInitd) {
        CurrentState = 43;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 38: {
      if (!IsClosed) {
        CurrentState = 39;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 39: {
      IsClosed = true;
    }
    case 40: {
      CallFunc_K2_SetActorLocation_ReturnValue = AActor::K2_SetActorLocation(
          TeleportToLocation, false,
          CallFunc_K2_SetActorLocation_SweepHitResult, true);
    }
    case 41: {
      if (::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent *>(
              (this), ACharacter::CharacterMovement()))))) {
        (*(AccessPrivateProperty<UCharacterMovementComponent *>(
             (this), ACharacter::CharacterMovement())))
            ->StopMovementImmediately();
      }
    }
    case 42: {
      UKismetSystemLibrary::Delay(
          this, 0.8f,
          FLatentActionInfo(5, -100000000, TEXT("DebuggingKeys"), this));
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 43: {
      HasBeenInitd = true;
    }
    case 44: {
      if (!false) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 45: {
      IsClosed = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 46: {
      StateStack.Push(27);
    }
    case 47: {
      StateStack.Push(20);
    }
    case 48: {
      if (!HasBeenInitd) {
        CurrentState = 49;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 49: {
      HasBeenInitd = true;
    }
    case 50: {
      if (!false) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
      CurrentState = 25;
      break;
    }
    case 51: {
      StateStack.Push(26);
      CurrentState = 47;
      break;
    }
    case 60: {
      if (!false) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 61: {
      IsClosed = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 66: {
      StateStack.Push(69);
    }
    case 67: {
      if (!HasBeenInitd) {
        CurrentState = 68;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 68: {
      HasBeenInitd = true;
      CurrentState = 60;
      break;
    }
    case 69: {
      if (!IsClosed) {
        CurrentState = 70;
        break;
      }
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 70: {
      IsClosed = true;
    }
    case 71: {
      if (!true) {
        CurrentState = 73;
        break;
      }
    }
    case 72: {
      gate_open_or_close = false;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 73: {
      gate_open_or_close = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 77: {
      StateStack.Push(78);
      CurrentState = 66;
      break;
    }
    case 78: {
      gate_open_or_close = false;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 79: {
      StateStack.Push(80);
      CurrentState = 66;
      break;
    }
    case 80: {
      gate_open_or_close = true;
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 106: {
      CurrentState = 107;
      break;
    }
    case 107: {
      StateStack.Push(113);
      StateStack.Push(119);
    }
    case 108: {
      UStatsTrackerLib::ReadStats(FString(TEXT("ISUIOPENED")), false, this,
                                  CallFunc_ReadStats_ValueKey);
    }
    case 109: {
      CallFunc_EqualEqual_FloatFloat_ReturnValue =
          UKismetMathLibrary::EqualEqual_FloatFloat(CallFunc_ReadStats_ValueKey,
                                                    0.0f);
      CanMove = CallFunc_EqualEqual_FloatFloat_ReturnValue;
    }
    case 110: {
      UpdateFlipbook();
    }
    case 111: {
      UpdateRotation();
    }
    case 112: {
      IsInfrontOfObjectChecker();
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 113: {
      CallFunc_BooleanAND_ReturnValue =
          UKismetMathLibrary::BooleanAND(CanMove, IsMouseInput);
      if (!CallFunc_BooleanAND_ReturnValue) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 114: {
      StateStack.Push(115);
      CurrentState = 66;
      break;
    }
    case 115: {
      if (!gate_open_or_close) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 116: {
      CanTeleport = false;
    }
    case 117: {
      GetDestionationToMove(CallFunc_GetDestionationToMove_Destionation);
    }
    case 118: {
      MoveToLocatedPoint(CallFunc_GetDestionationToMove_Destionation);
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 119: {
      CallFunc_BooleanAND_ReturnValue =
          UKismetMathLibrary::BooleanAND(CanMove, IsMouseInput);
      if (!CallFunc_BooleanAND_ReturnValue) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 120: {
      StateStack.Push(28);
      CurrentState = 47;
      break;
    }
    case 122: {
      CurrentState = 123;
      break;
    }
    case 123: {
      TempS_0 = K2Node_InputKeyEvent_Key_2;
      CurrentState = 46;
      break;
    }
    case 161: {
      CurrentState = 162;
      break;
    }
    case 162: {
      TempS_0 = K2Node_InputKeyEvent_Key_3;
      CurrentState = 51;
      break;
    }
    case 163: {
      CurrentState = 164;
      break;
    }
    case 164: {
      TempS_1 = K2Node_InputKeyEvent_Key_4;
      CurrentState = 79;
      break;
    }
    case 165: {
      CurrentState = 166;
      break;
    }
    case 166: {
      TempS_1 = K2Node_InputKeyEvent_Key_5;
      CurrentState = 77;
      break;
    }
    default:
      check(false);
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::Debug(int32 EntryPoint) {
  UStatsUI *bpfvCallFunc_Create_ReturnValueKey{};
  int32 CallFunc_Add_IntInt_ReturnValueKey{};
  UQuestUI *bpfvCallFunc_Create_ReturnValue_1Key{};
  int32 bpfvCallFunc_Array_Length_ReturnValueKey{};
  bool bpfvCallFunc_Less_IntInt_ReturnValueKey{};
  int32 CallFunc_Array_Add_ReturnValueKey{};
  TArray<int32, TInlineAllocator<8>> StateStack;

  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 8: {
      bpfvCallFunc_Create_ReturnValueKey = CastChecked<UStatsUI>(
          UWidgetBlueprintLibrary::Create(this, UStatsUI::StaticClass(),
                                          ((APlayerController *)nullptr)),
          ECastCheckedType::NullAllowed);
    }
    case 9: {
      if (::IsValid(bpfvCallFunc_Create_ReturnValueKey)) {
        bpfvCallFunc_Create_ReturnValueKey->UUserWidget::AddToViewport(20);
      }
    }
    case 10: {
      bpfvCallFunc_Create_ReturnValue_1Key = CastChecked<UQuestUI>(
          UWidgetBlueprintLibrary::Create(this, UQuestUI::StaticClass(),
                                          ((APlayerController *)nullptr)),
          ECastCheckedType::NullAllowed);
    }
    case 11: {
      if (::IsValid(bpfvCallFunc_Create_ReturnValue_1Key)) {
        bpfvCallFunc_Create_ReturnValue_1Key->UUserWidget::AddToViewport(20);
      }
    }
    case 12: {
      Temp_int_Loop_Counter_VariableKey = 0;
    }
    case 13: {
      Temp_int_Array_Index_VariableKey = 0;
    }
    case 14: {
      K2Node_MakeArray_ArrayKey.SetNum(14, true);
      K2Node_MakeArray_ArrayKey[0] = UWateringPlants::StaticClass();
      K2Node_MakeArray_ArrayKey[1] = UShopHealthty::StaticClass();
      K2Node_MakeArray_ArrayKey[2] = UWithdrawnalShop::StaticClass();
      K2Node_MakeArray_ArrayKey[3] = USchool::StaticClass();
      K2Node_MakeArray_ArrayKey[4] = URecruit_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[5] = USleepWell::StaticClass();
      K2Node_MakeArray_ArrayKey[6] = UResultOfDays::StaticClass();
      K2Node_MakeArray_ArrayKey[7] = UCoffee_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[8] = UDialogUI::StaticClass();
      K2Node_MakeArray_ArrayKey[9] = UPresent_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[10] = Ushare_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[11] = URepair_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[12] = UWorking_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[13] = UGamewin::StaticClass();
      bpfvCallFunc_Array_Length_ReturnValueKey =
          FCustomThunkTemplates::Array_Length(K2Node_MakeArray_ArrayKey);
      bpfvCallFunc_Less_IntInt_ReturnValueKey = UKismetMathLibrary::Less_IntInt(
          Temp_int_Loop_Counter_VariableKey,
          bpfvCallFunc_Array_Length_ReturnValueKey);
      if (!bpfvCallFunc_Less_IntInt_ReturnValueKey) {
        CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
        break;
      }
    }
    case 15: {
      Temp_int_Array_Index_VariableKey = Temp_int_Loop_Counter_VariableKey;
    }
    case 16: {
      StateStack.Push(19);
    }
    case 17: {
      K2Node_MakeArray_ArrayKey.SetNum(14, true);
      K2Node_MakeArray_ArrayKey[0] = UWateringPlants::StaticClass();
      K2Node_MakeArray_ArrayKey[1] = UShopHealthty::StaticClass();
      K2Node_MakeArray_ArrayKey[2] = UWithdrawnalShop::StaticClass();
      K2Node_MakeArray_ArrayKey[3] = USchool::StaticClass();
      K2Node_MakeArray_ArrayKey[4] = URecruit_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[5] = USleepWell::StaticClass();
      K2Node_MakeArray_ArrayKey[6] = UResultOfDays::StaticClass();
      K2Node_MakeArray_ArrayKey[7] = UCoffee_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[8] = UDialogUI::StaticClass();
      K2Node_MakeArray_ArrayKey[9] = UPresent_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[10] = Ushare_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[11] = URepair_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[12] = UWorking_widget::StaticClass();
      K2Node_MakeArray_ArrayKey[13] = UGamewin::StaticClass();
      FCustomThunkTemplates::Array_Get(K2Node_MakeArray_ArrayKey,
                                       Temp_int_Array_Index_VariableKey,
                                       CallFunc_Array_Get_ItemKey);
      CallFunc_Create_ReturnValue_2Key = UWidgetBlueprintLibrary::Create(
          this, CallFunc_Array_Get_ItemKey, ((APlayerController *)nullptr));
    }
    case 18: {
      CallFunc_Array_Add_ReturnValueKey = FCustomThunkTemplates::Array_Add(
          UIWidgetCreated, CallFunc_Create_ReturnValue_2Key);
      CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(false) : -1;
      break;
    }
    case 19: {
      CallFunc_Add_IntInt_ReturnValueKey =
          UKismetMathLibrary::Add_IntInt(Temp_int_Loop_Counter_VariableKey, 1);
      Temp_int_Loop_Counter_VariableKey = CallFunc_Add_IntInt_ReturnValueKey;
      CurrentState = 14;
      break;
    }
    case 81: {
      CurrentState = 82;
      break;
    }
    case 82: {
      IsMouseInput = true;
    }
    case 83: {
      if (::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent *>(
              (this), ACharacter::CharacterMovement()))))) {
        (*(AccessPrivateProperty<UCharacterMovementComponent *>(
             (this), ACharacter::CharacterMovement())))
            ->MaxWalkSpeed = Speed;
      }
    }
    case 84: {
      UGameplayStatics::SetGlobalTimeDilation(this, 1.0f);
    }
    case 85: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("Health")), 100.0f, true,
                                       100.0f, this);
    }
    case 86: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("Energy")), 100.0f, true,
                                       100.0f, this);
    }
    case 87: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("Money")), 10.0f, false,
                                       0.0f, this);
    }
    case 88: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("Knowledge")), 0.0f, true,
                                       40.0f, this);
    }
    case 89: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("CompanyRank")), 0.0f, true,
                                       2.0f, this);
    }
    case 90: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("ISUIOPENED")), 0.0f, true,
                                       1.0f, this);
    }
    case 91: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WORLDDILATION")), 1.0f,
                                       true, 3.000000, this);
    }
    case 92: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("Exp")), 0.0f, true,
                                       5500.0f, this);
    }
    case 93: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WORLDTIME")), 170.0f,
                                       false, 0.0f, this);
    }
    case 94: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WORLDDATE")), 1.0f, true,
                                       30.0f, this);
    }
    case 95: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WATERPLANT")), 0.0f, true,
                                       6.000000, this);
    }
    case 96: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("COFFE")), 0.0f, true,
                                       3.000000, this);
    }
    case 97: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("PRESENT")), 0.0f, true,
                                       2.0f, this);
    }
    case 98: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("RECURIT")), 0.0f, true,
                                       3.000000, this);
    }
    case 99: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("SHARE")), 0.0f, true, 1.0f,
                                       this);
    }
    case 100: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("REPAIR")), 0.0f, true,
                                       3.000000, this);
    }
    case 101: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("EMWORK")), 0.0f, true,
                                       2.0f, this);
    }
    case 102: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("ISSLEEP")), 0.0f, true,
                                       1.0f, this);
    }
    case 103: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("CCEEOO")), 0.0f, true,
                                       1.0f, this);
    }
    case 104: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WORLDTIMEMINUTE")), 0.0f,
                                       false, 0.0f, this);
    }
    case 105: {
      UStatsTrackerLib::KeyNewStatsKey(FString(TEXT("WORLDTIMEMUITIPLIER")),
                                       1.0f, true, 1.0f, this);
      CurrentState = 8;
      break;
    }
    default:
      check(false);
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::SetWorldDilation() {
  bool CallFunc_Less_FloatFloat_ReturnValue{};
  bool CallFunc_Greater_FloatFloat_ReturnValue{};
  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 52: {
      CurrentState = 53;
      break;
    }
    case 53: {
      UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDILATION")), false, this,
                                  CallFunc_ReadStats_Value);
    }
    case 54: {
      CallFunc_Less_FloatFloat_ReturnValue =
          UKismetMathLibrary::Less_FloatFloat(CallFunc_ReadStats_Value,
                                              2.500000);
      if (!CallFunc_Less_FloatFloat_ReturnValue) {
        CurrentState = 58;
        break;
      }
    }
    case 55: {
      UStatsTrackerLib::AddStats(FString(TEXT("WORLDDILATION")), 1.0f, this);
    }
    case 56: {
      UStatsTrackerLib::ReadStats(FString(TEXT("WORLDDILATION")), false, this,
                                  CallFunc_ReadStats_Value);
    }
    case 57: {
      UGameplayStatics::SetGlobalTimeDilation(this, CallFunc_ReadStats_Value);
      CurrentState = -1;
      break;
    }
    case 58: {
      CallFunc_Greater_FloatFloat_ReturnValue =
          UKismetMathLibrary::Greater_FloatFloat(CallFunc_ReadStats_Value,
                                                 2.500000);
      if (!CallFunc_Greater_FloatFloat_ReturnValue) {
        CurrentState = -1;
        break;
      }
    }
    case 59: {
      UStatsTrackerLib::AddStats(FString(TEXT("WORLDDILATION")), -2.0f, this);
      CurrentState = 56;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::KeyboardMovement() {
  check(EntryPoint == 124);
  if (!CanMove) {
    return;
  }
  AddMovementInput(FVector(1.0f, 0.0f, 0.0f), K2Node_InputAxisEvent_AxisValue,
                   false);
  return;
}

void ACharacterBase::SwitchKeyboardToMouse(int32 EntryPoint) {
  int32 CurrentState = EntryPoint;
  do {
    switch (CurrentState) {
    case 2: {
      CurrentState = 3;
      break;
    }
    case 3: {
      IsMouseInput = true;
    }
    case 4: {
      if (::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent *>(
              (this), ACharacter::CharacterMovement()))))) {
        (*(AccessPrivateProperty<UCharacterMovementComponent *>(
             (this), ACharacter::CharacterMovement())))
            ->MaxWalkSpeed = Speed;
      }
      CurrentState = -1;
      break;
    }
    case 62: {
      CurrentState = 63;
      break;
    }
    case 63: {
      TempS = K2Node_InputActionEvent_Key_2Key;
    }
    case 64: {
      if (::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent *>(
              (this), ACharacter::CharacterMovement()))))) {
        (*(AccessPrivateProperty<UCharacterMovementComponent *>(
             (this), ACharacter::CharacterMovement())))
            ->StopMovementImmediately();
      }
    }
    case 65: {
      IsMouseInput = false;
      CurrentState = 4;
      break;
    }
    case 74: {
      CurrentState = 75;
      break;
    }
    case 75: {
      TempS = K2Node_InputActionEvent_Key_3Key;
    }
    case 76: {
      UKismetSystemLibrary::Delay(
          this, 0.200000,
          FLatentActionInfo(2, 2068794393, TEXT("SwitchKeyboardToMouse"),
                            this));
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::InputKeyAction(int32 EntryPoint) {
  check(EntryPoint == 121);
  UStatsTrackerLib::AddStats(FString(TEXT("WORLDDATE")), 1.0f, this);
  return;
}
void ACharacterBase::KeyInpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1Key(
    float AxisValueKey) {
  K2Node_InputAxisEvent_AxisValue = AxisValueKey;
  ExecuteUbergraph_CharacterBase_5(124);
}
void ACharacterBase::KeyReceiveTickKey(float DeltaSecondsKey) {
  K2Node_Event_DeltaSecondsKey = DeltaSecondsKey;
  DebuggingKeys(106);
}
void ACharacterBase::KeyReceiveBeginPlayKey() {
  KeyExecuteUbergraph_CharacterBase_BPKey_3(81);
}
void ACharacterBase::KeyInpActEvt_J_K2Node_InputKeyEvent_0Key(FKey Key) {
  K2Node_InputKeyEvent_KeyKey = Key;
  KeyExecuteUbergraph_CharacterBase_BPKey_7(121);
}
void ACharacterBase::KeyInpActEvt_DebugKey2_K2Node_InputActionEvent_0Key(
    FKey Key) {
  K2Node_InputActionEvent_KeyKey = Key;
  ExecuteUbergraph_CharacterBase(127);
}
void ACharacterBase::KeyInpActEvt_DebugKey1_K2Node_InputActionEvent_1Key(
    FKey Key) {
  K2Node_InputActionEvent_Key_1Key = Key;
  KeyExecuteUbergraph_CharacterBase_BPKey_1(158);
}
void ACharacterBase::KeyInpActEvt_Tab_K2Node_InputKeyEvent_1Key(FKey Key) {
  K2Node_InputKeyEvent_Key_1Key = Key;
  ExecuteUbergraph_CharacterBase_4(52);
}
void ACharacterBase::KeyInpActEvt_CancelPath_K2Node_InputActionEvent_2Key(
    FKey Key) {
  K2Node_InputActionEvent_Key_2Key = Key;
  KeyExecuteUbergraph_CharacterBase_BPKey_6(62);
}
void ACharacterBase::KeyInpActEvt_CancelPath_K2Node_InputActionEvent_3Key(
    FKey Key) {
  K2Node_InputActionEvent_Key_3Key = Key;
  KeyExecuteUbergraph_CharacterBase_BPKey_6(74);
}
void ACharacterBase::KeyInpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2Key(
    FKey Key) {
  K2Node_InputKeyEvent_Key_2 = Key;
  ExecuteUbergraph_CharacterBase_2(122);
}
void ACharacterBase::KeyInpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3Key(
    FKey Key) {
  K2Node_InputKeyEvent_Key_3 = Key;
  ExecuteUbergraph_CharacterBase_2(161);
}
void ACharacterBase::KeyInpActEvt_RightMouseButton_K2Node_InputKeyEvent_4Key(
    FKey Key) {
  K2Node_InputKeyEvent_Key_4 = Key;
  ExecuteUbergraph_CharacterBase_2(163);
}
void ACharacterBase::KeyInpActEvt_RightMouseButton_K2Node_InputKeyEvent_5Key(
    FKey Key) {
  K2Node_InputKeyEvent_Key_5 = Key;
  ExecuteUbergraph_CharacterBase_2(165);
}
void ACharacterBase::GetDestionationToMove(FVector &Destionation) {
  APlayerController *CallFunc_GetPlayerController_ReturnValue{};
  FHitResult CallFunc_GetHitResultUnderCursorByChannel_HitResult{};
  bool CallFunc_GetHitResultUnderCursorByChannel_ReturnValue{};
  bool CallFunc_BreakHitResult_bBlockingHit{};
  bool CallFunc_BreakHitResult_bInitialOverlap{};
  float CallFunc_BreakHitResult_Time{};
  float CallFunc_BreakHitResult_Distance{};
  FVector CallFunc_BreakHitResult_Location(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_ImpactPoint(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_Normal(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_ImpactNormal(EForceInit::ForceInit);
  UPhysicalMaterial *CallFunc_BreakHitResult_PhysMat{};
  AActor *CallFunc_BreakHitResult_HitActor{};
  UPrimitiveComponent *CallFunc_BreakHitResult_HitComponent{};
  FName CallFunc_BreakHitResult_HitBoneName{};
  int32 CallFunc_BreakHitResult_HitItem{};
  int32 CallFunc_BreakHitResult_ElementIndex{};
  int32 CallFunc_BreakHitResult_FaceIndex{};
  FVector CallFunc_BreakHitResult_TraceStart(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_TraceEnd(EForceInit::ForceInit);
  float CallFunc_BreakVector_X{};
  float CallFunc_BreakVector_Y{};
  float CallFunc_BreakVector_Z{};
  FVector CallFunc_MakeVector_ReturnValue(EForceInit::ForceInit);
  CallFunc_GetPlayerController_ReturnValue =
      UGameplayStatics::GetPlayerController(this, 0);
  if (::IsValid(CallFunc_GetPlayerController_ReturnValue)) {
    CallFunc_GetHitResultUnderCursorByChannel_ReturnValue =
        CallFunc_GetPlayerController_ReturnValue
            ->APlayerController::GetHitResultUnderCursorByChannel(
                ETraceTypeQuery::TraceTypeQuery1, true,
                CallFunc_GetHitResultUnderCursorByChannel_HitResult);
  }
  UGameplayStatics::BreakHitResult(
      CallFunc_GetHitResultUnderCursorByChannel_HitResult,
      CallFunc_BreakHitResult_bBlockingHit,
      CallFunc_BreakHitResult_bInitialOverlap, CallFunc_BreakHitResult_Time,
      CallFunc_BreakHitResult_Distance, CallFunc_BreakHitResult_Location,
      CallFunc_BreakHitResult_ImpactPoint, CallFunc_BreakHitResult_Normal,
      CallFunc_BreakHitResult_ImpactNormal, CallFunc_BreakHitResult_PhysMat,
      CallFunc_BreakHitResult_HitActor, CallFunc_BreakHitResult_HitComponent,
      CallFunc_BreakHitResult_HitBoneName, CallFunc_BreakHitResult_HitItem,
      CallFunc_BreakHitResult_ElementIndex, CallFunc_BreakHitResult_FaceIndex,
      CallFunc_BreakHitResult_TraceStart, CallFunc_BreakHitResult_TraceEnd);
  UKismetMathLibrary::BreakVector(
      CallFunc_BreakHitResult_Location, CallFunc_BreakVector_X,
      CallFunc_BreakVector_Y, CallFunc_BreakVector_Z);
  CallFunc_MakeVector_ReturnValue = UKismetMathLibrary::MakeVector(
      CallFunc_BreakVector_X, 0.0f, CallFunc_BreakVector_Z);
  Destionation = CallFunc_MakeVector_ReturnValue;
}
void ACharacterBase::MoveToLocatedPoint(FVector Destionation) {
  FVector MoveDestionation(EForceInit::ForceInit);
  bool CallFunc_EqualEqual_VectorVector_ReturnValue{};
  APlayerController *CallFunc_GetPlayerController_ReturnValue{};
  float CallFunc_BreakVector_X{};
  float CallFunc_BreakVector_Y{};
  float CallFunc_BreakVector_Z{};
  FVector CallFunc_MakeVector_ReturnValue(EForceInit::ForceInit);
  FVector CallFunc_K2_GetActorLocation_ReturnValue(EForceInit::ForceInit);
  float CallFunc_BreakVector_X_1{};
  float CallFunc_BreakVector_Y_1{};
  float CallFunc_BreakVector_Z_1{};
  float CallFunc_BreakVector_X_2{};
  float CallFunc_BreakVector_Y_2{};
  float CallFunc_BreakVector_Z_2{};
  float CallFunc_Subtract_FloatFloat_ReturnValue{};
  float CallFunc_Abs_ReturnValue{};
  bool CallFunc_Greater_FloatFloat_ReturnValue{};
  int32 CurrentState = 1;
  do {
    switch (CurrentState) {
    case 1: {
      MoveDestionation = Destionation;
    }
    case 2: {
      CallFunc_EqualEqual_VectorVector_ReturnValue =
          UKismetMathLibrary::EqualEqual_VectorVector(
              MoveDestionation, FVector(0.0f, 0.0f, 0.0f), 0.001000);
      if (!CallFunc_EqualEqual_VectorVector_ReturnValue) {
        CurrentState = 3;
        break;
      }
      CurrentState = -1;
      break;
    }
    case 3: {
      CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
      UKismetMathLibrary::BreakVector(
          CallFunc_K2_GetActorLocation_ReturnValue, CallFunc_BreakVector_X_1,
          CallFunc_BreakVector_Y_1, CallFunc_BreakVector_Z_1);
      UKismetMathLibrary::BreakVector(
          MoveDestionation, CallFunc_BreakVector_X_2, CallFunc_BreakVector_Y_2,
          CallFunc_BreakVector_Z_2);
      CallFunc_Subtract_FloatFloat_ReturnValue =
          UKismetMathLibrary::Subtract_FloatFloat(CallFunc_BreakVector_X_2,
                                                  CallFunc_BreakVector_X_1);
      CallFunc_Abs_ReturnValue =
          UKismetMathLibrary::Abs(CallFunc_Subtract_FloatFloat_ReturnValue);
      CallFunc_Greater_FloatFloat_ReturnValue =
          UKismetMathLibrary::Greater_FloatFloat(CallFunc_Abs_ReturnValue,
                                                 20.0f);
      if (!CallFunc_Greater_FloatFloat_ReturnValue) {
        CurrentState = -1;
        break;
      }
    }
    case 4: {
      if (::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent *>(
              (this), ACharacter::CharacterMovement()))))) {
        (*(AccessPrivateProperty<UCharacterMovementComponent *>(
             (this), ACharacter::CharacterMovement())))
            ->MaxWalkSpeed = Speed;
      }
    }
    case 5: {
      CallFunc_GetPlayerController_ReturnValue =
          UGameplayStatics::GetPlayerController(this, 0);
      UKismetMathLibrary::BreakVector(MoveDestionation, CallFunc_BreakVector_X,
                                      CallFunc_BreakVector_Y,
                                      CallFunc_BreakVector_Z);
      CallFunc_MakeVector_ReturnValue = UKismetMathLibrary::MakeVector(
          CallFunc_BreakVector_X, 0.0f, CallFunc_BreakVector_Z);
      UAIBlueprintHelperLibrary::SimpleMoveToLocation(
          CallFunc_GetPlayerController_ReturnValue,
          CallFunc_MakeVector_ReturnValue);
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::GetClickedLocation(FVector &Destination,
                                        AActor *&ClickedActor,
                                        bool &IsCleckedOnDoor) {
  FHitResult HitResult{};
  APlayerController *CallFunc_GetPlayerController_ReturnValue{};
  FHitResult CallFunc_GetHitResultUnderCursorByChannel_HitResult{};
  bool CallFunc_GetHitResultUnderCursorByChannel_ReturnValue{};
  bool CallFunc_BreakHitResult_bBlockingHit{};
  bool CallFunc_BreakHitResult_bInitialOverlap{};
  float CallFunc_BreakHitResult_Time{};
  float CallFunc_BreakHitResult_Distance{};
  FVector CallFunc_BreakHitResult_Location(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_ImpactPoint(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_Normal(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_ImpactNormal(EForceInit::ForceInit);
  UPhysicalMaterial *CallFunc_BreakHitResult_PhysMat{};
  AActor *CallFunc_BreakHitResult_HitActor{};
  UPrimitiveComponent *CallFunc_BreakHitResult_HitComponent{};
  FName CallFunc_BreakHitResult_HitBoneName{};
  int32 CallFunc_BreakHitResult_HitItem{};
  int32 CallFunc_BreakHitResult_ElementIndex{};
  int32 CallFunc_BreakHitResult_FaceIndex{};
  FVector CallFunc_BreakHitResult_TraceStart(EForceInit::ForceInit);
  FVector CallFunc_BreakHitResult_TraceEnd(EForceInit::ForceInit);
  FVector CallFunc_K2_GetActorLocation_ReturnValue(EForceInit::ForceInit);
  bool CallFunc_IsValid_ReturnValue{};
  int32 CurrentState = 1;
  do {
    switch (CurrentState) {
    case 1: {
      CallFunc_GetPlayerController_ReturnValue =
          UGameplayStatics::GetPlayerController(this, 0);
      if (::IsValid(CallFunc_GetPlayerController_ReturnValue)) {
        CallFunc_GetHitResultUnderCursorByChannel_ReturnValue =
            CallFunc_GetPlayerController_ReturnValue
                ->APlayerController::GetHitResultUnderCursorByChannel(
                    ETraceTypeQuery::TraceTypeQuery3, true,
                    CallFunc_GetHitResultUnderCursorByChannel_HitResult);
      }
      UGameplayStatics::BreakHitResult(
          CallFunc_GetHitResultUnderCursorByChannel_HitResult,
          CallFunc_BreakHitResult_bBlockingHit,
          CallFunc_BreakHitResult_bInitialOverlap, CallFunc_BreakHitResult_Time,
          CallFunc_BreakHitResult_Distance, CallFunc_BreakHitResult_Location,
          CallFunc_BreakHitResult_ImpactPoint, CallFunc_BreakHitResult_Normal,
          CallFunc_BreakHitResult_ImpactNormal, CallFunc_BreakHitResult_PhysMat,
          CallFunc_BreakHitResult_HitActor,
          CallFunc_BreakHitResult_HitComponent,
          CallFunc_BreakHitResult_HitBoneName, CallFunc_BreakHitResult_HitItem,
          CallFunc_BreakHitResult_ElementIndex,
          CallFunc_BreakHitResult_FaceIndex, CallFunc_BreakHitResult_TraceStart,
          CallFunc_BreakHitResult_TraceEnd);
      CallFunc_IsValid_ReturnValue =
          UKismetSystemLibrary::IsValid(CallFunc_BreakHitResult_HitActor);
      if (!CallFunc_IsValid_ReturnValue) {
        CurrentState = 3;
        break;
      }
    }
    case 2: {
      CallFunc_GetPlayerController_ReturnValue =
          UGameplayStatics::GetPlayerController(this, 0);
      if (::IsValid(CallFunc_GetPlayerController_ReturnValue)) {
        CallFunc_GetHitResultUnderCursorByChannel_ReturnValue =
            CallFunc_GetPlayerController_ReturnValue
                ->APlayerController::GetHitResultUnderCursorByChannel(
                    ETraceTypeQuery::TraceTypeQuery3, true,
                    CallFunc_GetHitResultUnderCursorByChannel_HitResult);
      }
      UGameplayStatics::BreakHitResult(
          CallFunc_GetHitResultUnderCursorByChannel_HitResult,
          CallFunc_BreakHitResult_bBlockingHit,
          CallFunc_BreakHitResult_bInitialOverlap, CallFunc_BreakHitResult_Time,
          CallFunc_BreakHitResult_Distance, CallFunc_BreakHitResult_Location,
          CallFunc_BreakHitResult_ImpactPoint, CallFunc_BreakHitResult_Normal,
          CallFunc_BreakHitResult_ImpactNormal, CallFunc_BreakHitResult_PhysMat,
          CallFunc_BreakHitResult_HitActor,
          CallFunc_BreakHitResult_HitComponent,
          CallFunc_BreakHitResult_HitBoneName, CallFunc_BreakHitResult_HitItem,
          CallFunc_BreakHitResult_ElementIndex,
          CallFunc_BreakHitResult_FaceIndex, CallFunc_BreakHitResult_TraceStart,
          CallFunc_BreakHitResult_TraceEnd);
      if (::IsValid(CallFunc_BreakHitResult_HitActor)) {
        CallFunc_K2_GetActorLocation_ReturnValue =
            CallFunc_BreakHitResult_HitActor->AActor::K2_GetActorLocation();
      }
      Destination = CallFunc_K2_GetActorLocation_ReturnValue;
      ClickedActor = CallFunc_BreakHitResult_HitActor;
      IsCleckedOnDoor = true;
      CurrentState = -1;
      break;
    }
    case 3: {
      Destination = FVector(0.0f, 0.0f, 0.0f);
      ClickedActor = ((AActor *)nullptr);
      IsCleckedOnDoor = false;
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::MoveToActor(AActor *Actor) {
  APlayerController *CallFunc_GetPlayerController_ReturnValue{};
  CallFunc_GetPlayerController_ReturnValue =
      UGameplayStatics::GetPlayerController(this, 0);
  UAIBlueprintHelperLibrary::SimpleMoveToActor(
      CallFunc_GetPlayerController_ReturnValue, Actor);
}
void ACharacterBase::UpdateFlipbook() {
  FlipbooksState AnimationState{};
  bool IsWalking{};
  int32 CompanyRank{};
  UPaperFlipbook *Janitor_Idle_FB{};
  UPaperFlipbook *Employee_Idle_FB{};
  UPaperFlipbook *Manager_Idle_FB{};
  UPaperFlipbook *Director_Idle_FB{};
  UPaperFlipbook *Janitor_Walk_FB{};
  UPaperFlipbook *Employee_Walk_FB{};
  UPaperFlipbook *Manager_Walk_FB{};
  UPaperFlipbook *Director_Walk_FB{};
  FVector CallFunc_GetVelocity(EForceInit::ForceInit);
  float CallFunc_ReadStats_Value{};
  float CallFunc_VSize_ReturnValue{};
  int32 CallFunc_FTrunc_ReturnValue{};
  bool CallFunc_NotEqual_FloatFloat_ReturnValue{};
  UPaperFlipbook *K2Node_Select_Default_0{};
  UPaperFlipbook *K2Node_Select_Default_1{};
  UPaperFlipbook *K2Node_Select_Default_2{};
  bool CallFunc_SetFlipbook_ReturnValue{};
  UStatsTrackerLib::ReadStats(FString(TEXT("CompanyRank")), false, this,
                              CallFunc_ReadStats_Value);
  Janitor_Idle_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[4],
      ECastCheckedType::NullAllowed);
  Employee_Idle_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[4],
      ECastCheckedType::NullAllowed);
  Manager_Idle_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[5],
      ECastCheckedType::NullAllowed);
  Director_Idle_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  Janitor_Walk_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Employee_Walk_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[6],
      ECastCheckedType::NullAllowed);
  Manager_Walk_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[7],
      ECastCheckedType::NullAllowed);
  Director_Walk_FB = CastChecked<UPaperFlipbook>(
      CastChecked<UDynamicClass>(ACharacterBase::StaticClass())->UsedAssets[8],
      ECastCheckedType::NullAllowed);
  CallFunc_GetVelocity = GetVelocity();
  CallFunc_VSize_ReturnValue = UKismetMathLibrary::VSize(CallFunc_GetVelocity);
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_ReadStats_Value);
  CallFunc_NotEqual_FloatFloat_ReturnValue =
      UKismetMathLibrary::NotEqual_FloatFloat(CallFunc_VSize_ReturnValue, 0.0f);
  CompanyRank = CallFunc_FTrunc_ReturnValue;
  IsWalking = CallFunc_NotEqual_FloatFloat_ReturnValue;
  if (::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent *>(
          (this), APaperCharacter::Sprite()))))) {
    CallFunc_SetFlipbook_ReturnValue =
        (*(AccessPrivateProperty<UPaperFlipbookComponent *>(
             (this), APaperCharacter::Sprite())))
            ->SetFlipbook(TSwitchValue<bool, UPaperFlipbook *>(
                IsWalking, K2Node_Select_Default_2, 2,
                TSwitchPair<bool, UPaperFlipbook *>(
                    false, TSwitchValue<int32, UPaperFlipbook *>(
                               CompanyRank, K2Node_Select_Default_0, 4,
                               TSwitchPair<int32, UPaperFlipbook *>(
                                   0, Director_Idle_FB),
                               TSwitchPair<int32, UPaperFlipbook *>(
                                   1, Manager_Idle_FB),
                               TSwitchPair<int32, UPaperFlipbook *>(
                                   2, Employee_Idle_FB),
                               TSwitchPair<int32, UPaperFlipbook *>(
                                   3, Janitor_Idle_FB))),
                TSwitchPair<bool, UPaperFlipbook *>(
                    true, TSwitchValue<int32, UPaperFlipbook *>(
                              CompanyRank, K2Node_Select_Default_1, 4,
                              TSwitchPair<int32, UPaperFlipbook *>(
                                  0, Director_Walk_FB),
                              TSwitchPair<int32, UPaperFlipbook *>(
                                  1, Manager_Walk_FB),
                              TSwitchPair<int32, UPaperFlipbook *>(
                                  2, Employee_Walk_FB),
                              TSwitchPair<int32, UPaperFlipbook *>(
                                  3, Janitor_Walk_FB)))));
  }
}
void ACharacterBase::UpdateRotation() {
  FVector CallFunc_GetVelocity(EForceInit::ForceInit);
  FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult{};
  float CallFunc_BreakVector_X{};
  float CallFunc_BreakVector_Y{};
  float CallFunc_BreakVector_Z{};
  FHitResult bpfvCallFunc_K2_SetRelativeRotation_SweepHitResult_1Key{};
  bool CallFunc_Less_FloatFloat_ReturnValue{};
  bool CallFunc_Greater_FloatFloat_ReturnValue{};
  int32 CurrentState = 1;
  do {
    switch (CurrentState) {
    case 1: {
      CallFunc_GetVelocity = GetVelocity();
      UKismetMathLibrary::BreakVector(
          CallFunc_GetVelocity, CallFunc_BreakVector_X, CallFunc_BreakVector_Y,
          CallFunc_BreakVector_Z);
      CallFunc_Less_FloatFloat_ReturnValue =
          UKismetMathLibrary::Less_FloatFloat(CallFunc_BreakVector_X, 0.0f);
      if (!CallFunc_Less_FloatFloat_ReturnValue) {
        CurrentState = 3;
        break;
      }
    }
    case 2: {
      if (::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent *>(
              (this), APaperCharacter::Sprite()))))) {
        (*(AccessPrivateProperty<UPaperFlipbookComponent *>(
             (this), APaperCharacter::Sprite())))
            ->USceneComponent::K2_SetRelativeRotation(
                FRotator(0.0f, 180.0f, 0.0f), false,
                CallFunc_K2_SetRelativeRotation_SweepHitResult, false);
      }
      CurrentState = -1;
      break;
    }
    case 3: {
      CallFunc_GetVelocity = GetVelocity();
      UKismetMathLibrary::BreakVector(
          CallFunc_GetVelocity, CallFunc_BreakVector_X, CallFunc_BreakVector_Y,
          CallFunc_BreakVector_Z);
      CallFunc_Greater_FloatFloat_ReturnValue =
          UKismetMathLibrary::Greater_FloatFloat(CallFunc_BreakVector_X, 0.0f);
      if (!CallFunc_Greater_FloatFloat_ReturnValue) {
        CurrentState = -1;
        break;
      }
    }
    case 4: {
      if (::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent *>(
              (this), APaperCharacter::Sprite()))))) {
        (*(AccessPrivateProperty<UPaperFlipbookComponent *>(
             (this), APaperCharacter::Sprite())))
            ->USceneComponent::K2_SetRelativeRotation(
                FRotator(0.0f, 0.0f, 0.0f), false,
                bpfvCallFunc_K2_SetRelativeRotation_SweepHitResult_1Key, false);
      }
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}
void ACharacterBase::GetDoorTeleportLocation(const FString &Name) {
  typedef FString TCollisionDefault0;
  TCollisionDefault0 &Name = *const_cast<TCollisionDefault0 *>(&Name);
  TMap<FString, FVector> DoorListMap{};
}
void ACharacterBase::IsInfrontOfObjectChecker() {
  TArray<AActor *> ObjectActorOverlapping{};
  TArray<AActor *> CallFunc_GetAllActorsWithTag_OutActors{};
  TArray<AActor *> CallFunc_GetOverlappingActors_OverlappingActors{};
  AActor *CallFunc_Array_Get_Item{};
  bool CallFunc_Array_Contains_ReturnValue{};
  bool CallFunc_IsValid_ReturnValue{};
  int32 CurrentState = 1;
  do {
    switch (CurrentState) {
    case 1: {
      if (::IsValid(InteractionHitBox)) {
        (CallFunc_GetOverlappingActors_OverlappingActors).Reset();
        InteractionHitBox->UPrimitiveComponent::GetOverlappingActors(
            CallFunc_GetOverlappingActors_OverlappingActors,
            AInteractionBox::StaticClass());
      }
      FCustomThunkTemplates::Array_Get(
          CallFunc_GetOverlappingActors_OverlappingActors, 0,
          CallFunc_Array_Get_Item);
      CallFunc_IsValid_ReturnValue =
          UKismetSystemLibrary::IsValid(CallFunc_Array_Get_Item);
      if (!CallFunc_IsValid_ReturnValue) {
        CurrentState = 5;
        break;
      }
    }
    case 2: {
      (CallFunc_GetAllActorsWithTag_OutActors).Reset();
      UGameplayStatics::GetAllActorsWithTag(
          this, FName(TEXT("Door")), CallFunc_GetAllActorsWithTag_OutActors);
    }
    case 3: {
      if (::IsValid(InteractionHitBox)) {
        (CallFunc_GetOverlappingActors_OverlappingActors).Reset();
        InteractionHitBox->UPrimitiveComponent::GetOverlappingActors(
            CallFunc_GetOverlappingActors_OverlappingActors,
            AInteractionBox::StaticClass());
      }
      FCustomThunkTemplates::Array_Get(
          CallFunc_GetOverlappingActors_OverlappingActors, 0,
          CallFunc_Array_Get_Item);
      CallFunc_Array_Contains_ReturnValue =
          FCustomThunkTemplates::Array_Contains(
              CallFunc_GetAllActorsWithTag_OutActors, CallFunc_Array_Get_Item);
      if (!CallFunc_Array_Contains_ReturnValue) {
        CurrentState = 7;
        break;
      }
    }
    case 4: {
      IsInFrontOfDoor = true;
      CurrentState = -1;
      break;
    }
    case 5: {
      IsInFrontOfDoor = false;
    }
    case 6: {
      IsInFrontOfQuest = false;
      CurrentState = -1;
      break;
    }
    case 7: {
      IsInFrontOfQuest = false;
      CurrentState = -1;
      break;
    }
    default:
      break;
    }
  } while (CurrentState != -1);
}

// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase::StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_idle_FB.J_crt_idle_FB 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Assets/Materials/DefaultLitSpriteMaterial_FlipN.DefaultLitSpriteMaterial_FlipN 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/Invisible_M.Invisible_M 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_idle_FB.M_crt_idle_FB 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_idle_FB.E_crt_idle_FB 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_Walk_FB.M_crt_Walk_FB 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_Walk_FB.E_crt_Walk_FB 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_Walk_FB.J_crt_Walk_FB 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}

PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{102, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{106, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{107, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{111, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperCharacter 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{113, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbookComponent 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame.DoorFrame 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame_M.DoorFrame_M 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/ProjectYW-44.ProjectYW-44 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
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
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0603.0603 
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
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/StatsUI/StatsUi.StatsUI_C 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/StatsUI/QuestUI.QuestUI_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/WateringPlant/WateringPlants_WG.WateringPlants_WG_C 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/WorldBuilding/Shop_1/ShopHealthty.ShopHealthty_C 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/WorldBuilding/Shop_2/WithdrawnalShop.WithdrawnalShop_C 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/WorldBuilding/School/School.School_C 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/recruit/Recruit_widget.Recruit_widget_C 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/RestBuilding/SleepWell.SleepWell_C 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Ingame/RestBuilding/ResultOfDays.ResultOfDays_C 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/Coffee/Coffee_widget.Coffee_widget_C 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/DialogUI.DialogUI_C 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/Present/Present_widget.Present_widget_C 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/playstock/share_widget.share_widget_C 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/Repair/Repair_widget.Repair_widget_C 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/MiniGame/Working/Working_widget.Working_widget_C 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Gamewin.Gamewin_C 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/InteractionBox_BP.InteractionBox_BP_C 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/CharacterBP/FlipbooksState_E.FlipbooksState_E 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperACharacterBase
{
	FRegisterHelperACharacterBase()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/CharacterBP/CharacterBase_BP"), &ACharacterBase::StaticDependenciesAssets);
	}
	static FRegisterHelperACharacterBase Instance;
};
FRegisterHelperACharacterBase FRegisterHelperACharacterBase::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
