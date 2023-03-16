#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AActor;
#include "InteractionBox.generated.h"

class AInteractionBox : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MouseClick"))
	UStaticMeshComponent* MouseClick;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Highlight"))
	UStaticMeshComponent* Highlight;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InFrontOfDoorCheck"))
	UStaticMeshComponent* InFrontOfDoorCheck;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Charactor in Front Of Object", Category="Default", MultiLine="true", OverrideNativeName="IsCharactorInFrontOfObject"))
	bool IsCharactorInFrontOfObject;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reset Next Day", Category="Default", MultiLine="true", OverrideNativeName="ResetNextDay"))
	bool ResetNextDay;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable Rank", Category="Default", MultiLine="true", OverrideNativeName="EnableRank"))
	int32 EnableRank;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Have Priority", Category="Default", MultiLine="true", OverrideNativeName="HavePriority"))
	bool HavePriority;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UIReset", Category="Default", MultiLine="true", OverrideNativeName="UIReset"))
	bool UIReset;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable Company Priority", Category="Default", MultiLine="true", OverrideNativeName="EnableCompanyPriority"))
	bool EnableCompanyPriority;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Interact", Category="Default", MultiLine="true", OverrideNativeName="CanInteract"))
	bool CanInteract;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Door", Category="Default", MultiLine="true", OverrideNativeName="IsDoor"))
	bool IsDoor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Day", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="Day"))
	float Day;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Do Quest", Category="Default", MultiLine="true", OverrideNativeName="CanDoQuest"))
	bool CanDoQuest;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Done", Category="Default", MultiLine="true", OverrideNativeName="AllDone"))
	bool AllDone;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float K2Node_Event_DeltaSeconds;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="ReadStats"))
	float ReadStats;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="GetOverlappingActors"))
	TArray<AActor*> GetOverlappingActors;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Array_Get_Item"))
	AActor* Array_Get_Item;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="ReadStats"))
	float ReadStats;
	AInteractionBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="SetDefault"))
	void SetDefault(int32 EntryPoint);
	void ShowHighLight(int32 EntryPoint);
	void HideHighLight(int32 EntryPoint);
	void UpdateVisibility(int32 EntryPoint);
	UFUNCTION(meta=(OverrideNativeName="ReceiveBeginPlay"))
	virtual void ReceiveBeginPlay();
	UFUNCTION(meta=(OverrideNativeName="ReceiveTick"))
	virtual void ReceiveTick(float DeltaSeconds);
	UFUNCTION(meta=(OverrideNativeName="ReceiveActorEndCursorOver"))
	virtual void ReceiveActorEndCursorOver();
	UFUNCTION(meta=(OverrideNativeName="ReceiveActorBeginCursorOver"))
	virtual void ReceiveActorBeginCursorOver();
	UFUNCTION(BlueprintCallable, meta=(OverrideNativeName="EnableAndReset"))
	virtual void EnableAndReset(int32 EnableOnRank, bool EnableDayReset);
public:
};
