#include "NativizedAssets.h"
#include "StatsUi__pf2748595663.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
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
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
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
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UStatsUI_C__pf2748595663::UStatsUI_C__pf2748595663(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background__pf = nullptr;
	bpv__ButtonUnpause__pf = nullptr;
	bpv__CharacterProfile__pf = nullptr;
	bpv__CoinImage__pf = nullptr;
	bpv__Day__pf = nullptr;
	bpv__EnergyBar__pf = nullptr;
	bpv__HealthBar__pf = nullptr;
	bpv__KnowledgeBar__pf = nullptr;
	bpv__MoneyValue__pf = nullptr;
	bpv__Pause__pf = nullptr;
	bpv__ProfileFrame__pf = nullptr;
	bpv__Speed__pf = nullptr;
	bpv__SpeedText__pf = nullptr;
	bpv__Time__pf = nullptr;
	bpv__DisplayedHealth__pf = 0.000000f;
	bpv__DisplayedEnergy__pf = 0.000000f;
	bpv__DisplayedKnowledge__pf = 0.000000f;
	bpv__DisplayedTime__pf = FString(TEXT(""));
	bpv__DisplayedDays__pf = FString(TEXT("0.000000"));
	bpv__Minute__pf = 0;
	bpv__CurrentWD__pf = 0.000000f;
	bpv__GetSleepEnergy__pf = 0.000000f;
	bpv__GetSleepHealth__pf = 0.000000f;
	bpv__DisplayedMoney__pf = 0;
	bpv__Hour__pf = 7;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsUI_C__pf2748595663::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI_C__pf2748595663::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("ButtonUnpause"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__StatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Pause"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__StatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(5);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = -4.000000f;
	__Local__6->LayoutData.Offsets.Top = -4.000000f;
	__Local__6->LayoutData.Offsets.Right = 650.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 350.000000f;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_87"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(8);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = 32.000000f;
	__Local__9->LayoutData.Offsets.Top = 32.000000f;
	__Local__9->LayoutData.Offsets.Right = 250.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 250.000000f;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_116"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(3);
	auto __Local__12 = NewObject<UOverlaySlot>(__Local__10, TEXT("OverlaySlot_5"), (EObjectFlags)0x00280008);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__13->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->ColorAndOpacity = FLinearColor(1.000000, 0.390625, 0.390625, 1.000000);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__15 = NewObject<UOverlaySlot>(__Local__10, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__15->Parent = __Local__10;
	auto __Local__16 = NewObject<UImage>(__Local__1, TEXT("CharacterProfile"), (EObjectFlags)0x00280008);
	__Local__16->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__16->Slot = __Local__15;
	__Local__16->RenderTransformPivot = FVector2D(0.000000, 0.000000);
	__Local__15->Content = __Local__16;
	__Local__11.Add(__Local__15);
	auto __Local__18 = NewObject<UOverlaySlot>(__Local__10, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__18->Parent = __Local__10;
	auto __Local__19 = NewObject<UImage>(__Local__1, TEXT("ProfileFrame"), (EObjectFlags)0x00280008);
	__Local__19->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__19->Slot = __Local__18;
	__Local__19->RenderTransformPivot = FVector2D(0.000000, 0.000000);
	__Local__18->Content = __Local__19;
	__Local__11.Add(__Local__18);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = 312.000000f;
	__Local__21->LayoutData.Offsets.Top = 32.000000f;
	__Local__21->LayoutData.Offsets.Right = 300.000000f;
	__Local__21->Parent = __Local__7;
	auto __Local__22 = NewObject<UProgressBar>(__Local__1, TEXT("HealthBar"), (EObjectFlags)0x00280008);
	__Local__22->WidgetStyle.BackgroundImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__22->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.BackgroundImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__22->WidgetStyle.FillImage.ImageSize = FVector2D(561.000000, 105.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(1.000000, 0.141263, 0.119538, 1.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->WidgetStyle.MarqueeImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.989583, 0.979167, 1.000000, 1.000000);
	__Local__22->WidgetStyle.MarqueeImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__22->Percent = 0.390476f;
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__8.Add(__Local__21);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = 312.000000f;
	__Local__27->LayoutData.Offsets.Top = 128.000000f;
	__Local__27->LayoutData.Offsets.Right = 300.000000f;
	__Local__27->Parent = __Local__7;
	auto __Local__28 = NewObject<UProgressBar>(__Local__1, TEXT("KnowledgeBar"), (EObjectFlags)0x00280008);
	__Local__28->WidgetStyle.BackgroundImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__28->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__28->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__28->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__28->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.FillImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__28->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__28->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__28->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__28->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.423268, 0.564712, 0.623961, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.MarqueeImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(0.989583, 0.979167, 1.000000, 1.000000);
	__Local__28->WidgetStyle.MarqueeImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__28->Percent = 0.500000f;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__8.Add(__Local__27);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = 312.000000f;
	__Local__33->LayoutData.Offsets.Top = 80.000000f;
	__Local__33->LayoutData.Offsets.Right = 300.000000f;
	__Local__33->Parent = __Local__7;
	auto __Local__34 = NewObject<UProgressBar>(__Local__1, TEXT("EnergyBar"), (EObjectFlags)0x00280008);
	__Local__34->WidgetStyle.BackgroundImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__34->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__34->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__34->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__34->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__34->WidgetStyle.BackgroundImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__34->WidgetStyle.FillImage.ImageSize = FVector2D(561.000000, 105.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__36 = FLinearColor(0.982251, 0.982251, 0.304987, 1.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.MarqueeImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.989583, 0.979167, 1.000000, 1.000000);
	__Local__34->WidgetStyle.MarqueeImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__34->Percent = 0.500000f;
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__8.Add(__Local__33);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_34"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Left = 336.000000f;
	__Local__39->LayoutData.Offsets.Top = 180.000000f;
	__Local__39->LayoutData.Offsets.Right = 50.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__39->Parent = __Local__7;
	auto __Local__40 = NewObject<UImage>(__Local__1, TEXT("CoinImage"), (EObjectFlags)0x00280008);
	__Local__40->Brush.ImageSize = FVector2D(167.000000, 166.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__40->RenderTransformPivot = FVector2D(0.100000, 0.100000);
	__Local__39->Content = __Local__40;
	__Local__8.Add(__Local__39);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_36"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = 408.000000f;
	__Local__42->LayoutData.Offsets.Top = 184.000000f;
	__Local__42->LayoutData.Offsets.Right = 150.000000f;
	__Local__42->Parent = __Local__7;
	auto __Local__43 = NewObject<UTextBlock>(__Local__1, TEXT("MoneyValue"), (EObjectFlags)0x00280008);
	__Local__43->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", \"AC0818174C3396D86AC9D4A950200724\", \"00000000\")")	);
	__Local__43->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__43->Font.OutlineSettings.OutlineSize = 1;
	__Local__43->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__43->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->StrikeBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.010960, 0.016807, 0.023153, 1.000000);
	__Local__43->Slot = __Local__42;
	__Local__43->RenderTransformPivot = FVector2D(0.000000, 0.000000);
	__Local__43->bIsVariable = true;
	__Local__42->Content = __Local__43;
	__Local__8.Add(__Local__42);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_54"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = 52.000000f;
	__Local__45->LayoutData.Offsets.Top = 288.000000f;
	__Local__45->LayoutData.Offsets.Right = 88.214287f;
	__Local__45->LayoutData.Offsets.Bottom = 43.142857f;
	__Local__45->Parent = __Local__7;
	auto __Local__46 = NewObject<UImage>(__Local__1, TEXT("Speed"), (EObjectFlags)0x00280008);
	__Local__46->Brush.ImageSize = FVector2D(384.000000, 256.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__47 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__46->ColorAndOpacity = FLinearColor(0.489583, 0.605302, 1.000000, 1.000000);
	__Local__46->Slot = __Local__45;
	__Local__46->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__45->Content = __Local__46;
	__Local__8.Add(__Local__45);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_55"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Left = 128.000000f;
	__Local__48->LayoutData.Offsets.Top = 288.000000f;
	__Local__48->LayoutData.Offsets.Right = 151.000000f;
	__Local__48->LayoutData.Offsets.Bottom = 61.500000f;
	__Local__48->Parent = __Local__7;
	auto __Local__49 = NewObject<UTextBlock>(__Local__1, TEXT("SpeedText"), (EObjectFlags)0x00280008);
	__Local__49->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", \"ACC97DE04934F4DE28A72FA399B0DC91\", \"Speed x2\")")	);
	__Local__49->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__49->Font.OutlineSettings.OutlineSize = 2;
	__Local__49->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__49->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__49->Font.LetterSpacing = 105;
	__Local__49->ShadowColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__49->Slot = __Local__48;
	__Local__49->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__49->bIsVariable = true;
	__Local__48->Content = __Local__49;
	__Local__8.Add(__Local__48);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Top = -430.000000f;
	__Local__50->LayoutData.Offsets.Right = 151.000000f;
	__Local__50->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__50->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__50->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__50->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__50->Parent = __Local__4;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, TEXT("Time"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", \"13A9AAD14BCB1D3E167BAF9AB37C6BC0\", \"00 : 00\")")	);
	__Local__51->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__51->Font.OutlineSettings.OutlineSize = 1;
	__Local__51->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__51->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__52 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__51), UTextLayoutWidget::__PPO__Justification() )));
	__Local__52 = ETextJustify::Type::Center;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__5.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Top = -480.000000f;
	__Local__53->LayoutData.Offsets.Right = 151.000000f;
	__Local__53->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__53->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__53->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__53->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__53->Parent = __Local__4;
	auto __Local__54 = NewObject<UTextBlock>(__Local__1, TEXT("Day"), (EObjectFlags)0x00280008);
	__Local__54->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", \"577A751D4C5720D785C10B9AC13ABAD4\", \"Day : 00\")")	);
	__Local__54->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__54->Font.OutlineSettings.OutlineSize = 1;
	__Local__54->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__54->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__55 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__54), UTextLayoutWidget::__PPO__Justification() )));
	__Local__55 = ETextJustify::Type::Center;
	__Local__54->Slot = __Local__53;
	__Local__54->bIsVariable = true;
	__Local__53->Content = __Local__54;
	__Local__5.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = 1832.000000f;
	__Local__56->LayoutData.Offsets.Top = 24.000000f;
	__Local__56->LayoutData.Offsets.Right = 67.666664f;
	__Local__56->LayoutData.Offsets.Bottom = 58.333336f;
	__Local__56->Parent = __Local__4;
	auto __Local__57 = NewObject<UButton>(__Local__1, TEXT("Pause"), (EObjectFlags)0x00280008);
	__Local__57->WidgetStyle.Normal.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.010960, 0.016807, 0.023153, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<UObject* >(&(__Local__57->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__59 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__57->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__57->WidgetStyle.Hovered.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__60 = (*(AccessPrivateProperty<UObject* >(&(__Local__57->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__60 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__57->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__57->WidgetStyle.Pressed.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.010960, 0.016807, 0.023153, 1.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<UObject* >(&(__Local__57->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__62 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__57->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__57->WidgetStyle.Disabled.ImageSize = FVector2D(128.000000, 128.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<UObject* >(&(__Local__57->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__63 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__57->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__5.Add(__Local__56);
	auto __Local__64 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__64->LayoutData.Offsets.Left = -1500.000000f;
	__Local__64->LayoutData.Offsets.Top = -1000.000000f;
	__Local__64->LayoutData.Offsets.Right = 3000.000000f;
	__Local__64->LayoutData.Offsets.Bottom = 2000.000000f;
	__Local__64->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__64->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__64->Parent = __Local__4;
	auto __Local__65 = NewObject<UButton>(__Local__1, TEXT("ButtonUnpause"), (EObjectFlags)0x00280008);
	__Local__65->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__65->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__65->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__65), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(1);
	auto __Local__67 = NewObject<UButtonSlot>(__Local__65, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__67->Parent = __Local__65;
	auto __Local__68 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__68->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E0453FE94753DFF05D8C388D480F65FA]\", \"EBD1D1ED4C9DCFF2426565AF2B42DCD2\", \"Click any space to continue.\")")	);
	__Local__68->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__68->Font.OutlineSettings.OutlineSize = 1;
	__Local__68->Font.OutlineSettings.OutlineColor = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__68->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__68->Font.Size = 40;
	__Local__68->Slot = __Local__67;
	__Local__68->RenderTransform.Translation = FVector2D(0.000000, 448.000000);
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__5.Add(__Local__64);
	__Local__4->RenderTransformPivot = FVector2D(0.000000, 0.000000);
	__Local__1->RootWidget = __Local__4;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsUI_C__pf2748595663::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__69;
	SlotNames.Append(__Local__69);
}
void UStatsUI_C__pf2748595663::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__70;
	TArray<FDelegateRuntimeBinding>  __Local__71;
	__Local__71.AddUninitialized(10);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__71.GetData(), 10);
	auto& __Local__72 = __Local__71[0];
	__Local__72.ObjectName = FString(TEXT("MoneyValue"));
	__Local__72.PropertyName = FName(TEXT("Text"));
	__Local__72.FunctionName = FName(TEXT("GetMoneyValue"));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__72.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__73 = TArray<FPropertyPathSegment> ();
	__Local__73.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	__Local__74.Name = FName(TEXT("GetMoneyValue"));
	__Local__72.Kind = EBindingKind::Function;
	auto& __Local__75 = __Local__71[1];
	__Local__75.ObjectName = FString(TEXT("CharacterProfile"));
	__Local__75.PropertyName = FName(TEXT("Brush"));
	__Local__75.FunctionName = FName(TEXT("GetProfileFrame"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__75.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__76 = TArray<FPropertyPathSegment> ();
	__Local__76.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__76.GetData(), 1);
	auto& __Local__77 = __Local__76[0];
	__Local__77.Name = FName(TEXT("GetProfileFrame"));
	__Local__75.Kind = EBindingKind::Function;
	auto& __Local__78 = __Local__71[2];
	__Local__78.ObjectName = FString(TEXT("Background"));
	__Local__78.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__78.FunctionName = FName(TEXT("GetProfileBackgroundColor"));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__78.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__79 = TArray<FPropertyPathSegment> ();
	__Local__79.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__79.GetData(), 1);
	auto& __Local__80 = __Local__79[0];
	__Local__80.Name = FName(TEXT("GetProfileBackgroundColor"));
	__Local__78.Kind = EBindingKind::Function;
	auto& __Local__81 = __Local__71[3];
	__Local__81.ObjectName = FString(TEXT("HealthBar"));
	__Local__81.PropertyName = FName(TEXT("Percent"));
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__81.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__82 = TArray<FPropertyPathSegment> ();
	__Local__82.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__82.GetData(), 1);
	auto& __Local__83 = __Local__82[0];
	__Local__83.Name = FName(TEXT("DisplayedHealth"));
	auto& __Local__84 = __Local__71[4];
	__Local__84.ObjectName = FString(TEXT("EnergyBar"));
	__Local__84.PropertyName = FName(TEXT("Percent"));
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__84.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__85 = TArray<FPropertyPathSegment> ();
	__Local__85.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__85.GetData(), 1);
	auto& __Local__86 = __Local__85[0];
	__Local__86.Name = FName(TEXT("DisplayedEnergy"));
	auto& __Local__87 = __Local__71[5];
	__Local__87.ObjectName = FString(TEXT("KnowledgeBar"));
	__Local__87.PropertyName = FName(TEXT("Percent"));
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__87.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__88 = TArray<FPropertyPathSegment> ();
	__Local__88.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__88.GetData(), 1);
	auto& __Local__89 = __Local__88[0];
	__Local__89.Name = FName(TEXT("DisplayedKnowledge"));
	auto& __Local__90 = __Local__71[6];
	__Local__90.ObjectName = FString(TEXT("Speed"));
	__Local__90.PropertyName = FName(TEXT("Brush"));
	__Local__90.FunctionName = FName(TEXT("Get Speed Image"));
	auto& __Local__91 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__90.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__91 = TArray<FPropertyPathSegment> ();
	__Local__91.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__91.GetData(), 1);
	auto& __Local__92 = __Local__91[0];
	__Local__92.Name = FName(TEXT("Get Speed Image"));
	__Local__90.Kind = EBindingKind::Function;
	auto& __Local__93 = __Local__71[7];
	__Local__93.ObjectName = FString(TEXT("SpeedText"));
	__Local__93.PropertyName = FName(TEXT("Text"));
	__Local__93.FunctionName = FName(TEXT("GetSpeedText"));
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__93.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__94 = TArray<FPropertyPathSegment> ();
	__Local__94.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__94.GetData(), 1);
	auto& __Local__95 = __Local__94[0];
	__Local__95.Name = FName(TEXT("GetSpeedText"));
	__Local__93.Kind = EBindingKind::Function;
	auto& __Local__96 = __Local__71[8];
	__Local__96.ObjectName = FString(TEXT("Time"));
	__Local__96.PropertyName = FName(TEXT("Text"));
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__96.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__97 = TArray<FPropertyPathSegment> ();
	__Local__97.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__97.GetData(), 1);
	auto& __Local__98 = __Local__97[0];
	__Local__98.Name = FName(TEXT("DisplayedTime"));
	auto& __Local__99 = __Local__71[9];
	__Local__99.ObjectName = FString(TEXT("Day"));
	__Local__99.PropertyName = FName(TEXT("Text"));
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__99.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__100 = TArray<FPropertyPathSegment> ();
	__Local__100.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__100.GetData(), 1);
	auto& __Local__101 = __Local__100[0];
	__Local__101.Name = FName(TEXT("DisplayedDays"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->MiscConvertedSubobjects[0]), __Local__70, __Local__71);
}
void UStatsUI_C__pf2748595663::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UStatsUI_C__pf2748595663::bpf__ExecuteUbergraph_StatsUI__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue_1__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

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
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Health")), true, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
			}
		case 6:
			{
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(bpv__DisplayedHealth__pf, b0l__CallFunc_ReadStats_Value__pf, 0.100000);
				bpv__DisplayedHealth__pf = bpfv__CallFunc_Lerp_ReturnValue__pf;
			}
		case 7:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Energy")), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
			}
		case 8:
			{
				bpfv__CallFunc_Lerp_ReturnValue_1__pf = UKismetMathLibrary::Lerp(bpv__DisplayedEnergy__pf, b0l__CallFunc_ReadStats_Value_1__pf, 0.100000);
				bpv__DisplayedEnergy__pf = bpfv__CallFunc_Lerp_ReturnValue_1__pf;
			}
		case 9:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Knowledge")), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
			}
		case 10:
			{
				bpfv__CallFunc_Lerp_ReturnValue_2__pf = UKismetMathLibrary::Lerp(bpv__DisplayedKnowledge__pf, b0l__CallFunc_ReadStats_Value_2__pf, 0.100000);
				bpv__DisplayedKnowledge__pf = bpfv__CallFunc_Lerp_ReturnValue_2__pf;
			}
		case 11:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_6__pf);
			}
		case 12:
			{
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_6__pf);
				bpv__DisplayedMoney__pf = bpfv__CallFunc_FTrunc_ReturnValue_1__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Minute__pf, 10);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpv__Minute__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("0")), bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpv__Hour__pf);
				bpfv__CallFunc_SelectString_ReturnValue__pf = UKismetMathLibrary::SelectString(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf, FString(TEXT(" : ")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf, bpfv__CallFunc_SelectString_ReturnValue__pf);
				bpv__DisplayedTime__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf;
			}
		case 14:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
			}
		case 15:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_4__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 23);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 16:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_4__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(30, bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(" Days left!!!")));
				bpv__DisplayedDays__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
			}
		case 17:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDTIME")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
			}
		case 18:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_ReadStats_Value_3__pf, 24.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 509.000000);
				bpfv__CallFunc_FFloor_ReturnValue_1__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_FFloor_ReturnValue_1__pf, 24);
				bpv__Hour__pf = bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf;
			}
		case 19:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_ReadStats_Value_3__pf, 1440.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 509.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_FFloor_ReturnValue__pf, 60);
				bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, 5);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 20:
			{
				__StateStack.Push(25);
			}
		case 21:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 28;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_4__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Day : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpv__DisplayedDays__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf;
				__CurrentState = 17;
				break;
			}
		case 23:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 24:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
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
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_ReadStats_Value_3__pf, 1440.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 509.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_FFloor_ReturnValue__pf, 60);
				bpv__Minute__pf = bpfv__CallFunc_Percent_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 29:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UStatsUI_C__pf2748595663::bpf__ExecuteUbergraph_StatsUI__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("WORLDTIMEMUITIPLIER")), 0.000000, this);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDILATION")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_5__pf);
	bpv__CurrentWD__pf = b0l__CallFunc_ReadStats_Value_5__pf;
	UGameplayStatics::SetGlobalTimeDilation(this, 0.000000);
	if(::IsValid(bpv__ButtonUnpause__pf))
	{
		bpv__ButtonUnpause__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UStatsUI_C__pf2748595663::bpf__ExecuteUbergraph_StatsUI__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 39);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("WORLDTIMEMUITIPLIER")), 1.000000, this);
	UGameplayStatics::SetGlobalTimeDilation(this, bpv__CurrentWD__pf);
	if(::IsValid(bpv__ButtonUnpause__pf))
	{
		bpv__ButtonUnpause__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; //KCST_EndOfThread
}
void UStatsUI_C__pf2748595663::bpf__ExecuteUbergraph_StatsUI__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__ButtonUnpause__pf))
	{
		bpv__ButtonUnpause__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; //KCST_EndOfThread
}
void UStatsUI_C__pf2748595663::bpf__BndEvt__StatsUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StatsUI__pf_2(39);
}
void UStatsUI_C__pf2748595663::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_StatsUI__pf_3(37);
}
void UStatsUI_C__pf2748595663::bpf__BndEvt__StatsUI_Pause_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StatsUI__pf_1(31);
}
void UStatsUI_C__pf2748595663::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_StatsUI__pf_0(4);
}
FText  UStatsUI_C__pf2748595663::bpf__GetMoneyValue__pf()
{
	FText bpp__ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__DisplayedMoney__pf);
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_FTrunc_ReturnValue__pf, false, true, 1, 324);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
FSlateBrush  UStatsUI_C__pf2748595663::bpf__GetProfileFrame__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	TArray<FSlateBrush> bpfv__ProfileSlate__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush_1__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush_2__pf{};
	TArray<FSlateBrush> bpfv__K2Node_MakeArray_Array__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush_3__pf{};
	TArray<FSlateBrush> bpfv__K2Node_MakeArray_Array_1__pf{};
	float bpfv__CallFunc_ReadStats_Value__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	bpfv__K2Node_MakeArray_Array__pf.SetNum(4, true);
	const UScriptStruct* __Local__103 = FSlateBrush::StaticStruct();
	uint8* __Local__104 = (uint8*)FMemory_Alloca(__Local__103->GetStructureSize());
	__Local__103->InitializeStruct(__Local__104);
	FSlateBrush& __Local__102 = *reinterpret_cast<FSlateBrush*>(__Local__104);
	bpfv__K2Node_MakeArray_Array__pf[0] = __Local__102;
	const UScriptStruct* __Local__106 = FSlateBrush::StaticStruct();
	uint8* __Local__107 = (uint8*)FMemory_Alloca(__Local__106->GetStructureSize());
	__Local__106->InitializeStruct(__Local__107);
	FSlateBrush& __Local__105 = *reinterpret_cast<FSlateBrush*>(__Local__107);
	bpfv__K2Node_MakeArray_Array__pf[1] = __Local__105;
	const UScriptStruct* __Local__109 = FSlateBrush::StaticStruct();
	uint8* __Local__110 = (uint8*)FMemory_Alloca(__Local__109->GetStructureSize());
	__Local__109->InitializeStruct(__Local__110);
	FSlateBrush& __Local__108 = *reinterpret_cast<FSlateBrush*>(__Local__110);
	bpfv__K2Node_MakeArray_Array__pf[2] = __Local__108;
	const UScriptStruct* __Local__112 = FSlateBrush::StaticStruct();
	uint8* __Local__113 = (uint8*)FMemory_Alloca(__Local__112->GetStructureSize());
	__Local__112->InitializeStruct(__Local__113);
	FSlateBrush& __Local__111 = *reinterpret_cast<FSlateBrush*>(__Local__113);
	bpfv__K2Node_MakeArray_Array__pf[3] = __Local__111;
	bpfv__ProfileSlate__pf = bpfv__K2Node_MakeArray_Array__pf;
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(256.000000,256.000000);
	const UScriptStruct* __Local__115 = FMargin::StaticStruct();
	uint8* __Local__116 = (uint8*)FMemory_Alloca(__Local__115->GetStructureSize());
	__Local__115->InitializeStruct(__Local__116);
	FMargin& __Local__114 = *reinterpret_cast<FMargin*>(__Local__116);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__114;
	const UScriptStruct* __Local__118 = FSlateColor::StaticStruct();
	uint8* __Local__119 = (uint8*)FMemory_Alloca(__Local__118->GetStructureSize());
	__Local__118->InitializeStruct(__Local__119);
	FSlateColor& __Local__117 = *reinterpret_cast<FSlateColor*>(__Local__119);
	auto& __Local__120 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__117), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__120 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.TintColor = __Local__117;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.ImageSize = FVector2D(256.000000,256.000000);
	const UScriptStruct* __Local__122 = FMargin::StaticStruct();
	uint8* __Local__123 = (uint8*)FMemory_Alloca(__Local__122->GetStructureSize());
	__Local__122->InitializeStruct(__Local__123);
	FMargin& __Local__121 = *reinterpret_cast<FMargin*>(__Local__123);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Margin = __Local__121;
	const UScriptStruct* __Local__125 = FSlateColor::StaticStruct();
	uint8* __Local__126 = (uint8*)FMemory_Alloca(__Local__125->GetStructureSize());
	__Local__125->InitializeStruct(__Local__126);
	FSlateColor& __Local__124 = *reinterpret_cast<FSlateColor*>(__Local__126);
	auto& __Local__127 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__127 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.TintColor = __Local__124;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush_1__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.ImageSize = FVector2D(256.000000,256.000000);
	const UScriptStruct* __Local__129 = FMargin::StaticStruct();
	uint8* __Local__130 = (uint8*)FMemory_Alloca(__Local__129->GetStructureSize());
	__Local__129->InitializeStruct(__Local__130);
	FMargin& __Local__128 = *reinterpret_cast<FMargin*>(__Local__130);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Margin = __Local__128;
	const UScriptStruct* __Local__132 = FSlateColor::StaticStruct();
	uint8* __Local__133 = (uint8*)FMemory_Alloca(__Local__132->GetStructureSize());
	__Local__132->InitializeStruct(__Local__133);
	FSlateColor& __Local__131 = *reinterpret_cast<FSlateColor*>(__Local__133);
	auto& __Local__134 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__131), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__134 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.TintColor = __Local__131;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush_2__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.ImageSize = FVector2D(256.000000,256.000000);
	const UScriptStruct* __Local__136 = FMargin::StaticStruct();
	uint8* __Local__137 = (uint8*)FMemory_Alloca(__Local__136->GetStructureSize());
	__Local__136->InitializeStruct(__Local__137);
	FMargin& __Local__135 = *reinterpret_cast<FMargin*>(__Local__137);
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.Margin = __Local__135;
	const UScriptStruct* __Local__139 = FSlateColor::StaticStruct();
	uint8* __Local__140 = (uint8*)FMemory_Alloca(__Local__139->GetStructureSize());
	__Local__139->InitializeStruct(__Local__140);
	FSlateColor& __Local__138 = *reinterpret_cast<FSlateColor*>(__Local__140);
	auto& __Local__141 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__138), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__141 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.TintColor = __Local__138;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush_3__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush_3__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeArray_Array_1__pf.SetNum(4, true);
	bpfv__K2Node_MakeArray_Array_1__pf[0] = bpfv__K2Node_MakeStruct_SlateBrush_3__pf;
	bpfv__K2Node_MakeArray_Array_1__pf[1] = bpfv__K2Node_MakeStruct_SlateBrush__pf;
	bpfv__K2Node_MakeArray_Array_1__pf[2] = bpfv__K2Node_MakeStruct_SlateBrush_1__pf;
	bpfv__K2Node_MakeArray_Array_1__pf[3] = bpfv__K2Node_MakeStruct_SlateBrush_2__pf;
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_ReadStats_Value__pf);
	bpp__ReturnValue__pf = bpfv__K2Node_MakeArray_Array_1__pf[bpfv__CallFunc_FTrunc_ReturnValue__pf];
	return bpp__ReturnValue__pf;
}
FLinearColor  UStatsUI_C__pf2748595663::bpf__GetProfileBackgroundColor__pf()
{
	FLinearColor bpp__ReturnValue__pf(EForceInit::ForceInit);
	TArray<FLinearColor> bpfv__K2Node_MakeArray_Array__pf{};
	float bpfv__CallFunc_ReadStats_Value__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__K2Node_MakeArray_Array__pf.SetNum(4, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = FLinearColor(0.623961,0.623961,0.568714,1.000000);
	bpfv__K2Node_MakeArray_Array__pf[1] = FLinearColor(0.295731,0.527060,0.623961,1.000000);
	bpfv__K2Node_MakeArray_Array__pf[2] = FLinearColor(1.000000,0.065313,0.041667,1.000000);
	bpfv__K2Node_MakeArray_Array__pf[3] = FLinearColor(1.000000,0.679543,0.000000,1.000000);
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_ReadStats_Value__pf);
	bpp__ReturnValue__pf = bpfv__K2Node_MakeArray_Array__pf[bpfv__CallFunc_FTrunc_ReturnValue__pf];
	return bpp__ReturnValue__pf;
}
FSlateBrush  UStatsUI_C__pf2748595663::bpf__GetxSpeedxImage__pfTT()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush_1__pf{};
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush_2__pf{};
	float bpfv__CallFunc_ReadStats_Value__pf{};
	TArray<FSlateBrush> bpfv__K2Node_MakeArray_Array__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	FSlateBrush bpfv__CallFunc_Array_Get_Item__pf{};
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDILATION")), false, this, /*out*/ bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(32.000000,32.000000);
	const UScriptStruct* __Local__143 = FMargin::StaticStruct();
	uint8* __Local__144 = (uint8*)FMemory_Alloca(__Local__143->GetStructureSize());
	__Local__143->InitializeStruct(__Local__144);
	FMargin& __Local__142 = *reinterpret_cast<FMargin*>(__Local__144);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__142;
	const UScriptStruct* __Local__146 = FSlateColor::StaticStruct();
	uint8* __Local__147 = (uint8*)FMemory_Alloca(__Local__146->GetStructureSize());
	__Local__146->InitializeStruct(__Local__147);
	FSlateColor& __Local__145 = *reinterpret_cast<FSlateColor*>(__Local__147);
	auto& __Local__148 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__145), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__148 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.TintColor = __Local__145;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.ImageSize = FVector2D(32.000000,32.000000);
	const UScriptStruct* __Local__150 = FMargin::StaticStruct();
	uint8* __Local__151 = (uint8*)FMemory_Alloca(__Local__150->GetStructureSize());
	__Local__150->InitializeStruct(__Local__151);
	FMargin& __Local__149 = *reinterpret_cast<FMargin*>(__Local__151);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Margin = __Local__149;
	const UScriptStruct* __Local__153 = FSlateColor::StaticStruct();
	uint8* __Local__154 = (uint8*)FMemory_Alloca(__Local__153->GetStructureSize());
	__Local__153->InitializeStruct(__Local__154);
	FSlateColor& __Local__152 = *reinterpret_cast<FSlateColor*>(__Local__154);
	auto& __Local__155 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__152), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__155 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.TintColor = __Local__152;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush_1__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush_1__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.ImageSize = FVector2D(32.000000,32.000000);
	const UScriptStruct* __Local__157 = FMargin::StaticStruct();
	uint8* __Local__158 = (uint8*)FMemory_Alloca(__Local__157->GetStructureSize());
	__Local__157->InitializeStruct(__Local__158);
	FMargin& __Local__156 = *reinterpret_cast<FMargin*>(__Local__158);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Margin = __Local__156;
	const UScriptStruct* __Local__160 = FSlateColor::StaticStruct();
	uint8* __Local__161 = (uint8*)FMemory_Alloca(__Local__160->GetStructureSize());
	__Local__160->InitializeStruct(__Local__161);
	FSlateColor& __Local__159 = *reinterpret_cast<FSlateColor*>(__Local__161);
	auto& __Local__162 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__159), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__162 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.TintColor = __Local__159;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush_2__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsUI_C__pf2748595663::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush_2__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_SlateBrush__pf;
	bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_SlateBrush_1__pf;
	bpfv__K2Node_MakeArray_Array__pf[2] = bpfv__K2Node_MakeStruct_SlateBrush_2__pf;
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_ReadStats_Value__pf, 1.000000);
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
	FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv__CallFunc_FTrunc_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf;
	return bpp__ReturnValue__pf;
}
FText  UStatsUI_C__pf2748595663::bpf__GetSpeedText__pf()
{
	FText bpp__ReturnValue__pf{};
	float bpfv__CallFunc_ReadStats_Value__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDILATION")), false, this, /*out*/ bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpfv__CallFunc_ReadStats_Value__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Speed x")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI_C__pf2748595663::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileBG.ProfileBG 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/slaveProfile.slaveProfile 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileFrame.ProfileFrame 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Bar.Bar 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/FillBar.FillBar 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/CoinImage.CoinImage 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed3x.Speed3x 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/PauseButton.PauseButton 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/EmployeeeProfile.EmployeeeProfile 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ManagerProfile.ManagerProfile 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/DirectorProfile.DirectorProfile 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed1x.Speed1x 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed2x.Speed2x 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UStatsUI_C__pf2748595663::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{94, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
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
struct FRegisterHelper__UStatsUI_C__pf2748595663
{
	FRegisterHelper__UStatsUI_C__pf2748595663()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/StatsUI/StatsUi"), &UStatsUI_C__pf2748595663::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UStatsUI_C__pf2748595663 Instance;
};
FRegisterHelper__UStatsUI_C__pf2748595663 FRegisterHelper__UStatsUI_C__pf2748595663::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
