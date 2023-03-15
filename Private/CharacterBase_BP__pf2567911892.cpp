#include "NativizedAssets.h"
#include "CharacterBase_BP__pf2567911892.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "StatsUi__pf2748595663.h"
#include "QuestUI__pf2748595663.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "WateringPlants_WG__pf4273311956.h"
#include "ShopHealthty__pf1629536273.h"
#include "WithdrawnalShop__pf3373900542.h"
#include "School__pf4136444318.h"
#include "Recruit_widget__pf2914304342.h"
#include "SleepWell__pf645916017.h"
#include "ResultOfDays__pf645916017.h"
#include "Coffee_widget__pf575078304.h"
#include "DialogUI__pf1489439355.h"
#include "Present_widget__pf3227831806.h"
#include "share_widget__pf2085803296.h"
#include "Repair_widget__pf2854336703.h"
#include "Working_widget__pf518243491.h"
#include "Gamewin__pf1489439355.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/Subsystem.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "InteractionBox_BP__pf2132744816.h"
#include "FlipbooksState_E__pf2567911892.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ACharacterBase_BP_C__pf2567911892::ACharacterBase_BP_C__pf2567911892(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<UPaperFlipbookComponent>(this->GetDefaultSubobjectByName(TEXT("Sprite0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 10.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 4.740620f;
		auto& __Local__5 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__5 = ECollisionChannel::ECC_WorldStatic;
		auto& __Local__6 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__7 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__6), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__7 = TArray<FResponseChannel> ();
		__Local__7.AddUninitialized(3);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__7.GetData(), 3);
		auto& __Local__8 = __Local__7[0];
		__Local__8.Channel = FName(TEXT("Visibility"));
		__Local__8.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__9 = __Local__7[1];
		__Local__9.Channel = FName(TEXT("Camera"));
		__Local__9.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__10 = __Local__7[2];
		__Local__10.Channel = FName(TEXT("Door"));
		__Local__10.Response = ECollisionResponse::ECR_Ignore;
		__Local__0->SetCollisionProfileName(FName(TEXT("Custom")));
		static TWeakFieldPtr<FProperty> __Local__12{};
		const FProperty* __Local__11 = __Local__12.Get();
		if (nullptr == __Local__11)
		{
			__Local__11 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__11);
			__Local__12 = __Local__11;
		}
		(((FBoolProperty*)__Local__11)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__14{};
		const FProperty* __Local__13 = __Local__14.Get();
		if (nullptr == __Local__13)
		{
			__Local__13 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__13);
			__Local__14 = __Local__13;
		}
		(((FBoolProperty*)__Local__13)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__16{};
		const FProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		(((FBoolProperty*)__Local__15)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'Sprite0' //
		auto& __Local__17 = (*(AccessPrivateProperty<UPaperFlipbook* >((__Local__2), UPaperFlipbookComponent::__PPO__SourceFlipbook() )));
		__Local__17 = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->OverrideMaterials = TArray<UMaterialInterface*> ();
		__Local__2->OverrideMaterials.Reserve(1);
		__Local__2->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		__Local__2->bRenderInDepthPass = false;
		__Local__2->CastShadow = true;
		__Local__2->bCastHiddenShadow = true;
		__Local__2->LightingChannels.bChannel2 = true;
		__Local__2->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_128;
		__Local__2->CustomDepthStencilValue = 5;
		auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
		__Local__18 = ECollisionEnabled::Type::QueryAndPhysics;
		auto& __Local__19 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__20 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__19), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__20 = TArray<FResponseChannel> ();
		__Local__20.AddUninitialized(1);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__20.GetData(), 1);
		auto& __Local__21 = __Local__20[0];
		__Local__21.Channel = FName(TEXT("Door"));
		__Local__21.Response = ECollisionResponse::ECR_Ignore;
		__Local__2->SetCollisionProfileName(FName(TEXT("Custom")));
		auto& __Local__22 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__22 = __Local__0;
		auto& __Local__23 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__23 = FVector(-1.000000, 0.000000, -12.000000);
		auto& __Local__24 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeScale3D() )));
		__Local__24 = FVector(0.425000, 0.425000, 0.425000);
		static TWeakFieldPtr<FProperty> __Local__26{};
		const FProperty* __Local__25 = __Local__26.Get();
		if (nullptr == __Local__25)
		{
			__Local__25 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__25);
			__Local__26 = __Local__25;
		}
		(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'Sprite0' //
	}
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__InteractionHitBox__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractionHitBox"));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->TargetArmLength = 400.000000f;
	bpv__SpringArm__pf->bUsePawnControlRotation = true;
	bpv__SpringArm__pf->bInheritPitch = false;
	bpv__SpringArm__pf->bInheritYaw = false;
	bpv__SpringArm__pf->bInheritRoll = false;
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__SpringArm__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(0.000000, 0.000000, 35.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<FRotator >((bpv__SpringArm__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__28 = FRotator(3.000000, -90.000183, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__30{};
	const FProperty* __Local__29 = __Local__30.Get();
	if (nullptr == __Local__29)
	{
		__Local__29 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__29);
		__Local__30 = __Local__29;
	}
	(((FBoolProperty*)__Local__29)->SetPropertyValue_InContainer((bpv__SpringArm__pf), false, 0));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<FRotator >((bpv__Camera__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__31 = FRotator(12.000000, 0.000000, 0.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__Camera__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__32 = FVector(0.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__29)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__InteractionHitBox__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__InteractionHitBox__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__33 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__InteractionHitBox__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__33 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__InteractionHitBox__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__InteractionHitBox__pf->OverrideMaterials.Reserve(1);
	bpv__InteractionHitBox__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	auto& __Local__34 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__InteractionHitBox__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__34), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__35 = TArray<FResponseChannel> ();
	__Local__35.AddUninitialized(9);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__35.GetData(), 9);
	auto& __Local__36 = __Local__35[0];
	__Local__36.Channel = FName(TEXT("WorldStatic"));
	__Local__36.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__37 = __Local__35[1];
	__Local__37.Channel = FName(TEXT("WorldDynamic"));
	__Local__37.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__38 = __Local__35[2];
	__Local__38.Channel = FName(TEXT("Pawn"));
	__Local__38.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__39 = __Local__35[3];
	__Local__39.Channel = FName(TEXT("Visibility"));
	__Local__39.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__40 = __Local__35[4];
	__Local__40.Channel = FName(TEXT("Camera"));
	__Local__40.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__41 = __Local__35[5];
	__Local__41.Channel = FName(TEXT("PhysicsBody"));
	__Local__41.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__42 = __Local__35[6];
	__Local__42.Channel = FName(TEXT("Vehicle"));
	__Local__42.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__43 = __Local__35[7];
	__Local__43.Channel = FName(TEXT("Destructible"));
	__Local__43.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__44 = __Local__35[8];
	__Local__44.Channel = FName(TEXT("Door"));
	__Local__44.Response = ECollisionResponse::ECR_Overlap;
	bpv__InteractionHitBox__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__45 = (*(AccessPrivateProperty<FVector >((bpv__InteractionHitBox__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__45 = FVector(0.000000, 0.000000, 15.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FVector >((bpv__InteractionHitBox__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__46 = FVector(0.250000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__29)->SetPropertyValue_InContainer((bpv__InteractionHitBox__pf), true, 0));
	bpv__IsMouseInput__pf = false;
	bpv__Speed__pf = 180.000000f;
	bpv__TimeSpeed__pf = 1.000000f;
	bpv__IsClickedOnDoor__pf = false;
	bpv__IsInFrontOfDoor__pf = false;
	bpv__CanTeleport__pf = false;
	bpv__ElevatorUp__pf = false;
	bpv__IsInFrontOfQuest__pf = false;
	bpv__ZOrder__pf = 0;
	bpv__MiniGameWidget__pf = TArray<UObject*> ();
	bpv__CanMove__pf = false;
	bpv__UIArray__pf = TArray<UClass*> ();
	bpv__UIWidgetCreated__pf = TArray<UUserWidget*> ();
	bpv__TeleportToLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<UPaperFlipbookComponent*>((this), APaperCharacter::__PPO__Sprite() )));
	__Local__47 = __Local__2;
	auto& __Local__48 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__48 = __Local__1;
	auto& __Local__49 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__49 = __Local__0;
	auto& __Local__50 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__50 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ACharacterBase_BP_C__pf2567911892::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__InteractionHitBox__pf)
	{
		bpv__InteractionHitBox__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase_BP_C__pf2567911892::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/CharacterBP/FlipbooksState_E.FlipbooksState_E")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UStatsUI_C__pf2748595663::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UQuestUI_C__pf2748595663::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib_BP_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWateringPlants_WG_C__pf4273311956::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UShopHealthty_C__pf1629536273::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWithdrawnalShop_C__pf3373900542::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USchool_C__pf4136444318::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URecruit_widget_C__pf2914304342::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USleepWell_C__pf645916017::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UResultOfDays_C__pf645916017::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCoffee_widget_C__pf575078304::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDialogUI_C__pf1489439355::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPresent_widget_C__pf3227831806::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Ushare_widget_C__pf2085803296::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URepair_widget_C__pf2854336703::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWorking_widget_C__pf518243491::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamewin_C__pf1489439355::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AInteractionBox_BP_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__51 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__51);
	auto __Local__52 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__52);
	auto __Local__53 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__53);
	auto __Local__54 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__54);
	static TWeakFieldPtr<FProperty> __Local__56{};
	const FProperty* __Local__55 = __Local__56.Get();
	if (nullptr == __Local__55)
	{
		__Local__55 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__55);
		__Local__56 = __Local__55;
	}
	(((FBoolProperty*)__Local__55)->SetPropertyValue_InContainer((__Local__51), false, 0));
	__Local__52->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__52->InputKeyDelegateBindings.AddUninitialized(6);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__52->InputKeyDelegateBindings.GetData(), 6);
	auto& __Local__57 = __Local__52->InputKeyDelegateBindings[0];
	__Local__57.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__57.InputKeyEvent = EInputEvent::IE_Released;
	__Local__57.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5"));
	auto& __Local__58 = __Local__52->InputKeyDelegateBindings[1];
	__Local__58.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__58.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4"));
	auto& __Local__59 = __Local__52->InputKeyDelegateBindings[2];
	__Local__59.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__59.InputKeyEvent = EInputEvent::IE_Released;
	__Local__59.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"));
	auto& __Local__60 = __Local__52->InputKeyDelegateBindings[3];
	__Local__60.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__60.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"));
	auto& __Local__61 = __Local__52->InputKeyDelegateBindings[4];
	__Local__61.InputChord.Key = FKey(TEXT("J"));
	__Local__61.FunctionNameToBind = FName(TEXT("InpActEvt_J_K2Node_InputKeyEvent_0"));
	auto& __Local__62 = __Local__52->InputKeyDelegateBindings[5];
	__Local__62.InputChord.Key = FKey(TEXT("Tab"));
	__Local__62.FunctionNameToBind = FName(TEXT("InpActEvt_Tab_K2Node_InputKeyEvent_1"));
	__Local__53->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__53->InputActionDelegateBindings.AddUninitialized(4);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__53->InputActionDelegateBindings.GetData(), 4);
	auto& __Local__63 = __Local__53->InputActionDelegateBindings[0];
	__Local__63.InputActionName = FName(TEXT("DebugKey1"));
	__Local__63.FunctionNameToBind = FName(TEXT("InpActEvt_DebugKey1_K2Node_InputActionEvent_1"));
	auto& __Local__64 = __Local__53->InputActionDelegateBindings[1];
	__Local__64.InputActionName = FName(TEXT("DebugKey2"));
	__Local__64.FunctionNameToBind = FName(TEXT("InpActEvt_DebugKey2_K2Node_InputActionEvent_0"));
	auto& __Local__65 = __Local__53->InputActionDelegateBindings[2];
	__Local__65.InputActionName = FName(TEXT("CancelPath"));
	__Local__65.InputKeyEvent = EInputEvent::IE_Released;
	__Local__65.FunctionNameToBind = FName(TEXT("InpActEvt_CancelPath_K2Node_InputActionEvent_3"));
	auto& __Local__66 = __Local__53->InputActionDelegateBindings[3];
	__Local__66.InputActionName = FName(TEXT("CancelPath"));
	__Local__66.FunctionNameToBind = FName(TEXT("InpActEvt_CancelPath_K2Node_InputActionEvent_2"));
	__Local__54->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__54->InputAxisDelegateBindings.AddUninitialized(1);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__54->InputAxisDelegateBindings.GetData(), 1);
	auto& __Local__67 = __Local__54->InputAxisDelegateBindings[0];
	__Local__67.InputAxisName = FName(TEXT("KeyboardMovement"));
	__Local__67.FunctionNameToBind = FName(TEXT("InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_6__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_10__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_11__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_12__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_13__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_14__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf{};
	check(bpp__EntryPoint__pf == 127);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Health")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_3__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("H_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Energy")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_4__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("E_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Knowledge")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_5__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_5__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("K_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_2__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_17__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_14__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_17__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("CR_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_14__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("REPAIR")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_6__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_6__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("JR_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_3__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WATERPLANT")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_7__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_4__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_7__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("JW_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_4__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("EMWORK")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_8__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_5__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_8__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("EW_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_5__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("COFFE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_9__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_6__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_9__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("EC_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_6__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("PRESENT")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_10__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_7__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_10__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("MP_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_7__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("SHARE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_11__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_8__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_11__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("MS_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_8__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("RECURIT")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_12__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_9__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_12__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("MR_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_9__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("PRESENT")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_13__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_10__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_13__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("MP_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_10__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDTIME")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_14__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_11__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_14__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("WT_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_11__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_15__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_12__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_15__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("WD_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_12__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CCEEOO")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_16__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue_13__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_ReadStats_Value_16__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("CEO_")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_13__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 158);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 200.000000, this);
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Added 200 Money")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = false;
			}
		case 7:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 22:
			{
				if (!true)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 23:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				bpv__CanTeleport__pf = true;
			}
		case 30:
			{
				bpf__GetClickedLocation__pf(/*out*/ b0l__CallFunc_GetClickedLocation_Destination__pf, /*out*/ b0l__CallFunc_GetClickedLocation_ClickedActor__pf, /*out*/ b0l__CallFunc_GetClickedLocation_IsCleckedOnDoor__pf);
			}
		case 31:
			{
				if (!b0l__CallFunc_GetClickedLocation_IsCleckedOnDoor__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				bpf__MoveToLocatedPoint__pf(b0l__CallFunc_GetClickedLocation_Destination__pf);
			}
		case 33:
			{
				if (!bpv__IsInFrontOfDoor__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_GetClickedLocation_ClickedActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				if (!bpv__CanTeleport__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				__StateStack.Push(38);
			}
		case 37:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 39;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 40:
			{
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpv__TeleportToLocation__pf, false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
			}
		case 41:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopMovementImmediately();
				}
			}
		case 42:
			{
				UKismetSystemLibrary::Delay(this, 0.800000, FLatentActionInfo(5, -1217203717, TEXT("ExecuteUbergraph_CharacterBase_BP_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
			}
		case 44:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 45:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				__StateStack.Push(27);
			}
		case 47:
			{
				__StateStack.Push(20);
			}
		case 48:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 50:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 25;
				break;
			}
		case 51:
			{
				__StateStack.Push(26);
				__CurrentState = 47;
				break;
			}
		case 60:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 61:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				__StateStack.Push(69);
			}
		case 67:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_2__pf)
				{
					__CurrentState = 68;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = true;
				__CurrentState = 60;
				break;
			}
		case 69:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_2__pf)
				{
					__CurrentState = 70;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				b0l__Temp_bool_IsClosed_Variable_2__pf = true;
			}
		case 71:
			{
				if (!true)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 72:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 77:
			{
				__StateStack.Push(78);
				__CurrentState = 66;
				break;
			}
		case 78:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 79:
			{
				__StateStack.Push(80);
				__CurrentState = 66;
				break;
			}
		case 80:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 106:
			{
				__CurrentState = 107;
				break;
			}
		case 107:
			{
				__StateStack.Push(113);
				__StateStack.Push(119);
			}
		case 108:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("ISUIOPENED")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
			}
		case 109:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value__pf, 0.000000);
				bpv__CanMove__pf = bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf;
			}
		case 110:
			{
				bpf__UpdateFlipbook__pf();
			}
		case 111:
			{
				bpf__UpdateRotation__pf();
			}
		case 112:
			{
				bpf__IsInfrontOfObjectChecker__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 113:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CanMove__pf, bpv__IsMouseInput__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 114:
			{
				__StateStack.Push(115);
				__CurrentState = 66;
				break;
			}
		case 115:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 116:
			{
				bpv__CanTeleport__pf = false;
			}
		case 117:
			{
				bpf__GetDestionationToMove__pf(/*out*/ b0l__CallFunc_GetDestionationToMove_Destionation__pf);
			}
		case 118:
			{
				bpf__MoveToLocatedPoint__pf(b0l__CallFunc_GetDestionationToMove_Destionation__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 119:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CanMove__pf, bpv__IsMouseInput__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 120:
			{
				__StateStack.Push(28);
				__CurrentState = 47;
				break;
			}
		case 122:
			{
				__CurrentState = 123;
				break;
			}
		case 123:
			{
				b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputKeyEvent_Key_2__pf;
				__CurrentState = 46;
				break;
			}
		case 161:
			{
				__CurrentState = 162;
				break;
			}
		case 162:
			{
				b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputKeyEvent_Key_3__pf;
				__CurrentState = 51;
				break;
			}
		case 163:
			{
				__CurrentState = 164;
				break;
			}
		case 164:
			{
				b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputKeyEvent_Key_4__pf;
				__CurrentState = 79;
				break;
			}
		case 165:
			{
				__CurrentState = 166;
				break;
			}
		case 166:
			{
				b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputKeyEvent_Key_5__pf;
				__CurrentState = 77;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	UStatsUI_C__pf2748595663* bpfv__CallFunc_Create_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UQuestUI_C__pf2748595663* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UStatsUI_C__pf2748595663>(UWidgetBlueprintLibrary::Create(this, UStatsUI_C__pf2748595663::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(20);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<UQuestUI_C__pf2748595663>(UWidgetBlueprintLibrary::Create(this, UQuestUI_C__pf2748595663::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
				{
					bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToViewport(20);
				}
			}
		case 12:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 13:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 14:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(14, true);
				b0l__K2Node_MakeArray_Array__pf[0] = UWateringPlants_WG_C__pf4273311956::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[1] = UShopHealthty_C__pf1629536273::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[2] = UWithdrawnalShop_C__pf3373900542::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[3] = USchool_C__pf4136444318::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[4] = URecruit_widget_C__pf2914304342::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[5] = USleepWell_C__pf645916017::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[6] = UResultOfDays_C__pf645916017::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[7] = UCoffee_widget_C__pf575078304::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[8] = UDialogUI_C__pf1489439355::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[9] = UPresent_widget_C__pf3227831806::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[10] = Ushare_widget_C__pf2085803296::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[11] = URepair_widget_C__pf2854336703::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[12] = UWorking_widget_C__pf518243491::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[13] = UGamewin_C__pf1489439355::StaticClass();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 16:
			{
				__StateStack.Push(19);
			}
		case 17:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(14, true);
				b0l__K2Node_MakeArray_Array__pf[0] = UWateringPlants_WG_C__pf4273311956::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[1] = UShopHealthty_C__pf1629536273::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[2] = UWithdrawnalShop_C__pf3373900542::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[3] = USchool_C__pf4136444318::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[4] = URecruit_widget_C__pf2914304342::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[5] = USleepWell_C__pf645916017::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[6] = UResultOfDays_C__pf645916017::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[7] = UCoffee_widget_C__pf575078304::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[8] = UDialogUI_C__pf1489439355::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[9] = UPresent_widget_C__pf3227831806::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[10] = Ushare_widget_C__pf2085803296::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[11] = URepair_widget_C__pf2854336703::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[12] = UWorking_widget_C__pf518243491::StaticClass();
				b0l__K2Node_MakeArray_Array__pf[13] = UGamewin_C__pf1489439355::StaticClass();
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__CallFunc_Create_ReturnValue_2__pf = UWidgetBlueprintLibrary::Create(this, b0l__CallFunc_Array_Get_Item__pf, ((APlayerController*)nullptr));
			}
		case 18:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__UIWidgetCreated__pf, b0l__CallFunc_Create_ReturnValue_2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 14;
				break;
			}
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
			{
				bpv__IsMouseInput__pf = true;
			}
		case 83:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__Speed__pf;
				}
			}
		case 84:
			{
				UGameplayStatics::SetGlobalTimeDilation(this, 1.000000);
			}
		case 85:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("Health")), 100.000000, true, 100.000000, this);
			}
		case 86:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("Energy")), 100.000000, true, 100.000000, this);
			}
		case 87:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("Money")), 10.000000, false, 0.000000, this);
			}
		case 88:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("Knowledge")), 0.000000, true, 40.000000, this);
			}
		case 89:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("CompanyRank")), 0.000000, true, 2.000000, this);
			}
		case 90:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, true, 1.000000, this);
			}
		case 91:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WORLDDILATION")), 1.000000, true, 3.000000, this);
			}
		case 92:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("Exp")), 0.000000, true, 5500.000000, this);
			}
		case 93:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WORLDTIME")), 170.000000, false, 0.000000, this);
			}
		case 94:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WORLDDATE")), 1.000000, true, 30.000000, this);
			}
		case 95:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WATERPLANT")), 0.000000, true, 6.000000, this);
			}
		case 96:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("COFFE")), 0.000000, true, 3.000000, this);
			}
		case 97:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("PRESENT")), 0.000000, true, 2.000000, this);
			}
		case 98:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("RECURIT")), 0.000000, true, 3.000000, this);
			}
		case 99:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("SHARE")), 0.000000, true, 1.000000, this);
			}
		case 100:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("REPAIR")), 0.000000, true, 3.000000, this);
			}
		case 101:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("EMWORK")), 0.000000, true, 2.000000, this);
			}
		case 102:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("ISSLEEP")), 0.000000, true, 1.000000, this);
			}
		case 103:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("CCEEOO")), 0.000000, true, 1.000000, this);
			}
		case 104:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WORLDTIMEMINUTE")), 0.000000, false, 0.000000, this);
			}
		case 105:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__NewStats__pf(FString(TEXT("WORLDTIMEMUITIPLIER")), 1.000000, true, 1.000000, this);
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 52:
			{
				__CurrentState = 53;
				break;
			}
		case 53:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDILATION")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
			}
		case 54:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_ReadStats_Value_1__pf, 2.500000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 55:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("WORLDDILATION")), 1.000000, this);
			}
		case 56:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDILATION")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
			}
		case 57:
			{
				UGameplayStatics::SetGlobalTimeDilation(this, b0l__CallFunc_ReadStats_Value_2__pf);
				__CurrentState = -1;
				break;
			}
		case 58:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_ReadStats_Value_1__pf, 2.500000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 59:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("WORLDDILATION")), -2.000000, this);
				__CurrentState = 56;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 124);
	// optimized KCST_UnconditionalGoto
	if (!bpv__CanMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	AddMovementInput(FVector(1.000000,0.000000,0.000000), b0l__K2Node_InputAxisEvent_AxisValue__pf, false);
	return; //KCST_EndOfThread
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpv__IsMouseInput__pf = true;
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__Speed__pf;
				}
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
			}
		case 64:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopMovementImmediately();
				}
			}
		case 65:
			{
				bpv__IsMouseInput__pf = false;
				__CurrentState = 4;
				break;
			}
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
			}
		case 76:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(2, 2068794393, TEXT("ExecuteUbergraph_CharacterBase_BP_6"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__ExecuteUbergraph_CharacterBase_BP__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 121);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("WORLDDATE")), 1.000000, this);
	return; //KCST_EndOfThread
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_5(124);
}
void ACharacterBase_BP_C__pf2567911892::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(106);
}
void ACharacterBase_BP_C__pf2567911892::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_3(81);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_J_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_7(121);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_DebugKey2_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_0(127);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_DebugKey1_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_1(158);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_Tab_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_4(52);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_CancelPath_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_6(62);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_CancelPath_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_6(74);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(122);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(161);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(163);
}
void ACharacterBase_BP_C__pf2567911892::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(165);
}
void ACharacterBase_BP_C__pf2567911892::bpf__GetDestionationToMove__pf(/*out*/ FVector& bpp__Destionation__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_ElementIndex__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, 0.000000, bpfv__CallFunc_BreakVector_Z__pf);
	bpp__Destionation__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
}
void ACharacterBase_BP_C__pf2567911892::bpf__MoveToLocatedPoint__pf(FVector bpp__Destionation__pf)
{
	FVector bpfv__MoveDestionation__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__MoveDestionation__pf = bpp__Destionation__pf;
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpfv__MoveDestionation__pf, FVector(0.000000,0.000000,0.000000), 0.001000);
				if (!bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				UKismetMathLibrary::BreakVector(bpfv__MoveDestionation__pf, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_BreakVector_X_1__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 20.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__Speed__pf;
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetMathLibrary::BreakVector(bpfv__MoveDestionation__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, 0.000000, bpfv__CallFunc_BreakVector_Z__pf);
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__GetClickedLocation__pf(/*out*/ FVector& bpp__Destination__pf, /*out*/ AActor*& bpp__ClickedActor__pf, /*out*/ bool& bpp__IsCleckedOnDoor__pf)
{
	FHitResult bpfv__NewLocalVar_0__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_ElementIndex__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery3, true, /*out*/ bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				}
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery3, true, /*out*/ bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				}
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf->AActor::K2_GetActorLocation();
				}
				bpp__Destination__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
				bpp__ClickedActor__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf;
				bpp__IsCleckedOnDoor__pf = true;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__Destination__pf = FVector(0.000000,0.000000,0.000000);
				bpp__ClickedActor__pf = ((AActor*)nullptr);
				bpp__IsCleckedOnDoor__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__MoveToActor__pf(AActor* bpp__Actor__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UAIBlueprintHelperLibrary::SimpleMoveToActor(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpp__Actor__pf);
}
void ACharacterBase_BP_C__pf2567911892::bpf__UpdateFlipbook__pf()
{
	E__FlipbooksState_E__pf bpfv__AnimationState__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_1__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_2__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_3__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_4__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_5__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_6__pf{};
	UPaperFlipbook* bpfv__Temp_object_Variable_7__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_ReadStats_Value__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	UPaperFlipbook* bpfv__K2Node_Select_Default__pf{};
	UPaperFlipbook* bpfv__K2Node_Select_Default_1__pf{};
	UPaperFlipbook* bpfv__K2Node_Select_Default_2__pf{};
	bool bpfv__CallFunc_SetFlipbook_ReturnValue__pf{};
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__Temp_object_Variable__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_1__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_2__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_3__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_4__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_5__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_6__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpfv__Temp_object_Variable_7__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(ACharacterBase_BP_C__pf2567911892::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.000000);
	bpfv__Temp_int_Variable__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf;
	bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
	if(::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))))
	{
		bpfv__CallFunc_SetFlipbook_ReturnValue__pf = (*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))->SetFlipbook(TSwitchValue<bool , UPaperFlipbook* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool , UPaperFlipbook* >(false, TSwitchValue<int32 , UPaperFlipbook* >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , UPaperFlipbook* >(0, bpfv__Temp_object_Variable_3__pf), TSwitchPair<int32 , UPaperFlipbook* >(1, bpfv__Temp_object_Variable_2__pf), TSwitchPair<int32 , UPaperFlipbook* >(2, bpfv__Temp_object_Variable_1__pf), TSwitchPair<int32 , UPaperFlipbook* >(3, bpfv__Temp_object_Variable__pf))), TSwitchPair<bool , UPaperFlipbook* >(true, TSwitchValue<int32 , UPaperFlipbook* >(bpfv__Temp_int_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 4, TSwitchPair<int32 , UPaperFlipbook* >(0, bpfv__Temp_object_Variable_7__pf), TSwitchPair<int32 , UPaperFlipbook* >(1, bpfv__Temp_object_Variable_6__pf), TSwitchPair<int32 , UPaperFlipbook* >(2, bpfv__Temp_object_Variable_5__pf), TSwitchPair<int32 , UPaperFlipbook* >(3, bpfv__Temp_object_Variable_4__pf)))));
	}
}
void ACharacterBase_BP_C__pf2567911892::bpf__UpdateRotation__pf()
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetVelocity_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))))
				{
					(*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,180.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetVelocity_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))))
				{
					(*(AccessPrivateProperty<UPaperFlipbookComponent* >((this), APaperCharacter::__PPO__Sprite() )))->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACharacterBase_BP_C__pf2567911892::bpf__GetDoorTeleportLocation__pf(const FString& bpp__Name__pf__const)
{
	typedef FString  T__Local__70;
	T__Local__70& bpp__Name__pf = *const_cast<T__Local__70 *>(&bpp__Name__pf__const);
	TMap<FString,FVector> bpfv__DoorListMap__pf{};
}
void ACharacterBase_BP_C__pf2567911892::bpf__IsInfrontOfObjectChecker__pf()
{
	TArray<AActor*> bpfv__ObjectActorOverlapping__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsWithTag_OutActors__pf{};
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__InteractionHitBox__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__InteractionHitBox__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AInteractionBox_BP_C__pf2132744816::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				(bpfv__CallFunc_GetAllActorsWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithTag(this, FName(TEXT("Door")), /*out*/ bpfv__CallFunc_GetAllActorsWithTag_OutActors__pf);
			}
		case 3:
			{
				if(::IsValid(bpv__InteractionHitBox__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__InteractionHitBox__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AInteractionBox_BP_C__pf2132744816::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpfv__CallFunc_GetAllActorsWithTag_OutActors__pf, bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				bpv__IsInFrontOfDoor__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpv__IsInFrontOfDoor__pf = false;
			}
		case 6:
			{
				bpv__IsInFrontOfQuest__pf = false;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpv__IsInFrontOfQuest__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase_BP_C__pf2567911892::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ACharacterBase_BP_C__pf2567911892::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
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
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_2__crop.Book_2__crop 
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
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ACharacterBase_BP_C__pf2567911892
{
	FRegisterHelper__ACharacterBase_BP_C__pf2567911892()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/CharacterBP/CharacterBase_BP"), &ACharacterBase_BP_C__pf2567911892::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ACharacterBase_BP_C__pf2567911892 Instance;
};
FRegisterHelper__ACharacterBase_BP_C__pf2567911892 FRegisterHelper__ACharacterBase_BP_C__pf2567911892::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
