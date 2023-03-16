#pragma once
#include "Clock.generated.h"

class component;
class AClock : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(ReadWrite, Non, meta=(Category="Default", Override="Clock"))
	component* Clock;
	UPROPERTY(ReadWrite, Non, meta=(Category="Default", Override="HourHand"))
	component* HourHand;
	UPROPERTY(ReadWrite, Non, meta=(Category="Default", Override="MinHand"))
	component* MinHand;
	UPROPERTY(Transient, DuplicateTransient, meta=(Override="DeltaSeconds"))
	float DeltaSeconds;
	UPROPERTY(Transient, DuplicateTransient, meta=(Override="ReadStats"))
	float ReadStats;
	UPROPERTY(Transient, DuplicateTransient, meta=(Override="WorldRotation"))
	FHitResult WorldRotation;
	UPROPERTY(Transient, DuplicateTransient, meta=(Override="WorldRotation1"))
	FHitResult WorldRotation1;
	AClock(const Fobject& object = Fobject::Get());
	virtual void loadsubobjects(ObjectGraph* OutGraph) override;
	static void objectcustomdynamicclass(TClass* UClass);
	static void OSDAssets(TArray<Data>& AssetsToLoad);
	static void OSDDirectlyUsedAssets(TArray<Data>& AssetsToLoad);
	void Managegraph(int32 EntryPoint_);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, Override="ReceiveTick"))
	virtual void Receive_(float DeltaSeconds);
public:
};
