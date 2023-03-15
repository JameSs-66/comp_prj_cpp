#include "NativizedAssets.h"
#include "ALL__pf2934107227.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UALL_C__pf2934107227::UALL_C__pf2934107227(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background__pf = nullptr;
	bpv__CEO__pf = nullptr;
	bpv__Director__pf = nullptr;
	bpv__Employee__pf = nullptr;
	bpv__exitMAINMEAU__pf = nullptr;
	bpv__exp__pf = nullptr;
	bpv__Janitor__pf = nullptr;
	bpv__learn__pf = nullptr;
	bpv__logo__pf = nullptr;
	bpv__LOGOWORKPLAN__pf = nullptr;
	bpv__manager__pf = nullptr;
	bpv__promote__pf = nullptr;
	bpv__workplan__pf = nullptr;
	bpv__Isopenpromote__pf = false;
	bpv__Isopenworkplan__pf = false;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UALL_C__pf2934107227::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf2934107227::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("pomote_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("wokedplans_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("promote1_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("workla_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("exitla_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(9);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 9);
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[1];
	__Local__8.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[2];
	__Local__9.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[3];
	__Local__10.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[4];
	__Local__11.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[5];
	__Local__12.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[6];
	__Local__13.ComponentPropertyName = FName(TEXT("promote"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[7];
	__Local__14.ComponentPropertyName = FName(TEXT("promote"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[8];
	__Local__15.ComponentPropertyName = FName(TEXT("promote"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__16 = NewObject<UScaleBox>(__Local__1, TEXT("ScaleBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(1);
	auto __Local__18 = NewObject<UScaleBoxSlot>(__Local__16, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<USizeBoxSlot>(__Local__19, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UCanvasPanel>(__Local__1, TEXT("main"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(3);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__24->LayoutData.Offsets.Left = -311.200012f;
	__Local__24->LayoutData.Offsets.Top = -307.200012f;
	__Local__24->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__24->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__24->bAutoSize = true;
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UCanvasPanel>(__Local__1, TEXT("MAINMEAU"), (EObjectFlags)0x00280008);
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__25), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(4);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = -512.000000f;
	__Local__27->LayoutData.Offsets.Top = -508.000000f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__27->bAutoSize = true;
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__28->Brush.ImageSize = FVector2D(1024.000000, 1024.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__30->LayoutData.Offsets.Left = -568.000000f;
	__Local__30->LayoutData.Offsets.Top = -80.000000f;
	__Local__30->LayoutData.Offsets.Right = 436.336365f;
	__Local__30->LayoutData.Offsets.Bottom = 138.108109f;
	__Local__30->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__30->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__30->Parent = __Local__25;
	auto __Local__31 = NewObject<UButton>(__Local__1, TEXT("workplan"), (EObjectFlags)0x00280008);
	__Local__31->WidgetStyle.Normal.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Hovered.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Pressed.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Disabled.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__26.Add(__Local__30);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Left = -180.000000f;
	__Local__36->LayoutData.Offsets.Top = -80.000000f;
	__Local__36->LayoutData.Offsets.Right = 382.755066f;
	__Local__36->LayoutData.Offsets.Bottom = 115.057243f;
	__Local__36->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__36->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__36->Parent = __Local__25;
	auto __Local__37 = NewObject<UButton>(__Local__1, TEXT("promote"), (EObjectFlags)0x00280008);
	__Local__37->WidgetStyle.Normal.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Hovered.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Pressed.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Disabled.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__26.Add(__Local__36);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = 880.000000f;
	__Local__42->LayoutData.Offsets.Top = -144.000000f;
	__Local__42->LayoutData.Offsets.Right = 90.511246f;
	__Local__42->LayoutData.Offsets.Bottom = 116.732597f;
	__Local__42->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__42->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__42->Parent = __Local__25;
	auto __Local__43 = NewObject<UButton>(__Local__1, TEXT("exitMAINMEAU"), (EObjectFlags)0x00280008);
	__Local__43->WidgetStyle.Normal.ImageSize = FVector2D(462.000000, 562.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->WidgetStyle.Hovered.ImageSize = FVector2D(462.000000, 562.000000);
	__Local__43->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->WidgetStyle.Pressed.ImageSize = FVector2D(462.000000, 562.000000);
	__Local__43->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__26.Add(__Local__42);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Top = 4.000000f;
	__Local__45->LayoutData.Offsets.Right = 1701.458618f;
	__Local__45->LayoutData.Offsets.Bottom = 1682.080566f;
	__Local__45->Parent = __Local__22;
	auto __Local__46 = NewObject<UCanvasPanel>(__Local__1, TEXT("infopromote"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(3);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__46, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Left = 133.270691f;
	__Local__48->LayoutData.Offsets.Top = -117.040283f;
	__Local__48->LayoutData.Offsets.Right = 285.268616f;
	__Local__48->LayoutData.Offsets.Bottom = 90.992813f;
	__Local__48->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__48->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<UImage>(__Local__1, TEXT("exp"), (EObjectFlags)0x00280008);
	__Local__49->Brush.ImageSize = FVector2D(390.000000, 108.000000);
	__Local__49->Slot = __Local__48;
	__Local__49->bIsEnabled = false;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__46, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Left = 105.270691f;
	__Local__50->LayoutData.Offsets.Top = -309.040283f;
	__Local__50->LayoutData.Offsets.Right = 354.766693f;
	__Local__50->LayoutData.Offsets.Bottom = 143.330872f;
	__Local__50->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__50->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__50->Parent = __Local__46;
	auto __Local__51 = NewObject<UImage>(__Local__1, TEXT("logo"), (EObjectFlags)0x00280008);
	__Local__51->Brush.ImageSize = FVector2D(2232.000000, 909.000000);
	__Local__51->Slot = __Local__50;
	__Local__51->bIsEnabled = false;
	__Local__50->Content = __Local__51;
	__Local__47.Add(__Local__50);
	auto __Local__52 = NewObject<UCanvasPanelSlot>(__Local__46, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__52->LayoutData.Offsets.Left = 133.270691f;
	__Local__52->LayoutData.Offsets.Top = 66.959717f;
	__Local__52->LayoutData.Offsets.Right = 263.818604f;
	__Local__52->LayoutData.Offsets.Bottom = 100.430824f;
	__Local__52->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__52->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__52->Parent = __Local__46;
	auto __Local__53 = NewObject<UImage>(__Local__1, TEXT("learn"), (EObjectFlags)0x00280008);
	__Local__53->Brush.ImageSize = FVector2D(267.000000, 120.000000);
	__Local__53->Slot = __Local__52;
	__Local__53->bIsEnabled = false;
	__Local__52->Content = __Local__53;
	__Local__47.Add(__Local__52);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__23.Add(__Local__45);
	auto __Local__54 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__54->LayoutData.Offsets.Left = 876.000000f;
	__Local__54->LayoutData.Offsets.Top = -68.000000f;
	__Local__54->LayoutData.Offsets.Right = -496.571533f;
	__Local__54->LayoutData.Offsets.Bottom = 708.163513f;
	__Local__54->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__54->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__54->Parent = __Local__22;
	auto __Local__55 = NewObject<UCanvasPanel>(__Local__1, TEXT("workplanlana"), (EObjectFlags)0x00280008);
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__55), UPanelWidget::__PPO__Slots() )));
	__Local__56 = TArray<UPanelSlot*> ();
	__Local__56.Reserve(6);
	auto __Local__57 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_48"), (EObjectFlags)0x00280008);
	__Local__57->LayoutData.Offsets.Left = -159.714233f;
	__Local__57->LayoutData.Offsets.Top = -346.081757f;
	__Local__57->LayoutData.Offsets.Right = 354.766693f;
	__Local__57->LayoutData.Offsets.Bottom = 143.330872f;
	__Local__57->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__57->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__57->Parent = __Local__55;
	auto __Local__58 = NewObject<UImage>(__Local__1, TEXT("LOGOWORKPLAN"), (EObjectFlags)0x00280008);
	__Local__58->Brush.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<UObject* >(&(__Local__58->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__59 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__58->Slot = __Local__57;
	__Local__58->bIsEnabled = false;
	__Local__57->Content = __Local__58;
	__Local__56.Add(__Local__57);
	auto __Local__60 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_51"), (EObjectFlags)0x00280008);
	__Local__60->LayoutData.Offsets.Left = 60.571533f;
	__Local__60->LayoutData.Offsets.Top = -180.163513f;
	__Local__60->LayoutData.Offsets.Right = 341.956268f;
	__Local__60->LayoutData.Offsets.Bottom = 156.233368f;
	__Local__60->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__60->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__60->Parent = __Local__55;
	auto __Local__61 = NewObject<UImage>(__Local__1, TEXT("CEO"), (EObjectFlags)0x00280008);
	__Local__61->Brush.ImageSize = FVector2D(606.000000, 228.000000);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__56.Add(__Local__60);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__62->LayoutData.Offsets.Left = -464.000000f;
	__Local__62->LayoutData.Offsets.Top = 432.000000f;
	__Local__62->LayoutData.Offsets.Right = 377.777771f;
	__Local__62->LayoutData.Offsets.Bottom = 152.801361f;
	__Local__62->Parent = __Local__55;
	auto __Local__63 = NewObject<UImage>(__Local__1, TEXT("Director"), (EObjectFlags)0x00280008);
	__Local__63->Brush.ImageSize = FVector2D(681.000000, 219.000000);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__56.Add(__Local__62);
	auto __Local__64 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_44"), (EObjectFlags)0x00280008);
	__Local__64->LayoutData.Offsets.Left = 68.571533f;
	__Local__64->LayoutData.Offsets.Top = -376.163513f;
	__Local__64->LayoutData.Offsets.Right = 318.682983f;
	__Local__64->LayoutData.Offsets.Bottom = 142.719864f;
	__Local__64->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__64->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__64->Parent = __Local__55;
	auto __Local__65 = NewObject<UImage>(__Local__1, TEXT("manager"), (EObjectFlags)0x00280008);
	__Local__65->Brush.ImageSize = FVector2D(552.000000, 207.000000);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__56.Add(__Local__64);
	auto __Local__66 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_32"), (EObjectFlags)0x00280008);
	__Local__66->LayoutData.Offsets.Left = -468.000000f;
	__Local__66->LayoutData.Offsets.Top = 228.000000f;
	__Local__66->LayoutData.Offsets.Right = 376.276276f;
	__Local__66->LayoutData.Offsets.Bottom = 162.132126f;
	__Local__66->Parent = __Local__55;
	auto __Local__67 = NewObject<UImage>(__Local__1, TEXT("Employee"), (EObjectFlags)0x00280008);
	__Local__67->Brush.ImageSize = FVector2D(624.000000, 243.000000);
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__56.Add(__Local__66);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__55, TEXT("CanvasPanelSlot_47"), (EObjectFlags)0x00280008);
	__Local__68->LayoutData.Offsets.Left = 44.657410f;
	__Local__68->LayoutData.Offsets.Top = -556.163513f;
	__Local__68->LayoutData.Offsets.Right = 321.221252f;
	__Local__68->LayoutData.Offsets.Bottom = 128.241089f;
	__Local__68->LayoutData.Anchors.Minimum = FVector2D(0.967952, 1.000000);
	__Local__68->LayoutData.Anchors.Maximum = FVector2D(0.967952, 1.000000);
	__Local__68->Parent = __Local__55;
	auto __Local__69 = NewObject<UImage>(__Local__1, TEXT("Janitor"), (EObjectFlags)0x00280008);
	__Local__69->Brush.ImageSize = FVector2D(504.000000, 174.000000);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__56.Add(__Local__68);
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__23.Add(__Local__54);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	__Local__1->RootWidget = __Local__16;
	auto __Local__70 = NewObject<UMovieScene>(__Local__2, TEXT("pomote"), (EObjectFlags)0x00280008);
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__70), UMovieScene::__PPO__Possessables() )));
	__Local__71 = TArray<FMovieScenePossessable> ();
	__Local__71.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__71.GetData(), 1);
	auto& __Local__72 = __Local__71[0];
	auto& __Local__73 = (*(AccessPrivateProperty<FGuid >(&(__Local__72), FMovieScenePossessable::__PPO__Guid() )));
	__Local__73 = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__74 = (*(AccessPrivateProperty<FString >(&(__Local__72), FMovieScenePossessable::__PPO__Name() )));
	__Local__74 = FString(TEXT("promote"));
	auto& __Local__75 = (*(AccessPrivateProperty<UClass* >(&(__Local__72), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__75 = UButton::StaticClass();
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__70), UMovieScene::__PPO__ObjectBindings() )));
	__Local__76 = TArray<FMovieSceneBinding> ();
	__Local__76.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__76.GetData(), 1);
	auto& __Local__77 = __Local__76[0];
	auto& __Local__78 = (*(AccessPrivateProperty<FGuid >(&(__Local__77), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__78 = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__79 = (*(AccessPrivateProperty<FString >(&(__Local__77), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__79 = FString(TEXT("promote"));
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__77), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__80 = TArray<UMovieSceneTrack*> ();
	__Local__80.Reserve(1);
	auto __Local__81 = NewObject<UMovieScene2DTransformTrack>(__Local__70, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__82 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__81), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__82.PropertyName = FName(TEXT("RenderTransform"));
	__Local__82.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__82.bCanUseClassLookup = true;
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__81), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__83 = TArray<UMovieSceneSection*> ();
	__Local__83.Reserve(1);
	auto __Local__84 = NewObject<UMovieScene2DTransformSection>(__Local__81, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__85 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__84->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__86 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__84->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__85)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__86)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__87 = TArray<FFrameNumber> ();
	__Local__87.Reserve(1);
	__Local__87.Add(FFrameNumber{});
	__Local__87[0].Value = 15000;
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__88 = TArray<FMovieSceneFloatValue> ();
	__Local__88.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__88.GetData(), 1);
	auto& __Local__89 = __Local__88[0];
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__90 = TArray<FFrameNumber> ();
	__Local__90.Reserve(1);
	__Local__90.Add(FFrameNumber{});
	__Local__90[0].Value = 15000;
	auto& __Local__91 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__91 = TArray<FMovieSceneFloatValue> ();
	__Local__91.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__91.GetData(), 1);
	auto& __Local__92 = __Local__91[0];
	auto& __Local__93 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__93 = TArray<FFrameNumber> ();
	__Local__93.Reserve(1);
	__Local__93.Add(FFrameNumber{});
	__Local__93[0].Value = 15000;
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__94 = TArray<FMovieSceneFloatValue> ();
	__Local__94.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__94.GetData(), 1);
	auto& __Local__95 = __Local__94[0];
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__96 = TArray<FFrameNumber> ();
	__Local__96.Reserve(2);
	__Local__96.Add(FFrameNumber{});
	__Local__96[0].Value = 500;
	__Local__96.Add(FFrameNumber{});
	__Local__96[1].Value = 15000;
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__97 = TArray<FMovieSceneFloatValue> ();
	__Local__97.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__97.GetData(), 2);
	auto& __Local__98 = __Local__97[0];
	__Local__98.Value = 1.000000f;
	auto& __Local__99 = __Local__97[1];
	__Local__99.Value = 1.121006f;
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__100 = TArray<FFrameNumber> ();
	__Local__100.Reserve(2);
	__Local__100.Add(FFrameNumber{});
	__Local__100[0].Value = 500;
	__Local__100.Add(FFrameNumber{});
	__Local__100[1].Value = 15000;
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__101 = TArray<FMovieSceneFloatValue> ();
	__Local__101.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__101.GetData(), 2);
	auto& __Local__102 = __Local__101[0];
	__Local__102.Value = 1.000000f;
	auto& __Local__103 = __Local__101[1];
	__Local__103.Value = 1.121006f;
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__104 = TArray<FFrameNumber> ();
	__Local__104.Reserve(1);
	__Local__104.Add(FFrameNumber{});
	__Local__104[0].Value = 15000;
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__105 = TArray<FMovieSceneFloatValue> ();
	__Local__105.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__105.GetData(), 1);
	auto& __Local__106 = __Local__105[0];
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__107 = TArray<FFrameNumber> ();
	__Local__107.Reserve(1);
	__Local__107.Add(FFrameNumber{});
	__Local__107[0].Value = 15000;
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__108 = TArray<FMovieSceneFloatValue> ();
	__Local__108.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__108.GetData(), 1);
	auto& __Local__109 = __Local__108[0];
	__Local__84->Easing.EaseIn = __Local__85;
	__Local__84->Easing.EaseOut = __Local__86;
	__Local__84->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__110 = (*(AccessPrivateProperty<FGuid >((__Local__84), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__110 = FGuid(0x5E2CFD6F, 0x464D6C21, 0x1CBA48B8, 0x5318535E);
	__Local__83.Add(__Local__84);
	auto& __Local__111 = (*(AccessPrivateProperty<FGuid >((__Local__81), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__111 = FGuid(0xC78E504D, 0x40BBDF2F, 0x35EB3A9D, 0xEBD53850);
	auto& __Local__112 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__81), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__112.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__112.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__112.Entries.GetData(), 1);
	auto& __Local__113 = __Local__112.Entries[0];
	__Local__113.Section = __Local__84;
	static TWeakFieldPtr<FProperty> __Local__115{};
	const FProperty* __Local__114 = __Local__115.Get();
	if (nullptr == __Local__114)
	{
		__Local__114 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__114);
		__Local__115 = __Local__114;
	}
	auto& __Local__116 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__113.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__118{};
	const FProperty* __Local__117 = __Local__118.Get();
	if (nullptr == __Local__117)
	{
		__Local__117 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__117);
		__Local__118 = __Local__117;
	}
	auto& __Local__119 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__116), 0)));
	__Local__119 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__121{};
	const FProperty* __Local__120 = __Local__121.Get();
	if (nullptr == __Local__120)
	{
		__Local__120 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__120);
		__Local__121 = __Local__120;
	}
	auto& __Local__122 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__116), 0)));
	__Local__122.Value = 500;
	static TWeakFieldPtr<FProperty> __Local__124{};
	const FProperty* __Local__123 = __Local__124.Get();
	if (nullptr == __Local__123)
	{
		__Local__123 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__123);
		__Local__124 = __Local__123;
	}
	auto& __Local__125 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__113.Range), 0)));
	auto& __Local__126 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__125), 0)));
	__Local__126 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__127 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__125), 0)));
	__Local__127.Value = 15000;
	__Local__113.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__128 = (*(AccessPrivateProperty<FGuid >((__Local__81), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__128 = FGuid(0xC78E504D, 0x40BBDF2F, 0x35EB3A9D, 0xEBD53850);
	__Local__80.Add(__Local__81);
	auto& __Local__129 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__70), UMovieScene::__PPO__PlaybackRange() )));
	__Local__129 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__130 = (*(AccessPrivateProperty<FFrameRate >((__Local__70), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__132{};
	const FProperty* __Local__131 = __Local__132.Get();
	if (nullptr == __Local__131)
	{
		__Local__131 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__131);
		__Local__132 = __Local__131;
	}
	auto& __Local__133 = (*(__Local__131->ContainerPtrToValuePtr<int32 >(&(__Local__130), 0)));
	__Local__133 = 20;
	auto& __Local__134 = (*(AccessPrivateProperty<FGuid >((__Local__70), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__134 = FGuid(0x2DA32994, 0x4D8B7FA7, 0xB8FAB29E, 0xD56E823F);
	__Local__2->MovieScene = __Local__70;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__135 = __Local__2->AnimationBindings[0];
	__Local__135.WidgetName = FName(TEXT("promote"));
	__Local__135.AnimationGuid = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__136 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__136 = FString(TEXT("pomote"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__137 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__137 = FGuid(0x5C8A3E84, 0x4ACDE88C, 0x3A7CDDB9, 0x0EF1C02B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__138 = NewObject<UMovieScene>(__Local__3, TEXT("wokedplans"), (EObjectFlags)0x00280008);
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__138), UMovieScene::__PPO__Possessables() )));
	__Local__139 = TArray<FMovieScenePossessable> ();
	__Local__139.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__139.GetData(), 1);
	auto& __Local__140 = __Local__139[0];
	auto& __Local__141 = (*(AccessPrivateProperty<FGuid >(&(__Local__140), FMovieScenePossessable::__PPO__Guid() )));
	__Local__141 = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__142 = (*(AccessPrivateProperty<FString >(&(__Local__140), FMovieScenePossessable::__PPO__Name() )));
	__Local__142 = FString(TEXT("workplan"));
	auto& __Local__143 = (*(AccessPrivateProperty<UClass* >(&(__Local__140), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__143 = UButton::StaticClass();
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__138), UMovieScene::__PPO__ObjectBindings() )));
	__Local__144 = TArray<FMovieSceneBinding> ();
	__Local__144.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__144.GetData(), 1);
	auto& __Local__145 = __Local__144[0];
	auto& __Local__146 = (*(AccessPrivateProperty<FGuid >(&(__Local__145), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__146 = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__147 = (*(AccessPrivateProperty<FString >(&(__Local__145), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__147 = FString(TEXT("workplan"));
	auto& __Local__148 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__145), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__148 = TArray<UMovieSceneTrack*> ();
	__Local__148.Reserve(1);
	auto __Local__149 = NewObject<UMovieScene2DTransformTrack>(__Local__138, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__150 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__149), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__150.PropertyName = FName(TEXT("RenderTransform"));
	__Local__150.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__150.bCanUseClassLookup = true;
	auto& __Local__151 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__149), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__151 = TArray<UMovieSceneSection*> ();
	__Local__151.Reserve(1);
	auto __Local__152 = NewObject<UMovieScene2DTransformSection>(__Local__149, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__153 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__152->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__154 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__152->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__153)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__154)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__155 = TArray<FFrameNumber> ();
	__Local__155.Reserve(1);
	__Local__155.Add(FFrameNumber{});
	__Local__155[0].Value = 15000;
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__156 = TArray<FMovieSceneFloatValue> ();
	__Local__156.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__156.GetData(), 1);
	auto& __Local__157 = __Local__156[0];
	auto& __Local__158 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__158 = TArray<FFrameNumber> ();
	__Local__158.Reserve(1);
	__Local__158.Add(FFrameNumber{});
	__Local__158[0].Value = 15000;
	auto& __Local__159 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__159 = TArray<FMovieSceneFloatValue> ();
	__Local__159.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__159.GetData(), 1);
	auto& __Local__160 = __Local__159[0];
	auto& __Local__161 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__161 = TArray<FFrameNumber> ();
	__Local__161.Reserve(1);
	__Local__161.Add(FFrameNumber{});
	__Local__161[0].Value = 15000;
	auto& __Local__162 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__162 = TArray<FMovieSceneFloatValue> ();
	__Local__162.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__162.GetData(), 1);
	auto& __Local__163 = __Local__162[0];
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__164 = TArray<FFrameNumber> ();
	__Local__164.Reserve(2);
	__Local__164.Add(FFrameNumber{});
	__Local__164[0].Value = 500;
	__Local__164.Add(FFrameNumber{});
	__Local__164[1].Value = 15000;
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__165 = TArray<FMovieSceneFloatValue> ();
	__Local__165.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__165.GetData(), 2);
	auto& __Local__166 = __Local__165[0];
	__Local__166.Value = 1.000000f;
	auto& __Local__167 = __Local__165[1];
	__Local__167.Value = 1.121006f;
	auto& __Local__168 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__168 = TArray<FFrameNumber> ();
	__Local__168.Reserve(2);
	__Local__168.Add(FFrameNumber{});
	__Local__168[0].Value = 500;
	__Local__168.Add(FFrameNumber{});
	__Local__168[1].Value = 15000;
	auto& __Local__169 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__169 = TArray<FMovieSceneFloatValue> ();
	__Local__169.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__169.GetData(), 2);
	auto& __Local__170 = __Local__169[0];
	__Local__170.Value = 1.000000f;
	auto& __Local__171 = __Local__169[1];
	__Local__171.Value = 1.121006f;
	auto& __Local__172 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__172 = TArray<FFrameNumber> ();
	__Local__172.Reserve(1);
	__Local__172.Add(FFrameNumber{});
	__Local__172[0].Value = 15000;
	auto& __Local__173 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__173 = TArray<FMovieSceneFloatValue> ();
	__Local__173.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__173.GetData(), 1);
	auto& __Local__174 = __Local__173[0];
	auto& __Local__175 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__152->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__175 = TArray<FFrameNumber> ();
	__Local__175.Reserve(1);
	__Local__175.Add(FFrameNumber{});
	__Local__175[0].Value = 15000;
	auto& __Local__176 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__152->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__176 = TArray<FMovieSceneFloatValue> ();
	__Local__176.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__176.GetData(), 1);
	auto& __Local__177 = __Local__176[0];
	__Local__152->Easing.EaseIn = __Local__153;
	__Local__152->Easing.EaseOut = __Local__154;
	__Local__152->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__178 = (*(AccessPrivateProperty<FGuid >((__Local__152), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__178 = FGuid(0xF31CBAFE, 0x4D2EACC6, 0x57AD07B5, 0x63213F74);
	__Local__151.Add(__Local__152);
	auto& __Local__179 = (*(AccessPrivateProperty<FGuid >((__Local__149), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__179 = FGuid(0x617E7A6A, 0x4072FD20, 0xCF2B08BB, 0xFF2F76C3);
	auto& __Local__180 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__149), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__180.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__180.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__180.Entries.GetData(), 1);
	auto& __Local__181 = __Local__180.Entries[0];
	__Local__181.Section = __Local__152;
	auto& __Local__182 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__181.Range), 0)));
	auto& __Local__183 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__182), 0)));
	__Local__183 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__184 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__182), 0)));
	__Local__184.Value = 500;
	auto& __Local__185 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__181.Range), 0)));
	auto& __Local__186 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__185), 0)));
	__Local__186 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__187 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__185), 0)));
	__Local__187.Value = 15000;
	__Local__181.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__188 = (*(AccessPrivateProperty<FGuid >((__Local__149), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__188 = FGuid(0x617E7A6A, 0x4072FD20, 0xCF2B08BB, 0xFF2F76C3);
	__Local__148.Add(__Local__149);
	auto& __Local__189 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__138), UMovieScene::__PPO__PlaybackRange() )));
	__Local__189 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__190 = (*(AccessPrivateProperty<FFrameRate >((__Local__138), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__191 = (*(__Local__131->ContainerPtrToValuePtr<int32 >(&(__Local__190), 0)));
	__Local__191 = 20;
	auto& __Local__192 = (*(AccessPrivateProperty<FGuid >((__Local__138), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__192 = FGuid(0x75ADF3AB, 0x4B2BC29F, 0x927E509F, 0xD744F65E);
	__Local__3->MovieScene = __Local__138;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__193 = __Local__3->AnimationBindings[0];
	__Local__193.WidgetName = FName(TEXT("workplan"));
	__Local__193.AnimationGuid = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__194 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__194 = FString(TEXT("wokedplans"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__195 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__195 = FGuid(0x1672C8DC, 0x489876B4, 0x37571282, 0xF8BDB6A6);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__196 = NewObject<UMovieScene>(__Local__4, TEXT("promote1"), (EObjectFlags)0x00280008);
	auto& __Local__197 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__196), UMovieScene::__PPO__Possessables() )));
	__Local__197 = TArray<FMovieScenePossessable> ();
	__Local__197.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__197.GetData(), 1);
	auto& __Local__198 = __Local__197[0];
	auto& __Local__199 = (*(AccessPrivateProperty<FGuid >(&(__Local__198), FMovieScenePossessable::__PPO__Guid() )));
	__Local__199 = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__200 = (*(AccessPrivateProperty<FString >(&(__Local__198), FMovieScenePossessable::__PPO__Name() )));
	__Local__200 = FString(TEXT("promote_1"));
	auto& __Local__201 = (*(AccessPrivateProperty<UClass* >(&(__Local__198), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__201 = UButton::StaticClass();
	auto& __Local__202 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__196), UMovieScene::__PPO__ObjectBindings() )));
	__Local__202 = TArray<FMovieSceneBinding> ();
	__Local__202.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__202.GetData(), 1);
	auto& __Local__203 = __Local__202[0];
	auto& __Local__204 = (*(AccessPrivateProperty<FGuid >(&(__Local__203), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__204 = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__205 = (*(AccessPrivateProperty<FString >(&(__Local__203), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__205 = FString(TEXT("promote_1"));
	auto& __Local__206 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__203), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__206 = TArray<UMovieSceneTrack*> ();
	__Local__206.Reserve(1);
	auto __Local__207 = NewObject<UMovieScene2DTransformTrack>(__Local__196, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__208 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__207), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__208.PropertyName = FName(TEXT("RenderTransform"));
	__Local__208.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__208.bCanUseClassLookup = true;
	auto& __Local__209 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__207), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__209 = TArray<UMovieSceneSection*> ();
	__Local__209.Reserve(1);
	auto __Local__210 = NewObject<UMovieScene2DTransformSection>(__Local__207, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__211 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__210->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__212 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__210->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__211)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__212)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__213 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__213 = TArray<FFrameNumber> ();
	__Local__213.Reserve(1);
	__Local__213.Add(FFrameNumber{});
	__Local__213[0].Value = 15000;
	auto& __Local__214 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__214 = TArray<FMovieSceneFloatValue> ();
	__Local__214.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__214.GetData(), 1);
	auto& __Local__215 = __Local__214[0];
	auto& __Local__216 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__216 = TArray<FFrameNumber> ();
	__Local__216.Reserve(1);
	__Local__216.Add(FFrameNumber{});
	__Local__216[0].Value = 15000;
	auto& __Local__217 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__217 = TArray<FMovieSceneFloatValue> ();
	__Local__217.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__217.GetData(), 1);
	auto& __Local__218 = __Local__217[0];
	auto& __Local__219 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__219 = TArray<FFrameNumber> ();
	__Local__219.Reserve(1);
	__Local__219.Add(FFrameNumber{});
	__Local__219[0].Value = 15000;
	auto& __Local__220 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__220 = TArray<FMovieSceneFloatValue> ();
	__Local__220.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__220.GetData(), 1);
	auto& __Local__221 = __Local__220[0];
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__222 = TArray<FFrameNumber> ();
	__Local__222.Reserve(2);
	__Local__222.Add(FFrameNumber{});
	__Local__222[0].Value = 500;
	__Local__222.Add(FFrameNumber{});
	__Local__222[1].Value = 15000;
	auto& __Local__223 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__223 = TArray<FMovieSceneFloatValue> ();
	__Local__223.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__223.GetData(), 2);
	auto& __Local__224 = __Local__223[0];
	__Local__224.Value = 1.000000f;
	auto& __Local__225 = __Local__223[1];
	__Local__225.Value = 1.121006f;
	auto& __Local__226 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__226 = TArray<FFrameNumber> ();
	__Local__226.Reserve(2);
	__Local__226.Add(FFrameNumber{});
	__Local__226[0].Value = 500;
	__Local__226.Add(FFrameNumber{});
	__Local__226[1].Value = 15000;
	auto& __Local__227 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__227 = TArray<FMovieSceneFloatValue> ();
	__Local__227.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__227.GetData(), 2);
	auto& __Local__228 = __Local__227[0];
	__Local__228.Value = 1.000000f;
	auto& __Local__229 = __Local__227[1];
	__Local__229.Value = 1.121006f;
	auto& __Local__230 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__230 = TArray<FFrameNumber> ();
	__Local__230.Reserve(1);
	__Local__230.Add(FFrameNumber{});
	__Local__230[0].Value = 15000;
	auto& __Local__231 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__231 = TArray<FMovieSceneFloatValue> ();
	__Local__231.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__231.GetData(), 1);
	auto& __Local__232 = __Local__231[0];
	auto& __Local__233 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__210->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__233 = TArray<FFrameNumber> ();
	__Local__233.Reserve(1);
	__Local__233.Add(FFrameNumber{});
	__Local__233[0].Value = 15000;
	auto& __Local__234 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__210->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__234 = TArray<FMovieSceneFloatValue> ();
	__Local__234.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__234.GetData(), 1);
	auto& __Local__235 = __Local__234[0];
	__Local__210->Easing.EaseIn = __Local__211;
	__Local__210->Easing.EaseOut = __Local__212;
	__Local__210->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__236 = (*(AccessPrivateProperty<FGuid >((__Local__210), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__236 = FGuid(0x0A8DC21E, 0x4D3C277D, 0x9A65E1B6, 0x1C41F655);
	__Local__209.Add(__Local__210);
	auto& __Local__237 = (*(AccessPrivateProperty<FGuid >((__Local__207), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__237 = FGuid(0x63BED442, 0x4C9C884C, 0x58385EB3, 0x028455A2);
	auto& __Local__238 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__207), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__238.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__238.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__238.Entries.GetData(), 1);
	auto& __Local__239 = __Local__238.Entries[0];
	__Local__239.Section = __Local__210;
	auto& __Local__240 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__239.Range), 0)));
	auto& __Local__241 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__240), 0)));
	__Local__241 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__242 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__240), 0)));
	__Local__242.Value = 500;
	auto& __Local__243 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__239.Range), 0)));
	auto& __Local__244 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__243), 0)));
	__Local__244 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__245 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__243), 0)));
	__Local__245.Value = 15000;
	__Local__239.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__246 = (*(AccessPrivateProperty<FGuid >((__Local__207), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__246 = FGuid(0x63BED442, 0x4C9C884C, 0x58385EB3, 0x028455A2);
	__Local__206.Add(__Local__207);
	auto& __Local__247 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__196), UMovieScene::__PPO__PlaybackRange() )));
	__Local__247 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__248 = (*(AccessPrivateProperty<FFrameRate >((__Local__196), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__249 = (*(__Local__131->ContainerPtrToValuePtr<int32 >(&(__Local__248), 0)));
	__Local__249 = 20;
	auto& __Local__250 = (*(AccessPrivateProperty<FGuid >((__Local__196), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__250 = FGuid(0x7C094F76, 0x4D0B8DC3, 0x4F825C9F, 0x99F2A281);
	__Local__4->MovieScene = __Local__196;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__251 = __Local__4->AnimationBindings[0];
	__Local__251.WidgetName = FName(TEXT("promote_1"));
	__Local__251.AnimationGuid = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__252 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__252 = FString(TEXT("promote1"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__253 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__253 = FGuid(0x04BDD90F, 0x4805B36B, 0x89A7189E, 0x22A7460B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__254 = NewObject<UMovieScene>(__Local__5, TEXT("workla"), (EObjectFlags)0x00280008);
	auto& __Local__255 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__254), UMovieScene::__PPO__Possessables() )));
	__Local__255 = TArray<FMovieScenePossessable> ();
	__Local__255.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__255.GetData(), 1);
	auto& __Local__256 = __Local__255[0];
	auto& __Local__257 = (*(AccessPrivateProperty<FGuid >(&(__Local__256), FMovieScenePossessable::__PPO__Guid() )));
	__Local__257 = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__258 = (*(AccessPrivateProperty<FString >(&(__Local__256), FMovieScenePossessable::__PPO__Name() )));
	__Local__258 = FString(TEXT("workplan_1"));
	auto& __Local__259 = (*(AccessPrivateProperty<UClass* >(&(__Local__256), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__259 = UButton::StaticClass();
	auto& __Local__260 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__254), UMovieScene::__PPO__ObjectBindings() )));
	__Local__260 = TArray<FMovieSceneBinding> ();
	__Local__260.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__260.GetData(), 1);
	auto& __Local__261 = __Local__260[0];
	auto& __Local__262 = (*(AccessPrivateProperty<FGuid >(&(__Local__261), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__262 = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__263 = (*(AccessPrivateProperty<FString >(&(__Local__261), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__263 = FString(TEXT("workplan_1"));
	auto& __Local__264 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__261), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__264 = TArray<UMovieSceneTrack*> ();
	__Local__264.Reserve(1);
	auto __Local__265 = NewObject<UMovieScene2DTransformTrack>(__Local__254, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__266 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__265), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__266.PropertyName = FName(TEXT("RenderTransform"));
	__Local__266.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__266.bCanUseClassLookup = true;
	auto& __Local__267 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__265), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__267 = TArray<UMovieSceneSection*> ();
	__Local__267.Reserve(1);
	auto __Local__268 = NewObject<UMovieScene2DTransformSection>(__Local__265, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__269 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__268->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__270 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__268->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__269)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__270)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__271 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__271 = TArray<FFrameNumber> ();
	__Local__271.Reserve(1);
	__Local__271.Add(FFrameNumber{});
	__Local__271[0].Value = 15000;
	auto& __Local__272 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__272 = TArray<FMovieSceneFloatValue> ();
	__Local__272.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__272.GetData(), 1);
	auto& __Local__273 = __Local__272[0];
	auto& __Local__274 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__274 = TArray<FFrameNumber> ();
	__Local__274.Reserve(1);
	__Local__274.Add(FFrameNumber{});
	__Local__274[0].Value = 15000;
	auto& __Local__275 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__275 = TArray<FMovieSceneFloatValue> ();
	__Local__275.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__275.GetData(), 1);
	auto& __Local__276 = __Local__275[0];
	auto& __Local__277 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__277 = TArray<FFrameNumber> ();
	__Local__277.Reserve(1);
	__Local__277.Add(FFrameNumber{});
	__Local__277[0].Value = 15000;
	auto& __Local__278 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__278 = TArray<FMovieSceneFloatValue> ();
	__Local__278.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__278.GetData(), 1);
	auto& __Local__279 = __Local__278[0];
	auto& __Local__280 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__280 = TArray<FFrameNumber> ();
	__Local__280.Reserve(2);
	__Local__280.Add(FFrameNumber{});
	__Local__280[0].Value = 500;
	__Local__280.Add(FFrameNumber{});
	__Local__280[1].Value = 15000;
	auto& __Local__281 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__281 = TArray<FMovieSceneFloatValue> ();
	__Local__281.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__281.GetData(), 2);
	auto& __Local__282 = __Local__281[0];
	__Local__282.Value = 1.000000f;
	auto& __Local__283 = __Local__281[1];
	__Local__283.Value = 1.121006f;
	auto& __Local__284 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__284 = TArray<FFrameNumber> ();
	__Local__284.Reserve(2);
	__Local__284.Add(FFrameNumber{});
	__Local__284[0].Value = 500;
	__Local__284.Add(FFrameNumber{});
	__Local__284[1].Value = 15000;
	auto& __Local__285 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__285 = TArray<FMovieSceneFloatValue> ();
	__Local__285.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__285.GetData(), 2);
	auto& __Local__286 = __Local__285[0];
	__Local__286.Value = 1.000000f;
	auto& __Local__287 = __Local__285[1];
	__Local__287.Value = 1.121006f;
	auto& __Local__288 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__288 = TArray<FFrameNumber> ();
	__Local__288.Reserve(1);
	__Local__288.Add(FFrameNumber{});
	__Local__288[0].Value = 15000;
	auto& __Local__289 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__289 = TArray<FMovieSceneFloatValue> ();
	__Local__289.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__289.GetData(), 1);
	auto& __Local__290 = __Local__289[0];
	auto& __Local__291 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__268->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__291 = TArray<FFrameNumber> ();
	__Local__291.Reserve(1);
	__Local__291.Add(FFrameNumber{});
	__Local__291[0].Value = 15000;
	auto& __Local__292 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__268->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__292 = TArray<FMovieSceneFloatValue> ();
	__Local__292.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__292.GetData(), 1);
	auto& __Local__293 = __Local__292[0];
	__Local__268->Easing.EaseIn = __Local__269;
	__Local__268->Easing.EaseOut = __Local__270;
	__Local__268->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__294 = (*(AccessPrivateProperty<FGuid >((__Local__268), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__294 = FGuid(0x53139C97, 0x404D1170, 0xC27190B5, 0xE89B5DB9);
	__Local__267.Add(__Local__268);
	auto& __Local__295 = (*(AccessPrivateProperty<FGuid >((__Local__265), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__295 = FGuid(0xB49ACD29, 0x431EE8F4, 0x2CDF2DAE, 0xC2E01AC2);
	auto& __Local__296 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__265), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__296.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__296.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__296.Entries.GetData(), 1);
	auto& __Local__297 = __Local__296.Entries[0];
	__Local__297.Section = __Local__268;
	auto& __Local__298 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__297.Range), 0)));
	auto& __Local__299 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__298), 0)));
	__Local__299 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__300 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__298), 0)));
	__Local__300.Value = 500;
	auto& __Local__301 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__297.Range), 0)));
	auto& __Local__302 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__301), 0)));
	__Local__302 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__303 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__301), 0)));
	__Local__303.Value = 15000;
	__Local__297.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__304 = (*(AccessPrivateProperty<FGuid >((__Local__265), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__304 = FGuid(0xB49ACD29, 0x431EE8F4, 0x2CDF2DAE, 0xC2E01AC2);
	__Local__264.Add(__Local__265);
	auto& __Local__305 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__254), UMovieScene::__PPO__PlaybackRange() )));
	__Local__305 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__306 = (*(AccessPrivateProperty<FFrameRate >((__Local__254), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__307 = (*(__Local__131->ContainerPtrToValuePtr<int32 >(&(__Local__306), 0)));
	__Local__307 = 20;
	auto& __Local__308 = (*(AccessPrivateProperty<FGuid >((__Local__254), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__308 = FGuid(0x79A3BB7D, 0x49EBC436, 0xD6D6B484, 0x970BA3EA);
	__Local__5->MovieScene = __Local__254;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__309 = __Local__5->AnimationBindings[0];
	__Local__309.WidgetName = FName(TEXT("workplan_1"));
	__Local__309.AnimationGuid = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__310 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__310 = FString(TEXT("workla"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__311 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__311 = FGuid(0xBDF80676, 0x431282E7, 0xB8B15488, 0x4228A07E);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
	auto __Local__312 = NewObject<UMovieScene>(__Local__6, TEXT("exitla"), (EObjectFlags)0x00280008);
	auto& __Local__313 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__312), UMovieScene::__PPO__Possessables() )));
	__Local__313 = TArray<FMovieScenePossessable> ();
	__Local__313.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__313.GetData(), 2);
	auto& __Local__314 = __Local__313[0];
	auto& __Local__315 = (*(AccessPrivateProperty<FGuid >(&(__Local__314), FMovieScenePossessable::__PPO__Guid() )));
	__Local__315 = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__316 = (*(AccessPrivateProperty<FString >(&(__Local__314), FMovieScenePossessable::__PPO__Name() )));
	__Local__316 = FString(TEXT("exitMAINMEAU"));
	auto& __Local__317 = (*(AccessPrivateProperty<UClass* >(&(__Local__314), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__317 = UButton::StaticClass();
	auto& __Local__318 = __Local__313[1];
	auto& __Local__319 = (*(AccessPrivateProperty<FGuid >(&(__Local__318), FMovieScenePossessable::__PPO__Guid() )));
	__Local__319 = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__320 = (*(AccessPrivateProperty<FString >(&(__Local__318), FMovieScenePossessable::__PPO__Name() )));
	__Local__320 = FString(TEXT("exit"));
	auto& __Local__321 = (*(AccessPrivateProperty<UClass* >(&(__Local__318), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__321 = UButton::StaticClass();
	auto& __Local__322 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__312), UMovieScene::__PPO__ObjectBindings() )));
	__Local__322 = TArray<FMovieSceneBinding> ();
	__Local__322.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__322.GetData(), 2);
	auto& __Local__323 = __Local__322[0];
	auto& __Local__324 = (*(AccessPrivateProperty<FGuid >(&(__Local__323), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__324 = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__325 = (*(AccessPrivateProperty<FString >(&(__Local__323), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__325 = FString(TEXT("exitMAINMEAU"));
	auto& __Local__326 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__323), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__326 = TArray<UMovieSceneTrack*> ();
	__Local__326.Reserve(1);
	auto __Local__327 = NewObject<UMovieScene2DTransformTrack>(__Local__312, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__328 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__327), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__328.PropertyName = FName(TEXT("RenderTransform"));
	__Local__328.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__328.bCanUseClassLookup = true;
	auto& __Local__329 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__327), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__329 = TArray<UMovieSceneSection*> ();
	__Local__329.Reserve(1);
	auto __Local__330 = NewObject<UMovieScene2DTransformSection>(__Local__327, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__331 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__330->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__332 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__330->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__331)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__332)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__333 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__333 = TArray<FFrameNumber> ();
	__Local__333.Reserve(1);
	__Local__333.Add(FFrameNumber{});
	auto& __Local__334 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__334 = TArray<FMovieSceneFloatValue> ();
	__Local__334.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__334.GetData(), 1);
	auto& __Local__335 = __Local__334[0];
	auto& __Local__336 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__336 = TArray<FFrameNumber> ();
	__Local__336.Reserve(1);
	__Local__336.Add(FFrameNumber{});
	auto& __Local__337 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__337 = TArray<FMovieSceneFloatValue> ();
	__Local__337.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__337.GetData(), 1);
	auto& __Local__338 = __Local__337[0];
	auto& __Local__339 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__339 = TArray<FFrameNumber> ();
	__Local__339.Reserve(1);
	__Local__339.Add(FFrameNumber{});
	auto& __Local__340 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__340 = TArray<FMovieSceneFloatValue> ();
	__Local__340.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__340.GetData(), 1);
	auto& __Local__341 = __Local__340[0];
	auto& __Local__342 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__342 = TArray<FFrameNumber> ();
	__Local__342.Reserve(5);
	__Local__342.Add(FFrameNumber{});
	__Local__342.Add(FFrameNumber{});
	__Local__342[1].Value = 3000;
	__Local__342.Add(FFrameNumber{});
	__Local__342[2].Value = 6000;
	__Local__342.Add(FFrameNumber{});
	__Local__342[3].Value = 9000;
	__Local__342.Add(FFrameNumber{});
	__Local__342[4].Value = 12000;
	auto& __Local__343 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__343 = TArray<FMovieSceneFloatValue> ();
	__Local__343.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__343.GetData(), 5);
	auto& __Local__344 = __Local__343[0];
	__Local__344.Value = 1.100000f;
	auto& __Local__345 = __Local__343[1];
	__Local__345.Value = 1.200000f;
	__Local__345.Tangent.ArriveTangent = 0.000033f;
	__Local__345.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__346 = __Local__343[2];
	__Local__346.Value = 1.300000f;
	__Local__346.Tangent.ArriveTangent = 0.000033f;
	__Local__346.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__347 = __Local__343[3];
	__Local__347.Value = 1.400000f;
	__Local__347.Tangent.ArriveTangent = 0.000011f;
	__Local__347.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__348 = __Local__343[4];
	__Local__348.Value = 1.410000f;
	auto& __Local__349 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__349 = TArray<FFrameNumber> ();
	__Local__349.Reserve(5);
	__Local__349.Add(FFrameNumber{});
	__Local__349.Add(FFrameNumber{});
	__Local__349[1].Value = 3000;
	__Local__349.Add(FFrameNumber{});
	__Local__349[2].Value = 6000;
	__Local__349.Add(FFrameNumber{});
	__Local__349[3].Value = 9000;
	__Local__349.Add(FFrameNumber{});
	__Local__349[4].Value = 12000;
	auto& __Local__350 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__350 = TArray<FMovieSceneFloatValue> ();
	__Local__350.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__350.GetData(), 5);
	auto& __Local__351 = __Local__350[0];
	__Local__351.Value = 1.100000f;
	auto& __Local__352 = __Local__350[1];
	__Local__352.Value = 1.200000f;
	__Local__352.Tangent.ArriveTangent = 0.000033f;
	__Local__352.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__353 = __Local__350[2];
	__Local__353.Value = 1.300000f;
	__Local__353.Tangent.ArriveTangent = 0.000033f;
	__Local__353.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__354 = __Local__350[3];
	__Local__354.Value = 1.400000f;
	__Local__354.Tangent.ArriveTangent = 0.000011f;
	__Local__354.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__355 = __Local__350[4];
	__Local__355.Value = 1.410000f;
	auto& __Local__356 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__356 = TArray<FFrameNumber> ();
	__Local__356.Reserve(1);
	__Local__356.Add(FFrameNumber{});
	auto& __Local__357 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__357 = TArray<FMovieSceneFloatValue> ();
	__Local__357.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__357.GetData(), 1);
	auto& __Local__358 = __Local__357[0];
	auto& __Local__359 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__330->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__359 = TArray<FFrameNumber> ();
	__Local__359.Reserve(1);
	__Local__359.Add(FFrameNumber{});
	auto& __Local__360 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__330->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__360 = TArray<FMovieSceneFloatValue> ();
	__Local__360.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__360.GetData(), 1);
	auto& __Local__361 = __Local__360[0];
	__Local__330->Easing.EaseIn = __Local__331;
	__Local__330->Easing.EaseOut = __Local__332;
	__Local__330->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__362 = (*(AccessPrivateProperty<FGuid >((__Local__330), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__362 = FGuid(0xA26DED1E, 0x4C8605E8, 0xD729DFB0, 0xE26B5DB0);
	__Local__329.Add(__Local__330);
	auto& __Local__363 = (*(AccessPrivateProperty<FGuid >((__Local__327), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__363 = FGuid(0xCD1DBF90, 0x42AFC8BE, 0x92E9A48B, 0x4F989340);
	auto& __Local__364 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__327), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__364.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__364.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__364.Entries.GetData(), 1);
	auto& __Local__365 = __Local__364.Entries[0];
	__Local__365.Section = __Local__330;
	auto& __Local__366 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__365.Range), 0)));
	auto& __Local__367 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__366), 0)));
	__Local__367 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__368 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__365.Range), 0)));
	auto& __Local__369 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__368), 0)));
	__Local__369 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__370 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__368), 0)));
	__Local__370.Value = 9000;
	__Local__365.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__371 = (*(AccessPrivateProperty<FGuid >((__Local__327), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__371 = FGuid(0xCD1DBF90, 0x42AFC8BE, 0x92E9A48B, 0x4F989340);
	__Local__326.Add(__Local__327);
	auto& __Local__372 = __Local__322[1];
	auto& __Local__373 = (*(AccessPrivateProperty<FGuid >(&(__Local__372), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__373 = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__374 = (*(AccessPrivateProperty<FString >(&(__Local__372), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__374 = FString(TEXT("exit"));
	auto& __Local__375 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__372), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__375 = TArray<UMovieSceneTrack*> ();
	__Local__375.Reserve(1);
	auto __Local__376 = NewObject<UMovieScene2DTransformTrack>(__Local__312, TEXT("MovieScene2DTransformTrack_2"), (EObjectFlags)0x00280008);
	auto& __Local__377 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__376), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__377.PropertyName = FName(TEXT("RenderTransform"));
	__Local__377.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__377.bCanUseClassLookup = true;
	auto& __Local__378 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__376), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__378 = TArray<UMovieSceneSection*> ();
	__Local__378.Reserve(1);
	auto __Local__379 = NewObject<UMovieScene2DTransformSection>(__Local__376, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__380 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__379->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__381 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__379->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__380)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__381)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__382 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__382 = TArray<FFrameNumber> ();
	__Local__382.Reserve(1);
	__Local__382.Add(FFrameNumber{});
	auto& __Local__383 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__383 = TArray<FMovieSceneFloatValue> ();
	__Local__383.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__383.GetData(), 1);
	auto& __Local__384 = __Local__383[0];
	auto& __Local__385 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__385 = TArray<FFrameNumber> ();
	__Local__385.Reserve(1);
	__Local__385.Add(FFrameNumber{});
	auto& __Local__386 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__386 = TArray<FMovieSceneFloatValue> ();
	__Local__386.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__386.GetData(), 1);
	auto& __Local__387 = __Local__386[0];
	auto& __Local__388 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__388 = TArray<FFrameNumber> ();
	__Local__388.Reserve(1);
	__Local__388.Add(FFrameNumber{});
	auto& __Local__389 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__389 = TArray<FMovieSceneFloatValue> ();
	__Local__389.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__389.GetData(), 1);
	auto& __Local__390 = __Local__389[0];
	auto& __Local__391 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__391 = TArray<FFrameNumber> ();
	__Local__391.Reserve(5);
	__Local__391.Add(FFrameNumber{});
	__Local__391.Add(FFrameNumber{});
	__Local__391[1].Value = 3000;
	__Local__391.Add(FFrameNumber{});
	__Local__391[2].Value = 6000;
	__Local__391.Add(FFrameNumber{});
	__Local__391[3].Value = 9000;
	__Local__391.Add(FFrameNumber{});
	__Local__391[4].Value = 12000;
	auto& __Local__392 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__392 = TArray<FMovieSceneFloatValue> ();
	__Local__392.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__392.GetData(), 5);
	auto& __Local__393 = __Local__392[0];
	__Local__393.Value = 1.100000f;
	auto& __Local__394 = __Local__392[1];
	__Local__394.Value = 1.200000f;
	__Local__394.Tangent.ArriveTangent = 0.000033f;
	__Local__394.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__395 = __Local__392[2];
	__Local__395.Value = 1.300000f;
	__Local__395.Tangent.ArriveTangent = 0.000033f;
	__Local__395.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__396 = __Local__392[3];
	__Local__396.Value = 1.400000f;
	__Local__396.Tangent.ArriveTangent = 0.000011f;
	__Local__396.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__397 = __Local__392[4];
	__Local__397.Value = 1.410000f;
	auto& __Local__398 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__398 = TArray<FFrameNumber> ();
	__Local__398.Reserve(5);
	__Local__398.Add(FFrameNumber{});
	__Local__398.Add(FFrameNumber{});
	__Local__398[1].Value = 3000;
	__Local__398.Add(FFrameNumber{});
	__Local__398[2].Value = 6000;
	__Local__398.Add(FFrameNumber{});
	__Local__398[3].Value = 9000;
	__Local__398.Add(FFrameNumber{});
	__Local__398[4].Value = 12000;
	auto& __Local__399 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__399 = TArray<FMovieSceneFloatValue> ();
	__Local__399.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__399.GetData(), 5);
	auto& __Local__400 = __Local__399[0];
	__Local__400.Value = 1.100000f;
	auto& __Local__401 = __Local__399[1];
	__Local__401.Value = 1.200000f;
	__Local__401.Tangent.ArriveTangent = 0.000033f;
	__Local__401.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__402 = __Local__399[2];
	__Local__402.Value = 1.300000f;
	__Local__402.Tangent.ArriveTangent = 0.000033f;
	__Local__402.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__403 = __Local__399[3];
	__Local__403.Value = 1.400000f;
	__Local__403.Tangent.ArriveTangent = 0.000011f;
	__Local__403.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__404 = __Local__399[4];
	__Local__404.Value = 1.410000f;
	auto& __Local__405 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__405 = TArray<FFrameNumber> ();
	__Local__405.Reserve(1);
	__Local__405.Add(FFrameNumber{});
	auto& __Local__406 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__406 = TArray<FMovieSceneFloatValue> ();
	__Local__406.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__406.GetData(), 1);
	auto& __Local__407 = __Local__406[0];
	auto& __Local__408 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__379->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__408 = TArray<FFrameNumber> ();
	__Local__408.Reserve(1);
	__Local__408.Add(FFrameNumber{});
	auto& __Local__409 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__379->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__409 = TArray<FMovieSceneFloatValue> ();
	__Local__409.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__409.GetData(), 1);
	auto& __Local__410 = __Local__409[0];
	__Local__379->Easing.EaseIn = __Local__380;
	__Local__379->Easing.EaseOut = __Local__381;
	__Local__379->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__411 = (*(AccessPrivateProperty<FGuid >((__Local__379), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__411 = FGuid(0xCA49F95F, 0x4B3A5D43, 0xB7C568A2, 0x20FDFFEC);
	__Local__378.Add(__Local__379);
	auto& __Local__412 = (*(AccessPrivateProperty<FGuid >((__Local__376), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__412 = FGuid(0xFE0F720D, 0x43FEF9A6, 0xB4C85898, 0x3CF13CFF);
	auto& __Local__413 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__376), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__413.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__413.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__413.Entries.GetData(), 1);
	auto& __Local__414 = __Local__413.Entries[0];
	__Local__414.Section = __Local__379;
	auto& __Local__415 = (*(__Local__114->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__414.Range), 0)));
	auto& __Local__416 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__415), 0)));
	__Local__416 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__417 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__414.Range), 0)));
	auto& __Local__418 = (*(__Local__117->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__417), 0)));
	__Local__418 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__419 = (*(__Local__120->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__417), 0)));
	__Local__419.Value = 9000;
	__Local__414.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__420 = (*(AccessPrivateProperty<FGuid >((__Local__376), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__420 = FGuid(0xFE0F720D, 0x43FEF9A6, 0xB4C85898, 0x3CF13CFF);
	__Local__375.Add(__Local__376);
	auto& __Local__421 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__312), UMovieScene::__PPO__PlaybackRange() )));
	__Local__421 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__422 = (*(AccessPrivateProperty<FFrameRate >((__Local__312), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__423 = (*(__Local__131->ContainerPtrToValuePtr<int32 >(&(__Local__422), 0)));
	__Local__423 = 20;
	auto& __Local__424 = (*(AccessPrivateProperty<FGuid >((__Local__312), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__424 = FGuid(0x4E4FE953, 0x4DC48FE3, 0x908A0CB2, 0x7F793D94);
	__Local__6->MovieScene = __Local__312;
	__Local__6->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__6->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__6->AnimationBindings.GetData(), 2);
	auto& __Local__425 = __Local__6->AnimationBindings[0];
	__Local__425.WidgetName = FName(TEXT("exitMAINMEAU"));
	__Local__425.AnimationGuid = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__426 = __Local__6->AnimationBindings[1];
	__Local__426.WidgetName = FName(TEXT("exit"));
	__Local__426.AnimationGuid = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__427 = (*(AccessPrivateProperty<FString >((__Local__6), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__427 = FString(TEXT("exitla"));
	__Local__6->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__428 = (*(AccessPrivateProperty<FGuid >((__Local__6), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__428 = FGuid(0xCF82B313, 0x458C5518, 0x20CFF297, 0xF2F0156C);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__6);
}
PRAGMA_ENABLE_OPTIMIZATION
void UALL_C__pf2934107227::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__429;
	SlotNames.Append(__Local__429);
}
void UALL_C__pf2934107227::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__430;
	__Local__430.Reserve(5);
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[5]));
	TArray<FDelegateRuntimeBinding>  __Local__431;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UALL_C__pf2934107227::StaticClass())->MiscConvertedSubobjects[0]), __Local__430, __Local__431);
}
void UALL_C__pf2934107227::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				if (!bpv__Isopenworkplan__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 7:
			{
				bpv__Isopenworkplan__pf = false;
			}
		case 8:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 9:
			{
				bpv__Isopenpromote__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__exp__pf))
	{
		bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__learn__pf))
	{
		bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__logo__pf))
	{
		bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__CEO__pf))
	{
		bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Director__pf))
	{
		bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__manager__pf))
	{
		bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Employee__pf))
	{
		bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Janitor__pf))
	{
		bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__LOGOWORKPLAN__pf))
	{
		bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				if (!bpv__Isopenpromote__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 29:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 30:
			{
				bpv__Isopenpromote__pf = false;
			}
		case 31:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 32:
			{
				bpv__Isopenworkplan__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_3(int32 bpp__EntryPoint__pf)
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
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				if (!bpv__Isopenpromote__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 17:
			{
				bpv__Isopenpromote__pf = false;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				if (!bpv__Isopenworkplan__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 19:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 20:
			{
				bpv__Isopenworkplan__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_4(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__wokedplans__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_5(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__wokedplans__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_6(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf = UUserWidget::PlayAnimation(bpv__exitla__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_7(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__exitla__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_8(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__pomote__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__ExecuteUbergraph_ALL__pf_9(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__pomote__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf2934107227::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_ALL__pf_1(34);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_2(27);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_4(26);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_5(25);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_7(23);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_6(21);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_3(14);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_8(12);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_9(10);
}
void UALL_C__pf2934107227::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_0(4);
}
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf2934107227::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{280, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/CompanyUI/menu/main.main 
		{281, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/CompanyUI/menu/Work_plan.Work_plan 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/CompanyUI/menu/promote.promote 
		{283, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/CompanyUI/menu/exit.exit 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf2934107227::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{199, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UALL_C__pf2934107227
{
	FRegisterHelper__UALL_C__pf2934107227()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/CompanyUI/menu/ALL"), &UALL_C__pf2934107227::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UALL_C__pf2934107227 Instance;
};
FRegisterHelper__UALL_C__pf2934107227 FRegisterHelper__UALL_C__pf2934107227::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
