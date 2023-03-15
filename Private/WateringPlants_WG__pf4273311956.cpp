#include "NativizedAssets.h"
#include "WateringPlants_WG__pf4273311956.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
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
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
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
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
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


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWateringPlants_WG_C__pf4273311956::UWateringPlants_WG_C__pf4273311956(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__background__pf = nullptr;
	bpv__Plant__pf = nullptr;
	bpv__WaterDrip__pf = nullptr;
	bpv__WateringCan__pf = nullptr;
	bpv__WateringTimer__pf = 0.000000f;
	bpv__DripSpritesTexture__pf = TArray<UTexture2D*> ();
	bpv__PlantsTexture__pf = TArray<UTexture2D*> ();
	bpv__DripAnimateIndex__pf = 0;
	bpv__Done__pf = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWateringPlants_WG_C__pf4273311956::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWateringPlants_WG_C__pf4273311956::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib_BP_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("watercanlana1_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[0];
	__Local__3.ComponentPropertyName = FName(TEXT("WateringCan"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[1];
	__Local__4.ComponentPropertyName = FName(TEXT("WateringCan"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));
	auto __Local__5 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(2);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = -1116.672241f;
	__Local__7->LayoutData.Offsets.Top = -691.802917f;
	__Local__7->LayoutData.Offsets.Right = 2206.551025f;
	__Local__7->LayoutData.Offsets.Bottom = 1293.485596f;
	__Local__7->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__7->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UBackgroundBlur>(__Local__1, TEXT("BackgroundBlur_65"), (EObjectFlags)0x00280008);
	__Local__8->BlurStrength = 5.000000f;
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = 7.229462f;
	__Local__9->LayoutData.Offsets.Top = 5.894775f;
	__Local__9->LayoutData.Offsets.Right = 1920.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__9->Parent = __Local__5;
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_30"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(3);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -632.000000f;
	__Local__12->LayoutData.Offsets.Top = -401.957947f;
	__Local__12->LayoutData.Offsets.Right = 1263.052002f;
	__Local__12->LayoutData.Offsets.Bottom = 812.337891f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__1, TEXT("background"), (EObjectFlags)0x00280008);
	__Local__13->Brush.ImageSize = FVector2D(1322.000000, 868.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Left = -136.000000f;
	__Local__15->LayoutData.Offsets.Top = -136.000000f;
	__Local__15->LayoutData.Offsets.Right = 504.304291f;
	__Local__15->LayoutData.Offsets.Bottom = 624.794800f;
	__Local__15->Parent = __Local__10;
	auto __Local__16 = NewObject<UImage>(__Local__1, TEXT("Plant"), (EObjectFlags)0x00280008);
	__Local__16->Brush.ImageSize = FVector2D(512.000000, 628.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__16->Slot = __Local__15;
	__Local__16->RenderTransform.Translation = FVector2D(498.000000, 373.000000);
	__Local__15->Content = __Local__16;
	__Local__11.Add(__Local__15);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = -152.000000f;
	__Local__18->LayoutData.Offsets.Top = -132.000000f;
	__Local__18->LayoutData.Offsets.Right = 260.815094f;
	__Local__18->LayoutData.Offsets.Bottom = 218.022308f;
	__Local__18->Parent = __Local__10;
	auto __Local__19 = NewObject<UButton>(__Local__1, TEXT("WateringCan"), (EObjectFlags)0x00280008);
	__Local__19->WidgetStyle.Normal.ImageSize = FVector2D(701.000000, 634.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__19->WidgetStyle.Hovered.ImageSize = FVector2D(701.000000, 634.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__19->WidgetStyle.Pressed.ImageSize = FVector2D(701.000000, 634.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__19->WidgetStyle.Disabled.ImageSize = FVector2D(701.000000, 634.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UButtonSlot>(__Local__19, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__24->Padding.Left = 0.000000f;
	__Local__24->Padding.Top = 0.000000f;
	__Local__24->Padding.Right = 0.000000f;
	__Local__24->Padding.Bottom = 0.000000f;
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__24->Parent = __Local__19;
	auto __Local__25 = NewObject<UImage>(__Local__1, TEXT("WaterDrip"), (EObjectFlags)0x00280008);
	__Local__25->Brush.ImageSize = FVector2D(247.000000, 270.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__25->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__25->Slot = __Local__24;
	__Local__25->RenderTransform.Translation = FVector2D(-220.000000, -132.000000);
	__Local__25->RenderTransform.Scale = FVector2D(0.800000, 1.000000);
	__Local__25->RenderTransform.Angle = 82.000000f;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	__Local__19->Slot = __Local__18;
	__Local__19->RenderTransform.Translation = FVector2D(1360.000000, 800.000000);
	__Local__18->Content = __Local__19;
	__Local__11.Add(__Local__18);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__6.Add(__Local__9);
	__Local__1->RootWidget = __Local__5;
	auto __Local__27 = NewObject<UMovieScene>(__Local__2, TEXT("watercanlana1"), (EObjectFlags)0x00280008);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__27), UMovieScene::__PPO__Possessables() )));
	__Local__28 = TArray<FMovieScenePossessable> ();
	__Local__28.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__28.GetData(), 4);
	auto& __Local__29 = __Local__28[0];
	auto& __Local__30 = (*(AccessPrivateProperty<FGuid >(&(__Local__29), FMovieScenePossessable::__PPO__Guid() )));
	__Local__30 = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& __Local__31 = (*(AccessPrivateProperty<FString >(&(__Local__29), FMovieScenePossessable::__PPO__Name() )));
	__Local__31 = FString(TEXT("water1"));
	auto& __Local__32 = (*(AccessPrivateProperty<UClass* >(&(__Local__29), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__32 = UImage::StaticClass();
	auto& __Local__33 = __Local__28[1];
	auto& __Local__34 = (*(AccessPrivateProperty<FGuid >(&(__Local__33), FMovieScenePossessable::__PPO__Guid() )));
	__Local__34 = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& __Local__35 = (*(AccessPrivateProperty<FString >(&(__Local__33), FMovieScenePossessable::__PPO__Name() )));
	__Local__35 = FString(TEXT("water2"));
	auto& __Local__36 = (*(AccessPrivateProperty<UClass* >(&(__Local__33), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__36 = UImage::StaticClass();
	auto& __Local__37 = __Local__28[2];
	auto& __Local__38 = (*(AccessPrivateProperty<FGuid >(&(__Local__37), FMovieScenePossessable::__PPO__Guid() )));
	__Local__38 = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& __Local__39 = (*(AccessPrivateProperty<FString >(&(__Local__37), FMovieScenePossessable::__PPO__Name() )));
	__Local__39 = FString(TEXT("water3"));
	auto& __Local__40 = (*(AccessPrivateProperty<UClass* >(&(__Local__37), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__40 = UImage::StaticClass();
	auto& __Local__41 = __Local__28[3];
	auto& __Local__42 = (*(AccessPrivateProperty<FGuid >(&(__Local__41), FMovieScenePossessable::__PPO__Guid() )));
	__Local__42 = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& __Local__43 = (*(AccessPrivateProperty<FString >(&(__Local__41), FMovieScenePossessable::__PPO__Name() )));
	__Local__43 = FString(TEXT("water4"));
	auto& __Local__44 = (*(AccessPrivateProperty<UClass* >(&(__Local__41), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__44 = UImage::StaticClass();
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__27), UMovieScene::__PPO__ObjectBindings() )));
	__Local__45 = TArray<FMovieSceneBinding> ();
	__Local__45.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__45.GetData(), 4);
	auto& __Local__46 = __Local__45[0];
	auto& __Local__47 = (*(AccessPrivateProperty<FGuid >(&(__Local__46), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__47 = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& __Local__48 = (*(AccessPrivateProperty<FString >(&(__Local__46), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__48 = FString(TEXT("watar"));
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__46), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__49 = TArray<UMovieSceneTrack*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UMovieScene2DTransformTrack>(__Local__27, TEXT("MovieScene2DTransformTrack_7"), (EObjectFlags)0x00280008);
	auto& __Local__51 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__50), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__51.PropertyName = FName(TEXT("RenderTransform"));
	__Local__51.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__51.bCanUseClassLookup = true;
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__50), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__52 = TArray<UMovieSceneSection*> ();
	__Local__52.Reserve(1);
	auto __Local__53 = NewObject<UMovieScene2DTransformSection>(__Local__50, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__54 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__53->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__55 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__53->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__54)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__55)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__56 = TArray<FFrameNumber> ();
	__Local__56.Reserve(5);
	__Local__56.Add(FFrameNumber{});
	__Local__56[0].Value = 3000;
	__Local__56.Add(FFrameNumber{});
	__Local__56[1].Value = 6000;
	__Local__56.Add(FFrameNumber{});
	__Local__56[2].Value = 9000;
	__Local__56.Add(FFrameNumber{});
	__Local__56[3].Value = 12000;
	__Local__56.Add(FFrameNumber{});
	__Local__56[4].Value = 15000;
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__57 = TArray<FMovieSceneFloatValue> ();
	__Local__57.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__57.GetData(), 5);
	auto& __Local__58 = __Local__57[0];
	__Local__58.Value = -142.498672f;
	auto& __Local__59 = __Local__57[1];
	__Local__59.Value = -148.240204f;
	__Local__59.Tangent.ArriveTangent = -0.003795f;
	__Local__59.Tangent.LeaveTangent = -0.003795f;
	auto& __Local__60 = __Local__57[2];
	__Local__60.Value = -165.271164f;
	__Local__60.Tangent.ArriveTangent = -0.005091f;
	__Local__60.Tangent.LeaveTangent = -0.005091f;
	auto& __Local__61 = __Local__57[3];
	__Local__61.Value = -178.786102f;
	__Local__61.Tangent.ArriveTangent = -0.003082f;
	__Local__61.Tangent.LeaveTangent = -0.003082f;
	auto& __Local__62 = __Local__57[4];
	__Local__62.Value = -183.761917f;
	auto& __Local__63 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__63 = TArray<FFrameNumber> ();
	__Local__63.Reserve(5);
	__Local__63.Add(FFrameNumber{});
	__Local__63[0].Value = 3000;
	__Local__63.Add(FFrameNumber{});
	__Local__63[1].Value = 6000;
	__Local__63.Add(FFrameNumber{});
	__Local__63[2].Value = 9000;
	__Local__63.Add(FFrameNumber{});
	__Local__63[3].Value = 12000;
	__Local__63.Add(FFrameNumber{});
	__Local__63[4].Value = 15000;
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__64 = TArray<FMovieSceneFloatValue> ();
	__Local__64.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__64.GetData(), 5);
	auto& __Local__65 = __Local__64[0];
	__Local__65.Value = -40.361000f;
	auto& __Local__66 = __Local__64[1];
	__Local__66.Value = -37.611565f;
	__Local__66.Tangent.ArriveTangent = 0.001548f;
	__Local__66.Tangent.LeaveTangent = 0.001548f;
	auto& __Local__67 = __Local__64[2];
	__Local__67.Value = -31.073494f;
	__Local__67.Tangent.ArriveTangent = 0.002700f;
	__Local__67.Tangent.LeaveTangent = 0.002700f;
	auto& __Local__68 = __Local__64[3];
	__Local__68.Value = -21.410742f;
	__Local__68.Tangent.ArriveTangent = 0.003063f;
	__Local__68.Tangent.LeaveTangent = 0.003063f;
	auto& __Local__69 = __Local__64[4];
	__Local__69.Value = -12.695851f;
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__70 = TArray<FFrameNumber> ();
	__Local__70.Reserve(1);
	__Local__70.Add(FFrameNumber{});
	__Local__70[0].Value = 3000;
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__71 = TArray<FMovieSceneFloatValue> ();
	__Local__71.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__71.GetData(), 1);
	auto& __Local__72 = __Local__71[0];
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__73 = TArray<FFrameNumber> ();
	__Local__73.Reserve(1);
	__Local__73.Add(FFrameNumber{});
	__Local__73[0].Value = 3000;
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__74 = TArray<FMovieSceneFloatValue> ();
	__Local__74.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__74.GetData(), 1);
	auto& __Local__75 = __Local__74[0];
	__Local__75.Value = 0.500000f;
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__76 = TArray<FFrameNumber> ();
	__Local__76.Reserve(1);
	__Local__76.Add(FFrameNumber{});
	__Local__76[0].Value = 3000;
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__77 = TArray<FMovieSceneFloatValue> ();
	__Local__77.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__77.GetData(), 1);
	auto& __Local__78 = __Local__77[0];
	__Local__78.Value = 0.500000f;
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__79 = TArray<FFrameNumber> ();
	__Local__79.Reserve(1);
	__Local__79.Add(FFrameNumber{});
	__Local__79[0].Value = 3000;
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__80 = TArray<FMovieSceneFloatValue> ();
	__Local__80.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__80.GetData(), 1);
	auto& __Local__81 = __Local__80[0];
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__53->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__82 = TArray<FFrameNumber> ();
	__Local__82.Reserve(1);
	__Local__82.Add(FFrameNumber{});
	__Local__82[0].Value = 3000;
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__53->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__83 = TArray<FMovieSceneFloatValue> ();
	__Local__83.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__83.GetData(), 1);
	auto& __Local__84 = __Local__83[0];
	__Local__53->Easing.EaseIn = __Local__54;
	__Local__53->Easing.EaseOut = __Local__55;
	__Local__53->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& __Local__85 = (*(AccessPrivateProperty<FGuid >((__Local__53), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__85 = FGuid(0x242F896E, 0x435251C2, 0x168B2DB8, 0x9233602C);
	__Local__52.Add(__Local__53);
	auto& __Local__86 = (*(AccessPrivateProperty<FGuid >((__Local__50), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__86 = FGuid(0xD5E424EE, 0x46EB4DFE, 0x480BC789, 0x9F3E59CA);
	auto& __Local__87 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__50), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__87.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__87.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__87.Entries.GetData(), 1);
	auto& __Local__88 = __Local__87.Entries[0];
	__Local__88.Section = __Local__53;
	static TWeakFieldPtr<FProperty> __Local__90{};
	const FProperty* __Local__89 = __Local__90.Get();
	if (nullptr == __Local__89)
	{
		__Local__89 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__89);
		__Local__90 = __Local__89;
	}
	auto& __Local__91 = (*(__Local__89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__88.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__93{};
	const FProperty* __Local__92 = __Local__93.Get();
	if (nullptr == __Local__92)
	{
		__Local__92 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__92);
		__Local__93 = __Local__92;
	}
	auto& __Local__94 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__91), 0)));
	__Local__94 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__96{};
	const FProperty* __Local__95 = __Local__96.Get();
	if (nullptr == __Local__95)
	{
		__Local__95 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__95);
		__Local__96 = __Local__95;
	}
	auto& __Local__97 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__91), 0)));
	__Local__97.Value = 3000;
	static TWeakFieldPtr<FProperty> __Local__99{};
	const FProperty* __Local__98 = __Local__99.Get();
	if (nullptr == __Local__98)
	{
		__Local__98 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__98);
		__Local__99 = __Local__98;
	}
	auto& __Local__100 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__88.Range), 0)));
	auto& __Local__101 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__100), 0)));
	__Local__101 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__102 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__100), 0)));
	__Local__102.Value = 15000;
	__Local__88.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__103 = (*(AccessPrivateProperty<FGuid >((__Local__50), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__103 = FGuid(0xD5E424EE, 0x46EB4DFE, 0x480BC789, 0x9F3E59CA);
	__Local__49.Add(__Local__50);
	auto& __Local__104 = __Local__45[1];
	auto& __Local__105 = (*(AccessPrivateProperty<FGuid >(&(__Local__104), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__105 = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& __Local__106 = (*(AccessPrivateProperty<FString >(&(__Local__104), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__106 = FString(TEXT("water2"));
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__104), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__107 = TArray<UMovieSceneTrack*> ();
	__Local__107.Reserve(1);
	auto __Local__108 = NewObject<UMovieScene2DTransformTrack>(__Local__27, TEXT("MovieScene2DTransformTrack_8"), (EObjectFlags)0x00280008);
	auto& __Local__109 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__108), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__109.PropertyName = FName(TEXT("RenderTransform"));
	__Local__109.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__109.bCanUseClassLookup = true;
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__108), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__110 = TArray<UMovieSceneSection*> ();
	__Local__110.Reserve(1);
	auto __Local__111 = NewObject<UMovieScene2DTransformSection>(__Local__108, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__112 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__111->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__113 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__111->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__112)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__113)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__114 = TArray<FFrameNumber> ();
	__Local__114.Reserve(5);
	__Local__114.Add(FFrameNumber{});
	__Local__114[0].Value = 3000;
	__Local__114.Add(FFrameNumber{});
	__Local__114[1].Value = 6000;
	__Local__114.Add(FFrameNumber{});
	__Local__114[2].Value = 9000;
	__Local__114.Add(FFrameNumber{});
	__Local__114[3].Value = 12000;
	__Local__114.Add(FFrameNumber{});
	__Local__114[4].Value = 15000;
	auto& __Local__115 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__115 = TArray<FMovieSceneFloatValue> ();
	__Local__115.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__115.GetData(), 5);
	auto& __Local__116 = __Local__115[0];
	__Local__116.Value = -142.498672f;
	auto& __Local__117 = __Local__115[1];
	__Local__117.Value = -148.240204f;
	__Local__117.Tangent.ArriveTangent = -0.003795f;
	__Local__117.Tangent.LeaveTangent = -0.003795f;
	auto& __Local__118 = __Local__115[2];
	__Local__118.Value = -165.271164f;
	__Local__118.Tangent.ArriveTangent = -0.005091f;
	__Local__118.Tangent.LeaveTangent = -0.005091f;
	auto& __Local__119 = __Local__115[3];
	__Local__119.Value = -178.786102f;
	__Local__119.Tangent.ArriveTangent = -0.003082f;
	__Local__119.Tangent.LeaveTangent = -0.003082f;
	auto& __Local__120 = __Local__115[4];
	__Local__120.Value = -183.761917f;
	auto& __Local__121 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__121 = TArray<FFrameNumber> ();
	__Local__121.Reserve(5);
	__Local__121.Add(FFrameNumber{});
	__Local__121[0].Value = 3000;
	__Local__121.Add(FFrameNumber{});
	__Local__121[1].Value = 6000;
	__Local__121.Add(FFrameNumber{});
	__Local__121[2].Value = 9000;
	__Local__121.Add(FFrameNumber{});
	__Local__121[3].Value = 12000;
	__Local__121.Add(FFrameNumber{});
	__Local__121[4].Value = 15000;
	auto& __Local__122 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__122 = TArray<FMovieSceneFloatValue> ();
	__Local__122.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__122.GetData(), 5);
	auto& __Local__123 = __Local__122[0];
	__Local__123.Value = -40.361000f;
	auto& __Local__124 = __Local__122[1];
	__Local__124.Value = -37.611565f;
	__Local__124.Tangent.ArriveTangent = 0.001548f;
	__Local__124.Tangent.LeaveTangent = 0.001548f;
	auto& __Local__125 = __Local__122[2];
	__Local__125.Value = -31.073494f;
	__Local__125.Tangent.ArriveTangent = 0.002700f;
	__Local__125.Tangent.LeaveTangent = 0.002700f;
	auto& __Local__126 = __Local__122[3];
	__Local__126.Value = -21.410742f;
	__Local__126.Tangent.ArriveTangent = 0.003063f;
	__Local__126.Tangent.LeaveTangent = 0.003063f;
	auto& __Local__127 = __Local__122[4];
	__Local__127.Value = -12.695851f;
	auto& __Local__128 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__128 = TArray<FFrameNumber> ();
	__Local__128.Reserve(1);
	__Local__128.Add(FFrameNumber{});
	__Local__128[0].Value = 3000;
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__129 = TArray<FMovieSceneFloatValue> ();
	__Local__129.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__129.GetData(), 1);
	auto& __Local__130 = __Local__129[0];
	auto& __Local__131 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__131 = TArray<FFrameNumber> ();
	__Local__131.Reserve(1);
	__Local__131.Add(FFrameNumber{});
	__Local__131[0].Value = 3000;
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__132 = TArray<FMovieSceneFloatValue> ();
	__Local__132.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__132.GetData(), 1);
	auto& __Local__133 = __Local__132[0];
	__Local__133.Value = 0.500000f;
	auto& __Local__134 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__134 = TArray<FFrameNumber> ();
	__Local__134.Reserve(1);
	__Local__134.Add(FFrameNumber{});
	__Local__134[0].Value = 3000;
	auto& __Local__135 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__135 = TArray<FMovieSceneFloatValue> ();
	__Local__135.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__135.GetData(), 1);
	auto& __Local__136 = __Local__135[0];
	__Local__136.Value = 0.500000f;
	auto& __Local__137 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__137 = TArray<FFrameNumber> ();
	__Local__137.Reserve(1);
	__Local__137.Add(FFrameNumber{});
	__Local__137[0].Value = 3000;
	auto& __Local__138 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__138 = TArray<FMovieSceneFloatValue> ();
	__Local__138.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__138.GetData(), 1);
	auto& __Local__139 = __Local__138[0];
	auto& __Local__140 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__111->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__140 = TArray<FFrameNumber> ();
	__Local__140.Reserve(1);
	__Local__140.Add(FFrameNumber{});
	__Local__140[0].Value = 3000;
	auto& __Local__141 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__111->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__141 = TArray<FMovieSceneFloatValue> ();
	__Local__141.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__141.GetData(), 1);
	auto& __Local__142 = __Local__141[0];
	__Local__111->Easing.EaseIn = __Local__112;
	__Local__111->Easing.EaseOut = __Local__113;
	__Local__111->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& __Local__143 = (*(AccessPrivateProperty<FGuid >((__Local__111), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__143 = FGuid(0xAB116922, 0x4FED8265, 0xB9365A95, 0x0AF4644C);
	__Local__110.Add(__Local__111);
	auto& __Local__144 = (*(AccessPrivateProperty<FGuid >((__Local__108), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__144 = FGuid(0x4EB7BA49, 0x4E70ED3C, 0x579BFB89, 0xB045C62A);
	auto& __Local__145 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__108), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__145.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__145.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__145.Entries.GetData(), 1);
	auto& __Local__146 = __Local__145.Entries[0];
	__Local__146.Section = __Local__111;
	auto& __Local__147 = (*(__Local__89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__146.Range), 0)));
	auto& __Local__148 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__147), 0)));
	__Local__148 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__149 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__147), 0)));
	__Local__149.Value = 3000;
	auto& __Local__150 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__146.Range), 0)));
	auto& __Local__151 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__150), 0)));
	__Local__151 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__152 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__150), 0)));
	__Local__152.Value = 15000;
	__Local__146.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >((__Local__108), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__153 = FGuid(0x4EB7BA49, 0x4E70ED3C, 0x579BFB89, 0xB045C62A);
	__Local__107.Add(__Local__108);
	auto& __Local__154 = __Local__45[2];
	auto& __Local__155 = (*(AccessPrivateProperty<FGuid >(&(__Local__154), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__155 = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& __Local__156 = (*(AccessPrivateProperty<FString >(&(__Local__154), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__156 = FString(TEXT("water3"));
	auto& __Local__157 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__154), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__157 = TArray<UMovieSceneTrack*> ();
	__Local__157.Reserve(1);
	auto __Local__158 = NewObject<UMovieScene2DTransformTrack>(__Local__27, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__159 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__158), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__159.PropertyName = FName(TEXT("RenderTransform"));
	__Local__159.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__159.bCanUseClassLookup = true;
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__158), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__160 = TArray<UMovieSceneSection*> ();
	__Local__160.Reserve(1);
	auto __Local__161 = NewObject<UMovieScene2DTransformSection>(__Local__158, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__162 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__163 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__162)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__163)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__164 = TArray<FFrameNumber> ();
	__Local__164.Reserve(5);
	__Local__164.Add(FFrameNumber{});
	__Local__164[0].Value = 3000;
	__Local__164.Add(FFrameNumber{});
	__Local__164[1].Value = 6000;
	__Local__164.Add(FFrameNumber{});
	__Local__164[2].Value = 9000;
	__Local__164.Add(FFrameNumber{});
	__Local__164[3].Value = 12000;
	__Local__164.Add(FFrameNumber{});
	__Local__164[4].Value = 15000;
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__165 = TArray<FMovieSceneFloatValue> ();
	__Local__165.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__165.GetData(), 5);
	auto& __Local__166 = __Local__165[0];
	__Local__166.Value = -142.498672f;
	auto& __Local__167 = __Local__165[1];
	__Local__167.Value = -148.240204f;
	__Local__167.Tangent.ArriveTangent = -0.003795f;
	__Local__167.Tangent.LeaveTangent = -0.003795f;
	auto& __Local__168 = __Local__165[2];
	__Local__168.Value = -165.271164f;
	__Local__168.Tangent.ArriveTangent = -0.005091f;
	__Local__168.Tangent.LeaveTangent = -0.005091f;
	auto& __Local__169 = __Local__165[3];
	__Local__169.Value = -178.786102f;
	__Local__169.Tangent.ArriveTangent = -0.003082f;
	__Local__169.Tangent.LeaveTangent = -0.003082f;
	auto& __Local__170 = __Local__165[4];
	__Local__170.Value = -183.761917f;
	auto& __Local__171 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__171 = TArray<FFrameNumber> ();
	__Local__171.Reserve(5);
	__Local__171.Add(FFrameNumber{});
	__Local__171[0].Value = 3000;
	__Local__171.Add(FFrameNumber{});
	__Local__171[1].Value = 6000;
	__Local__171.Add(FFrameNumber{});
	__Local__171[2].Value = 9000;
	__Local__171.Add(FFrameNumber{});
	__Local__171[3].Value = 12000;
	__Local__171.Add(FFrameNumber{});
	__Local__171[4].Value = 15000;
	auto& __Local__172 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__172 = TArray<FMovieSceneFloatValue> ();
	__Local__172.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__172.GetData(), 5);
	auto& __Local__173 = __Local__172[0];
	__Local__173.Value = -40.361000f;
	auto& __Local__174 = __Local__172[1];
	__Local__174.Value = -37.611565f;
	__Local__174.Tangent.ArriveTangent = 0.001548f;
	__Local__174.Tangent.LeaveTangent = 0.001548f;
	auto& __Local__175 = __Local__172[2];
	__Local__175.Value = -31.073494f;
	__Local__175.Tangent.ArriveTangent = 0.002700f;
	__Local__175.Tangent.LeaveTangent = 0.002700f;
	auto& __Local__176 = __Local__172[3];
	__Local__176.Value = -21.410742f;
	__Local__176.Tangent.ArriveTangent = 0.003063f;
	__Local__176.Tangent.LeaveTangent = 0.003063f;
	auto& __Local__177 = __Local__172[4];
	__Local__177.Value = -12.695851f;
	auto& __Local__178 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__178 = TArray<FFrameNumber> ();
	__Local__178.Reserve(1);
	__Local__178.Add(FFrameNumber{});
	__Local__178[0].Value = 3000;
	auto& __Local__179 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__179 = TArray<FMovieSceneFloatValue> ();
	__Local__179.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__179.GetData(), 1);
	auto& __Local__180 = __Local__179[0];
	auto& __Local__181 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__181 = TArray<FFrameNumber> ();
	__Local__181.Reserve(1);
	__Local__181.Add(FFrameNumber{});
	__Local__181[0].Value = 3000;
	auto& __Local__182 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__182 = TArray<FMovieSceneFloatValue> ();
	__Local__182.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__182.GetData(), 1);
	auto& __Local__183 = __Local__182[0];
	__Local__183.Value = 0.500000f;
	auto& __Local__184 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__184 = TArray<FFrameNumber> ();
	__Local__184.Reserve(1);
	__Local__184.Add(FFrameNumber{});
	__Local__184[0].Value = 3000;
	auto& __Local__185 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__185 = TArray<FMovieSceneFloatValue> ();
	__Local__185.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__185.GetData(), 1);
	auto& __Local__186 = __Local__185[0];
	__Local__186.Value = 0.500000f;
	auto& __Local__187 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__187 = TArray<FFrameNumber> ();
	__Local__187.Reserve(1);
	__Local__187.Add(FFrameNumber{});
	__Local__187[0].Value = 3000;
	auto& __Local__188 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__188 = TArray<FMovieSceneFloatValue> ();
	__Local__188.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__188.GetData(), 1);
	auto& __Local__189 = __Local__188[0];
	auto& __Local__190 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__190 = TArray<FFrameNumber> ();
	__Local__190.Reserve(1);
	__Local__190.Add(FFrameNumber{});
	__Local__190[0].Value = 3000;
	auto& __Local__191 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__191 = TArray<FMovieSceneFloatValue> ();
	__Local__191.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__191.GetData(), 1);
	auto& __Local__192 = __Local__191[0];
	__Local__161->Easing.EaseIn = __Local__162;
	__Local__161->Easing.EaseOut = __Local__163;
	__Local__161->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& __Local__193 = (*(AccessPrivateProperty<FGuid >((__Local__161), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__193 = FGuid(0x83407DAD, 0x4B217B8E, 0xE34913A6, 0x536E93A4);
	__Local__160.Add(__Local__161);
	auto& __Local__194 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__194 = FGuid(0x5D5B1B74, 0x41FC8A08, 0xA46CA398, 0x0AB5F93C);
	auto& __Local__195 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__158), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__195.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__195.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__195.Entries.GetData(), 1);
	auto& __Local__196 = __Local__195.Entries[0];
	__Local__196.Section = __Local__161;
	auto& __Local__197 = (*(__Local__89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__196.Range), 0)));
	auto& __Local__198 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__197), 0)));
	__Local__198 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__199 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__197), 0)));
	__Local__199.Value = 3000;
	auto& __Local__200 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__196.Range), 0)));
	auto& __Local__201 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__200), 0)));
	__Local__201 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__202 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__200), 0)));
	__Local__202.Value = 15000;
	__Local__196.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__203 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__203 = FGuid(0x5D5B1B74, 0x41FC8A08, 0xA46CA398, 0x0AB5F93C);
	__Local__157.Add(__Local__158);
	auto& __Local__204 = __Local__45[3];
	auto& __Local__205 = (*(AccessPrivateProperty<FGuid >(&(__Local__204), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__205 = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& __Local__206 = (*(AccessPrivateProperty<FString >(&(__Local__204), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__206 = FString(TEXT("water4"));
	auto& __Local__207 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__204), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__207 = TArray<UMovieSceneTrack*> ();
	__Local__207.Reserve(1);
	auto __Local__208 = NewObject<UMovieScene2DTransformTrack>(__Local__27, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__209 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__208), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__209.PropertyName = FName(TEXT("RenderTransform"));
	__Local__209.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__209.bCanUseClassLookup = true;
	auto& __Local__210 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__208), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__210 = TArray<UMovieSceneSection*> ();
	__Local__210.Reserve(1);
	auto __Local__211 = NewObject<UMovieScene2DTransformSection>(__Local__208, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__212 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__211->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__213 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__211->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__212)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__213)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__214 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__214 = TArray<FFrameNumber> ();
	__Local__214.Reserve(5);
	__Local__214.Add(FFrameNumber{});
	__Local__214[0].Value = 3000;
	__Local__214.Add(FFrameNumber{});
	__Local__214[1].Value = 6000;
	__Local__214.Add(FFrameNumber{});
	__Local__214[2].Value = 9000;
	__Local__214.Add(FFrameNumber{});
	__Local__214[3].Value = 12000;
	__Local__214.Add(FFrameNumber{});
	__Local__214[4].Value = 15000;
	auto& __Local__215 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__215 = TArray<FMovieSceneFloatValue> ();
	__Local__215.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__215.GetData(), 5);
	auto& __Local__216 = __Local__215[0];
	__Local__216.Value = -142.498672f;
	auto& __Local__217 = __Local__215[1];
	__Local__217.Value = -148.240204f;
	__Local__217.Tangent.ArriveTangent = -0.003795f;
	__Local__217.Tangent.LeaveTangent = -0.003795f;
	auto& __Local__218 = __Local__215[2];
	__Local__218.Value = -165.271164f;
	__Local__218.Tangent.ArriveTangent = -0.005091f;
	__Local__218.Tangent.LeaveTangent = -0.005091f;
	auto& __Local__219 = __Local__215[3];
	__Local__219.Value = -178.786102f;
	__Local__219.Tangent.ArriveTangent = -0.003082f;
	__Local__219.Tangent.LeaveTangent = -0.003082f;
	auto& __Local__220 = __Local__215[4];
	__Local__220.Value = -183.761917f;
	auto& __Local__221 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__221 = TArray<FFrameNumber> ();
	__Local__221.Reserve(5);
	__Local__221.Add(FFrameNumber{});
	__Local__221[0].Value = 3000;
	__Local__221.Add(FFrameNumber{});
	__Local__221[1].Value = 6000;
	__Local__221.Add(FFrameNumber{});
	__Local__221[2].Value = 9000;
	__Local__221.Add(FFrameNumber{});
	__Local__221[3].Value = 12000;
	__Local__221.Add(FFrameNumber{});
	__Local__221[4].Value = 15000;
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__222 = TArray<FMovieSceneFloatValue> ();
	__Local__222.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__222.GetData(), 5);
	auto& __Local__223 = __Local__222[0];
	__Local__223.Value = -40.361000f;
	auto& __Local__224 = __Local__222[1];
	__Local__224.Value = -37.611565f;
	__Local__224.Tangent.ArriveTangent = 0.001548f;
	__Local__224.Tangent.LeaveTangent = 0.001548f;
	auto& __Local__225 = __Local__222[2];
	__Local__225.Value = -31.073494f;
	__Local__225.Tangent.ArriveTangent = 0.002700f;
	__Local__225.Tangent.LeaveTangent = 0.002700f;
	auto& __Local__226 = __Local__222[3];
	__Local__226.Value = -21.410742f;
	__Local__226.Tangent.ArriveTangent = 0.003063f;
	__Local__226.Tangent.LeaveTangent = 0.003063f;
	auto& __Local__227 = __Local__222[4];
	__Local__227.Value = -12.695851f;
	auto& __Local__228 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__228 = TArray<FFrameNumber> ();
	__Local__228.Reserve(1);
	__Local__228.Add(FFrameNumber{});
	__Local__228[0].Value = 3000;
	auto& __Local__229 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__229 = TArray<FMovieSceneFloatValue> ();
	__Local__229.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__229.GetData(), 1);
	auto& __Local__230 = __Local__229[0];
	auto& __Local__231 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__231 = TArray<FFrameNumber> ();
	__Local__231.Reserve(1);
	__Local__231.Add(FFrameNumber{});
	__Local__231[0].Value = 3000;
	auto& __Local__232 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__232 = TArray<FMovieSceneFloatValue> ();
	__Local__232.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__232.GetData(), 1);
	auto& __Local__233 = __Local__232[0];
	__Local__233.Value = 0.500000f;
	auto& __Local__234 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__234 = TArray<FFrameNumber> ();
	__Local__234.Reserve(1);
	__Local__234.Add(FFrameNumber{});
	__Local__234[0].Value = 3000;
	auto& __Local__235 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__235 = TArray<FMovieSceneFloatValue> ();
	__Local__235.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__235.GetData(), 1);
	auto& __Local__236 = __Local__235[0];
	__Local__236.Value = 0.500000f;
	auto& __Local__237 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__237 = TArray<FFrameNumber> ();
	__Local__237.Reserve(1);
	__Local__237.Add(FFrameNumber{});
	__Local__237[0].Value = 3000;
	auto& __Local__238 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__238 = TArray<FMovieSceneFloatValue> ();
	__Local__238.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__238.GetData(), 1);
	auto& __Local__239 = __Local__238[0];
	auto& __Local__240 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__211->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__240 = TArray<FFrameNumber> ();
	__Local__240.Reserve(1);
	__Local__240.Add(FFrameNumber{});
	__Local__240[0].Value = 3000;
	auto& __Local__241 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__211->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__241 = TArray<FMovieSceneFloatValue> ();
	__Local__241.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__241.GetData(), 1);
	auto& __Local__242 = __Local__241[0];
	__Local__211->Easing.EaseIn = __Local__212;
	__Local__211->Easing.EaseOut = __Local__213;
	__Local__211->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& __Local__243 = (*(AccessPrivateProperty<FGuid >((__Local__211), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__243 = FGuid(0x17B1838C, 0x43037749, 0xFC5B10BC, 0x9FB37017);
	__Local__210.Add(__Local__211);
	auto& __Local__244 = (*(AccessPrivateProperty<FGuid >((__Local__208), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__244 = FGuid(0x9D62A37B, 0x4ECFCE41, 0xB81E12AC, 0xD0047F94);
	auto& __Local__245 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__208), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__245.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__245.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__245.Entries.GetData(), 1);
	auto& __Local__246 = __Local__245.Entries[0];
	__Local__246.Section = __Local__211;
	auto& __Local__247 = (*(__Local__89->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__246.Range), 0)));
	auto& __Local__248 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__247), 0)));
	__Local__248 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__249 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__247), 0)));
	__Local__249.Value = 3000;
	auto& __Local__250 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__246.Range), 0)));
	auto& __Local__251 = (*(__Local__92->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__250), 0)));
	__Local__251 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__252 = (*(__Local__95->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__250), 0)));
	__Local__252.Value = 15000;
	__Local__246.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__253 = (*(AccessPrivateProperty<FGuid >((__Local__208), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__253 = FGuid(0x9D62A37B, 0x4ECFCE41, 0xB81E12AC, 0xD0047F94);
	__Local__207.Add(__Local__208);
	auto& __Local__254 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__27), UMovieScene::__PPO__PlaybackRange() )));
	__Local__254 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(3000), TRangeBound<FFrameNumber>::Exclusive(15001)));
	auto& __Local__255 = (*(AccessPrivateProperty<FFrameRate >((__Local__27), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__257{};
	const FProperty* __Local__256 = __Local__257.Get();
	if (nullptr == __Local__256)
	{
		__Local__256 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__256);
		__Local__257 = __Local__256;
	}
	auto& __Local__258 = (*(__Local__256->ContainerPtrToValuePtr<int32 >(&(__Local__255), 0)));
	__Local__258 = 20;
	auto& __Local__259 = (*(AccessPrivateProperty<FGuid >((__Local__27), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__259 = FGuid(0xDAAABCBB, 0x4335CD6D, 0xCE3895B7, 0x37883FC5);
	__Local__2->MovieScene = __Local__27;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 4);
	auto& __Local__260 = __Local__2->AnimationBindings[0];
	__Local__260.WidgetName = FName(TEXT("water1"));
	__Local__260.AnimationGuid = FGuid(0xBA7C35C1, 0x40CB9777, 0xE9BBE595, 0x09361029);
	auto& __Local__261 = __Local__2->AnimationBindings[1];
	__Local__261.WidgetName = FName(TEXT("water2"));
	__Local__261.AnimationGuid = FGuid(0x02B89561, 0x4BA2D5F5, 0xE565AE8F, 0x3604E991);
	auto& __Local__262 = __Local__2->AnimationBindings[2];
	__Local__262.WidgetName = FName(TEXT("water3"));
	__Local__262.AnimationGuid = FGuid(0x6424C5A4, 0x44FC46FD, 0xBF2E4285, 0xF40ADA65);
	auto& __Local__263 = __Local__2->AnimationBindings[3];
	__Local__263.WidgetName = FName(TEXT("water4"));
	__Local__263.AnimationGuid = FGuid(0x2969967A, 0x4794F554, 0x04F21588, 0x80211D1B);
	auto& __Local__264 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__264 = FString(TEXT("watercanlana1"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__265 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__265 = FGuid(0xD16F9496, 0x4C2824A1, 0x49AEB8A5, 0xFF285E57);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
}
PRAGMA_ENABLE_OPTIMIZATION
void UWateringPlants_WG_C__pf4273311956::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__266;
	SlotNames.Append(__Local__266);
}
void UWateringPlants_WG_C__pf4273311956::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__267;
	__Local__267.Reserve(1);
	__Local__267.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__268;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->MiscConvertedSubobjects[0]), __Local__267, __Local__268);
}
void UWateringPlants_WG_C__pf4273311956::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWateringPlants_WG_C__pf4273311956::bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__Done__pf = true;
			}
		case 2:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(3, 125272006, TEXT("ExecuteUbergraph_WateringPlants_WG_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				RemoveFromParent();
			}
		case 5:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 7.000000, this);
			}
		case 6:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -8.000000, this);
			}
		case 7:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__DripAnimateIndex__pf, 1);
				bpv__DripAnimateIndex__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 10:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpv__DripAnimateIndex__pf, 3);
				FCustomThunkTemplates::Array_Get(bpv__DripSpritesTexture__pf, bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__WaterDrip__pf))
				{
					bpv__WaterDrip__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				__StateStack.Push(14);
			}
		case 12:
			{
				__StateStack.Push(25);
			}
		case 13:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
			}
		case 16:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Translation = bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf;
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Angle = 0.000000;
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_1__pf);
				}
			}
		case 17:
			{
				bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(800.000000, 450.000000, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 200.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__WateringTimer__pf, 12.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf = UGameplayStatics::GetGlobalTimeDilation(this);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf, b0l__K2Node_Event_InDeltaTime__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__WateringTimer__pf);
				bpv__WateringTimer__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 20:
			{
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->UWidget::SetRenderTransformAngle(-70.000000);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__WaterDrip__pf))
				{
					bpv__WaterDrip__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 22:
			{
				bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf = UGameplayStatics::GetGlobalTimeDilation(this);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(0.100000, bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf);
				UKismetSystemLibrary::Delay(this, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, FLatentActionInfo(8, -1605554632, TEXT("ExecuteUbergraph_WateringPlants_WG_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				if(::IsValid(bpv__WaterDrip__pf))
				{
					bpv__WaterDrip__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 24:
			{
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->UWidget::SetRenderTransformAngle(0.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 27:
			{
				if (!true)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 28:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 31:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if(::IsValid(bpv__WaterDrip__pf))
				{
					bpv__WaterDrip__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 34:
			{
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->SetVisibility(ESlateVisibility::HitTestInvisible);
				}
				__CurrentState = 1;
				break;
			}
		case 35:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				__StateStack.Push(36);
				__CurrentState = 12;
				break;
			}
		case 38:
			{
				__StateStack.Push(35);
				__CurrentState = 12;
				break;
			}
		case 39:
			{
				__CurrentState = 37;
				break;
			}
		case 40:
			{
				__CurrentState = 41;
				break;
			}
		case 41:
			{
				__StateStack.Push(42);
				__CurrentState = 38;
				break;
			}
		case 42:
			{
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Translation = FVector2D(1360.000000,800.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Angle = 0.000000;
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform__pf);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__WaterDrip__pf))
				{
					bpv__WaterDrip__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				__CurrentState = 45;
				break;
			}
		case 45:
			{
				if (!bpv__Done__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = 42;
				break;
			}
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				bpv__Done__pf = false;
			}
		case 48:
			{
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(4, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_1__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_1__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_1__pf[3] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
				bpv__PlantsTexture__pf = b0l__K2Node_MakeArray_Array_1__pf;
			}
		case 49:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWateringPlants_WG_C__pf4273311956::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpv__DripSpritesTexture__pf = b0l__K2Node_MakeArray_Array__pf;
			}
		case 50:
			{
				bpv__WateringTimer__pf = 0.000000;
			}
		case 51:
			{
				if(::IsValid(bpv__WateringCan__pf))
				{
					bpv__WateringCan__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 52:
			{
				FCustomThunkTemplates::Array_Random(bpv__PlantsTexture__pf, /*out*/ b0l__CallFunc_Array_Random_OutItem__pf, /*out*/ b0l__CallFunc_Array_Random_OutIndex__pf);
				if(::IsValid(bpv__Plant__pf))
				{
					bpv__Plant__pf->SetBrushFromTexture(b0l__CallFunc_Array_Random_OutItem__pf, false);
				}
				__CurrentState = 42;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UWateringPlants_WG_C__pf4273311956::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(46);
}
void UWateringPlants_WG_C__pf4273311956::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(44);
}
void UWateringPlants_WG_C__pf4273311956::bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(40);
}
void UWateringPlants_WG_C__pf4273311956::bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(39);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWateringPlants_WG_C__pf4273311956::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void UWateringPlants_WG_C__pf4273311956::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
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
struct FRegisterHelper__UWateringPlants_WG_C__pf4273311956
{
	FRegisterHelper__UWateringPlants_WG_C__pf4273311956()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/MiniGame/WateringPlant/WateringPlants_WG"), &UWateringPlants_WG_C__pf4273311956::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWateringPlants_WG_C__pf4273311956 Instance;
};
FRegisterHelper__UWateringPlants_WG_C__pf4273311956 FRegisterHelper__UWateringPlants_WG_C__pf4273311956::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
