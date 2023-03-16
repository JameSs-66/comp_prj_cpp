#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class UObject;
class UUserWidget;
class UClass;
class AActor;
#include "CharacterBase.generated.h"

class ACharacterBase : public APaperCharacter {
public:
  GENERATED_BODY()
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default",
                    OverrideNativeName = "InteractionHitBox"))
  UStaticMeshComponent *InteractionHitBox;
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default", OverrideNativeName = "Camera"))
  UCameraComponent *Camera;
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default", OverrideNativeName = "SpringArm"))
  USpringArmComponent *SpringArm;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Is Mouse Input", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "IsMouseInput"))
  bool IsMouseInput;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Speed", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "Speed"))
  float Speed;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Time Speed", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "TimeSpeed"))
  float TimeSpeed;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Is Clicked on Door", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "IsClickedOnDoor"))
  bool IsClickedOnDoor;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Is in Front Of Door", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "IsInFrontOfDoor"))
  bool IsInFrontOfDoor;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Can Teleport", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "CanTeleport"))
  bool CanTeleport;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Elevator Up", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "ElevatorUp"))
  bool ElevatorUp;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Is in Front Of Quest", Category = "Default",
                    MultiLine = "true",
                    OverrideNativeName = "IsInFrontOfQuest"))
  bool IsInFrontOfQuest;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "ZOrder", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "ZOrder"))
  int32 ZOrder;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Mini Game Widget", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "MiniGameWidget"))
  TArray<UObject *> MiniGameWidget;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Can Move", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "CanMove"))
  bool CanMove;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "UIArray", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "UIArray"))
  TArray<UClass *> UIArray;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "UIWidget Created", Category = "Default",
                    MultiLine = "true", OverrideNativeName = "UIWidgetCreated"))
  TArray<UUserWidget *> UIWidgetCreated;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Teleport to Location", Category = "Default",
                    MultiLine = "true",
                    OverrideNativeName = "TeleportToLocation"))
  FVector TeleportToLocation;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_IsClosed_Variable"))
  bool Temp_bool_IsClosed_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Whether_the_gate_is_"
                                         "currently_open_or_close_Variable"))
  bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key_1"))
  FKey K2Node_InputKeyEvent_Key_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_struct_Variable"))
  FKey Temp_struct_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Has_Been_Initd_Variable"))
  bool Temp_bool_Has_Been_Initd_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputActionEvent_Key_2"))
  FKey K2Node_InputActionEvent_Key_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_IsClosed_Variable_1"))
  bool Temp_bool_IsClosed_Variable_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Has_Been_Initd_Variable_1"))
  bool Temp_bool_Has_Been_Initd_Variable_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputActionEvent_Key_3"))
  FKey K2Node_InputActionEvent_Key_3;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_int_Loop_Counter_Variable"))
  int32 Temp_int_Loop_Counter_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_int_Array_Index_Variable"))
  int32 Temp_int_Array_Index_Variable;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_Event_DeltaSeconds"))
  float K2Node_Event_DeltaSeconds;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Has_Been_Initd_Variable_2"))
  bool Temp_bool_Has_Been_Initd_Variable_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_struct_Variable_1"))
  FKey Temp_struct_Variable_1;
  UPROPERTY(
      Transient, DuplicateTransient,
      meta = (OverrideNativeName = "CallFunc_GetClickedLocation_Destination"))
  FVector CallFunc_GetClickedLocation_Destination;
  UPROPERTY(
      Transient, DuplicateTransient,
      meta = (OverrideNativeName = "CallFunc_GetClickedLocation_ClickedActor"))
  AActor *CallFunc_GetClickedLocation_ClickedActor;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName =
                        "CallFunc_GetClickedLocation_IsCleckedOnDoor"))
  bool CallFunc_GetClickedLocation_IsCleckedOnDoor;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key"))
  FKey K2Node_InputKeyEvent_Key;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key_2"))
  FKey K2Node_InputKeyEvent_Key_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputAxisEvent_AxisValue"))
  float K2Node_InputAxisEvent_AxisValue;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName =
                        "CallFunc_GetDestionationToMove_Destionation"))
  FVector CallFunc_GetDestionationToMove_Destionation;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputActionEvent_Key"))
  FKey K2Node_InputActionEvent_Key;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputActionEvent_Key_1"))
  FKey K2Node_InputActionEvent_Key_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_IsClosed_Variable_2"))
  bool Temp_bool_IsClosed_Variable_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value"))
  float CallFunc_ReadStats_Value;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key_3"))
  FKey K2Node_InputKeyEvent_Key_3;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_MakeArray_Array"))
  TArray<UClass *> K2Node_MakeArray_Array;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_Array_Get_Item"))
  UClass *CallFunc_Array_Get_Item;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_Create_ReturnValue_2"))
  UUserWidget *CallFunc_Create_ReturnValue_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_bool_Whether_the_gate_is_"
                                         "currently_open_or_close_Variable_1"))
  bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "Temp_struct_Variable_2"))
  FKey Temp_struct_Variable_2;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName =
                        "CallFunc_K2_SetActorLocation_SweepHitResult"))
  FHitResult CallFunc_K2_SetActorLocation_SweepHitResult;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key_4"))
  FKey K2Node_InputKeyEvent_Key_4;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_InputKeyEvent_Key_5"))
  FKey K2Node_InputKeyEvent_Key_5;

  ACharacterBase(
      const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void CustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void
  StaticDependenciesAssets(TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void StaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  void DebuggingKeys(int32 EntryPoint);
  void MouseMovement(int32 EntryPoint);
  void Debug(int32 EntryPoint);
  void SetWorldDilation();
  void KeyboardMovement();
  void SwitchKeyboardToMouse(int32 EntryPoint);
  void InputKeyAction(int32 EntryPoint);
  virtual void InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1(
      float AxisValue);
  UFUNCTION(
      meta =
          (Comment = "/** Event called every frame, if ticking is enabled */",
           DisplayName = "Tick",
           ToolTip = "Event called every frame, if ticking is enabled",
           CppFromBpEvent, OverrideNativeName = "ReceiveTick"))
  virtual void ReceiveTick(float DeltaSeconds);
  UFUNCTION(meta = (Comment = "/** Event when play begins for this actor. */",
                    DisplayName = "BeginPlay",
                    ToolTip = "Event when play begins for this actor.",
                    CppFromBpEvent, OverrideNativeName = "ReceiveBeginPlay"))
  virtual void ReceiveBeginPlay();
  UFUNCTION(meta = (OverrideNativeName = "InpActEvt_J_K2Node_InputKeyEvent_0"))
  virtual void InpActEvt_J_K2Node_InputKeyEvent_0(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_DebugKey2_K2Node_InputActionEvent_0"))
  virtual void
  InpActEvt_DebugKey2_K2Node_InputActionEvent_0(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_DebugKey1_K2Node_InputActionEvent_1"))
  virtual void
  InpActEvt_DebugKey1_K2Node_InputActionEvent_1(FKey Key);
  UFUNCTION(
      meta = (OverrideNativeName = "InpActEvt_Tab_K2Node_InputKeyEvent_1"))
  virtual void InpActEvt_Tab_K2Node_InputKeyEvent_1(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_CancelPath_K2Node_InputActionEvent_2"))
  virtual void
  InpActEvt_CancelPath_K2Node_InputActionEvent_2(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_CancelPath_K2Node_InputActionEvent_3"))
  virtual void
  InpActEvt_CancelPath_K2Node_InputActionEvent_3(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"))
  virtual void
  InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"))
  virtual void
  InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4"))
  virtual void
  InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(FKey Key);
  UFUNCTION(meta = (OverrideNativeName =
                        "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5"))
  virtual void
  InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5(FKey Key);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "GetDestionationToMove"))
  virtual void GetDestionationToMove( FVector &Destionation);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "MoveToLocatedPoint"))
  virtual void MoveToLocatedPoint(FVector Destionation);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "GetClickedLocation"))
  virtual void GetClickedLocation( FVector &Destination,
                                        AActor *&ClickedActor,
                                        bool &IsCleckedOnDoor);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "MoveToActor"))
  virtual void MoveToActor(AActor *Actor);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "UpdateFlipbook"))
  virtual void UpdateFlipbook();
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "UpdateRotation"))
  virtual void UpdateRotation();
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "GetDoorTeleportLocation"))
  virtual void GetDoorTeleportLocation(const FString &Name__const);
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "IsInfrontOfObjectChecker"))
  virtual void IsInfrontOfObjectChecker();

public:
};
