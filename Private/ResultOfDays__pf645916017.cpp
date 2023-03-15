#include "NativizedAssets.h"
#include "ResultOfDays__pf645916017.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UResultOfDays_C__pf645916017::UResultOfDays_C__pf645916017(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background__pf = nullptr;
	bpv__Continue__pf = nullptr;
	bpv__Daily_Income__pf = nullptr;
	bpv__Days__pf = nullptr;
	bpv__Today_Income__pf = nullptr;
	bpv__Total__pf = nullptr;
	bpv__YesterdayMoneyValue__pf = 0.000000f;
	bpv__CurrentTimeDelition__pf = 1.000000f;
	bpv__RankIncome__pf = 0.000000f;
	bpv__TodayIncome__pf = 0.000000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UResultOfDays_C__pf645916017::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UResultOfDays_C__pf645916017::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Continue"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__ResultOfDays_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__3 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__3), UPanelWidget::__PPO__Slots() )));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(1);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__5->LayoutData.Offsets.Right = 1920.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__5->Parent = __Local__3;
	auto __Local__6 = NewObject<UOverlay>(__Local__1, TEXT("TodayResult"), (EObjectFlags)0x00280008);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(6);
	auto __Local__8 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__9->Brush.ImageSize = FVector2D(1085.000000, 816.000000);
	auto& __Local__10 = (*(AccessPrivateProperty<UObject* >(&(__Local__9->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__10 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__9->Slot = __Local__8;
	__Local__9->RenderTransform.Translation = FVector2D(438.000000, 148.000000);
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__11 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__11->Parent = __Local__6;
	auto __Local__12 = NewObject<UTextBlock>(__Local__1, TEXT("Days"), (EObjectFlags)0x00280008);
	__Local__12->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F1E3647847310BAB20F2D59CD255CEEC]\", \"5FAEB71446B89B3F5E798A9BB7B7532A\", \"30\")")	);
	auto& __Local__13 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__12->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__13 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__12->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__12->Font.OutlineSettings.OutlineSize = 1;
	__Local__12->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__12->Font.Size = 64;
	auto& __Local__14 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__12), UTextLayoutWidget::__PPO__Justification() )));
	__Local__14 = ETextJustify::Type::Center;
	__Local__12->Slot = __Local__11;
	__Local__12->RenderTransform.Translation = FVector2D(1325.000000, 183.000000);
	__Local__12->bIsVariable = true;
	__Local__11->Content = __Local__12;
	__Local__7.Add(__Local__11);
	auto __Local__15 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__15->Parent = __Local__6;
	auto __Local__16 = NewObject<UTextBlock>(__Local__1, TEXT("Daily_Income"), (EObjectFlags)0x00280008);
	__Local__16->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F1E3647847310BAB20F2D59CD255CEEC]\", \"368CF1E14DA968AFCAAE73BEDFB7D53D\", \"+\")")	);
	auto& __Local__17 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__17 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__16->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__16->Font.OutlineSettings.OutlineSize = 1;
	__Local__16->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__16->Font.Size = 64;
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__16), UTextLayoutWidget::__PPO__Justification() )));
	__Local__18 = ETextJustify::Type::Center;
	__Local__16->Slot = __Local__15;
	__Local__16->RenderTransform.Translation = FVector2D(1067.000000, 492.000000);
	__Local__16->bIsVariable = true;
	__Local__15->Content = __Local__16;
	__Local__7.Add(__Local__15);
	auto __Local__19 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__19->Parent = __Local__6;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, TEXT("Today_Income"), (EObjectFlags)0x00280008);
	__Local__20->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F1E3647847310BAB20F2D59CD255CEEC]\", \"C6C8CEA14D89593B5F24B2AA3BC8178D\", \"0000\")")	);
	auto& __Local__21 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__20->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__21 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__20->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__20->Font.OutlineSettings.OutlineSize = 1;
	__Local__20->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__20->Font.Size = 64;
	auto& __Local__22 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__20), UTextLayoutWidget::__PPO__Justification() )));
	__Local__22 = ETextJustify::Type::Center;
	__Local__20->Slot = __Local__19;
	__Local__20->RenderTransform.Translation = FVector2D(1067.000000, 593.000000);
	__Local__20->bIsVariable = true;
	__Local__19->Content = __Local__20;
	__Local__7.Add(__Local__19);
	auto __Local__23 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_6"), (EObjectFlags)0x00280008);
	__Local__23->Parent = __Local__6;
	auto __Local__24 = NewObject<UTextBlock>(__Local__1, TEXT("Total"), (EObjectFlags)0x00280008);
	__Local__24->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F1E3647847310BAB20F2D59CD255CEEC]\", \"687313504CBC80FA3A578F9D43FF1830\", \"0000\")")	);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__24->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__24->Font.OutlineSettings.OutlineSize = 1;
	__Local__24->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__24->Font.Size = 64;
	auto& __Local__26 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__24), UTextLayoutWidget::__PPO__Justification() )));
	__Local__26 = ETextJustify::Type::Center;
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Translation = FVector2D(1067.000000, 738.000000);
	__Local__24->bIsVariable = true;
	__Local__23->Content = __Local__24;
	__Local__7.Add(__Local__23);
	auto __Local__27 = NewObject<UOverlaySlot>(__Local__6, TEXT("OverlaySlot_8"), (EObjectFlags)0x00280008);
	__Local__27->Parent = __Local__6;
	auto __Local__28 = NewObject<UButton>(__Local__1, TEXT("Continue"), (EObjectFlags)0x00280008);
	__Local__28->WidgetStyle.Normal.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Hovered.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Hovered.Tiling = ESlateBrushTileType::Type::Both;
	__Local__28->WidgetStyle.Pressed.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Disabled.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.PressedPadding.Bottom = 0.000000f;
	__Local__28->Slot = __Local__27;
	__Local__28->RenderTransform.Translation = FVector2D(221.000000, 728.000000);
	__Local__28->RenderTransform.Scale = FVector2D(0.250000, 0.250000);
	__Local__27->Content = __Local__28;
	__Local__7.Add(__Local__27);
	__Local__6->Slot = __Local__5;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	__Local__1->RootWidget = __Local__3;
}
PRAGMA_ENABLE_OPTIMIZATION
void UResultOfDays_C__pf645916017::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__33;
	SlotNames.Append(__Local__33);
}
void UResultOfDays_C__pf645916017::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__34;
	TArray<FDelegateRuntimeBinding>  __Local__35;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UResultOfDays_C__pf645916017::StaticClass())->MiscConvertedSubobjects[0]), __Local__34, __Local__35);
}
void UResultOfDays_C__pf645916017::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UResultOfDays_C__pf645916017::bpf__ExecuteUbergraph_ResultOfDays__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	float bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf = UGameplayStatics::GetGlobalTimeDilation(this);
				bpv__CurrentTimeDelition__pf = bpfv__CallFunc_GetGlobalTimeDilation_ReturnValue__pf;
			}
		case 10:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
			}
		case 11:
			{
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_FFloor_ReturnValue__pf, false, true, 1, 324);
				if(::IsValid(bpv__Days__pf))
				{
					bpv__Days__pf->SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				}
			}
		case 12:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
			}
		case 13:
			{
				b0l__Temp_string_Variable_2__pf = FString(TEXT("RECURIT"));
				b0l__Temp_string_Variable_3__pf = FString(TEXT("EMWORK"));
				b0l__Temp_string_Variable_4__pf = FString(TEXT("WATERPLANT"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_3__pf);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(TSwitchValue<int32 , FString >(b0l__Temp_int_Variable__pf, b0l__K2Node_Select_Default__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_4__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_3__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_2__pf)), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
			}
		case 14:
			{
				b0l__Temp_string_Variable_5__pf = FString(TEXT("PRESENT"));
				b0l__Temp_string_Variable_6__pf = FString(TEXT("COFFE"));
				b0l__Temp_string_Variable_7__pf = FString(TEXT("REPAIR"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_3__pf);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_1__pf, b0l__K2Node_Select_Default_1__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_7__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_6__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_5__pf)), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_5__pf);
			}
		case 15:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_3__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 16:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("SHARE")), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_7__pf);
			}
		case 17:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_4__pf, 1.000000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_5__pf, 1.000000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_7__pf, 1.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 18:
			{
				b0l__Temp_float_Variable__pf = 12.000000;
				b0l__Temp_float_Variable_1__pf = 6.000000;
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_3__pf);
				b0l__Temp_float_Variable_2__pf = 24.000000;
				b0l__Temp_float_Variable_3__pf = 36.000000;
				b0l__Temp_int_Variable_2__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpv__RankIncome__pf = TSwitchValue<int32 , float >(b0l__Temp_int_Variable_2__pf, b0l__K2Node_Select_Default_3__pf, 4, TSwitchPair<int32 , float >(0, b0l__Temp_float_Variable_1__pf), TSwitchPair<int32 , float >(1, b0l__Temp_float_Variable__pf), TSwitchPair<int32 , float >(2, b0l__Temp_float_Variable_2__pf), TSwitchPair<int32 , float >(3, b0l__Temp_float_Variable_3__pf));
			}
		case 19:
			{
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpv__RankIncome__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("+")), bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf);
				if(::IsValid(bpv__Daily_Income__pf))
				{
					bpv__Daily_Income__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf);
				}
			}
		case 20:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_6__pf);
			}
		case 21:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_ReadStats_Value_6__pf, bpv__YesterdayMoneyValue__pf);
				bpv__TodayIncome__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 22:
			{
				b0l__Temp_string_Variable__pf = FString(TEXT("+"));
				b0l__Temp_string_Variable_1__pf = FString(TEXT(""));
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_ReadStats_Value_6__pf, bpv__YesterdayMoneyValue__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_FTrunc_ReturnValue_1__pf, 0);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf;
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(TSwitchValue<bool , FString >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool , FString >(false, b0l__Temp_string_Variable_1__pf), TSwitchPair<bool , FString >(true, b0l__Temp_string_Variable__pf)), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				if(::IsValid(bpv__Today_Income__pf))
				{
					bpv__Today_Income__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 23:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), bpv__RankIncome__pf, this);
			}
		case 24:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__RankIncome__pf, bpv__TodayIncome__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_SelectString_ReturnValue__pf = UKismetMathLibrary::SelectString(FString(TEXT("")), FString(TEXT("+")), bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_SelectString_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf);
				if(::IsValid(bpv__Total__pf))
				{
					bpv__Total__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_4__pf, 1.000000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_5__pf, 1.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = 18;
				break;
			}
		case 26:
			{
				bpv__RankIncome__pf = 0.000000;
				__CurrentState = 19;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UResultOfDays_C__pf645916017::bpf__ExecuteUbergraph_ResultOfDays__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("WORLDTIMEMUITIPLIER")), 1.000000, this);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("WORLDTIME")), 0.000000, this);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
	bpv__YesterdayMoneyValue__pf = b0l__CallFunc_ReadStats_Value_2__pf;
	RemoveFromParent();
	UGameplayStatics::SetGlobalTimeDilation(this, bpv__CurrentTimeDelition__pf);
	return; // KCST_GotoReturn
}
void UResultOfDays_C__pf645916017::bpf__ExecuteUbergraph_ResultOfDays__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
	bpv__YesterdayMoneyValue__pf = b0l__CallFunc_ReadStats_Value_1__pf;
	return; // KCST_GotoReturn
}
void UResultOfDays_C__pf645916017::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_ResultOfDays__pf_2(27);
}
void UResultOfDays_C__pf645916017::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_ResultOfDays__pf_0(8);
}
void UResultOfDays_C__pf645916017::bpf__BndEvt__ResultOfDays_Continue_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ResultOfDays__pf_1(7);
}
PRAGMA_DISABLE_OPTIMIZATION
void UResultOfDays_C__pf645916017::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/DayResult.DayResult 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/continuebutton.continuebutton 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UResultOfDays_C__pf645916017::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
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
struct FRegisterHelper__UResultOfDays_C__pf645916017
{
	FRegisterHelper__UResultOfDays_C__pf645916017()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/RestBuilding/ResultOfDays"), &UResultOfDays_C__pf645916017::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UResultOfDays_C__pf645916017 Instance;
};
FRegisterHelper__UResultOfDays_C__pf645916017 FRegisterHelper__UResultOfDays_C__pf645916017::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
