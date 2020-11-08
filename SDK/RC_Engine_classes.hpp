#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x5AF9E000
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5AF9E000];                                // 0x0000(0x5AF9E000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	void WasRecentlyRendered();
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo();
	void SetTickGroup();
	void SetTickableWhenPaused();
	void SetReplicates();
	void SetReplicateMovement();
	void SetOwner();
	void SetNetDormancy();
	void SetLifeSpan();
	void SetAutoDestroyWhenFinished();
	void SetActorTickInterval();
	void SetActorTickEnabled();
	void SetActorScale3D();
	void SetActorRelativeScale3D();
	void SetActorHiddenInGame();
	void SetActorEnableCollision();
	void RemoveTickPrerequisiteComponent();
	void RemoveTickPrerequisiteActor();
	void ReceiveTick();
	void ReceiveRadialDamage();
	void ReceivePointDamage();
	void ReceiveHit();
	void ReceiveEndPlay();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void ReceiveActorOnReleased();
	void ReceiveActorOnInputTouchLeave();
	void ReceiveActorOnInputTouchEnter();
	void ReceiveActorOnInputTouchEnd();
	void ReceiveActorOnInputTouchBegin();
	void ReceiveActorOnClicked();
	void ReceiveActorEndOverlap();
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap();
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise();
	void MakeMIDForMaterial();
	void K2_TeleportTo();
	void K2_SetActorTransform();
	void K2_SetActorRotation();
	void K2_SetActorRelativeTransform();
	void K2_SetActorRelativeRotation();
	void K2_SetActorRelativeLocation();
	void K2_SetActorLocationAndRotation();
	void K2_SetActorLocation();
	void K2_OnReset();
	void K2_OnEndViewTarget();
	void K2_OnBecomeViewTarget();
	void K2_GetRootComponent();
	void K2_GetComponentsByClass();
	void K2_GetActorRotation();
	void K2_GetActorLocation();
	void K2_DetachFromActor();
	void K2_DestroyComponent();
	void K2_DestroyActor();
	void K2_AttachToComponent();
	void K2_AttachToActor();
	void K2_AttachRootComponentToActor();
	void K2_AttachRootComponentTo();
	void K2_AddActorWorldTransform();
	void K2_AddActorWorldRotation();
	void K2_AddActorWorldOffset();
	void K2_AddActorLocalTransform();
	void K2_AddActorLocalRotation();
	void K2_AddActorLocalOffset();
	void IsOverlappingActor();
	void IsEnemy();
	void IsChildActor();
	void IsActorTickEnabled();
	void IsActorBeingDestroyed();
	void HasAuthority();
	void HasATeam();
	void GetVerticalDistanceTo();
	void GetVelocity();
	void GetTransform();
	void GetTickableWhenPaused();
	void GetTeamNum();
	void GetSquaredDistanceTo();
	void GetRemoteRole();
	void GetParentComponent();
	void GetParentActor();
	void GetOwner();
	void GetOverlappingComponents();
	void GetOverlappingActors();
	void GetLocalRole();
	void GetLifeSpan();
	void GetInstigatorController();
	void GetInstigator();
	void GetInputVectorAxisValue();
	void GetInputAxisValue();
	void GetInputAxisKeyValue();
	void GetHorizontalDotProductTo();
	void GetHorizontalDistanceTo();
	void GetGameTimeSinceCreation();
	void GetDotProductTo();
	void GetDistanceTo();
	void GetComponentsByTag();
	void GetComponentsByInterface();
	void GetComponentByClass();
	void GetAttachParentSocketName();
	void GetAttachParentActor();
	void GetAttachedActors();
	void GetAllChildActors();
	void GetActorUpVector();
	void GetActorTimeDilation();
	void GetActorTickInterval();
	void GetActorScale3D();
	void GetActorRightVector();
	void GetActorRelativeScale3D();
	void GetActorForwardVector();
	void GetActorEyesViewPoint();
	void GetActorEnableCollision();
	void GetActorBounds();
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput();
	void DisableInput();
	void DetachRootComponentFromParent();
	void AddTickPrerequisiteComponent();
	void AddTickPrerequisiteActor();
	void AddComponent();
	void ActorHasTag();
};


// Class Engine.ActorComponent
// 0x50BAFE80
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50BAFE80];                                // 0x0000(0x50BAFE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void ToggleActive();
	void SetTickGroup();
	void SetTickableWhenPaused();
	void SetIsReplicated();
	void SetComponentTickInterval();
	void SetComponentTickEnabled();
	void SetAutoActivate();
	void SetActive();
	void RemoveTickPrerequisiteComponent();
	void RemoveTickPrerequisiteActor();
	void ReceiveTick();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent();
	void IsComponentTickEnabled();
	void IsBeingDestroyed();
	void IsActive();
	void GetOwner();
	void GetComponentTickInterval();
	void Deactivate();
	void ComponentHasTag();
	void AddTickPrerequisiteComponent();
	void AddTickPrerequisiteActor();
	void Activate();
};


// Class Engine.SceneComponent
// 0xE8900 (0x50C98780 - 0x50BAFE80)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE8900];                                   // 0x50BAFE80(0xE8900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}


	void ToggleVisibility();
	void SnapTo();
	void SetWorldScale3D();
	void SetVisibility();
	void SetShouldUpdatePhysicsVolume();
	void SetRelativeScale3D();
	void SetMobility();
	void SetHiddenInGame();
	void SetAbsolute();
	void ResetRelativeTransform();
	void OnRep_Visibility();
	void OnRep_Transform();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void OnRep_AttachChildren();
	void K2_SetWorldTransform();
	void K2_SetWorldRotation();
	void K2_SetWorldLocationAndRotation();
	void K2_SetWorldLocation();
	void K2_SetRelativeTransform();
	void K2_SetRelativeRotation();
	void K2_SetRelativeLocationAndRotation();
	void K2_SetRelativeLocation();
	void K2_GetComponentToWorld();
	void K2_GetComponentScale();
	void K2_GetComponentRotation();
	void K2_GetComponentLocation();
	void K2_DetachFromComponent();
	void K2_AttachToComponent();
	void K2_AttachTo();
	void K2_AddWorldTransform();
	void K2_AddWorldRotation();
	void K2_AddWorldOffset();
	void K2_AddRelativeRotation();
	void K2_AddRelativeLocation();
	void K2_AddLocalTransform();
	void K2_AddLocalRotation();
	void K2_AddLocalOffset();
	void IsVisible();
	void IsSimulatingPhysics();
	void IsAnySimulatingPhysics();
	void GetUpVector();
	void GetSocketTransform();
	void GetSocketRotation();
	void GetSocketQuaternion();
	void GetSocketLocation();
	void GetShouldUpdatePhysicsVolume();
	void GetRightVector();
	void GetRelativeTransform();
	void GetPhysicsVolume();
	void GetParentComponents();
	void GetNumChildrenComponents();
	void GetForwardVector();
	void GetComponentVelocity();
	void GetChildrenComponents();
	void GetChildComponent();
	void GetAttachSocketName();
	void GetAttachParent();
	void GetAllSocketNames();
	void DoesSocketExist();
	void DetachFromParent();
};


// Class Engine.PrimitiveComponent
// 0xA16EE00 (0x5AE07580 - 0x50C98780)
class UPrimitiveComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA16EE00];                                 // 0x50C98780(0xA16EE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	void WasRecentlyRendered();
	void WakeRigidBody();
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride();
	void SetUseCCD();
	void SetTranslucentSortPriority();
	void SetSingleSampleShadowFromStationaryLights();
	void SetSimulatePhysics();
	void SetRenderInMainPass();
	void SetRenderCustomDepth();
	void SetReceivesDecals();
	void SetPhysMaterialOverride();
	void SetPhysicsMaxAngularVelocityInRadians();
	void SetPhysicsMaxAngularVelocityInDegrees();
	void SetPhysicsMaxAngularVelocity();
	void SetPhysicsLinearVelocity();
	void SetPhysicsAngularVelocityInRadians();
	void SetPhysicsAngularVelocityInDegrees();
	void SetPhysicsAngularVelocity();
	void SetOwnerNoSee();
	void SetOutlineThicknessMultiplier();
	void SetOutlineSkipsDepthTest();
	void SetOutlineIsCutout();
	void SetOutlineColor();
	void SetOnlyOwnerSee();
	void SetNotifyRigidBodyCollision();
	void SetMaterialByName();
	void SetMaterial();
	void SetMassScale();
	void SetMassOverrideInKg();
	void SetLinearDamping();
	void SetLightingChannels();
	void SetLightAttachmentsAsGroup();
	void SetGenerateOverlapEvents();
	void SetExcludeFromLightAttachmentGroup();
	void SetEnableGravity();
	void SetCustomPrimitiveDataVector4();
	void SetCustomPrimitiveDataVector3();
	void SetCustomPrimitiveDataVector2();
	void SetCustomPrimitiveDataFloat();
	void SetCustomFOV();
	void SetCustomDepthStencilWriteMask();
	void SetCustomDepthStencilValue();
	void SetCullDistance();
	void SetConstraintMode();
	void SetCollisionResponseToChannel();
	void SetCollisionResponseToAllChannels();
	void SetCollisionProfileName();
	void SetCollisionObjectType();
	void SetCollisionEnabled();
	void SetCenterOfMass();
	void SetCastShadow();
	void SetCastInsetShadow();
	void SetBoundsScale();
	void SetAngularDamping();
	void SetAllUseCCD();
	void SetAllPhysicsLinearVelocity();
	void SetAllPhysicsAngularVelocityInRadians();
	void SetAllPhysicsAngularVelocityInDegrees();
	void SetAllMassScale();
	void ScaleByMomentOfInertia();
	void PutRigidBodyToSleep();
	void K2_SphereTraceComponent();
	void K2_SphereOverlapComponent();
	void K2_LineTraceComponent();
	void K2_IsQueryCollisionEnabled();
	void K2_IsPhysicsCollisionEnabled();
	void K2_IsCollisionEnabled();
	void K2_BoxOverlapComponent();
	void IsOverlappingComponent();
	void IsOverlappingActor();
	void IsGravityEnabled();
	void IsAnyRigidBodyAwake();
	void IgnoreComponentWhenMoving();
	void IgnoreActorWhenMoving();
	void HideOutline();
	void GetWalkableSlopeOverride();
	void GetPhysicsLinearVelocityAtPoint();
	void GetPhysicsLinearVelocity();
	void GetPhysicsAngularVelocityInRadians();
	void GetPhysicsAngularVelocityInDegrees();
	void GetPhysicsAngularVelocity();
	void GetOverlappingComponents();
	void GetOverlappingActors();
	void GetNumMaterials();
	void GetMaterialFromCollisionFaceIndex();
	void GetMaterial();
	void GetMassScale();
	void GetMass();
	void GetLinearDamping();
	void GetInertiaTensor();
	void GetGenerateOverlapEvents();
	void GetCollisionResponseToChannel();
	void GetCollisionProfileName();
	void GetCollisionObjectType();
	void GetCollisionEnabled();
	void GetClosestPointOnCollision();
	void GetCenterOfMass();
	void GetAngularDamping();
	void CreateDynamicMaterialInstance();
	void CreateAndSetMaterialInstanceDynamicFromMaterial();
	void CreateAndSetMaterialInstanceDynamic();
	void CopyArrayOfMoveIgnoreComponents();
	void CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreComponents();
	void ClearMoveIgnoreActors();
	void CanCharacterStepUp();
	void AddTorqueInRadians();
	void AddTorqueInDegrees();
	void AddTorque();
	void AddRadialImpulse();
	void AddRadialForce();
	void AddImpulseAtLocation();
	void AddImpulse();
	void AddForceAtLocationLocal();
	void AddForceAtLocation();
	void AddForce();
	void AddAngularImpulseInRadians();
	void AddAngularImpulseInDegrees();
	void AddAngularImpulse();
};


// Class Engine.MeshComponent
// 0xFFFFFFFFF5E37720 (0x50C3ECA0 - 0x5AE07580)
class UMeshComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}


	void SetVectorParameterValueOnMaterials();
	void SetScalarParameterValueOnMaterials();
	void PrestreamTextures();
	void IsMaterialSlotNameValid();
	void GetMaterialSlotNames();
	void GetMaterials();
	void GetMaterialIndex();
};


// Class Engine.SkinnedMeshComponent
// 0xA49F660 (0x5B0DE300 - 0x50C3ECA0)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA49F660];                                 // 0x50C3ECA0(0xA49F660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}


	void UnloadSkinWeightProfile();
	void UnHideBoneByName();
	void TransformToBoneSpace();
	void TransformFromBoneSpace();
	void ShowMaterialSection();
	void ShowAllMaterialSections();
	void SetVertexColorOverride_LinearColor();
	void SetSkinWeightProfile();
	void SetSkinWeightOverride();
	void SetSkeletalMesh();
	void SetRenderStatic();
	void SetPhysicsAsset();
	void SetMinLOD();
	void SetMasterPoseComponent();
	void SetForcedLOD();
	void SetCastCapsuleIndirectShadow();
	void SetCastCapsuleDirectShadow();
	void SetCapsuleIndirectShadowMinVisibility();
	void IsUsingSkinWeightProfile();
	void IsMaterialSectionShown();
	void IsBoneHiddenByName();
	void HideBoneByName();
	void GetTwistAndSwingAngleOfDeltaRotationFromRefPose();
	void GetSocketBoneName();
	void GetRefPosePosition();
	void GetParentBone();
	void GetNumLODs();
	void GetNumBones();
	void GetForcedLOD();
	void GetDeltaTransformFromRefPose();
	void GetCurrentSkinWeightProfileName();
	void GetBoneName();
	void GetBoneIndex();
	void FindClosestBone_K2();
	void ClearVertexColorOverride();
	void ClearSkinWeightProfile();
	void ClearSkinWeightOverride();
	void BoneIsChildOf();
};


// Class Engine.StreamableRenderAsset
// 0x5B0DF200
class UStreamableRenderAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0DF200];                                // 0x0000(0x5B0DF200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamableRenderAsset");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x21700 (0x5B100900 - 0x5B0DF200)
class USkeletalMesh : public UStreamableRenderAsset
{
public:
	unsigned char                                      UnknownData00[0x21700];                                   // 0x5B0DF200(0x21700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}


	void SetLODSettings();
	void NumSockets();
	void K2_GetAllMorphTargetNames();
	void IsSectionUsingCloth();
	void GetSocketByIndex();
	void GetNodeMappingContainer();
	void GetImportedBounds();
	void GetBounds();
	void GenerateClothingLODs();
	void FindSocketInfo();
	void FindSocketAndIndex();
	void FindSocket();
};


// Class Engine.Engine
// 0x5B106600
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B106600];                                // 0x0000(0x5B106600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0xFFFFFFFFFFFFFE80 (0x5B106480 - 0x5B106600)
class UGameEngine : public UEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.Player
// 0x5B108300
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B108300];                                // 0x0000(0x5B108300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0xFFFFFFFFFFF917C0 (0x5B099AC0 - 0x5B108300)
class UNetConnection : public UPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0xFFFFFFFFFFFFF780 (0x5B107A80 - 0x5B108300)
class ULocalPlayer : public UPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.TimecodeProvider
// 0x5B107700
class UTimecodeProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B107700];                                // 0x0000(0x5B107700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimecodeProvider");
		return ptr;
	}


	void GetTimecode();
	void GetSynchronizationState();
	void GetQualifiedFrameTime();
	void GetFrameRate();
	void GetDelayedTimecode();
	void GetDelayedQualifiedFrameTime();
};


// Class Engine.BlueprintFunctionLibrary
// 0x0000
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0000
class UBlueprintAsyncActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000
class UOnlineBlueprintCallProxyBase : public UBlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x5B10CD80
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B10CD80];                                // 0x0000(0x5B10CD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.OnlineEngineInterface
// 0x0000
class UOnlineEngineInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}

};


// Class Engine.DeveloperSettings
// 0x0000
class UDeveloperSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0000
class UDistribution : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x5B131200
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x5B131200];                                // 0x0000(0x5B131200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x196680 (0x5B134680 - 0x5AF9E000)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x196680];                                  // 0x5AF9E000(0x196680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void SpawnDefaultController();
	void SetCanAffectNavigationGeneration();
	void ReceiveUnpossessed();
	void ReceivePossessed();
	void PawnMakeNoise();
	void OnRep_PlayerState();
	void OnRep_Controller();
	void LaunchPawn();
	void K2_GetMovementInputVector();
	void IsPlayerControlled();
	void IsPawnControlled();
	void IsMoveInputIgnored();
	void IsLocallyControlled();
	void IsControlled();
	void IsBotControlled();
	void GetPendingMovementInputVector();
	void GetNavAgentLocation();
	void GetMovementComponent();
	void GetMovementBaseActor();
	void GetLastMovementInputVector();
	void GetControlRotation();
	void GetController();
	void GetBaseAimRotation();
	void DetachFromControllerPendingDestroy();
	void ConsumeMovementInputVector();
	void AddMovementInput();
	void AddControllerYawInput();
	void AddControllerRollInput();
	void AddControllerPitchInput();
};


// Class Engine.Character
// 0x6F00 (0x5B13B580 - 0x5B134680)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0x6F00];                                    // 0x5B134680(0x6F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}


	void UnCrouch();
	void StopJumping();
	void StopAnimMontage();
	void ServerMoveOld();
	void ServerMoveNoBase();
	void ServerMoveDualNoBase();
	void ServerMoveDualHybridRootMotion();
	void ServerMoveDual();
	void ServerMove();
	void RootMotionDebugClientPrintOnScreen();
	void PlayAnimMontage();
	void OnWalkingOffLedge();
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_ReplayLastTransformUpdateTimeStamp();
	void OnRep_IsCrouched();
	void OnLaunched();
	void OnLanded();
	void OnJumped();
	void LaunchCharacter();
	void K2_UpdateCustomMovement();
	void K2_OnStartCrouch();
	void K2_OnMovementModeChanged();
	void K2_OnEndCrouch();
	void Jump();
	void IsPlayingRootMotion();
	void IsPlayingNetworkedRootMotionMontage();
	void IsJumpProvidingForce();
	void HasAnyRootMotion();
	void GetCurrentMontage();
	void GetBaseTranslationOffset();
	void GetBaseRotationOffsetRotator();
	void GetAnimRootMotionTranslationScale();
	void Crouch();
	void ClientVeryShortAdjustPosition();
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	void ClientAdjustRootMotionSourcePosition();
	void ClientAdjustRootMotionPosition();
	void ClientAdjustPosition();
	void ClientAckGoodMove();
	void CanJumpInternal();
	void CanJump();
	void CanCrouch();
	void CacheInitialMeshOffset();
};


// Class Engine.MovementComponent
// 0x53100 (0x50C02F80 - 0x50BAFE80)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x53100];                                   // 0x50BAFE80(0x53100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}


	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent();
	void SetPlaneConstraintOrigin();
	void SetPlaneConstraintNormal();
	void SetPlaneConstraintFromVectors();
	void SetPlaneConstraintEnabled();
	void SetPlaneConstraintAxisSetting();
	void PhysicsVolumeChanged();
	void K2_MoveUpdatedComponent();
	void K2_GetModifiedMaxSpeed();
	void K2_GetMaxSpeedModifier();
	void IsExceedingMaxSpeed();
	void GetPlaneConstraintOrigin();
	void GetPlaneConstraintNormal();
	void GetPlaneConstraintAxisSetting();
	void GetPhysicsVolume();
	void GetMaxSpeed();
	void GetGravityZ();
	void ConstrainNormalToPlane();
	void ConstrainLocationToPlane();
	void ConstrainDirectionToPlane();
};


// Class Engine.NavMovementComponent
// 0x9D2AE80 (0x5A92DE00 - 0x50C02F80)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x9D2AE80];                                 // 0x50C02F80(0x9D2AE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}


	void StopMovementKeepPathing();
	void StopActiveMovement();
	void IsSwimming();
	void IsMovingOnGround();
	void IsFlying();
	void IsFalling();
	void IsCrouching();
};


// Class Engine.PawnMovementComponent
// 0xFFFFFFFFFFFFF900 (0x5A92D700 - 0x5A92DE00)
class UPawnMovementComponent : public UNavMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}


	void K2_GetInputVector();
	void IsMoveInputIgnored();
	void GetPendingInputVector();
	void GetPawnOwner();
	void GetLastInputVector();
	void ConsumeInputVector();
	void AddInputVector();
};


// Class Engine.CharacterMovementComponent
// 0x119A00 (0x5AA47100 - 0x5A92D700)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x119A00];                                  // 0x5A92D700(0x119A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}


	void SetWalkableFloorZ();
	void SetWalkableFloorAngle();
	void SetMovementMode();
	void SetGroupsToIgnoreMask();
	void SetGroupsToIgnore();
	void SetGroupsToAvoidMask();
	void SetGroupsToAvoid();
	void SetAvoidanceGroupMask();
	void SetAvoidanceGroup();
	void SetAvoidanceEnabled();
	void K2_GetWalkableFloorZ();
	void K2_GetWalkableFloorAngle();
	void K2_GetModifiedMaxAcceleration();
	void K2_FindFloor();
	void K2_ComputeFloorDist();
	void IsWalking();
	void IsWalkable();
	void GetValidPerchRadius();
	void GetPerchRadiusThreshold();
	void GetMovementBase();
	void GetMinAnalogSpeed();
	void GetMaxJumpHeightWithJumpTime();
	void GetMaxJumpHeight();
	void GetMaxBrakingDeceleration();
	void GetMaxAcceleration();
	void GetLastUpdateVelocity();
	void GetLastUpdateRotation();
	void GetLastUpdateLocation();
	void GetImpartedMovementBaseVelocity();
	void GetCurrentAcceleration();
	void GetCharacterOwner();
	void GetAnalogInputModifier();
	void DisableMovement();
	void ClearAccumulatedForces();
	void CapsuleTouched();
	void CalcVelocity();
	void AddImpulse();
	void AddForce();
};


// Class Engine.GameInstance
// 0x618DF380
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x618DF380];                                // 0x0000(0x618DF380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}


	void ReceiveShutdown();
	void ReceiveInit();
	void HandleTravelError();
	void HandleNetworkError();
	void DebugRemovePlayer();
	void DebugCreatePlayer();
};


// Class Engine.Info
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.GameModeBase
// 0x5AF9FD00
class AGameModeBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5AF9FD00];                                // 0x0000(0x5AF9FD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}


	void StartPlay();
	void SpawnDefaultPawnFor();
	void SpawnDefaultPawnAtTransform();
	void ShouldReset();
	void ReturnToMainMenuHost();
	void RestartPlayerAtTransform();
	void RestartPlayerAtPlayerStart();
	void RestartPlayer();
	void ResetLevel();
	void PlayerCanRestart();
	void MustSpectate();
	void K2_PostLogin();
	void K2_OnSwapPlayerControllers();
	void K2_OnRestartPlayer();
	void K2_OnLogout();
	void K2_OnChangeName();
	void K2_FindPlayerStart();
	void InitStartSpot();
	void InitializeHUDForPlayer();
	void HasMatchStarted();
	void HandleStartingNewPlayer();
	void GetNumSpectators();
	void GetNumPlayers();
	void GetDefaultPawnClassForController();
	void FindPlayerStart();
	void ChoosePlayerStart();
	void ChangeName();
	void CanSpectate();
};


// Class Engine.GameMode
// 0x0F80 (0x5AFA0C80 - 0x5AF9FD00)
class AGameMode : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0xF80];                                     // 0x5AF9FD00(0x0F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}


	void StartMatch();
	void SetBandwidthLimit();
	void Say();
	void RestartGame();
	void ReadyToStartMatch();
	void ReadyToEndMatch();
	void K2_OnSetMatchState();
	void IsMatchInProgress();
	void HasMatchEnded();
	void GetMatchState();
	void EndMatch();
	void AbortMatch();
};


// Class Engine.Controller
// 0x1A0000 (0x5B13E000 - 0x5AF9E000)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A0000];                                  // 0x5AF9E000(0x1A0000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation();
	void SetIgnoreMoveInput();
	void SetIgnoreLookInput();
	void SetControlRotation();
	void ResetIgnoreMoveInput();
	void ResetIgnoreLookInput();
	void ResetIgnoreInputFlags();
	void ReceiveUnPossess();
	void ReceivePossess();
	void ReceiveInstigatedAnyDamage();
	void Possess();
	void OnRep_PlayerState();
	void OnRep_Pawn();
	void LineOfSightTo();
	void K2_GetPawn();
	void IsPlayerController();
	void IsMoveInputIgnored();
	void IsLookInputIgnored();
	void IsLocalPlayerController();
	void IsLocalController();
	void GetViewTarget();
	void GetDesiredRotation();
	void GetControlRotation();
	void ClientSetRotation();
	void ClientSetLocation();
	void CastToPlayerController();
};


// Class Engine.PlayerController
// 0x8880 (0x5B146880 - 0x5B13E000)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x8880];                                    // 0x5B13E000(0x8880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	void WasInputKeyJustReleased();
	void WasInputKeyJustPressed();
	void ToggleSpeaking();
	void TestServerLevelVisibilityChange();
	void SwitchLevel();
	void StopHapticEffect();
	void StartFire();
	void SetVirtualJoystickVisibility();
	void SetViewTargetWithBlend();
	void SetShowMouseCursor();
	void SetName();
	void SetMouseLocation();
	void SetMouseCursorWidget();
	void SetHapticsByValue();
	void SetDisableHaptics();
	void SetControllerLightColor();
	void SetCinematicMode();
	void SetAudioListenerOverride();
	void SetAudioListenerAttenuationOverride();
	void ServerViewSelf();
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateMultipleLevelsVisibility();
	void ServerUpdateLevelVisibility();
	void ServerUpdateCamera();
	void ServerUnmutePlayer();
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorWaiting();
	void ServerSetSpectatorLocation();
	void ServerRestartPlayer();
	void ServerPause();
	void ServerNotifyLoadedWorld();
	void ServerMutePlayer();
	void ServerExecRPC();
	void ServerExec();
	void ServerCheckClientPossessionReliable();
	void ServerCheckClientPossession();
	void ServerChangeName();
	void ServerCamera();
	void ServerAcknowledgePossession();
	void SendToConsole();
	void RestartLevel();
	void ResetControllerLightColor();
	void ProjectWorldLocationToScreen();
	void PlayHapticEffect();
	void PlayDynamicForceFeedback();
	void Pause();
	void OnServerStartedVisualLogger();
	void LocalTravel();
	void K2_ClientPlayForceFeedback();
	void IsInputKeyDown();
	void GetViewportSize();
	void GetSpectatorPawn();
	void GetMousePosition();
	void GetInputVectorKeyState();
	void GetInputTouchState();
	void GetInputMouseDelta();
	void GetInputMotionState();
	void GetInputKeyTimeDown();
	void GetInputAnalogStickState();
	void GetInputAnalogKeyState();
	void GetHUD();
	void GetHitResultUnderFingerForObjects();
	void GetHitResultUnderFingerByChannel();
	void GetHitResultUnderFinger();
	void GetHitResultUnderCursorForObjects();
	void GetHitResultUnderCursorByChannel();
	void GetHitResultUnderCursor();
	void GetFocalLocation();
	void FOV();
	void EnableCheats();
	void DeprojectScreenPositionToWorld();
	void DeprojectMousePositionToWorld();
	void ConsoleKey();
	void ClientWasKicked();
	void ClientVoiceHandshakeComplete();
	void ClientUpdateMultipleLevelsStreamingStatus();
	void ClientUpdateLevelStreamingStatus();
	void ClientUnmutePlayer();
	void ClientTravelInternal();
	void ClientTravel();
	void ClientTeamMessage();
	void ClientStopForceFeedback();
	void ClientStopCameraShakesFromSource();
	void ClientStopCameraShake();
	void ClientStopCameraAnim();
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect();
	void ClientSetViewTarget();
	void ClientSetSpectatorWaiting();
	void ClientSetHUD();
	void ClientSetForceMipLevelsToBeResident();
	void ClientSetCinematicMode();
	void ClientSetCameraMode();
	void ClientSetCameraFade();
	void ClientSetBlockOnAsyncLoading();
	void ClientReturnToMainMenuWithTextReason();
	void ClientReturnToMainMenu();
	void ClientRetryClientRestart();
	void ClientRestart();
	void ClientReset();
	void ClientRepObjRef();
	void ClientReceiveLocalizedMessage();
	void ClientPrestreamTextures();
	void ClientPrepareMapChange();
	void ClientPlaySoundAtLocation();
	void ClientPlaySound();
	void ClientPlayForceFeedback_Internal();
	void ClientPlayCameraShakeFromSource();
	void ClientPlayCameraShake();
	void ClientPlayCameraAnim();
	void ClientMutePlayer();
	void ClientMessage();
	void ClientIgnoreMoveInput();
	void ClientIgnoreLookInput();
	void ClientGotoState();
	void ClientGameEnded();
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEndOnlineSession();
	void ClientEnableNetworkVoice();
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth();
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc();
	void ClearAudioListenerOverride();
	void ClearAudioListenerAttenuationOverride();
	void CanRestartPlayer();
	void Camera();
	void AddYawInput();
	void AddRollInput();
	void AddPitchInput();
	void ActivateTouchInterface();
};


// Class Engine.PlayerInput
// 0x5B09C5E0
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09C5E0];                                // 0x0000(0x5B09C5E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void SetMouseSensitivity();
	void SetBind();
	void InvertAxisKey();
	void InvertAxis();
	void ClearSmoothing();
};


// Class Engine.InputComponent
// 0xA4EC6C0 (0x5B09C540 - 0x50BAFE80)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA4EC6C0];                                 // 0x50BAFE80(0xA4EC6C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	void WasControllerKeyJustReleased();
	void WasControllerKeyJustPressed();
	void IsControllerKeyDown();
	void GetTouchState();
	void GetControllerVectorKeyState();
	void GetControllerMouseDelta();
	void GetControllerKeyTimeDown();
	void GetControllerAnalogStickState();
	void GetControllerAnalogKeyState();
};


// Class Engine.ScriptViewportClient
// 0x0000
class UScriptViewportClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x5B163B80
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x5B163B80];                                // 0x0000(0x5B163B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget();
};


// Class Engine.Console
// 0x5B148C00
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B148C00];                                // 0x0000(0x5B148C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.ShippingConsole
// 0xFFFFFFFFA4EB7400 (0x0000 - 0x5B148C00)
class UShippingConsole : public UConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShippingConsole");
		return ptr;
	}

};


// Class Engine.WorldSettings
// 0x5B149600
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B149600];                                // 0x0000(0x5B149600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}


	void OnRep_WorldGravityZ();
};


// Class Engine.AssetManager
// 0x5B09D4E0
class UAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09D4E0];                                // 0x0000(0x5B09D4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManager");
		return ptr;
	}

};


// Class Engine.DataAsset
// 0x5B09D440
class UDataAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09D440];                                // 0x0000(0x5B09D440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.PrimaryDataAsset
// 0xFFFFFFFFA4F62BC0 (0x0000 - 0x5B09D440)
class UPrimaryDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryDataAsset");
		return ptr;
	}

};


// Class Engine.HUD
// 0x1C9E80 (0x5B167E80 - 0x5AF9E000)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C9E80];                                  // 0x5AF9E000(0x1C9E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void ShowHUD();
	void ShowDebugToggleSubCategory();
	void ShowDebugForReticleTargetToggle();
	void ShowDebug();
	void RemoveDebugText();
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease();
	void ReceiveHitBoxEndCursorOver();
	void ReceiveHitBoxClick();
	void ReceiveHitBoxBeginCursorOver();
	void ReceiveDrawHUD();
	void Project();
	void PreviousDebugTarget();
	void NextDebugTarget();
	void GetTextSize();
	void GetOwningPlayerController();
	void GetOwningPawn();
	void GetActorsInSelectionRectangle();
	void DrawTextureSimple();
	void DrawTexture();
	void DrawText();
	void DrawRect();
	void DrawMaterialTriangle();
	void DrawMaterialSimple();
	void DrawMaterial();
	void DrawLine();
	void Deproject();
	void AddHitBox();
	void AddDebugText();
};


// Class Engine.Brush
// 0x1E7C80 (0x5B185C80 - 0x5AF9E000)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1E7C80];                                  // 0x5AF9E000(0x1E7C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0xFFFFFFFFA4E7A380 (0x0000 - 0x5B185C80)
class AVolume : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.World
// 0x5E3DDD00
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3DDD00];                                // 0x0000(0x5E3DDD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}


	void K2_GetWorldSettings();
	void HandleTimelineScrubbed();
};


// Class Engine.InterpTrack
// 0x5B191960
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B191960];                                // 0x0000(0x5B191960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x188A0 (0x5B1AA200 - 0x5B191960)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x188A0];                                   // 0x5B191960(0x188A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x186A0 (0x5B1AA000 - 0x5B191960)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x186A0];                                   // 0x5B191960(0x186A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.SkeletalMeshComponent
// 0xB5000 (0x5B193300 - 0x5B0DE300)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xB5000];                                   // 0x5B0DE300(0xB5000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void UnlinkAnimClassLayers();
	void UnbindClothFromMasterPoseComponent();
	void ToggleDisablePostProcessBlueprint();
	void TermBodiesBelow();
	void SuspendClothingSimulation();
	void Stop();
	void SnapshotPose();
	void SetUpdateAnimationInEditor();
	void SetTeleportRotationThreshold();
	void SetTeleportDistanceThreshold();
	void SetPosition();
	void SetPlayRate();
	void SetPhysicsBlendWeight();
	void SetNotifyRigidBodyCollisionBelow();
	void SetMorphTarget();
	void SetEnablePhysicsBlending();
	void SetEnableGravityOnAllBodiesBelow();
	void SetEnableBodyGravity();
	void SetDisablePostProcessBlueprint();
	void SetDisableAnimCurves();
	void SetConstraintProfileForAll();
	void SetConstraintProfile();
	void SetClothMaxDistanceScale();
	void SetBodyNotifyRigidBodyCollision();
	void SetAnimClass();
	void SetAnimationMode();
	void SetAnimation();
	void SetAngularLimits();
	void SetAllowRigidBodyAnimNode();
	void SetAllowedAnimCurvesEvaluation();
	void SetAllowAnimCurveEvaluation();
	void SetAllMotorsAngularVelocityDrive();
	void SetAllMotorsAngularPositionDrive();
	void SetAllMotorsAngularDriveParams();
	void SetAllBodiesSimulatePhysics();
	void SetAllBodiesPhysicsBlendWeight();
	void SetAllBodiesBelowSimulatePhysics();
	void SetAllBodiesBelowPhysicsBlendWeight();
	void ResumeClothingSimulation();
	void ResetClothTeleportMode();
	void ResetAnimInstanceDynamics();
	void ResetAllowedAnimCurveEvaluation();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation();
	void Play();
	void OverrideAnimationData();
	void LinkAnimGraphByTag();
	void LinkAnimClassLayers();
	void K2_GetClosestPointOnPhysicsAsset();
	void IsPlaying();
	void IsClothingSimulationSuspended();
	void IsBodyGravityEnabled();
	void HasValidAnimationInstance();
	void GetTeleportRotationThreshold();
	void GetTeleportDistanceThreshold();
	void GetSkeletalCenterOfMass();
	void GetPostProcessInstance();
	void GetPosition();
	void GetPlayRate();
	void GetMorphTarget();
	void GetLinkedAnimLayerInstanceByGroup();
	void GetLinkedAnimLayerInstanceByClass();
	void GetLinkedAnimGraphInstancesByTag();
	void GetLinkedAnimGraphInstanceByTag();
	void GetDisablePostProcessBlueprint();
	void GetDisableAnimCurves();
	void GetCurrentJointAngles();
	void GetClothMaxDistanceScale();
	void GetClothingSimulationInteractor();
	void GetBoneMass();
	void GetAnimInstance();
	void GetAnimClass();
	void GetAnimationMode();
	void GetAllowRigidBodyAnimNode();
	void GetAllowedAnimCurveEvaluate();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void FindConstraintBoneName();
	void ClearMorphTargets();
	void BreakConstraint();
	void BindClothToMasterPoseComponent();
	void AllowAnimCurveEvaluation();
	void AddImpulseToAllBodiesBelow();
	void AddForceToAllBodiesBelow();
	void AccumulateAllBodiesBelowPhysicsBlendWeight();
};


// Class Engine.AnimNotify
// 0x0000
class UAnimNotify : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	void Received_Notify();
	void GetNotifyName();
};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x5B1CA480
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B1CA480];                                // 0x0000(0x5B1CA480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimInstance
// 0x5B1CEF00
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1CEF00];                                // 0x0000(0x5B1CEF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}


	void UnlockAIResources();
	void UnlinkAnimClassLayers();
	void TryGetPawnOwner();
	void StopSlotAnimation();
	void SnapshotPose();
	void SetRootMotionMode();
	void SetReceiveNotifiesFromLinkedInstances();
	void SetPropagateNotifiesToLinkedInstances();
	void SetMorphTarget();
	void SavePoseSnapshot();
	void ResetDynamics();
	void PlaySlotAnimationAsDynamicMontage();
	void PlaySlotAnimation();
	void Montage_StopGroupByName();
	void Montage_Stop_By_Instance_ID();
	void Montage_Stop();
	void Montage_SetPosition();
	void Montage_SetPlayRate();
	void Montage_SetNextSection();
	void Montage_Resume();
	void Montage_Play();
	void Montage_Pause();
	void Montage_JumpToSectionsEnd();
	void Montage_JumpToSection();
	void Montage_IsPlaying_By_Instance_ID();
	void Montage_IsPlaying();
	void Montage_IsActive();
	void Montage_GetPosition();
	void Montage_GetPlayRate();
	void Montage_GetIsStopped();
	void Montage_GetCurrentSection();
	void Montage_GetBlendTime();
	void LockAIResources();
	void LinkAnimGraphByTag();
	void LinkAnimClassLayers();
	void IsSyncGroupBetweenMarkers();
	void IsPlayingSlotAnimation();
	void IsAnyMontagePlaying();
	void HasMarkerBeenHitThisFrame();
	void GetTimeToClosestMarker();
	void GetSyncGroupPosition();
	void GetRelevantAnimTimeRemainingFraction();
	void GetRelevantAnimTimeRemaining();
	void GetRelevantAnimTimeFraction();
	void GetRelevantAnimTime();
	void GetRelevantAnimLength();
	void GetReceiveNotifiesFromLinkedInstances();
	void GetPropagateNotifiesToLinkedInstances();
	void GetOwningComponent();
	void GetOwningActor();
	void GetLinkedAnimLayerInstanceByGroup();
	void GetLinkedAnimLayerInstanceByClass();
	void GetLinkedAnimGraphInstancesByTag();
	void GetLinkedAnimGraphInstanceByTag();
	void GetInstanceTransitionTimeElapsedFraction();
	void GetInstanceTransitionTimeElapsed();
	void GetInstanceTransitionCrossfadeDuration();
	void GetInstanceStateWeight();
	void GetInstanceMachineWeight();
	void GetInstanceCurrentStateElapsedTime();
	void GetInstanceAssetPlayerTimeFromEndFraction();
	void GetInstanceAssetPlayerTimeFromEnd();
	void GetInstanceAssetPlayerTimeFraction();
	void GetInstanceAssetPlayerTime();
	void GetInstanceAssetPlayerLength();
	void GetCurveValue();
	void GetCurrentStateName();
	void GetCurrentActiveMontage();
	void GetAllCurveNames();
	void GetActiveCurveNames();
	void Get_Montage_By_Instance_ID();
	void ClearMorphTargets();
	void CalculateDirection();
	void BlueprintUpdateAnimation();
	void BlueprintPostEvaluateAnimation();
	void BlueprintLinkedAnimationLayersInitialized();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};


// Class Engine.DecalComponent
// 0xA548D00 (0x5B1E1480 - 0x50C98780)
class UDecalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA548D00];                                 // 0x50C98780(0xA548D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void SetSortOrder();
	void SetFadeScreenSize();
	void SetFadeOut();
	void SetFadeIn();
	void SetDecalMaterial();
	void GetFadeStartDelay();
	void GetFadeInStartDelay();
	void GetFadeInDuration();
	void GetFadeDuration();
	void GetDecalMaterial();
	void CreateDynamicMaterialInstance();
};


// Class Engine.FXSystemComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class UFXSystemComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FXSystemComponent");
		return ptr;
	}


	void SetVectorParameter();
	void SetUseAutoManageAttachment();
	void SetFloatParameter();
	void SetEmitterEnable();
	void SetColorParameter();
	void SetBoolParameter();
	void SetAutoAttachmentParameters();
	void SetActorParameter();
	void ReleaseToPool();
	void GetFXSystemAsset();
};


// Class Engine.FXSystemAsset
// 0x5B1F7500
class UFXSystemAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1F7500];                                // 0x0000(0x5B1F7500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FXSystemAsset");
		return ptr;
	}

};


// Class Engine.AnimNotifyState
// 0x0000
class UAnimNotifyState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	void Received_NotifyTick();
	void Received_NotifyEnd();
	void Received_NotifyBegin();
	void GetNotifyName();
};


// Class Engine.Commandlet
// 0x5B1FED00
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1FED00];                                // 0x0000(0x5B1FED00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.AnimBoneCompressionCodec
// 0x5B1FEC80
class UAnimBoneCompressionCodec : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1FEC80];                                // 0x0000(0x5B1FEC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBoneCompressionCodec");
		return ptr;
	}

};


// Class Engine.AnimCurveCompressionCodec
// 0x0000
class UAnimCurveCompressionCodec : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0xA56B580 (0x5B203D00 - 0x50C98780)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA56B580];                                 // 0x50C98780(0xA56B580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void StopDelayed();
	void Stop();
	void SetWaveParameter();
	void SetVolumeMultiplier();
	void SetUISound();
	void SetSubmixSend();
	void SetSourceBusSendPreEffect();
	void SetSourceBusSendPostEffect();
	void SetSound();
	void SetPitchMultiplier();
	void SetPaused();
	void SetLowPassFilterFrequency();
	void SetLowPassFilterEnabled();
	void SetIntParameter();
	void SetFloatParameter();
	void SetBoolParameter();
	void Play();
	void IsPlaying();
	void HasCookedFFTData();
	void HasCookedAmplitudeEnvelopeData();
	void GetPlayState();
	void GetCookedFFTDataForAllPlayingSounds();
	void GetCookedFFTData();
	void GetCookedEnvelopeDataForAllPlayingSounds();
	void GetCookedEnvelopeData();
	void FadeOut();
	void FadeIn();
	void BP_GetAttenuationSettingsToApply();
	void AdjustVolume();
	void AdjustAttenuation();
};


// Class Engine.AssetImportData
// 0x0000
class UAssetImportData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.SaveGame
// 0x0000
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.GameStateBase
// 0x5AF57E00
class AGameStateBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5AF57E00];                                // 0x0000(0x5AF57E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}


	void OnRep_SpectatorClass();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_ReplicatedHasBegunPlay();
	void OnRep_GameModeClass();
	void HasMatchStarted();
	void HasBegunPlay();
	void GetServerWorldTimeSeconds();
	void GetPlayerStartTime();
	void GetPlayerRespawnDelay();
};


// Class Engine.GameState
// 0x4A280 (0x5AFA2080 - 0x5AF57E00)
class AGameState : public AGameStateBase
{
public:
	unsigned char                                      UnknownData00[0x4A280];                                   // 0x5AF57E00(0x4A280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}


	void OnRep_MatchState();
	void OnRep_ElapsedTime();
	void CheckIsEnemy();
};


// Class Engine.Subsystem
// 0x0000
class USubsystem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Subsystem");
		return ptr;
	}

};


// Class Engine.DynamicSubsystem
// 0x0000
class UDynamicSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSubsystem");
		return ptr;
	}

};


// Class Engine.EngineSubsystem
// 0x0000
class UEngineSubsystem : public UDynamicSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineSubsystem");
		return ptr;
	}

};


// Class Engine.SoundEffectPreset
// 0x0000
class USoundEffectPreset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectPreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePreset
// 0x0000
class USoundEffectSourcePreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSubmixPreset
// 0x0000
class USoundEffectSubmixPreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSubmixPreset");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.ShapeComponent
// 0x475800 (0x5B27CD80 - 0x5AE07580)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x475800];                                  // 0x5AE07580(0x475800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.SphereComponent
// 0xFFFFFFFFFFFFFD00 (0x5B27CA80 - 0x5B27CD80)
class USphereComponent : public UShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}


	void SetSphereRadius();
	void GetUnscaledSphereRadius();
	void GetShapeScale();
	void GetScaledSphereRadius();
};


// Class Engine.AnimNotifyState_Trail
// 0x5B296B80
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5B296B80];                                // 0x0000(0x5B296B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}


	void OverridePSTemplate();
};


// Class Engine.CameraModifier
// 0x5B2D5500
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2D5500];                                // 0x0000(0x5B2D5500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}


	void IsDisabled();
	void GetViewTarget();
	void EnableModifier();
	void DisableModifier();
	void BlueprintModifyPostProcess();
	void BlueprintModifyCamera();
};


// Class Engine.CameraShake
// 0x5D971C80
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D971C80];                                // 0x0000(0x5D971C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}


	void ReceiveStopShake();
	void ReceivePlayShake();
	void ReceiveIsFinished();
	void BlueprintUpdateCameraShake();
};


// Class Engine.CapsuleComponent
// 0x26F6180 (0x5D972F00 - 0x5B27CD80)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x26F6180];                                 // 0x5B27CD80(0x26F6180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}


	void SetCapsuleSize();
	void SetCapsuleRadius();
	void SetCapsuleHalfHeight();
	void GetUnscaledCapsuleSize_WithoutHemisphere();
	void GetUnscaledCapsuleSize();
	void GetUnscaledCapsuleRadius();
	void GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	void GetUnscaledCapsuleHalfHeight();
	void GetShapeScale();
	void GetScaledCapsuleSize_WithoutHemisphere();
	void GetScaledCapsuleSize();
	void GetScaledCapsuleRadius();
	void GetScaledCapsuleHalfHeight_WithoutHemisphere();
	void GetScaledCapsuleHalfHeight();
};


// Class Engine.DamageType
// 0x5D97FF00
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D97FF00];                                // 0x0000(0x5D97FF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x5D985D00
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5D985D00];                                // 0x0000(0x5D985D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.GameUserSettings
// 0x5D9C8580
class UGameUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9C8580];                                // 0x0000(0x5D9C8580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}


	void ValidateSettings();
	void SupportsHDRDisplayOutput();
	void SetVSyncEnabled();
	void SetVisualEffectQuality();
	void SetViewDistanceQuality();
	void SetToDefaults();
	void SetTextureQuality();
	void SetShadowQuality();
	void SetShadingQuality();
	void SetScreenResolution();
	void SetResolutionScaleValueEx();
	void SetResolutionScaleValue();
	void SetResolutionScaleNormalized();
	void SetPostProcessingQuality();
	void SetOverallScalabilityLevel();
	void SetFullscreenMode();
	void SetFrameRateLimit();
	void SetFoliageQuality();
	void SetDynamicResolutionEnabled();
	void SetBenchmarkFallbackValues();
	void SetAudioQualityLevel();
	void SetAntiAliasingQuality();
	void SaveSettings();
	void RunHardwareBenchmark();
	void RevertVideoMode();
	void ResetToCurrentSettings();
	void LoadSettings();
	void IsVSyncEnabled();
	void IsVSyncDirty();
	void IsScreenResolutionDirty();
	void IsHDREnabled();
	void IsFullscreenModeDirty();
	void IsDynamicResolutionEnabled();
	void IsDynamicResolutionDirty();
	void IsDirty();
	void GetVisualEffectQuality();
	void GetViewDistanceQuality();
	void GetTextureQuality();
	void GetSyncInterval();
	void GetShadowQuality();
	void GetShadingQuality();
	void GetScreenResolution();
	void GetResolutionScaleNormalized();
	void GetResolutionScaleInformationEx();
	void GetResolutionScaleInformation();
	void GetRecommendedResolutionScale();
	void GetPreferredFullscreenMode();
	void GetPostProcessingQuality();
	void GetOverallScalabilityLevel();
	void GetLastConfirmedScreenResolution();
	void GetLastConfirmedFullscreenMode();
	void GetGameUserSettings();
	void GetFullscreenMode();
	void GetFrameRateLimit();
	void GetFramePace();
	void GetFoliageQuality();
	void GetDesktopResolution();
	void GetDefaultWindowPosition();
	void GetDefaultWindowMode();
	void GetDefaultResolutionScale();
	void GetDefaultResolution();
	void GetCurrentHDRDisplayNits();
	void GetAudioQualityLevel();
	void GetAntiAliasingQuality();
	void EnableHDRDisplayOutput();
	void ConfirmVideoMode();
	void ApplySettings();
	void ApplyResolutionSettings();
	void ApplyNonResolutionSettings();
	void ApplyHardwareBenchmarkResults();
};


// Class Engine.DataTable
// 0x5D9D3E00
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9D3E00];                                // 0x0000(0x5D9D3E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x2A86400 (0x5DA24400 - 0x5AF9E000)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A86400];                                 // 0x5AF9E000(0x2A86400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	void GetAutoActivatePlayerIndex();
};


// Class Engine.PrimaryAssetLabel
// 0x5DA26E00
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5DA26E00];                                // 0x0000(0x5DA26E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryAssetLabel");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.NavAreaBase
// 0x0000
class UNavAreaBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaBase");
		return ptr;
	}

};


// Class Engine.StaticMeshComponent
// 0xCE09E60 (0x5DA48B00 - 0x50C3ECA0)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xCE09E60];                                 // 0x50C3ECA0(0xCE09E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	void SetStaticMesh();
	void SetReverseCulling();
	void SetForcedLodModel();
	void SetDistanceFieldSelfShadowBias();
	void OnRep_StaticMesh();
	void GetLocalBounds();
};


// Class Engine.NavigationObjectBase
// 0x2AAD580 (0x5DA4B580 - 0x5AF9E000)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2AAD580];                                 // 0x5AF9E000(0x2AAD580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x2AC6E00 (0x5DA64E00 - 0x5AF9E000)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2AC6E00];                                 // 0x5AF9E000(0x2AC6E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}


	void StopCameraShake();
	void StopCameraFade();
	void StopCameraAnimInst();
	void StopAllInstancesOfCameraShakeFromSource();
	void StopAllInstancesOfCameraShake();
	void StopAllInstancesOfCameraAnim();
	void StopAllCameraShakes();
	void StopAllCameraAnims();
	void StartCameraFade();
	void SetManualCameraFade();
	void SetGameCameraCutThisFrame();
	void RemoveCameraModifier();
	void RemoveCameraLensEffect();
	void PlayCameraShakeFromSource();
	void PlayCameraShake();
	void PlayCameraAnim();
	void PhotographyCameraModify();
	void OnPhotographySessionStart();
	void OnPhotographySessionEnd();
	void OnPhotographyMultiPartCaptureStart();
	void OnPhotographyMultiPartCaptureEnd();
	void GetOwningPlayerController();
	void GetFOVAngle();
	void GetCameraRotation();
	void GetCameraLocation();
	void FindCameraModifierByClass();
	void ClearCameraLensEffects();
	void BlueprintUpdateCamera();
	void AddNewCameraModifier();
	void AddCameraLensEffect();
};


// Class Engine.PlayerStart
// 0x55900 (0x5DAA0E80 - 0x5DA4B580)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x55900];                                   // 0x5DA4B580(0x55900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.PlayerState
// 0x5DAA1F80
class APlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DAA1F80];                                // 0x0000(0x5DAA1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}


	void ReceiveOverrideWith();
	void ReceiveCopyProperties();
	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_PlayerId();
	void OnRep_bIsInactive();
	void GetPlayerName();
};


// Class Engine.ProjectileMovementComponent
// 0x2D80 (0x50C05D00 - 0x50C02F80)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x2D80];                                    // 0x50C02F80(0x2D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}


	void StopSimulating();
	void SetVelocityInLocalSpace();
	void SetInterpolatedComponent();
	void ResetInterpolation();
	void OnProjectileStopDelegate__DelegateSignature();
	void OnProjectileBounceDelegate__DelegateSignature();
	void MoveInterpolationTarget();
	void LimitVelocity();
	void IsVelocityUnderSimulationThreshold();
	void IsInterpolationComplete();
};


// Class Engine.DefaultPawn
// 0x298F300 (0x5DAC3980 - 0x5B134680)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x298F300];                                 // 0x5B134680(0x298F300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}


	void TurnAtRate();
	void MoveUp_World();
	void MoveRight();
	void MoveForward();
	void LookUpAtRate();
};


// Class Engine.SpectatorPawn
// 0xFFFFFFFFA253C680 (0x0000 - 0x5DAC3980)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.SpringArmComponent
// 0xCE32500 (0x5DACAC80 - 0x50C98780)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCE32500];                                 // 0x50C98780(0xCE32500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}


	void IsCollisionFixApplied();
	void GetUnfixedCameraPosition();
	void GetTargetRotation();
};


// Class Engine.ParticleSystemComponent
// 0x5DB1ED80
class UParticleSystemComponent : public UFXSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x5DB1ED80];                                // 0x0000(0x5DB1ED80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void SetTrailSourceData();
	void SetTemplate();
	void SetParticleChannels();
	void SetMaterialParameter();
	void SetBeamTargetTangent();
	void SetBeamTargetStrength();
	void SetBeamTargetPoint();
	void SetBeamSourceTangent();
	void SetBeamSourceStrength();
	void SetBeamSourcePoint();
	void SetBeamEndPoint();
	void SetAutoAttachParams();
	void GetNumActiveParticles();
	void GetNamedMaterial();
	void GetBeamTargetTangent();
	void GetBeamTargetStrength();
	void GetBeamTargetPoint();
	void GetBeamSourceTangent();
	void GetBeamSourceStrength();
	void GetBeamSourcePoint();
	void GetBeamEndPoint();
	void GenerateParticleEvent();
	void EndTrails();
	void CreateNamedDynamicMaterialInstance();
	void BeginTrails();
};


// Class Engine.SkyLight
// 0x5DBF5280
class ASkyLight : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DBF5280];                                // 0x0000(0x5DBF5280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.Texture
// 0x2B15980 (0x5DBF4B80 - 0x5B0DF200)
class UTexture : public UStreamableRenderAsset
{
public:
	unsigned char                                      UnknownData00[0x2B15980];                                 // 0x5B0DF200(0x2B15980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0xFFFFFFFFA240B480 (0x0000 - 0x5DBF4B80)
class UTextureCube : public UTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x19A620 (0x5DBE3120 - 0x5DA48B00)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x19A620];                                  // 0x5DA48B00(0x19A620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}


	void UpdateInstanceTransform();
	void SetCustomDataValue();
	void SetCullDistances();
	void RemoveInstance();
	void GetInstanceTransform();
	void GetInstancesOverlappingSphere();
	void GetInstancesOverlappingBox();
	void GetInstanceCount();
	void ClearInstances();
	void BatchUpdateInstancesTransforms();
	void BatchUpdateInstancesTransform();
	void AddInstanceWorldSpace();
	void AddInstance();
};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0xFFFFFFFFFFFFFE20 (0x5DBE2F40 - 0x5DBE3120)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}


	void RemoveInstances();
};


// Class Engine.StaticMeshActor
// 0x2C74400 (0x5DC12400 - 0x5AF9E000)
class AStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C74400];                                 // 0x5AF9E000(0x2C74400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}


	void SetMobility();
};


// Class Engine.MaterialInterface
// 0x5DC19C00
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC19C00];                                // 0x0000(0x5DC19C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	void SetForceMipLevelsToBeResident();
	void GetPhysicalMaterialMask();
	void GetPhysicalMaterialFromMap();
	void GetPhysicalMaterial();
	void GetParameterInfo();
	void GetBaseMaterial();
};


// Class Engine.MaterialInstance
// 0xFFFFFFFFFFFFF900 (0x5DC19500 - 0x5DC19C00)
class UMaterialInstance : public UMaterialInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x1D80 (0x5DC1B280 - 0x5DC19500)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x1D80];                                    // 0x5DC19500(0x1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}


	void K2_GetVectorParameterValue();
	void K2_GetTextureParameterValue();
	void K2_GetScalarParameterValue();
};


// Class Engine.WorldSubsystem
// 0x0000
class UWorldSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSubsystem");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x5DC1BF80
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1BF80];                                // 0x0000(0x5DC1BF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.EngineCustomTimeStep
// 0x0000
class UEngineCustomTimeStep : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineCustomTimeStep");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.BlueprintGeneratedClass
// 0x5DC58680
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x5DC58680];                                // 0x0000(0x5DC58680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.CameraComponent
// 0xCFE9480 (0x5DC81C00 - 0x50C98780)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCFE9480];                                 // 0x50C98780(0xCFE9480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}


	void SetUseFieldOfViewForLOD();
	void SetProjectionMode();
	void SetPostProcessBlendWeight();
	void SetOrthoWidth();
	void SetOrthoNearClipPlane();
	void SetOrthoFarClipPlane();
	void SetFieldOfView();
	void SetConstraintAspectRatio();
	void SetAspectRatio();
	void RemoveBlendable();
	void OnCameraMeshHiddenChanged();
	void GetCameraView();
	void AddOrUpdateBlendable();
};


// Class Engine.SoundBase
// 0x5DC85E80
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC85E80];                                // 0x0000(0x5DC85E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x1480 (0x5DC87300 - 0x5DC85E80)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x5DC85E80(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0xFFFFFFFFA2378D00 (0x0000 - 0x5DC87300)
class USoundWaveProcedural : public USoundWave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x5DBEF740
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBEF740];                                // 0x0000(0x5DBEF740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0xFFFFFFFFFFFFFD80 (0x5DBEF4C0 - 0x5DBEF740)
class UBlueprint : public UBlueprintCore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.Model
// 0x0000
class UModel : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.Channel
// 0x5DCAC780
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCAC780];                                // 0x0000(0x5DCAC780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0xFFFFFFFFFFFFFF00 (0x5DCAC680 - 0x5DCAC780)
class UActorChannel : public UChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.AnimationAsset
// 0x5DCAE600
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCAE600];                                // 0x0000(0x5DCAE600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0xFFFFFFFFFFFFFB00 (0x5DCAE100 - 0x5DCAE600)
class UBlendSpaceBase : public UAnimationAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0xFFFFFFFFFFFFFF80 (0x5DCAE080 - 0x5DCAE100)
class UBlendSpace : public UBlendSpaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0xFFFFFFFFA2351F80 (0x0000 - 0x5DCAE080)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0xFFFFFFFFFFFFFF00 (0x5DCAE000 - 0x5DCAE100)
class UBlendSpace1D : public UBlendSpaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0xFFFFFFFFA2352000 (0x0000 - 0x5DCAE000)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.AISystemBase
// 0x5DCADE80
class UAISystemBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCADE80];                                // 0x0000(0x5DCADE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x2D0FA80 (0x5DCADA80 - 0x5AF9E000)
class AAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D0FA80];                                 // 0x5AF9E000(0x2D0FA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void Stop();
	void Play();
	void FadeOut();
	void FadeIn();
	void AdjustVolume();
};


// Class Engine.AnimationSettings
// 0x5DCAF680
class UAnimationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCAF680];                                // 0x0000(0x5DCAF680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0xBFFC0 (0x5DCAF480 - 0x5DBEF4C0)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0xBFFC0];                                   // 0x5DBEF4C0(0xBFFC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.AnimBlueprintGeneratedClass
// 0xFFFFFFFFFFF96300 (0x5DBEE980 - 0x5DC58680)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.AnimBoneCompressionSettings
// 0x5DBEE8E0
class UAnimBoneCompressionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBEE8E0];                                // 0x0000(0x5DBEE8E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBoneCompressionSettings");
		return ptr;
	}

};


// Class Engine.AnimClassData
// 0x5DBEFD80
class UAnimClassData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBEFD80];                                // 0x0000(0x5DBEFD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}

};


// Class Engine.AnimClassInterface
// 0x0000
class UAnimClassInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}

};


// Class Engine.AnimSequenceBase
// 0xFFFFFFFFFFF416E0 (0x5DBEFCE0 - 0x5DCAE600)
class UAnimSequenceBase : public UAnimationAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}


	void GetPlayLength();
};


// Class Engine.AnimCompositeBase
// 0xFFFFFFFFA2410320 (0x0000 - 0x5DBEFCE0)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x5DCAFA00
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x5DCAFA00];                                // 0x0000(0x5DCAFA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x2AB0B80 (0x5DCAF800 - 0x5B1FEC80)
class UAnimCompress : public UAnimBoneCompressionCodec
{
public:
	unsigned char                                      UnknownData00[0x2AB0B80];                                 // 0x5B1FEC80(0x2AB0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0xFFFFFFFFA2350800 (0x0000 - 0x5DCAF800)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000
class UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x11480 (0x5DCC0C80 - 0x5DCAF800)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x11480];                                   // 0x5DCAF800(0x11480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0xFFFFFFFFFFFFF580 (0x5DCC0200 - 0x5DCC0C80)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x10900 (0x5DCC0100 - 0x5DCAF800)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x10900];                                   // 0x5DCAF800(0x10900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x12880 (0x5DCC2080 - 0x5DCAF800)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x12880];                                   // 0x5DCAF800(0x12880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// 0x0000
class UAnimCurveCompressionCodec_CompressedRichCurve : public UAnimCurveCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec_CompressedRichCurve");
		return ptr;
	}

};


// Class Engine.AnimCurveCompressionCodec_UniformIndexable
// 0x0000
class UAnimCurveCompressionCodec_UniformIndexable : public UAnimCurveCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec_UniformIndexable");
		return ptr;
	}

};


// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// 0x0000
class UAnimCurveCompressionCodec_UniformlySampled : public UAnimCurveCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec_UniformlySampled");
		return ptr;
	}

};


// Class Engine.AnimCurveCompressionSettings
// 0x5DCC2000
class UAnimCurveCompressionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCC2000];                                // 0x0000(0x5DCC2000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionSettings");
		return ptr;
	}

};


// Class Engine.AnimLayerInterface
// 0x0000
class UAnimLayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimLayerInterface");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x5DCC1600
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC1600];                                // 0x0000(0x5DCC1600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}


	void GetDefaultBlendOutTime();
};


// Class Engine.AnimNotify_PauseClothingSimulation
// 0x0000
class UAnimNotify_PauseClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PauseClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlaySound
// 0x5DCC1380
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5DCC1380];                                // 0x0000(0x5DCC1380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000
class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetDynamics
// 0x0000
class UAnimNotify_ResetDynamics : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetDynamics");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResumeClothingSimulation
// 0x0000
class UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResumeClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_DisableRootMotion
// 0x0000
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_DisableRootMotion");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x5DCC1100
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5DCC1100];                                // 0x0000(0x5DCC1100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0xD2D20 (0x5DCC2A00 - 0x5DBEFCE0)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0xD2D20];                                   // 0x5DBEFCE0(0xD2D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x5DCC2580
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCC2580];                                // 0x0000(0x5DCC2580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x2AF4C00 (0x5DCC3B00 - 0x5B1CEF00)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2AF4C00];                                 // 0x5B1CEF00(0x2AF4C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}


	void StopAnim();
	void SetReverse();
	void SetPreviewCurveOverride();
	void SetPositionWithPreviousTime();
	void SetPosition();
	void SetPlayRate();
	void SetPlaying();
	void SetLooping();
	void SetBlendSpaceInput();
	void SetAnimationAsset();
	void PlayAnim();
	void GetLength();
	void GetAnimationAsset();
};


// Class Engine.AnimStateMachineTypes
// 0x0000
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.AnimStreamable
// 0xD39A0 (0x5DCC3680 - 0x5DBEFCE0)
class UAnimStreamable : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0xD39A0];                                   // 0x5DBEFCE0(0xD39A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStreamable");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x50F80 (0x50C00E00 - 0x50BAFE80)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50F80];                                   // 0x50BAFE80(0x50F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x2EBBE00 (0x5DCC3380 - 0x5AE07580)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2EBBE00];                                 // 0x5AE07580(0x2EBBE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}


	void SetArrowColor();
};


// Class Engine.AssetExportTask
// 0x5DCC4E80
class UAssetExportTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCC4E80];                                // 0x0000(0x5DCC4E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetExportTask");
		return ptr;
	}

};


// Class Engine.AssetManagerSettings
// 0x5DCD07E0
class UAssetManagerSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCD07E0];                                // 0x0000(0x5DCD07E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManagerSettings");
		return ptr;
	}

};


// Class Engine.AssetMappingTable
// 0x5DCD0740
class UAssetMappingTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD0740];                                // 0x0000(0x5DCD0740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetMappingTable");
		return ptr;
	}

};


// Class Engine.AsyncActionHandleSaveGame
// 0x5DCC6280
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC6280];                                // 0x0000(0x5DCC6280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionHandleSaveGame");
		return ptr;
	}


	void AsyncSaveGameToSlot();
	void AsyncLoadGameFromSlot();
};


// Class Engine.AsyncActionLoadPrimaryAssetBase
// 0x0000
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetBase");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAsset
// 0x5DCC6000
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC6000];                                // 0x0000(0x5DCC6000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAsset");
		return ptr;
	}


	void AsyncLoadPrimaryAsset();
};


// Class Engine.AsyncActionLoadPrimaryAssetClass
// 0x5DCC5D80
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC5D80];                                // 0x0000(0x5DCC5D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClass");
		return ptr;
	}


	void AsyncLoadPrimaryAssetClass();
};


// Class Engine.AsyncActionLoadPrimaryAssetList
// 0x5DCC5B00
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC5B00];                                // 0x0000(0x5DCC5B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetList");
		return ptr;
	}


	void AsyncLoadPrimaryAssetList();
};


// Class Engine.AsyncActionLoadPrimaryAssetClassList
// 0x5DCC5880
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC5880];                                // 0x0000(0x5DCC5880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClassList");
		return ptr;
	}


	void AsyncLoadPrimaryAssetClassList();
};


// Class Engine.AsyncActionChangePrimaryAssetBundles
// 0x5DCC5380
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x5DCC5380];                                // 0x0000(0x5DCC5380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionChangePrimaryAssetBundles");
		return ptr;
	}


	void AsyncChangeBundleStateForPrimaryAssetList();
	void AsyncChangeBundleStateForMatchingPrimaryAssets();
};


// Class Engine.AtmosphericFog
// 0x5DCC5300
class AAtmosphericFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DCC5300];                                // 0x0000(0x5DCC5300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.AtmosphericFogComponent
// 0xD02DC00 (0x5DCC6380 - 0x50C98780)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD02DC00];                                 // 0x50C98780(0xD02DC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}


	void StartPrecompute();
	void SetSunMultiplier();
	void SetStartDistance();
	void SetPrecomputeParams();
	void SetFogMultiplier();
	void SetDistanceScale();
	void SetDistanceOffset();
	void SetDensityOffset();
	void SetDensityMultiplier();
	void SetDefaultLightColor();
	void SetDefaultBrightness();
	void SetAltitudeScale();
	void DisableSunDisk();
	void DisableGroundScattering();
};


// Class Engine.AudioSettings
// 0x5DCC7A00
class UAudioSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCC7A00];                                // 0x0000(0x5DCC7A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x5DCC7600
class AAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DCC7600];                                // 0x0000(0x5DCC7600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}


	void SetReverbSettings();
	void SetPriority();
	void SetInteriorSettings();
	void SetEnabled();
	void OnRep_bEnabled();
};


// Class Engine.AutoDestroySubsystem
// 0x5DCD2680
class UAutoDestroySubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x5DCD2680];                                // 0x0000(0x5DCD2680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoDestroySubsystem");
		return ptr;
	}


	void OnActorEndPlay();
};


// Class Engine.AutomationTestSettings
// 0x5DCD2180
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD2180];                                // 0x0000(0x5DCD2180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.AvoidanceManager
// 0x5DCC8780
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCC8780];                                // 0x0000(0x5DCC8780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}


	void RegisterMovementComponent();
	void GetObjectCount();
	void GetNewAvoidanceUID();
	void GetAvoidanceVelocityForComponent();
};


// Class Engine.BandwidthTestActor
// 0x2D2A700 (0x5DCC8700 - 0x5AF9E000)
class ABandwidthTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D2A700];                                 // 0x5AF9E000(0x2D2A700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BandwidthTestActor");
		return ptr;
	}

};


// Class Engine.BillboardComponent
// 0x2EC2A00 (0x5DCC9F80 - 0x5AE07580)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2EC2A00];                                 // 0x5AE07580(0x2EC2A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}


	void SetUV();
	void SetSpriteAndUV();
	void SetSprite();
};


// Class Engine.BlendableInterface
// 0x0000
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x5DCDFE20
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDFE20];                                // 0x0000(0x5DCDFE20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.BlendProfile
// 0x5DCC9E80
class UBlendProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCC9E80];                                // 0x0000(0x5DCC9E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.BlueprintExtension
// 0x0000
class UBlueprintExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintExtension");
		return ptr;
	}

};


// Class Engine.BlueprintMapLibrary
// 0x0000
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}


	void SetMapPropertyByName();
	void Map_Values();
	void Map_Remove();
	void Map_Length();
	void Map_Keys();
	void Map_Find();
	void Map_Contains();
	void Map_Clear();
	void Map_Add();
};


// Class Engine.BlueprintPathsLibrary
// 0x0000
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPathsLibrary");
		return ptr;
	}


	void VideoCaptureDir();
	void ValidatePath();
	void Split();
	void SourceConfigDir();
	void ShouldSaveToUserDir();
	void ShaderWorkingDir();
	void SetProjectFilePath();
	void SetExtension();
	void ScreenShotDir();
	void SandboxesDir();
	void RootDir();
	void RemoveDuplicateSlashes();
	void ProjectUserDir();
	void ProjectSavedDir();
	void ProjectPluginsDir();
	void ProjectPersistentDownloadDir();
	void ProjectModsDir();
	void ProjectLogDir();
	void ProjectIntermediateDir();
	void ProjectDir();
	void ProjectContentDir();
	void ProjectConfigDir();
	void ProfilingDir();
	void NormalizeFilename();
	void NormalizeDirectoryName();
	void MakeValidFileName();
	void MakeStandardFilename();
	void MakePlatformFilename();
	void MakePathRelativeTo();
	void LaunchDir();
	void IsSamePath();
	void IsRestrictedPath();
	void IsRelative();
	void IsProjectFilePathSet();
	void IsDrive();
	void HasProjectPersistentDownloadDir();
	void GetToolTipLocalizationPaths();
	void GetRestrictedFolderNames();
	void GetRelativePathToRoot();
	void GetPropertyNameLocalizationPaths();
	void GetProjectFilePath();
	void GetPath();
	void GetInvalidFileSystemChars();
	void GetGameLocalizationPaths();
	void GetExtension();
	void GetEngineLocalizationPaths();
	void GetEditorLocalizationPaths();
	void GetCleanFilename();
	void GetBaseFilename();
	void GeneratedConfigDir();
	void GameUserDeveloperDir();
	void GameSourceDir();
	void GameDevelopersDir();
	void GameAgnosticSavedDir();
	void FileExists();
	void FeaturePackDir();
	void EnterprisePluginsDir();
	void EnterpriseFeaturePackDir();
	void EnterpriseDir();
	void EngineVersionAgnosticUserDir();
	void EngineUserDir();
	void EngineSourceDir();
	void EngineSavedDir();
	void EnginePluginsDir();
	void EngineIntermediateDir();
	void EngineDir();
	void EngineContentDir();
	void EngineConfigDir();
	void DirectoryExists();
	void DiffDir();
	void CreateTempFilename();
	void ConvertToSandboxPath();
	void ConvertRelativePathToFull();
	void ConvertFromSandboxPath();
	void Combine();
	void CollapseRelativeDirectories();
	void CloudDir();
	void ChangeExtension();
	void BugItDir();
	void AutomationTransientDir();
	void AutomationLogDir();
	void AutomationDir();
};


// Class Engine.PlatformGameInstance
// 0xFFFFFFFFEF327B00 (0x50C06E80 - 0x618DF380)
class UPlatformGameInstance : public UGameInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}

};


// Class Engine.BlueprintPlatformLibrary
// 0x0000
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}


	void ScheduleLocalNotificationFromNow();
	void ScheduleLocalNotificationBadgeFromNow();
	void ScheduleLocalNotificationBadgeAtTime();
	void ScheduleLocalNotificationAtTime();
	void GetLaunchNotification();
	void GetDeviceOrientation();
	void ClearAllLocalNotifications();
	void CancelLocalNotificationById();
	void CancelLocalNotification();
};


// Class Engine.BlueprintSetLibrary
// 0x0000
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}


	void SetSetPropertyByName();
	void Set_Union();
	void Set_ToArray();
	void Set_RemoveItems();
	void Set_Remove();
	void Set_Length();
	void Set_Intersection();
	void Set_Difference();
	void Set_Contains();
	void Set_Clear();
	void Set_AddItems();
	void Set_Add();
};


// Class Engine.BodySetup
// 0x5DCE0280
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE0280];                                // 0x0000(0x5DCE0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x5DCD36C0
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD36C0];                                // 0x0000(0x5DCD36C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookmarkBase
// 0x0000
class UBookmarkBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookmarkBase");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x5DCE0080
class UBookMark : public UBookmarkBase
{
public:
	unsigned char                                      UnknownData00[0x5DCE0080];                                // 0x0000(0x5DCE0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x5DCE2080
class UBookMark2D : public UBookmarkBase
{
public:
	unsigned char                                      UnknownData00[0x5DCE2080];                                // 0x0000(0x5DCE2080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x2A65000 (0x5DCE1D80 - 0x5B27CD80)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x2A65000];                                 // 0x5B27CD80(0x2A65000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}


	void SetBoxExtent();
	void GetUnscaledBoxExtent();
	void GetScaledBoxExtent();
};


// Class Engine.ReflectionCapture
// 0x2D43D00 (0x5DCE1D00 - 0x5AF9E000)
class AReflectionCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D43D00];                                 // 0x5AF9E000(0x2D43D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0xFFFFFFFFA231E300 (0x0000 - 0x5DCE1D00)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.ReflectionCaptureComponent
// 0xD049200 (0x5DCE1980 - 0x50C98780)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD049200];                                 // 0x50C98780(0xD049200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.BoxReflectionCaptureComponent
// 0xFFFFFFFFFFFFFE80 (0x5DCE1800 - 0x5DCE1980)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x5DCE1580
class UBreakpoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE1580];                                // 0x0000(0x5DCE1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x5DCE1200
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE1200];                                // 0x0000(0x5DCE1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x2ED9B80 (0x5DCE1100 - 0x5AE07580)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2ED9B80];                                 // 0x5AE07580(0x2ED9B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0xFFFFFFFFA4E7A380 (0x0000 - 0x5B185C80)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x5DCE3180
class UButtonStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE3180];                                // 0x0000(0x5DCE3180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x5DCE2D80
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE2D80];                                // 0x0000(0x5DCE2D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x5DCE2900
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE2900];                                // 0x0000(0x5DCE2900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void Stop();
	void SetScale();
	void SetDuration();
};


// Class Engine.CameraBlockingVolume
// 0x0000
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraModifier_CameraShake
// 0x29FDE00 (0x5DCD3300 - 0x5B2D5500)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x29FDE00];                                 // 0x5B2D5500(0x29FDE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.CameraShakeSourceActor
// 0x2D44700 (0x5DCE2700 - 0x5AF9E000)
class ACameraShakeSourceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D44700];                                 // 0x5AF9E000(0x2D44700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShakeSourceActor");
		return ptr;
	}

};


// Class Engine.CameraShakeSourceComponent
// 0xD03A9A0 (0x5DCD3120 - 0x50C98780)
class UCameraShakeSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD03A9A0];                                 // 0x50C98780(0xD03A9A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShakeSourceComponent");
		return ptr;
	}


	void StopAllCameraShakes();
	void PlayCameraShake();
	void Play();
	void GetAttenuationFactor();
};


// Class Engine.Canvas
// 0x5DCE5B00
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE5B00];                                // 0x0000(0x5DCE5B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	void K2_TextSize();
	void K2_StrLen();
	void K2_Project();
	void K2_DrawTriangle();
	void K2_DrawTexture();
	void K2_DrawText();
	void K2_DrawPolygon();
	void K2_DrawMaterialTriangle();
	void K2_DrawMaterial();
	void K2_DrawLine();
	void K2_DrawBox();
	void K2_DrawBorder();
	void K2_Deproject();
};


// Class Engine.TextureRenderTarget
// 0xF0F00 (0x5DCE5A80 - 0x5DBF4B80)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xF0F00];                                   // 0x5DBF4B80(0xF0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0xFFFFFFFFFFFFF900 (0x5DCE5380 - 0x5DCE5A80)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x1B00 (0x5DCE6E80 - 0x5DCE5380)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x1B00];                                    // 0x5DCE5380(0x1B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}


	void UpdateResource();
	void ReceiveUpdate();
	void GetSize();
	void CreateCanvasRenderTarget2D();
};


// Class Engine.ChaosPhysicalMaterial
// 0x5DCE6B00
class UChaosPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE6B00];                                // 0x0000(0x5DCE6B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChaosPhysicalMaterial");
		return ptr;
	}

};


// Class Engine.CheatManager
// 0x5DCE7E80
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE7E80];                                // 0x0000(0x5DCE7E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void Walk();
	void ViewSelf();
	void ViewPlayer();
	void ViewClass();
	void ViewActor();
	void UpdateSafeArea();
	void ToggleServerStatReplicatorUpdateStatNet();
	void ToggleServerStatReplicatorClientOverwrite();
	void ToggleDebugCamera();
	void ToggleAILogging();
	void TestCollisionDistance();
	void Teleport();
	void Summon();
	void StreamLevelOut();
	void StreamLevelIn();
	void SpawnServerStatReplicator();
	void Slomo();
	void SetWorldOrigin();
	void SetMouseSensitivityToDefault();
	void ServerToggleAILogging();
	void ReceiveInitCheatManager();
	void ReceiveEndPlay();
	void PlayersOnly();
	void OnlyLoadLevel();
	void LogLoc();
	void InvertMouse();
	void God();
	void Ghost();
	void FreezeFrame();
	void Fly();
	void FlushLog();
	void EnableDebugCamera();
	void DumpVoiceMutingState();
	void DumpPartyState();
	void DumpOnlineSessionState();
	void DumpChatState();
	void DisableDebugCamera();
	void DestroyTarget();
	void DestroyServerStatReplicator();
	void DestroyPawns();
	void DestroyAllPawnsExceptTarget();
	void DestroyAll();
	void DebugCapsuleSweepSize();
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex();
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel();
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget();
	void CheatScript();
	void ChangeSize();
	void BugItStringCreator();
	void BugItGo();
	void BugIt();
};


// Class Engine.CheckBoxStyleAsset
// 0x5DCE7E00
class UCheckBoxStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCE7E00];                                // 0x0000(0x5DCE7E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.ChildActorComponent
// 0xD03A400 (0x5DCD2B80 - 0x50C98780)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD03A400];                                 // 0x50C98780(0xD03A400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}


	void SetChildActorClass();
};


// Class Engine.ChildConnection
// 0x2C4E1C0 (0x5DCE7C80 - 0x5B099AC0)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x2C4E1C0];                                 // 0x5B099AC0(0x2C4E1C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x5DCD2AE0
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD2AE0];                                // 0x0000(0x5DCD2AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0xFFFFFFFFFFFFFF60 (0x5DCD2A40 - 0x5DCD2AE0)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x5DCD5060
class UCollisionProfile : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCD5060];                                // 0x0000(0x5DCD5060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x5DCD4FC0
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD4FC0];                                // 0x0000(0x5DCD4FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0000
class UCurveTable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.CompositeCurveTable
// 0x5DCD4E80
class UCompositeCurveTable : public UCurveTable
{
public:
	unsigned char                                      UnknownData00[0x5DCD4E80];                                // 0x0000(0x5DCD4E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeCurveTable");
		return ptr;
	}

};


// Class Engine.CompositeDataTable
// 0x300F40 (0x5DCD4D40 - 0x5D9D3E00)
class UCompositeDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x300F40];                                  // 0x5D9D3E00(0x300F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeDataTable");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0xFFFFFFFFA2353880 (0x0000 - 0x5DCAC780)
class UControlChannel : public UChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x5DCE8F00
class UStreamingSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCE8F00];                                // 0x0000(0x5DCE8F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x5DCE8700
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCE8700];                                // 0x0000(0x5DCE8700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x5DCD4CA0
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DCD4CA0];                                // 0x0000(0x5DCD4CA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.CurveBase
// 0x0000
class UCurveBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void GetValueRange();
	void GetTimeRange();
};


// Class Engine.CurveEdPresetCurve
// 0x0000
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveFloat
// 0x5DCEA300
class UCurveFloat : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x5DCEA300];                                // 0x0000(0x5DCEA300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}


	void GetFloatValue();
};


// Class Engine.CurveLinearColor
// 0x5DCE9D00
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x5DCE9D00];                                // 0x0000(0x5DCE9D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}


	void GetLinearColorValue();
	void GetClampedLinearColorValue();
};


// Class Engine.Texture2D
// 0xF4D80 (0x5DCE9900 - 0x5DBF4B80)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xF4D80];                                   // 0x5DBF4B80(0xF4D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	void Blueprint_GetSizeY();
	void Blueprint_GetSizeX();
};


// Class Engine.CurveLinearColorAtlas
// 0xFFFFFFFFFFFFFD80 (0x5DCE9680 - 0x5DCE9900)
class UCurveLinearColorAtlas : public UTexture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColorAtlas");
		return ptr;
	}


	void GetCurvePosition();
};


// Class Engine.CurveSourceInterface
// 0x0000
class UCurveSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveSourceInterface");
		return ptr;
	}


	void GetCurveValue();
	void GetCurves();
	void GetBindingName();
};


// Class Engine.CurveVector
// 0x5DCEB400
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x5DCEB400];                                // 0x0000(0x5DCEB400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}


	void GetVectorValue();
};


// Class Engine.DataTableFunctionLibrary
// 0x0000
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	void GetDataTableRowNames();
	void GetDataTableRowFromName();
	void GetDataTableColumnAsString();
	void EvaluateCurveTableRow();
	void DoesDataTableRowExist();
};


// Class Engine.DebugCameraController
// 0x2BA5680 (0x5DCEBF00 - 0x5B146880)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x2BA5680];                                 // 0x5B146880(0x2BA5680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}


	void ToggleDisplay();
	void ShowDebugSelectedInfo();
	void SetPawnMovementSpeedScale();
	void ReceiveOnDeactivate();
	void ReceiveOnActorSelected();
	void ReceiveOnActivate();
	void GetSelectedActor();
};


// Class Engine.DebugCameraControllerSettings
// 0x5DCD4980
class UDebugCameraControllerSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DCD4980];                                // 0x0000(0x5DCD4980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraControllerSettings");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0xFFFFFFFFA4E98180 (0x0000 - 0x5B167E80)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.DebugDrawService
// 0x0000
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x2D4DC80 (0x5DCEBC80 - 0x5AF9E000)
class ADecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D4DC80];                                 // 0x5AF9E000(0x2D4DC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}


	void SetDecalMaterial();
	void GetDecalMaterial();
	void CreateDynamicMaterialInstance();
};


// Class Engine.DefaultPhysicsVolume
// 0xFFFFFFFFA267A300 (0x0000 - 0x5D985D00)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0xFFFFFFFFA4F66540 (0x0000 - 0x5B099AC0)
class UDemoNetConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0xFFFFFFFFFFFE0DC0 (0x5B0EDB40 - 0x5B10CD80)
class UDemoNetDriver : public UNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x5DCEB880
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCEB880];                                // 0x0000(0x5DCEB880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0xFFFFFFFFA2314780 (0x0000 - 0x5DCEB880)
class UDemoPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.DestructibleInterface
// 0x0000
class UDestructibleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleInterface");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x5DCD47A0
class UTextureLODSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD47A0];                                // 0x0000(0x5DCD47A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x16E60 (0x5DCEB600 - 0x5DCD47A0)
class UDeviceProfile : public UTextureLODSettings
{
public:
	unsigned char                                      UnknownData00[0x16E60];                                   // 0x5DCD47A0(0x16E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x5DCD4660
class UDeviceProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD4660];                                // 0x0000(0x5DCD4660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0xFFFFFFFFA237A180 (0x0000 - 0x5DC85E80)
class UDialogueSoundWaveProxy : public USoundBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x5DCED500
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCED500];                                // 0x0000(0x5DCED500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x5DCED200
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCED200];                                // 0x0000(0x5DCED200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Light
// 0x2D4EB80 (0x5DCECB80 - 0x5AF9E000)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D4EB80];                                 // 0x5AF9E000(0x2D4EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void ToggleEnabled();
	void SetLightFunctionScale();
	void SetLightFunctionMaterial();
	void SetLightFunctionFadeDistance();
	void SetLightColor();
	void SetEnabled();
	void SetCastShadows();
	void SetBrightness();
	void SetAffectTranslucentLighting();
	void OnRep_bEnabled();
	void IsEnabled();
	void GetLightColor();
	void GetBrightness();
};


// Class Engine.DirectionalLight
// 0xFFFFFFFFA2313480 (0x0000 - 0x5DCECB80)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.LightComponentBase
// 0xD055800 (0x5DCEDF80 - 0x50C98780)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD055800];                                 // 0x50C98780(0xD055800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}


	void SetSamplesPerPixel();
	void SetCastVolumetricShadow();
	void SetCastShadows();
	void SetCastRaytracedShadow();
	void SetCastDeepShadow();
	void SetAffectReflection();
	void SetAffectGlobalIllumination();
	void GetLightColor();
};


// Class Engine.LightComponent
// 0x1A00 (0x5DCEF980 - 0x5DCEDF80)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x1A00];                                    // 0x5DCEDF80(0x1A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void SetVolumetricScatteringIntensity();
	void SetUseIESBrightness();
	void SetTransmission();
	void SetTemperature();
	void SetSpecularScale();
	void SetShadowSlopeBias();
	void SetShadowBias();
	void SetLightingChannels();
	void SetLightFunctionScale();
	void SetLightFunctionMaterial();
	void SetLightFunctionFadeDistance();
	void SetLightFunctionDisabledBrightness();
	void SetLightColor();
	void SetIntensity();
	void SetIndirectLightingIntensity();
	void SetIESTexture();
	void SetIESBrightnessScale();
	void SetForceCachedShadowsForMovablePrimitives();
	void SetEnableLightShaftBloom();
	void SetBloomTint();
	void SetBloomThreshold();
	void SetBloomScale();
	void SetBloomMaxBrightness();
	void SetAffectTranslucentLighting();
	void SetAffectDynamicIndirectLighting();
};


// Class Engine.DirectionalLightComponent
// 0x20700 (0x5DD10080 - 0x5DCEF980)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20700];                                   // 0x5DCEF980(0x20700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void SetShadowDistanceFadeoutFraction();
	void SetShadowAmount();
	void SetOcclusionMaskDarkness();
	void SetLightShaftOverrideDirection();
	void SetEnableLightShaftOcclusion();
	void SetDynamicShadowDistanceStationaryLight();
	void SetDynamicShadowDistanceMovableLight();
	void SetDynamicShadowCascades();
	void SetCascadeTransitionFraction();
	void SetCascadeDistributionExponent();
};


// Class Engine.DistributionFloat
// 0x5DD12080
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x5DD12080];                                // 0x0000(0x5DD12080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0xFFFFFFFFFFFFFF80 (0x5DD12000 - 0x5DD12080)
class UDistributionFloatConstant : public UDistributionFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0xFFFFFFFFFFFFFF00 (0x5DD11F80 - 0x5DD12080)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0xFFFFFFFFFFFFFC80 (0x5DD11C80 - 0x5DD12000)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0xFFFFFFFFA22EE380 (0x0000 - 0x5DD11C80)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0xFFFFFFFFFFFFFB00 (0x5DD11B80 - 0x5DD12080)
class UDistributionFloatUniform : public UDistributionFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0xFFFFFFFFFFFFFA80 (0x5DD11B00 - 0x5DD12080)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x2BE0780 (0x5DD11980 - 0x5B131200)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x2BE0780];                                 // 0x5B131200(0x2BE0780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x2BE0600 (0x5DD11800 - 0x5B131200)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x2BE0600];                                 // 0x5B131200(0x2BE0600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0xFFFFFFFFFFFFFB80 (0x5DD11500 - 0x5DD11980)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0xFFFFFFFFA22EEB00 (0x0000 - 0x5DD11500)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x2BE0000 (0x5DD11200 - 0x5B131200)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x2BE0000];                                 // 0x5B131200(0x2BE0000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x2BE1E00 (0x5DD13000 - 0x5B131200)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x2BE1E00];                                 // 0x5B131200(0x2BE1E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ADocumentationActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000
class UDPICustomScalingRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x2F0B780 (0x5DD12D00 - 0x5AE07580)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2F0B780];                                 // 0x5AE07580(0x2F0B780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0xFFFFFFFFA4D83580 (0x0000 - 0x5B27CA80)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x5DCD4480
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD4480];                                // 0x0000(0x5DCD4480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.GraphNodeContextMenuContext
// 0x5DD12900
class UGraphNodeContextMenuContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD12900];                                // 0x0000(0x5DD12900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GraphNodeContextMenuContext");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x5DCD4340
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD4340];                                // 0x0000(0x5DCD4340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x3FE40 (0x5DD14180 - 0x5DCD4340)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x3FE40];                                   // 0x5DCD4340(0x3FE40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphPin_Deprecated
// 0x5DD13B80
class UEdGraphPin_Deprecated : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD13B80];                                // 0x0000(0x5DD13B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x2D77200 (0x5DD15200 - 0x5AF9E000)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D77200];                                 // 0x5AF9E000(0x2D77200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void ToggleActive();
	void SetVectorParameter();
	void SetTemplate();
	void SetMaterialParameter();
	void SetFloatParameter();
	void SetColorParameter();
	void SetActorParameter();
	void OnRep_bCurrentlyActive();
	void OnParticleSystemFinished();
	void IsActive();
	void Deactivate();
	void Activate();
};


// Class Engine.EmitterCameraLensEffectBase
// 0xFFFFFFFFFFFFFC00 (0x5DD14E00 - 0x5DD15200)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.ViewModeUtils
// 0x0000
class UViewModeUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ViewModeUtils");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EngineHandlerComponentFactory
// 0x0000
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x5DD14A00
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x5DD14A00];                                // 0x0000(0x5DD14A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x5DD14900
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DD14900];                                // 0x0000(0x5DD14900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.ExponentialHeightFogComponent
// 0xD07CB80 (0x5DD15300 - 0x50C98780)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD07CB80];                                 // 0x50C98780(0xD07CB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void SetVolumetricFogScatteringDistribution();
	void SetVolumetricFogExtinctionScale();
	void SetVolumetricFogEmissive();
	void SetVolumetricFogDistance();
	void SetVolumetricFogAlbedo();
	void SetVolumetricFog();
	void SetStartDistance();
	void SetNonDirectionalInscatteringColorDistance();
	void SetInscatteringTextureTint();
	void SetInscatteringColorCubemapAngle();
	void SetInscatteringColorCubemap();
	void SetFullyDirectionalInscatteringColorDistance();
	void SetFogMaxOpacity();
	void SetFogInscatteringColor();
	void SetFogHeightFalloff();
	void SetFogDensity();
	void SetFogCutoffDistance();
	void SetDirectionalInscatteringStartDistance();
	void SetDirectionalInscatteringExponent();
	void SetDirectionalInscatteringColor();
};


// Class Engine.Exporter
// 0x5DCD3E40
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD3E40];                                // 0x0000(0x5DCD3E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}


	void ScriptRunAssetExportTask();
	void RunAssetExportTasks();
	void RunAssetExportTask();
};


// Class Engine.FloatingPawnMovement
// 0x33E9300 (0x5DD16A00 - 0x5A92D700)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x33E9300];                                 // 0x5A92D700(0x33E9300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.Font
// 0x5DCD6500
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD6500];                                // 0x0000(0x5DCD6500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.FontFace
// 0x5DD18100
class UFontFace : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD18100];                                // 0x0000(0x5DD18100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontFace");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x5DD18080
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD18080];                                // 0x0000(0x5DD18080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.ForceFeedbackAttenuation
// 0x5DD18000
class UForceFeedbackAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD18000];                                // 0x0000(0x5DD18000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackAttenuation");
		return ptr;
	}

};


// Class Engine.ForceFeedbackComponent
// 0xD07F080 (0x5DD17800 - 0x50C98780)
class UForceFeedbackComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD07F080];                                 // 0x50C98780(0xD07F080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackComponent");
		return ptr;
	}


	void Stop();
	void SetIntensityMultiplier();
	void SetForceFeedbackEffect();
	void Play();
	void BP_GetAttenuationSettingsToApply();
	void AdjustAttenuation();
};


// Class Engine.ForceFeedbackEffect
// 0x5DCD6280
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD6280];                                // 0x0000(0x5DCD6280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.GameInstanceSubsystem
// 0x0000
class UGameInstanceSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstanceSubsystem");
		return ptr;
	}

};


// Class Engine.GameNetworkManager
// 0x5DD1A300
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DD1A300];                                // 0x0000(0x5DD1A300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.GameplayStatics
// 0x0000
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void UnloadStreamLevel();
	void SuggestProjectileVelocity_CustomArc();
	void SpawnSoundAttached();
	void SpawnSoundAtLocation();
	void SpawnSound2D();
	void SpawnObject();
	void SpawnForceFeedbackAttached();
	void SpawnForceFeedbackAtLocation();
	void SpawnEmitterAttached();
	void SpawnEmitterAtLocation();
	void SpawnDialogueAttached();
	void SpawnDialogueAtLocation();
	void SpawnDialogue2D();
	void SpawnDecalAttached();
	void SpawnDecalAtLocation();
	void SetWorldOriginLocation();
	void SetViewportMouseCaptureMode();
	void SetSubtitlesEnabled();
	void SetSoundMixClassOverride();
	void SetSoundClassDistanceScale();
	void SetPlayerControllerID();
	void SetMaxAudioChannelsScaled();
	void SetGlobalTimeDilation();
	void SetGlobalPitchModulation();
	void SetGlobalListenerFocusParameters();
	void SetGamePaused();
	void SetForceDisableSplitscreen();
	void SetEnableWorldRendering();
	void SetBaseSoundMix();
	void SaveGameToSlot();
	void RemovePlayer();
	void RebaseZeroOriginOntoLocal();
	void RebaseLocalOriginOntoZero();
	void PushSoundMixModifier();
	void ProjectWorldToScreen();
	void PrimeSound();
	void PopSoundMixModifier();
	void PlayWorldCameraShake();
	void PlaySoundAtLocation();
	void PlaySound2D();
	void PlayDialogueAtLocation();
	void PlayDialogue2D();
	void ParseOption();
	void OpenLevel();
	void MakeHitResult();
	void LoadStreamLevelWithTransform();
	void LoadStreamLevel();
	void LoadGameFromSlot();
	void IsSplitscreenForceDisabled();
	void IsGamePaused();
	void HasOption();
	void HasLaunchOption();
	void GrassOverlappingSphereCount();
	void GetWorldOriginLocation();
	void GetWorldDeltaSeconds();
	void GetViewProjectionMatrix();
	void GetViewportMouseCaptureMode();
	void GetUnpausedTimeSeconds();
	void GetTimeSeconds();
	void GetSurfaceType();
	void GetStreamingLevel();
	void GetRealTimeSeconds();
	void GetPlayerPawn();
	void GetPlayerControllerID();
	void GetPlayerControllerFromID();
	void GetPlayerController();
	void GetPlayerCharacter();
	void GetPlayerCameraManager();
	void GetPlatformName();
	void GetObjectClass();
	void GetMaxAudioChannelCount();
	void GetKeyValue();
	void GetIntOption();
	void GetGlobalTimeDilation();
	void GetGameState();
	void GetGameMode();
	void GetGameInstance();
	void GetEnableWorldRendering();
	void GetCurrentReverbEffect();
	void GetCurrentLevelName();
	void GetClosestListenerLocation();
	void GetAudioTimeSeconds();
	void GetAllActorsWithTag();
	void GetAllActorsWithInterface();
	void GetAllActorsOfClassWithTag();
	void GetAllActorsOfClass();
	void GetActorOfClass();
	void GetActorArrayBounds();
	void GetActorArrayAverageLocation();
	void GetAccurateRealTime();
	void FlushLevelStreaming();
	void FinishSpawningActor();
	void FindCollisionUV();
	void EnableLiveStreaming();
	void DoesSaveGameExist();
	void DeprojectScreenToWorld();
	void DeleteGameInSlot();
	void DeactivateReverbEffect();
	void CreateSound2D();
	void CreateSaveGameObject();
	void CreatePlayer();
	void ClearSoundMixModifiers();
	void ClearSoundMixClassOverride();
	void CancelAsyncLoading();
	void BreakHitResult();
	void BlueprintSuggestProjectileVelocity();
	void Blueprint_PredictProjectilePath_ByTraceChannel();
	void Blueprint_PredictProjectilePath_ByObjectType();
	void Blueprint_PredictProjectilePath_Advanced();
	void BeginSpawningActorFromClass();
	void BeginSpawningActorFromBlueprint();
	void BeginDeferredActorSpawnFromClass();
	void AreSubtitlesEnabled();
	void AreAnyListenersWithinRange();
	void ApplyRadialDamageWithFalloff();
	void ApplyRadialDamage();
	void ApplyPointDamage();
	void ApplyDamage();
	void ActivateReverbEffect();
};


// Class Engine.GameSession
// 0x5DD2AB80
class AGameSession : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DD2AB80];                                // 0x0000(0x5DD2AB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.SpotLight
// 0x3DE80 (0x5DD2AA00 - 0x5DCECB80)
class ASpotLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x3DE80];                                   // 0x5DCECB80(0x3DE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void SetOuterConeAngle();
	void SetInnerConeAngle();
};


// Class Engine.GeneratedMeshAreaLight
// 0xFFFFFFFFA22D5600 (0x0000 - 0x5DD2AA00)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Base
// 0x0000
class UHapticFeedbackEffect_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Buffer
// 0x5DCD7720
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x5DCD7720];                                // 0x0000(0x5DCD7720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Curve
// 0x5DD2A880
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x5DD2A880];                                // 0x0000(0x5DD2A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_SoundWave
// 0x5DD2A800
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x5DD2A800];                                // 0x0000(0x5DD2A800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}

};


// Class Engine.HealthSnapshotBlueprintLibrary
// 0x0000
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HealthSnapshotBlueprintLibrary");
		return ptr;
	}


	void StopPerformanceSnapshots();
	void StartPerformanceSnapshots();
	void LogPerformanceSnapshot();
};


// Class Engine.HLODProxy
// 0x5DCD7680
class UHLODProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD7680];                                // 0x0000(0x5DCD7680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HLODProxy");
		return ptr;
	}

};


// Class Engine.ImportanceSamplingLibrary
// 0x0000
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportanceSamplingLibrary");
		return ptr;
	}


	void RandomSobolFloat();
	void RandomSobolCell3D();
	void RandomSobolCell2D();
	void NextSobolFloat();
	void NextSobolCell3D();
	void NextSobolCell2D();
	void MakeImportanceTexture();
	void ImportanceSample();
	void BreakImportanceTexture();
};


// Class Engine.ImportantToggleSettingInterface
// 0x0000
class UImportantToggleSettingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x5A820 (0x5DD2D300 - 0x5DCD2AE0)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x5A820];                                   // 0x5DCD2AE0(0x5A820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x5DCD7400
class UInheritableComponentHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD7400];                                // 0x0000(0x5DCD7400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x5DCD7360
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD7360];                                // 0x0000(0x5DCD7360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x5DCD72C0
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD72C0];                                // 0x0000(0x5DCD72C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x5DCD7220
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD7220];                                // 0x0000(0x5DCD7220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x5DCD7180
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD7180];                                // 0x0000(0x5DCD7180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputSettings
// 0x5DCD68C0
class UInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD68C0];                                // 0x0000(0x5DCD68C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}


	void SaveKeyMappings();
	void RemoveAxisMapping();
	void RemoveActionMapping();
	void GetInputSettings();
	void GetAxisNames();
	void GetAxisMappingByName();
	void GetActionNames();
	void GetActionMappingByName();
	void ForceRebuildKeymaps();
	void AddAxisMapping();
	void AddActionMapping();
};


// Class Engine.InputTouchDelegateBinding
// 0x5DCD6820
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x5DCD6820];                                // 0x0000(0x5DCD6820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0xFFFFFFFFA2328DE0 (0x0000 - 0x5DCD7220)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.Interface_PreviewMeshProvider
// 0x0000
class UInterface_PreviewMeshProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PreviewMeshProvider");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x5DCD6780
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD6780];                                // 0x0000(0x5DCD6780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x5DD2D700
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD2D700];                                // 0x0000(0x5DD2D700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x5DD2F780
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD2F780];                                // 0x0000(0x5DD2F780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0xFFFFFFFFA22D0880 (0x0000 - 0x5DD2F780)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0xFFFFFFFFA22D0880 (0x0000 - 0x5DD2F780)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x5DCD8EE0
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCD8EE0];                                // 0x0000(0x5DCD8EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x563A0 (0x5DD2F280 - 0x5DCD8EE0)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x563A0];                                   // 0x5DCD8EE0(0x563A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0xFFFFFFFFA2327120 (0x0000 - 0x5DCD8EE0)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x5DD2F100
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DD2F100];                                // 0x0000(0x5DD2F100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0xFFFFFFFFA22D0F00 (0x0000 - 0x5DD2F100)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0xFFFFFFFFA22D0F00 (0x0000 - 0x5DD2F100)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpToMovementComponent
// 0xFFFFFFFFFFFFF200 (0x50C02180 - 0x50C02F80)
class UInterpToMovementComponent : public UMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}


	void StopSimulating();
	void RestartMovement();
	void OnInterpToWaitEndDelegate__DelegateSignature();
	void OnInterpToWaitBeginDelegate__DelegateSignature();
	void OnInterpToStopDelegate__DelegateSignature();
	void OnInterpToReverseDelegate__DelegateSignature();
	void OnInterpToResetDelegate__DelegateSignature();
	void FinaliseControlPoints();
};


// Class Engine.InterpTrackAnimControl
// 0x2B84F80 (0x5DD2EF80 - 0x5B1AA000)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B84F80];                                 // 0x5B1AA000(0x2B84F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0xFFFFFFFFA4E55E00 (0x0000 - 0x5B1AA200)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x2B473A0 (0x5DCD8D00 - 0x5B191960)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B473A0];                                 // 0x5B191960(0x2B473A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x2B84C00 (0x5DD2EE00 - 0x5B1AA200)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x2B84C00];                                 // 0x5B1AA200(0x2B84C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0xFFFFFFFFA4E55E00 (0x0000 - 0x5B1AA200)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x2B47300 (0x5DCD8C60 - 0x5B191960)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B47300];                                 // 0x5B191960(0x2B47300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x2B47260 (0x5DCD8BC0 - 0x5B191960)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B47260];                                 // 0x5B191960(0x2B47260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x2B84900 (0x5DD2E900 - 0x5B1AA000)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B84900];                                 // 0x5B1AA000(0x2B84900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x2B2EA80 (0x5DCD8A80 - 0x5B1AA000)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B2EA80];                                 // 0x5B1AA000(0x2B2EA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x2B2E9E0 (0x5DCD89E0 - 0x5B1AA000)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B2E9E0];                                 // 0x5B1AA000(0x2B2E9E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x2B85F80 (0x5DD2FF80 - 0x5B1AA000)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B85F80];                                 // 0x5B1AA000(0x2B85F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x2B85F00 (0x5DD2FF00 - 0x5B1AA000)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2B85F00];                                 // 0x5B1AA000(0x2B85F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x5DD2FE80
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2FE80];                                // 0x0000(0x5DD2FE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x5DD2FD80
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2FD80];                                // 0x0000(0x5DD2FD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0xFFFFFFFFFFFFFF80 (0x5DD2FD00 - 0x5DD2FD80)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0xFFFFFFFFFFFFFF00 (0x5DD2FC80 - 0x5DD2FD80)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x5DD2FC00
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2FC00];                                // 0x0000(0x5DD2FC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x5DD2FB80
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2FB80];                                // 0x0000(0x5DD2FB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x5DD2FA80
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2FA80];                                // 0x0000(0x5DD2FA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x5DCD8800
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DCD8800];                                // 0x0000(0x5DCD8800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x5DD2F800
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DD2F800];                                // 0x0000(0x5DD2F800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x5B1300 (0x5E2E1080 - 0x5DD2FD80)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x5B1300];                                  // 0x5DD2FD80(0x5B1300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x5B1280 (0x5E2E1000 - 0x5DD2FD80)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x5B1280];                                  // 0x5DD2FD80(0x5B1280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x5E2E0F00
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0F00];                                // 0x0000(0x5E2E0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x5E2E0E80
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0E80];                                // 0x0000(0x5E2E0E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x5E2E0E00
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0E00];                                // 0x0000(0x5E2E0E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x5E2E0D00
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0D00];                                // 0x0000(0x5E2E0D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x5E2E0B80
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0B80];                                // 0x0000(0x5E2E0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x5DCD8620
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5DCD8620];                                // 0x0000(0x5DCD8620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x5B0B80 (0x5E2E0900 - 0x5DD2FD80)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x5B0B80];                                  // 0x5DD2FD80(0x5B0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x5E2E0800
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5E2E0800];                                // 0x0000(0x5E2E0800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x314EDA0 (0x5E2E0700 - 0x5B191960)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x314EDA0];                                 // 0x5B191960(0x314EDA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0xFFFFFFFFFFFFFF80 (0x5E2E0680 - 0x5E2E0700)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x31507A0 (0x5E2E2100 - 0x5B191960)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x31507A0];                                 // 0x5B191960(0x31507A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x3138000 (0x5E2E2000 - 0x5B1AA000)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x3138000];                                 // 0x5B1AA000(0x3138000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x2B46C20 (0x5DCD8580 - 0x5B191960)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B46C20];                                 // 0x5B191960(0x2B46C20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0xFFFFFFFFA4E56000 (0x0000 - 0x5B1AA000)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x2B2E2E0 (0x5DCD84E0 - 0x5B1AA200)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x2B2E2E0];                                 // 0x5B1AA200(0x2B2E2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x2B46AE0 (0x5DCD8440 - 0x5B191960)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B46AE0];                                 // 0x5B191960(0x2B46AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x2B2E1A0 (0x5DCD83A0 - 0x5B1AA200)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x2B2E1A0];                                 // 0x5B1AA200(0x2B2E1A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x3137600 (0x5E2E1800 - 0x5B1AA200)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x3137600];                                 // 0x5B1AA200(0x3137600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x2B469A0 (0x5DCD8300 - 0x5B191960)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x2B469A0];                                 // 0x5B191960(0x2B469A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x5E2E1200
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E2E1200];                                // 0x0000(0x5E2E1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0xFFFFFFFFA267A300 (0x0000 - 0x5D985D00)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.KismetArrayLibrary
// 0x0000
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void SetArrayPropertyByName();
	void FilterArray();
	void Array_Swap();
	void Array_Shuffle();
	void Array_Set();
	void Array_Resize();
	void Array_RemoveItem();
	void Array_Remove();
	void Array_Length();
	void Array_LastIndex();
	void Array_IsValidIndex();
	void Array_Insert();
	void Array_Identical();
	void Array_Get();
	void Array_Find();
	void Array_Contains();
	void Array_Clear();
	void Array_Append();
	void Array_AddUnique();
	void Array_Add();
};


// Class Engine.KismetGuidLibrary
// 0x0000
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}


	void Parse_StringToGuid();
	void NotEqual_GuidGuid();
	void NewGuid();
	void IsValid_Guid();
	void Invalidate_Guid();
	void EqualEqual_GuidGuid();
	void Conv_GuidToString();
};


// Class Engine.KismetInputLibrary
// 0x0000
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	void PointerEvent_IsTouchEvent();
	void PointerEvent_IsMouseButtonDown();
	void PointerEvent_GetWheelDelta();
	void PointerEvent_GetUserIndex();
	void PointerEvent_GetTouchpadIndex();
	void PointerEvent_GetScreenSpacePosition();
	void PointerEvent_GetPointerIndex();
	void PointerEvent_GetLastScreenSpacePosition();
	void PointerEvent_GetGestureType();
	void PointerEvent_GetGestureDelta();
	void PointerEvent_GetEffectingButton();
	void PointerEvent_GetCursorDelta();
	void Key_IsVectorAxis();
	void Key_IsValid();
	void Key_IsMouseButton();
	void Key_IsModifierKey();
	void Key_IsKeyboardKey();
	void Key_IsGamepadKey();
	void Key_IsFloatAxis();
	void Key_GetNavigationDirectionFromKey();
	void Key_GetNavigationDirectionFromAnalog();
	void Key_GetNavigationActionFromKey();
	void Key_GetNavigationAction();
	void Key_GetDisplayName();
	void InputEvent_IsShiftDown();
	void InputEvent_IsRightShiftDown();
	void InputEvent_IsRightControlDown();
	void InputEvent_IsRightCommandDown();
	void InputEvent_IsRightAltDown();
	void InputEvent_IsRepeat();
	void InputEvent_IsLeftShiftDown();
	void InputEvent_IsLeftControlDown();
	void InputEvent_IsLeftCommandDown();
	void InputEvent_IsLeftAltDown();
	void InputEvent_IsControlDown();
	void InputEvent_IsCommandDown();
	void InputEvent_IsAltDown();
	void InputChord_GetDisplayName();
	void GetUserIndex();
	void GetKey();
	void GetAnalogValue();
	void EqualEqual_KeyKey();
	void EqualEqual_InputChordInputChord();
	void CalibrateTilt();
};


// Class Engine.KismetInternationalizationLibrary
// 0x0000
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInternationalizationLibrary");
		return ptr;
	}


	void SetCurrentLocale();
	void SetCurrentLanguageAndLocale();
	void SetCurrentLanguage();
	void SetCurrentCulture();
	void SetCurrentAssetGroupCulture();
	void GetSuitableCulture();
	void GetNativeCulture();
	void GetLocalizedCultures();
	void GetCurrentLocale();
	void GetCurrentLanguage();
	void GetCurrentCulture();
	void GetCurrentAssetGroupCulture();
	void GetCultureDisplayName();
	void ClearCurrentAssetGroupCulture();
};


// Class Engine.KismetMaterialLibrary
// 0x0000
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void SetVectorParameterValue();
	void SetScalarParameterValue();
	void GetVectorParameterValue();
	void GetScalarParameterValue();
	void CreateDynamicMaterialInstance();
};


// Class Engine.KismetMathLibrary
// 0x0000
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	void Xor_IntInt();
	void Xor_Int64Int64();
	void WeightedMovingAverage_FVector();
	void WeightedMovingAverage_FRotator();
	void WeightedMovingAverage_Float();
	void VSizeXYSquared();
	void VSizeXY();
	void VSizeSquared();
	void VSize2DSquared();
	void VSize2D();
	void VSize();
	void VLerp();
	void VInterpTo_Constant();
	void VInterpTo();
	void VectorSpringInterp();
	void Vector_Zero();
	void Vector_Up();
	void Vector_UnwindEuler();
	void Vector_UnitCartesianToSpherical();
	void Vector_ToRadians();
	void Vector_ToDegrees();
	void Vector_SnappedToGrid();
	void Vector_Set();
	void Vector_Right();
	void Vector_Reciprocal();
	void Vector_ProjectOnToNormal();
	void Vector_One();
	void Vector_NormalUnsafe();
	void Vector_Normalize();
	void Vector_Normal2D();
	void Vector_MirrorByPlane();
	void Vector_Left();
	void Vector_IsZero();
	void Vector_IsUnit();
	void Vector_IsUniform();
	void Vector_IsNormal();
	void Vector_IsNearlyZero();
	void Vector_IsNAN();
	void Vector_HeadingAngle();
	void Vector_GetSignVector();
	void Vector_GetProjection();
	void Vector_GetAbsMin();
	void Vector_GetAbsMax();
	void Vector_GetAbs();
	void Vector_Forward();
	void Vector_Down();
	void Vector_DistanceSquared();
	void Vector_Distance2DSquared();
	void Vector_Distance2D();
	void Vector_Distance();
	void Vector_CosineAngle2D();
	void Vector_ComponentMin();
	void Vector_ComponentMax();
	void Vector_ClampSizeMax2D();
	void Vector_ClampSizeMax();
	void Vector_ClampSize2D();
	void Vector_BoundedToCube();
	void Vector_BoundedToBox();
	void Vector_Backward();
	void Vector_Assign();
	void Vector_AddBounded();
	void Vector4_Zero();
	void Vector4_SizeSquared3();
	void Vector4_SizeSquared();
	void Vector4_Size3();
	void Vector4_Size();
	void Vector4_Set();
	void Vector4_NormalUnsafe3();
	void Vector4_Normalize3();
	void Vector4_Normal3();
	void Vector4_Negated();
	void Vector4_MirrorByVector3();
	void Vector4_IsZero();
	void Vector4_IsUnit3();
	void Vector4_IsNormal3();
	void Vector4_IsNearlyZero3();
	void Vector4_IsNAN();
	void Vector4_DotProduct3();
	void Vector4_DotProduct();
	void Vector4_CrossProduct3();
	void Vector4_Assign();
	void Vector2DInterpTo_Constant();
	void Vector2DInterpTo();
	void Vector2D_Zero();
	void Vector2D_Unit45Deg();
	void Vector2D_One();
	void VEase();
	void UtcNow();
	void TransformVector4();
	void TransformRotation();
	void TransformLocation();
	void TransformDirection();
	void Transform_Determinant();
	void ToSign2D();
	void ToRounded2D();
	void ToDirectionAndLength2D();
	void Today();
	void TLerp();
	void TInterpTo();
	void TimespanZeroValue();
	void TimespanRatio();
	void TimespanMinValue();
	void TimespanMaxValue();
	void TimespanFromString();
	void TEase();
	void Tan();
	void Subtract_VectorVector();
	void Subtract_VectorInt();
	void Subtract_VectorFloat();
	void Subtract_Vector4Vector4();
	void Subtract_Vector2DVector2D();
	void Subtract_Vector2DFloat();
	void Subtract_TimespanTimespan();
	void Subtract_QuatQuat();
	void Subtract_LinearColorLinearColor();
	void Subtract_IntPointIntPoint();
	void Subtract_IntPointInt();
	void Subtract_IntInt();
	void Subtract_Int64Int64();
	void Subtract_FloatFloat();
	void Subtract_DateTimeTimespan();
	void Subtract_DateTimeDateTime();
	void Subtract_ByteByte();
	void Square();
	void Sqrt();
	void Spherical2DToUnitCartesian();
	void Sin();
	void SignOfInteger64();
	void SignOfInteger();
	void SignOfFloat();
	void SetRandomStreamSeed();
	void Set2D();
	void SelectVector();
	void SelectTransform();
	void SelectString();
	void SelectRotator();
	void SelectObject();
	void SelectInt();
	void SelectFloat();
	void SelectColor();
	void SelectClass();
	void SeedRandomStream();
	void SafeDivide();
	void Round64();
	void Round();
	void RotatorFromAxisAndAngle();
	void RotateAngleAxis();
	void RLerp();
	void RInterpTo_Constant();
	void RInterpTo();
	void RGBToHSV_Vector();
	void RGBToHSV();
	void RGBLinearToHSV();
	void ResetVectorSpringState();
	void ResetRandomStream();
	void ResetFloatSpringState();
	void REase();
	void RandomUnitVectorInEllipticalConeInRadiansFromStream();
	void RandomUnitVectorInEllipticalConeInRadians();
	void RandomUnitVectorInEllipticalConeInDegreesFromStream();
	void RandomUnitVectorInEllipticalConeInDegrees();
	void RandomUnitVectorInConeInRadiansFromStream();
	void RandomUnitVectorInConeInRadians();
	void RandomUnitVectorInConeInDegreesFromStream();
	void RandomUnitVectorInConeInDegrees();
	void RandomUnitVectorFromStream();
	void RandomUnitVector();
	void RandomRotatorFromStream();
	void RandomRotator();
	void RandomPointInBoundingBox();
	void RandomIntegerInRangeFromStream();
	void RandomIntegerInRange();
	void RandomIntegerFromStream();
	void RandomInteger64InRange();
	void RandomInteger64();
	void RandomInteger();
	void RandomFloatInRangeFromStream();
	void RandomFloatInRange();
	void RandomFloatFromStream();
	void RandomFloat();
	void RandomBoolWithWeightFromStream();
	void RandomBoolWithWeight();
	void RandomBoolFromStream();
	void RandomBool();
	void RadiansToDegrees();
	void Quat_VectorUp();
	void Quat_VectorRight();
	void Quat_VectorForward();
	void Quat_UnrotateVector();
	void Quat_SizeSquared();
	void Quat_Size();
	void Quat_SetFromEuler();
	void Quat_SetComponents();
	void Quat_Rotator();
	void Quat_RotateVector();
	void Quat_Normalized();
	void Quat_Normalize();
	void Quat_MakeFromEuler();
	void Quat_Log();
	void Quat_IsNormalized();
	void Quat_IsNonFinite();
	void Quat_IsIdentity();
	void Quat_IsFinite();
	void Quat_Inversed();
	void Quat_Identity();
	void Quat_GetRotationAxis();
	void Quat_GetAxisZ();
	void Quat_GetAxisY();
	void Quat_GetAxisX();
	void Quat_GetAngle();
	void Quat_Exp();
	void Quat_Euler();
	void Quat_EnforceShortestArcWith();
	void Quat_AngularDistance();
	void ProjectVectorOnToVector();
	void ProjectVectorOnToPlane();
	void ProjectPointOnToPlane();
	void PointsAreCoplanar();
	void PerlinNoise1D();
	void Percent_IntInt();
	void Percent_FloatFloat();
	void Percent_ByteByte();
	void Or_IntInt();
	void Or_Int64Int64();
	void Now();
	void NotEqualExactly_VectorVector();
	void NotEqualExactly_Vector4Vector4();
	void NotEqualExactly_Vector2DVector2D();
	void NotEqual_VectorVector();
	void NotEqual_Vector4Vector4();
	void NotEqual_Vector2DVector2D();
	void NotEqual_TimespanTimespan();
	void NotEqual_RotatorRotator();
	void NotEqual_QuatQuat();
	void NotEqual_ObjectObject();
	void NotEqual_NameName();
	void NotEqual_MatrixMatrix();
	void NotEqual_LinearColorLinearColor();
	void NotEqual_IntPointIntPoint();
	void NotEqual_IntInt();
	void NotEqual_Int64Int64();
	void NotEqual_FloatFloat();
	void NotEqual_DateTimeDateTime();
	void NotEqual_ClassClass();
	void NotEqual_ByteByte();
	void NotEqual_BoolBool();
	void Not_PreBool();
	void Not_Int64();
	void Not_Int();
	void NormalSafe2D();
	void NormalizeToRange();
	void NormalizedDeltaRotator();
	void NormalizeAxis();
	void Normalize2D();
	void Normal2D();
	void Normal();
	void NegateVector();
	void NegateRotator();
	void Negated2D();
	void NearlyEqual_TransformTransform();
	void NearlyEqual_FloatFloat();
	void MultiplyMultiply_FloatFloat();
	void MultiplyByPi();
	void Multiply_VectorVector();
	void Multiply_VectorInt();
	void Multiply_VectorFloat();
	void Multiply_Vector4Vector4();
	void Multiply_Vector2DVector2D();
	void Multiply_Vector2DFloat();
	void Multiply_TimespanFloat();
	void Multiply_RotatorInt();
	void Multiply_RotatorFloat();
	void Multiply_QuatQuat();
	void Multiply_MatrixMatrix();
	void Multiply_MatrixFloat();
	void Multiply_LinearColorLinearColor();
	void Multiply_LinearColorFloat();
	void Multiply_IntPointIntPoint();
	void Multiply_IntPointInt();
	void Multiply_IntInt();
	void Multiply_IntFloat();
	void Multiply_Int64Int64();
	void Multiply_FloatFloat();
	void Multiply_ByteByte();
	void MirrorVectorByNormal();
	void MinOfIntArray();
	void MinOfFloatArray();
	void MinOfByteArray();
	void MinInt64();
	void MinimumAreaRectangle();
	void Min();
	void MaxOfIntArray();
	void MaxOfFloatArray();
	void MaxOfByteArray();
	void MaxInt64();
	void Max();
	void Matrix_TransformVector4();
	void Matrix_TransformVector();
	void Matrix_TransformPosition();
	void Matrix_ToQuat();
	void Matrix_SetOrigin();
	void Matrix_SetColumn();
	void Matrix_SetAxis();
	void Matrix_ScaleTranslation();
	void Matrix_RemoveTranslation();
	void Matrix_RemoveScaling();
	void Matrix_Mirror();
	void Matrix_InverseTransformVector();
	void Matrix_InverseTransformPosition();
	void Matrix_Identity();
	void Matrix_GetUnitAxis();
	void Matrix_GetUnitAxes();
	void Matrix_GetTransposed();
	void Matrix_GetTransposeAdjoint();
	void Matrix_GetScaleVector();
	void Matrix_GetScaledAxis();
	void Matrix_GetScaledAxes();
	void Matrix_GetRotDeterminant();
	void Matrix_GetRotator();
	void Matrix_GetOrigin();
	void Matrix_GetMaximumAxisScale();
	void Matrix_GetMatrixWithoutScale();
	void Matrix_GetInverse();
	void Matrix_GetFrustumTopPlane();
	void Matrix_GetFrustumRightPlane();
	void Matrix_GetFrustumNearPlane();
	void Matrix_GetFrustumLeftPlane();
	void Matrix_GetFrustumFarPlane();
	void Matrix_GetFrustumBottomPlane();
	void Matrix_GetDeterminant();
	void Matrix_GetColumn();
	void Matrix_ContainsNaN();
	void Matrix_ConcatenateTranslation();
	void Matrix_ApplyScale();
	void MapRangeUnclamped();
	void MapRangeClamped();
	void MakeVector4();
	void MakeVector2D();
	void MakeVector();
	void MakeTransform();
	void MakeTimespan2();
	void MakeTimespan();
	void MakeRotFromZY();
	void MakeRotFromZX();
	void MakeRotFromZ();
	void MakeRotFromYZ();
	void MakeRotFromYX();
	void MakeRotFromY();
	void MakeRotFromXZ();
	void MakeRotFromXY();
	void MakeRotFromX();
	void MakeRotator();
	void MakeRotationFromAxes();
	void MakeRelativeTransform();
	void MakeRandomStream();
	void MakeQualifiedFrameTime();
	void MakePulsatingValue();
	void MakePlaneFromPointAndNormal();
	void MakeFrameRate();
	void MakeDateTime();
	void MakeColor();
	void MakeBox2D();
	void MakeBox();
	void Loge();
	void Log();
	void LinePlaneIntersection_OriginNormal();
	void LinePlaneIntersection();
	void LinearColorLerpUsingHSV();
	void LinearColorLerp();
	void LinearColor_Yellow();
	void LinearColor_White();
	void LinearColor_Transparent();
	void LinearColor_ToRGBE();
	void LinearColor_ToNewOpacity();
	void LinearColor_SetTemperature();
	void LinearColor_SetRGBA();
	void LinearColor_SetRandomHue();
	void LinearColor_SetFromSRGB();
	void LinearColor_SetFromPow22();
	void LinearColor_SetFromHSV();
	void LinearColor_Set();
	void LinearColor_Red();
	void LinearColor_QuantizeRound();
	void LinearColor_Quantize();
	void LinearColor_IsNearEqual();
	void LinearColor_Green();
	void LinearColor_Gray();
	void LinearColor_GetMin();
	void LinearColor_GetMax();
	void LinearColor_GetLuminance();
	void LinearColor_Distance();
	void LinearColor_Desaturated();
	void LinearColor_Blue();
	void LinearColor_Black();
	void LessLess_VectorRotator();
	void LessEqual_TimespanTimespan();
	void LessEqual_IntInt();
	void LessEqual_Int64Int64();
	void LessEqual_FloatFloat();
	void LessEqual_DateTimeDateTime();
	void LessEqual_ByteByte();
	void Less_TimespanTimespan();
	void Less_IntInt();
	void Less_Int64Int64();
	void Less_FloatFloat();
	void Less_DateTimeDateTime();
	void Less_ByteByte();
	void Lerp();
	void IsZero2D();
	void IsPointInBoxWithTransform();
	void IsPointInBox();
	void IsNearlyZero2D();
	void IsMorning();
	void IsLeapYear();
	void IsAfternoon();
	void InvertTransform();
	void InverseTransformRotation();
	void InverseTransformLocation();
	void InverseTransformDirection();
	void IntPoint_Zero();
	void IntPoint_Up();
	void IntPoint_Right();
	void IntPoint_One();
	void IntPoint_Left();
	void IntPoint_Down();
	void InRange_IntInt();
	void InRange_Int64Int64();
	void InRange_FloatFloat();
	void Hypotenuse();
	void HSVToRGBLinear();
	void HSVToRGB_Vector();
	void HSVToRGB();
	void GridSnap_Float();
	void GreaterGreater_VectorRotator();
	void GreaterEqual_TimespanTimespan();
	void GreaterEqual_IntInt();
	void GreaterEqual_Int64Int64();
	void GreaterEqual_FloatFloat();
	void GreaterEqual_DateTimeDateTime();
	void GreaterEqual_ByteByte();
	void Greater_TimespanTimespan();
	void Greater_IntInt();
	void Greater_Int64Int64();
	void Greater_FloatFloat();
	void Greater_DateTimeDateTime();
	void Greater_ByteByte();
	void GetYear();
	void GetYawPitchFromVector();
	void GetVectorArrayAverage();
	void GetUpVector();
	void GetTotalSeconds();
	void GetTotalMinutes();
	void GetTotalMilliseconds();
	void GetTotalHours();
	void GetTotalDays();
	void GetTimeOfDay();
	void GetTAU();
	void GetSlopeDegreeAngles();
	void GetSeconds();
	void GetSecond();
	void GetRotated2D();
	void GetRightVector();
	void GetReflectionVector();
	void GetPointDistanceToSegment();
	void GetPointDistanceToLine();
	void GetPI();
	void GetMonth();
	void GetMinutes();
	void GetMinute();
	void GetMinElement();
	void GetMin2D();
	void GetMilliseconds();
	void GetMillisecond();
	void GetMaxElement();
	void GetMax2D();
	void GetHours();
	void GetHour12();
	void GetHour();
	void GetForwardVector();
	void GetDuration();
	void GetDirectionUnitVector();
	void GetDays();
	void GetDayOfYear();
	void GetDay();
	void GetDate();
	void GetAzimuthAndElevation();
	void GetAxes();
	void GetAbsMax2D();
	void GetAbs2D();
	void FTruncVector();
	void FTrunc64();
	void FTrunc();
	void FromSeconds();
	void FromMinutes();
	void FromMilliseconds();
	void FromHours();
	void FromDays();
	void Fraction();
	void FMod();
	void FMin();
	void FMax();
	void FloatSpringInterp();
	void FixedTurn();
	void FInterpTo_Constant();
	void FInterpTo();
	void FInterpEaseInOut();
	void FindNearestPointsOnLineSegments();
	void FindLookAtRotation();
	void FindClosestPointOnSegment();
	void FindClosestPointOnLine();
	void FFloor64();
	void FFloor();
	void FClamp();
	void FCeil64();
	void FCeil();
	void Exp();
	void EqualExactly_VectorVector();
	void EqualExactly_Vector4Vector4();
	void EqualExactly_Vector2DVector2D();
	void EqualEqual_VectorVector();
	void EqualEqual_Vector4Vector4();
	void EqualEqual_Vector2DVector2D();
	void EqualEqual_TransformTransform();
	void EqualEqual_TimespanTimespan();
	void EqualEqual_RotatorRotator();
	void EqualEqual_QuatQuat();
	void EqualEqual_ObjectObject();
	void EqualEqual_NameName();
	void EqualEqual_MatrixMatrix();
	void EqualEqual_LinearColorLinearColor();
	void EqualEqual_IntInt();
	void EqualEqual_Int64Int64();
	void EqualEqual_FloatFloat();
	void EqualEqual_DateTimeDateTime();
	void EqualEqual_ClassClass();
	void EqualEqual_ByteByte();
	void EqualEqual_BoolBool();
	void Equal_IntPointIntPoint();
	void Ease();
	void DynamicWeightedMovingAverage_FVector();
	void DynamicWeightedMovingAverage_FRotator();
	void DynamicWeightedMovingAverage_Float();
	void DotProduct2D();
	void Dot_VectorVector();
	void Divide_VectorVector();
	void Divide_VectorInt();
	void Divide_VectorFloat();
	void Divide_Vector4Vector4();
	void Divide_Vector2DVector2D();
	void Divide_Vector2DFloat();
	void Divide_TimespanFloat();
	void Divide_LinearColorLinearColor();
	void Divide_IntPointIntPoint();
	void Divide_IntPointInt();
	void Divide_IntInt();
	void Divide_Int64Int64();
	void Divide_FloatFloat();
	void Divide_ByteByte();
	void DistanceSquared2D();
	void Distance2D();
	void DegTan();
	void DegSin();
	void DegreesToRadians();
	void DegCos();
	void DegAtan2();
	void DegAtan();
	void DegAsin();
	void DegAcos();
	void DaysInYear();
	void DaysInMonth();
	void DateTimeMinValue();
	void DateTimeMaxValue();
	void DateTimeFromString();
	void DateTimeFromIsoString();
	void CrossProduct2D();
	void Cross_VectorVector();
	void CreateVectorFromYawPitch();
	void Cos();
	void ConvertTransformToRelative();
	void Conv_VectorToVector2D();
	void Conv_VectorToTransform();
	void Conv_VectorToRotator();
	void Conv_VectorToQuaterion();
	void Conv_VectorToLinearColor();
	void Conv_Vector4ToVector();
	void Conv_Vector4ToRotator();
	void Conv_Vector4ToQuaterion();
	void Conv_Vector2DToVector();
	void Conv_Vector2DToIntPoint();
	void Conv_TransformToMatrix();
	void Conv_RotatorToVector();
	void Conv_RotatorToTransform();
	void Conv_MatrixToTransform();
	void Conv_MatrixToRotator();
	void Conv_LinearColorToVector();
	void Conv_LinearColorToColor();
	void Conv_IntVectorToVector();
	void Conv_IntToIntVector();
	void Conv_IntToInt64();
	void Conv_IntToFloat();
	void Conv_IntToByte();
	void Conv_IntToBool();
	void Conv_IntPointToVector2D();
	void Conv_Int64ToInt();
	void Conv_Int64ToByte();
	void Conv_FloatToVector();
	void Conv_FloatToLinearColor();
	void Conv_ColorToLinearColor();
	void Conv_ByteToInt();
	void Conv_ByteToFloat();
	void Conv_BoolToInt();
	void Conv_BoolToFloat();
	void Conv_BoolToByte();
	void ComposeTransforms();
	void ComposeRotators();
	void ClassIsChildOf();
	void ClampVectorSize();
	void ClampInt64();
	void ClampAxis();
	void ClampAxes2D();
	void ClampAngle();
	void Clamp();
	void CInterpTo();
	void BreakVector4();
	void BreakVector2D();
	void BreakVector();
	void BreakTransform();
	void BreakTimespan2();
	void BreakTimespan();
	void BreakRotIntoAxes();
	void BreakRotator();
	void BreakRandomStream();
	void BreakQualifiedFrameTime();
	void BreakFrameRate();
	void BreakDateTime();
	void BreakColor();
	void BooleanXOR();
	void BooleanOR();
	void BooleanNOR();
	void BooleanNAND();
	void BooleanAND();
	void BMin();
	void BMax();
	void Atan2();
	void Atan();
	void Asin();
	void And_IntInt();
	void And_Int64Int64();
	void Add_VectorVector();
	void Add_VectorInt();
	void Add_VectorFloat();
	void Add_Vector4Vector4();
	void Add_Vector2DVector2D();
	void Add_Vector2DFloat();
	void Add_TimespanTimespan();
	void Add_QuatQuat();
	void Add_MatrixMatrix();
	void Add_LinearColorLinearColor();
	void Add_IntPointIntPoint();
	void Add_IntPointInt();
	void Add_IntInt();
	void Add_Int64Int64();
	void Add_FloatFloat();
	void Add_DateTimeTimespan();
	void Add_DateTimeDateTime();
	void Add_ByteByte();
	void Acos();
	void Abs_Int64();
	void Abs_Int();
	void Abs();
};


// Class Engine.KismetNodeHelperLibrary
// 0x0000
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void MarkBit();
	void HasUnmarkedBit();
	void HasMarkedBit();
	void GetValidValue();
	void GetUnmarkedBit();
	void GetRandomUnmarkedBit();
	void GetFirstUnmarkedBit();
	void GetEnumeratorValueFromIndex();
	void GetEnumeratorUserFriendlyName();
	void GetEnumeratorName();
	void ClearBit();
	void ClearAllBits();
	void BitIsMarked();
};


// Class Engine.KismetRenderingLibrary
// 0x0000
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}


	void SetCastInsetShadowForAllAttachments();
	void RenderTargetCreateStaticTexture2DEditorOnly();
	void ReleaseRenderTarget2D();
	void ReadRenderTargetUV();
	void ReadRenderTargetRawUV();
	void ReadRenderTargetRawPixel();
	void ReadRenderTargetPixel();
	void MakeSkinWeightInfo();
	void ImportFileAsTexture2D();
	void ImportBufferAsTexture2D();
	void ExportTexture2D();
	void ExportRenderTarget();
	void EndDrawCanvasToRenderTarget();
	void DrawMaterialToRenderTarget();
	void CreateRenderTarget2D();
	void ConvertRenderTargetToTexture2DEditorOnly();
	void ClearRenderTarget2D();
	void BreakSkinWeightInfo();
	void BeginDrawCanvasToRenderTarget();
};


// Class Engine.KismetStringLibrary
// 0x0000
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	void TrimTrailing();
	void Trim();
	void ToUpper();
	void ToLower();
	void TimeSecondsToString();
	void StartsWith();
	void Split();
	void RightPad();
	void RightChop();
	void Right();
	void Reverse();
	void ReplaceInline();
	void Replace();
	void ParseIntoArray();
	void NotEqual_StrStr();
	void NotEqual_StriStri();
	void Mid();
	void MatchesWildcard();
	void Len();
	void LeftPad();
	void LeftChop();
	void Left();
	void JoinStringArray();
	void IsNumeric();
	void IsEmpty();
	void GetSubstring();
	void GetCharacterAsNumber();
	void GetCharacterArrayFromString();
	void FindSubstring();
	void EqualEqual_StrStr();
	void EqualEqual_StriStri();
	void EndsWith();
	void CullArray();
	void Conv_VectorToString();
	void Conv_Vector2dToString();
	void Conv_TransformToString();
	void Conv_StringToVector2D();
	void Conv_StringToVector();
	void Conv_StringToRotator();
	void Conv_StringToName();
	void Conv_StringToInt();
	void Conv_StringToFloat();
	void Conv_StringToColor();
	void Conv_RotatorToString();
	void Conv_ObjectToString();
	void Conv_NameToString();
	void Conv_MatrixToString();
	void Conv_IntVectorToString();
	void Conv_IntToString();
	void Conv_IntPointToString();
	void Conv_Int64ToString();
	void Conv_FloatToString();
	void Conv_ColorToString();
	void Conv_ByteToString();
	void Conv_BoolToString();
	void Contains();
	void Concat_StrStr();
	void BuildString_Vector2d();
	void BuildString_Vector();
	void BuildString_Rotator();
	void BuildString_Object();
	void BuildString_Name();
	void BuildString_IntVector();
	void BuildString_Int();
	void BuildString_Float();
	void BuildString_Color();
	void BuildString_Bool();
};


// Class Engine.KismetStringTableLibrary
// 0x0000
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
		return ptr;
	}


	void IsRegisteredTableId();
	void IsRegisteredTableEntry();
	void GetTableNamespace();
	void GetTableEntrySourceString();
	void GetTableEntryMetaData();
	void GetRegisteredStringTables();
	void GetMetaDataIdsFromStringTableEntry();
	void GetKeysFromStringTable();
};


// Class Engine.KismetSystemLibrary
// 0x0000
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void UnregisterForRemoteNotifications();
	void UnloadPrimaryAssetList();
	void UnloadPrimaryAsset();
	void TransactObject();
	void StackTrace();
	void SphereTraceSingleForObjects();
	void SphereTraceSingleByProfile();
	void SphereTraceSingle();
	void SphereTraceMultiForObjects();
	void SphereTraceMultiByProfile();
	void SphereTraceMulti();
	void SphereOverlapComponents();
	void SphereOverlapActors();
	void SnapshotObject();
	void ShowPlatformSpecificLeaderboardScreen();
	void ShowPlatformSpecificAchievementsScreen();
	void ShowInterstitialAd();
	void ShowAdBanner();
	void SetWindowTitle();
	void SetVolumeButtonsHandledBySystem();
	void SetVectorPropertyByName();
	void SetUserActivity();
	void SetTransformPropertyByName();
	void SetTextPropertyByName();
	void SetSuppressViewportTransitionMessage();
	void SetStructurePropertyByName();
	void SetStringPropertyByName();
	void SetSoftObjectPropertyByName();
	void SetSoftClassPropertyByName();
	void SetRotatorPropertyByName();
	void SetObjectPropertyByName();
	void SetNamePropertyByName();
	void SetLinearColorPropertyByName();
	void SetIntPropertyByName();
	void SetInterfacePropertyByName();
	void SetInt64PropertyByName();
	void SetGamepadsBlockDeviceFeedback();
	void SetFloatPropertyByName();
	void SetFieldPathPropertyByName();
	void SetCollisionProfileNameProperty();
	void SetClassPropertyByName();
	void SetBytePropertyByName();
	void SetBoolPropertyByName();
	void RetriggerableDelay();
	void ResetGamepadAssignmentToController();
	void ResetGamepadAssignments();
	void RegisterForRemoteNotifications();
	void QuitGame();
	void PrintWarning();
	void PrintText();
	void PrintString();
	void OnAssetLoaded__DelegateSignature();
	void OnAssetClassLoaded__DelegateSignature();
	void NotEqual_SoftObjectReference();
	void NotEqual_SoftClassReference();
	void NotEqual_PrimaryAssetType();
	void NotEqual_PrimaryAssetId();
	void NormalizeFilename();
	void MoveComponentTo();
	void MakeSoftObjectPath();
	void MakeSoftClassPath();
	void MakeLiteralText();
	void MakeLiteralString();
	void MakeLiteralName();
	void MakeLiteralInt();
	void MakeLiteralFloat();
	void MakeLiteralByte();
	void MakeLiteralBool();
	void LoadInterstitialAd();
	void LoadClassAsset_Blocking();
	void LoadAssetClass();
	void LoadAsset_Blocking();
	void LoadAsset();
	void LineTraceSingleForObjects();
	void LineTraceSingleByProfile();
	void LineTraceSingle();
	void LineTraceMultiForObjects();
	void LineTraceMultiByProfile();
	void LineTraceMulti();
	void LaunchURL();
	void K2_UnPauseTimerHandle();
	void K2_UnPauseTimerDelegate();
	void K2_UnPauseTimer();
	void K2_TimerExistsHandle();
	void K2_TimerExistsDelegate();
	void K2_TimerExists();
	void K2_SetTimerDelegate();
	void K2_SetTimer();
	void K2_PauseTimerHandle();
	void K2_PauseTimerDelegate();
	void K2_PauseTimer();
	void K2_IsValidTimerHandle();
	void K2_IsTimerPausedHandle();
	void K2_IsTimerPausedDelegate();
	void K2_IsTimerPaused();
	void K2_IsTimerActiveHandle();
	void K2_IsTimerActiveDelegate();
	void K2_IsTimerActive();
	void K2_InvalidateTimerHandle();
	void K2_GetTimerRemainingTimeHandle();
	void K2_GetTimerRemainingTimeDelegate();
	void K2_GetTimerRemainingTime();
	void K2_GetTimerElapsedTimeHandle();
	void K2_GetTimerElapsedTimeDelegate();
	void K2_GetTimerElapsedTime();
	void K2_ClearTimerHandle();
	void K2_ClearTimerDelegate();
	void K2_ClearTimer();
	void K2_ClearAndInvalidateTimerHandle();
	void IsValidSoftObjectReference();
	void IsValidSoftClassReference();
	void IsValidPrimaryAssetType();
	void IsValidPrimaryAssetId();
	void IsValidClass();
	void IsValid();
	void IsUnattended();
	void IsStandalone();
	void IsSplitScreen();
	void IsServer();
	void IsScreensaverEnabled();
	void IsPackagedForDistribution();
	void IsLoggedIn();
	void IsInterstitialAdRequested();
	void IsInterstitialAdAvailable();
	void IsDedicatedServer();
	void IsControllerAssignedToGamepad();
	void HideAdBanner();
	void GetVolumeButtonsHandledBySystem();
	void GetUniqueDeviceId();
	void GetSupportedFullscreenResolutions();
	void GetSoftObjectReferenceFromPrimaryAssetId();
	void GetSoftClassReferenceFromPrimaryAssetId();
	void GetRenderingMaterialQualityLevel();
	void GetRenderingDetailMode();
	void GetProjectSavedDirectory();
	void GetProjectDirectory();
	void GetProjectContentDirectory();
	void GetPrimaryAssetsWithBundleState();
	void GetPrimaryAssetIdList();
	void GetPrimaryAssetIdFromSoftObjectReference();
	void GetPrimaryAssetIdFromSoftClassReference();
	void GetPrimaryAssetIdFromObject();
	void GetPrimaryAssetIdFromClass();
	void GetPreferredLanguages();
	void GetPlatformUserName();
	void GetPlatformUserDir();
	void GetPathName();
	void GetOuterObject();
	void GetObjectName();
	void GetObjectFromPrimaryAssetId();
	void GetMinYResolutionForUI();
	void GetMinYResolutionFor3DView();
	void GetLocalCurrencySymbol();
	void GetLocalCurrencyCode();
	void GetGameTimeInSeconds();
	void GetGamepadControllerName();
	void GetGameName();
	void GetGameBundleId();
	void GetFrameCount();
	void GetEngineVersion();
	void GetDisplayName();
	void GetDeviceId();
	void GetDefaultLocale();
	void GetDefaultLanguage();
	void GetCurrentBundleState();
	void GetConvenientWindowedResolutions();
	void GetConsoleVariableIntValue();
	void GetConsoleVariableFloatValue();
	void GetConsoleVariableBoolValue();
	void GetComponentBounds();
	void GetCommandLine();
	void GetClassFromPrimaryAssetId();
	void GetClassDisplayName();
	void GetAdIDCount();
	void GetActorListFromComponentList();
	void GetActorBounds();
	void ForceCloseAdBanner();
	void FlushPersistentDebugLines();
	void FlushDebugStrings();
	void ExecuteConsoleCommand();
	void EqualEqual_SoftObjectReference();
	void EqualEqual_SoftClassReference();
	void EqualEqual_PrimaryAssetType();
	void EqualEqual_PrimaryAssetId();
	void EndTransaction();
	void DrawDebugString();
	void DrawDebugSphere();
	void DrawDebugPoint();
	void DrawDebugPlane();
	void DrawDebugLine();
	void DrawDebugFrustum();
	void DrawDebugFloatHistoryTransform();
	void DrawDebugFloatHistoryLocation();
	void DrawDebugCylinder();
	void DrawDebugCoordinateSystem();
	void DrawDebugConeInDegrees();
	void DrawDebugCone();
	void DrawDebugCircle();
	void DrawDebugCapsule();
	void DrawDebugCamera();
	void DrawDebugBox();
	void DrawDebugArrow();
	void DoesImplementInterface();
	void Delay();
	void CreateCopyForUndoBuffer();
	void ConvertToRelativePath();
	void ConvertToAbsolutePath();
	void Conv_SoftObjPathToSoftObjRef();
	void Conv_SoftObjectReferenceToString();
	void Conv_SoftObjectReferenceToObject();
	void Conv_SoftClassReferenceToString();
	void Conv_SoftClassReferenceToClass();
	void Conv_SoftClassPathToSoftClassRef();
	void Conv_PrimaryAssetTypeToString();
	void Conv_PrimaryAssetIdToString();
	void Conv_ObjectToSoftObjectReference();
	void Conv_InterfaceToObject();
	void Conv_ClassToSoftClassReference();
	void ControlScreensaver();
	void ComponentOverlapComponents();
	void ComponentOverlapActors();
	void CollectGarbage();
	void CapsuleTraceSingleForObjects();
	void CapsuleTraceSingleByProfile();
	void CapsuleTraceSingle();
	void CapsuleTraceMultiForObjects();
	void CapsuleTraceMultiByProfile();
	void CapsuleTraceMulti();
	void CapsuleOverlapComponents();
	void CapsuleOverlapActors();
	void CanLaunchURL();
	void CancelTransaction();
	void BreakSoftObjectPath();
	void BreakSoftClassPath();
	void BoxTraceSingleForObjects();
	void BoxTraceSingleByProfile();
	void BoxTraceSingle();
	void BoxTraceMultiForObjects();
	void BoxTraceMultiByProfile();
	void BoxTraceMulti();
	void BoxOverlapComponents();
	void BoxOverlapActors();
	void BeginTransaction();
	void AddFloatHistorySample();
};


// Class Engine.KismetTextLibrary
// 0x0000
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	void TextTrimTrailing();
	void TextTrimPrecedingAndTrailing();
	void TextTrimPreceding();
	void TextToUpper();
	void TextToLower();
	void TextIsTransient();
	void TextIsFromStringTable();
	void TextIsEmpty();
	void TextIsCultureInvariant();
	void TextFromStringTable();
	void StringTableIdAndKeyFromText();
	void PolyglotDataToText();
	void NotEqual_TextText();
	void NotEqual_IgnoreCase_TextText();
	void IsPolyglotDataValid();
	void GetEmptyText();
	void Format();
	void FindTextInLocalizationTable();
	void EqualEqual_TextText();
	void EqualEqual_IgnoreCase_TextText();
	void Conv_VectorToText();
	void Conv_Vector2dToText();
	void Conv_TransformToText();
	void Conv_TextToString();
	void Conv_StringToText();
	void Conv_RotatorToText();
	void Conv_ObjectToText();
	void Conv_NameToText();
	void Conv_IntToText();
	void Conv_Int64ToText();
	void Conv_FloatToText();
	void Conv_ColorToText();
	void Conv_ByteToText();
	void Conv_BoolToText();
	void AsTimeZoneTime_DateTime();
	void AsTimeZoneDateTime_DateTime();
	void AsTimeZoneDate_DateTime();
	void AsTimespan_Timespan();
	void AsTime_DateTime();
	void AsPercent_Float();
	void AsDateTime_DateTime();
	void AsDate_DateTime();
	void AsCurrencyBase();
	void AsCurrency_Integer();
	void AsCurrency_Float();
};


// Class Engine.Layer
// 0x5E363200
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E363200];                                // 0x0000(0x5E363200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.LevelPartitionInterface
// 0x0000
class ULevelPartitionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelPartitionInterface");
		return ptr;
	}

};


// Class Engine.Level
// 0x5E364680
class ULevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E364680];                                // 0x0000(0x5E364680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.LevelActorContainer
// 0x5DCDABA0
class ULevelActorContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDABA0];                                // 0x0000(0x5DCDABA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelActorContainer");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x33C6500 (0x5E364500 - 0x5AF9E000)
class ALevelBounds : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33C6500];                                 // 0x5AF9E000(0x33C6500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x33C8100 (0x5E366100 - 0x5AF9E000)
class ALevelScriptActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33C8100];                                 // 0x5AF9E000(0x33C8100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}


	void WorldOriginLocationChanged();
	void SetCinematicMode();
	void RemoteEvent();
	void LevelReset();
};


// Class Engine.LevelScriptBlueprint
// 0xFFFFFFFFA2410B40 (0x0000 - 0x5DBEF4C0)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x5E367000
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E367000];                                // 0x0000(0x5E367000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}


	void ShouldBeLoaded();
	void SetShouldBeVisible();
	void SetShouldBeLoaded();
	void SetPriority();
	void SetLevelLODIndex();
	void IsStreamingStatePending();
	void IsLevelVisible();
	void IsLevelLoaded();
	void GetWorldAssetPackageFName();
	void GetLoadedLevel();
	void GetLevelScriptActor();
	void CreateInstance();
};


// Class Engine.LevelStreamingAlwaysLoaded
// 0xFFFFFFFFA1C99000 (0x0000 - 0x5E367000)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingDynamic
// 0xFFFFFFFFFFFFF900 (0x5E366900 - 0x5E367000)
class ULevelStreamingDynamic : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDynamic");
		return ptr;
	}


	void LoadLevelInstanceBySoftObjectPtr();
	void LoadLevelInstance();
};


// Class Engine.LevelStreamingLightingScenario
// 0xFFFFFFFFFFFFF800 (0x5E366800 - 0x5E367000)
class ULevelStreamingLightingScenario : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingLightingScenario");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0xFFFFFFFFA1C99000 (0x0000 - 0x5E367000)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x5DCDA9C0
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DCDA9C0];                                // 0x0000(0x5DCDA9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x5E366500
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E366500];                                // 0x0000(0x5E366500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightMapTexture2D
// 0xFFFFFFFFA2316700 (0x0000 - 0x5DCE9900)
class ULightMapTexture2D : public UTexture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.LightmassPortal
// 0x33C8480 (0x5E366480 - 0x5AF9E000)
class ALightmassPortal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33C8480];                                 // 0x5AF9E000(0x33C8480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}

};


// Class Engine.LightmassPortalComponent
// 0xD6CDC80 (0x5E366400 - 0x50C98780)
class ULightmassPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD6CDC80];                                 // 0x50C98780(0xD6CDC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x5E366380
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E366380];                                // 0x0000(0x5E366380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class ULineBatchComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.LocalLightComponent
// 0xFFFFFFFFFFFEAD20 (0x5DCDA6A0 - 0x5DCEF980)
class ULocalLightComponent : public ULightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalLightComponent");
		return ptr;
	}


	void SetIntensityUnits();
	void SetAttenuationRadius();
	void GetUnitsConversionFactor();
};


// Class Engine.LocalPlayerSubsystem
// 0x0000
class ULocalPlayerSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayerSubsystem");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x33C9B00 (0x5E367B00 - 0x5AF9E000)
class ALODActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33C9B00];                                 // 0x5AF9E000(0x33C9B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.MapBuildDataRegistry
// 0x5E367980
class UMapBuildDataRegistry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E367980];                                // 0x0000(0x5E367980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapBuildDataRegistry");
		return ptr;
	}

};


// Class Engine.Material
// 0x752A00 (0x5E36C600 - 0x5DC19C00)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x752A00];                                  // 0x5DC19C00(0x752A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x2ED5880 (0x5DCDCE00 - 0x5AE07580)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2ED5880];                                 // 0x5AE07580(0x2ED5880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}


	void SetElements();
	void AddElement();
};


// Class Engine.MaterialExpressionAbs
// 0x750200 (0x5E36C180 - 0x5DC1BF80)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750200];                                  // 0x5DC1BF80(0x750200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x750000 (0x5E36BF80 - 0x5DC1BF80)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750000];                                  // 0x5DC1BF80(0x750000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x74FE80 (0x5E36BE00 - 0x5DC1BF80)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x74FE80];                                  // 0x5DC1BF80(0x74FE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0xFFFFFFFFFFFFFA80 (0x5E36B880 - 0x5E36BE00)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0xFFFFFFFFFFFFFE80 (0x5E36B700 - 0x5E36B880)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0xFFFFFFFFA1C94900 (0x0000 - 0x5E36B700)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x5E36B600
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x5E36B600];                                // 0x0000(0x5E36B600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x751680 (0x5E36D600 - 0x5DC1BF80)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751680];                                  // 0x5DC1BF80(0x751680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosine
// 0x751600 (0x5E36D580 - 0x5DC1BF80)
class UMaterialExpressionArccosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751600];                                  // 0x5DC1BF80(0x751600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosineFast
// 0x751580 (0x5E36D500 - 0x5DC1BF80)
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751580];                                  // 0x5DC1BF80(0x751580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsine
// 0x751500 (0x5E36D480 - 0x5DC1BF80)
class UMaterialExpressionArcsine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751500];                                  // 0x5DC1BF80(0x751500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsineFast
// 0x751480 (0x5E36D400 - 0x5DC1BF80)
class UMaterialExpressionArcsineFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751480];                                  // 0x5DC1BF80(0x751480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent
// 0x751400 (0x5E36D380 - 0x5DC1BF80)
class UMaterialExpressionArctangent : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751400];                                  // 0x5DC1BF80(0x751400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2
// 0x751300 (0x5E36D280 - 0x5DC1BF80)
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751300];                                  // 0x5DC1BF80(0x751300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2Fast
// 0x751200 (0x5E36D180 - 0x5DC1BF80)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751200];                                  // 0x5DC1BF80(0x751200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2Fast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangentFast
// 0x751180 (0x5E36D100 - 0x5DC1BF80)
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751180];                                  // 0x5DC1BF80(0x751180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangentFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x751100 (0x5E36D080 - 0x5DC1BF80)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751100];                                  // 0x5DC1BF80(0x751100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightColor
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightVector
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBentNormalCustomOutput
// 0x5E36D000
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E36D000];                                // 0x0000(0x5E36D000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBentNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x751000 (0x5E36CF80 - 0x5DC1BF80)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751000];                                  // 0x5DC1BF80(0x751000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x750D80 (0x5E36CD00 - 0x5DC1BF80)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750D80];                                  // 0x5DC1BF80(0x750D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlendMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlurredNormalCustomOutput
// 0x5E36CC80
class UMaterialExpressionBlurredNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E36CC80];                                // 0x0000(0x5E36CC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlurredNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x750C80 (0x5E36CC00 - 0x5DC1BF80)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750C80];                                  // 0x5DC1BF80(0x750C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x750980 (0x5E36C900 - 0x5DC1BF80)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750980];                                  // 0x5DC1BF80(0x750980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x750900 (0x5E36C880 - 0x5DC1BF80)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750900];                                  // 0x5DC1BF80(0x750900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x750800 (0x5E36C780 - 0x5DC1BF80)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x750800];                                  // 0x5DC1BF80(0x750800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x1F80 (0x5E36E700 - 0x5E36C780)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5E36C780(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionChannelMaskParameter
// 0xFFFFFFFFFFFFFF00 (0x5E36E600 - 0x5E36E700)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionChannelMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x752380 (0x5E36E300 - 0x5DC1BF80)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752380];                                  // 0x5DC1BF80(0x752380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x5E36E280
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E36E280];                                // 0x0000(0x5E36E280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x752180 (0x5E36E100 - 0x5DC1BF80)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752180];                                  // 0x5DC1BF80(0x752180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x751F00 (0x5E36DE80 - 0x5DC1BF80)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751F00];                                  // 0x5DC1BF80(0x751F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x751C80 (0x5E36DC00 - 0x5DC1BF80)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751C80];                                  // 0x5DC1BF80(0x751C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x751C00 (0x5E36DB80 - 0x5DC1BF80)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751C00];                                  // 0x5DC1BF80(0x751C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x751B00 (0x5E36DA80 - 0x5DC1BF80)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751B00];                                  // 0x5DC1BF80(0x751B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x751A80 (0x5E36DA00 - 0x5DC1BF80)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751A80];                                  // 0x5DC1BF80(0x751A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x751A00 (0x5E36D980 - 0x5DC1BF80)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751A00];                                  // 0x5DC1BF80(0x751A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x751880 (0x5E36D800 - 0x5DC1BF80)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751880];                                  // 0x5DC1BF80(0x751880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x751780 (0x5E36D700 - 0x5DC1BF80)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x751780];                                  // 0x5DC1BF80(0x751780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x753780 (0x5E36F700 - 0x5DC1BF80)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753780];                                  // 0x5DC1BF80(0x753780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x2E00 (0x5E36F580 - 0x5E36C780)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x2E00];                                    // 0x5E36C780(0x2E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCurveAtlasRowParameter
// 0xFFFFFFFFFFFFFE80 (0x5E36F400 - 0x5E36F580)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCurveAtlasRowParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x753180 (0x5E36F100 - 0x5DC1BF80)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753180];                                  // 0x5DC1BF80(0x753180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x753100 (0x5E36F080 - 0x5DC1BF80)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753100];                                  // 0x5DC1BF80(0x753100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x753080 (0x5E36F000 - 0x5DC1BF80)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753080];                                  // 0x5DC1BF80(0x753080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalDerivative
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x752F00 (0x5E36EE80 - 0x5DC1BF80)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752F00];                                  // 0x5DC1BF80(0x752F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeltaTime
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionDeltaTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeltaTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x752D00 (0x5E36EC80 - 0x5DC1BF80)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752D00];                                  // 0x5DC1BF80(0x752D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x752C00 (0x5E36EB80 - 0x5DC1BF80)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752C00];                                  // 0x5DC1BF80(0x752C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x752B80 (0x5E36EB00 - 0x5DC1BF80)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752B80];                                  // 0x5DC1BF80(0x752B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x752A00 (0x5E36E980 - 0x5DC1BF80)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752A00];                                  // 0x5DC1BF80(0x752A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x752900 (0x5E36E880 - 0x5DC1BF80)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752900];                                  // 0x5DC1BF80(0x752900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x752880 (0x5E36E800 - 0x5DC1BF80)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752880];                                  // 0x5DC1BF80(0x752880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x752800 (0x5E36E780 - 0x5DC1BF80)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x752800];                                  // 0x5DC1BF80(0x752800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x753E80 (0x5E36FE00 - 0x5DC1BF80)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753E80];                                  // 0x5DC1BF80(0x753E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x753D80 (0x5E36FD00 - 0x5DC1BF80)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753D80];                                  // 0x5DC1BF80(0x753D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0xC0C00 (0x5DCDCB80 - 0x5DC1BF80)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xC0C00];                                   // 0x5DC1BF80(0xC0C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x753B00 (0x5E36FA80 - 0x5DC1BF80)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753B00];                                  // 0x5DC1BF80(0x753B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x753A80 (0x5E36FA00 - 0x5DC1BF80)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753A80];                                  // 0x5DC1BF80(0x753A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x753980 (0x5E36F900 - 0x5DC1BF80)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753980];                                  // 0x5DC1BF80(0x753980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x753880 (0x5E36F800 - 0x5DC1BF80)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x753880];                                  // 0x5DC1BF80(0x753880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x1780 (0x5E370F80 - 0x5E36F800)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x1780];                                    // 0x5E36F800(0x1780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x754F80 (0x5E370F00 - 0x5DC1BF80)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754F80];                                  // 0x5DC1BF80(0x754F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x754D00 (0x5E370C80 - 0x5DC1BF80)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754D00];                                  // 0x5DC1BF80(0x754D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x754880 (0x5E370800 - 0x5DC1BF80)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754880];                                  // 0x5DC1BF80(0x754880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x754580 (0x5E370500 - 0x5DC1BF80)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754580];                                  // 0x5DC1BF80(0x754580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x754480 (0x5E370400 - 0x5DC1BF80)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754480];                                  // 0x5DC1BF80(0x754480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x754300 (0x5E370280 - 0x5DC1BF80)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x754300];                                  // 0x5DC1BF80(0x754300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionHairAttributes
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionHairAttributes : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionHairAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x756000 (0x5E371F80 - 0x5DC1BF80)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756000];                                  // 0x5DC1BF80(0x756000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x755F00 (0x5E371E80 - 0x5DC1BF80)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x755F00];                                  // 0x5DC1BF80(0x755F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x755C00 (0x5E371B80 - 0x5DC1BF80)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x755C00];                                  // 0x5DC1BF80(0x755C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm10
// 0x755B80 (0x5E371B00 - 0x5DC1BF80)
class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x755B80];                                  // 0x5DC1BF80(0x755B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm10");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x755B00 (0x5E371A80 - 0x5DC1BF80)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x755B00];                                  // 0x5DC1BF80(0x755B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x757180 (0x5E373100 - 0x5DC1BF80)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757180];                                  // 0x5DC1BF80(0x757180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// 0x757100 (0x5E373080 - 0x5DC1BF80)
class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757100];                                  // 0x5DC1BF80(0x757100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMapARPassthroughCameraUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialAttributeLayers
// 0x756C80 (0x5E372C00 - 0x5DC1BF80)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756C80];                                  // 0x5DC1BF80(0x756C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialAttributeLayers");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x756B80 (0x5E372B00 - 0x5DC1BF80)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756B80];                                  // 0x5DC1BF80(0x756B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialLayerOutput
// 0xFFFFFFFFA1C8FB00 (0x0000 - 0x5E370500)
class UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialLayerOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x756A80 (0x5E372A00 - 0x5DC1BF80)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756A80];                                  // 0x5DC1BF80(0x756A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x756880 (0x5E372800 - 0x5DC1BF80)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756880];                                  // 0x5DC1BF80(0x756880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x756680 (0x5E372600 - 0x5DC1BF80)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756680];                                  // 0x5DC1BF80(0x756680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x756480 (0x5E372400 - 0x5DC1BF80)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x756480];                                  // 0x5DC1BF80(0x756480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x757F80 (0x5E373F00 - 0x5DC1BF80)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757F80];                                  // 0x5DC1BF80(0x757F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x757F00 (0x5E373E80 - 0x5DC1BF80)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757F00];                                  // 0x5DC1BF80(0x757F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x757E80 (0x5E373E00 - 0x5DC1BF80)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757E80];                                  // 0x5DC1BF80(0x757E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x757B00 (0x5E373A80 - 0x5DC1BF80)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757B00];                                  // 0x5DC1BF80(0x757B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRandom
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x8180 (0x5E373A00 - 0x5E36B880)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x8180];                                    // 0x5E36B880(0x8180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUVProperties
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionParticleSubUVProperties : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUVProperties");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceCustomData
// 0x757900 (0x5E373880 - 0x5DC1BF80)
class UMaterialExpressionPerInstanceCustomData : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757900];                                  // 0x5DC1BF80(0x757900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceCustomData");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x757780 (0x5E373700 - 0x5DC1BF80)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757780];                                  // 0x5DC1BF80(0x757780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedLocalBounds
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPreSkinnedLocalBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedLocalBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedNormal
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedPosition
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x757680 (0x5E373600 - 0x5DC1BF80)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757680];                                  // 0x5DC1BF80(0x757680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreviousFrameSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x757580 (0x5E373500 - 0x5DC1BF80)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757580];                                  // 0x5DC1BF80(0x757580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRadialBlurSceneTexture
// 0x757400 (0x5E373380 - 0x5DC1BF80)
class UMaterialExpressionRadialBlurSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757400];                                  // 0x5DC1BF80(0x757400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRadialBlurSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRayTracingQualitySwitch
// 0x757300 (0x5E373280 - 0x5DC1BF80)
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x757300];                                  // 0x5DC1BF80(0x757300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRayTracingQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x759300 (0x5E375280 - 0x5DC1BF80)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759300];                                  // 0x5DC1BF80(0x759300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReroute
// 0x759280 (0x5E375200 - 0x5DC1BF80)
class UMaterialExpressionReroute : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759280];                                  // 0x5DC1BF80(0x759280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReroute");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x759000 (0x5E374F80 - 0x5DC1BF80)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759000];                                  // 0x5DC1BF80(0x759000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x758D00 (0x5E374C80 - 0x5DC1BF80)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x758D00];                                  // 0x5DC1BF80(0x758D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRound
// 0x758C80 (0x5E374C00 - 0x5DC1BF80)
class UMaterialExpressionRound : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x758C80];                                  // 0x5DC1BF80(0x758C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRound");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// 0x5E374880
class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E374880];                                // 0x0000(0x5E374880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRuntimeVirtualTextureOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// 0x758800 (0x5E374780 - 0x5DC1BF80)
class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x758800];                                  // 0x5DC1BF80(0x758800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRuntimeVirtualTextureReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// 0x758480 (0x5E374400 - 0x5DC1BF80)
class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x758480];                                  // 0x5DC1BF80(0x758480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRuntimeVirtualTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// 0xFFFFFFFFFFFFFE80 (0x5E374280 - 0x5E374400)
class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSaturate
// 0x75A380 (0x5E376300 - 0x5DC1BF80)
class UMaterialExpressionSaturate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75A380];                                  // 0x5DC1BF80(0x75A380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSaturate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x75A180 (0x5E376100 - 0x5DC1BF80)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75A180];                                  // 0x5DC1BF80(0x75A180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x759F80 (0x5E375F00 - 0x5DC1BF80)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759F80];                                  // 0x5DC1BF80(0x759F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x759E00 (0x5E375D80 - 0x5DC1BF80)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759E00];                                  // 0x5DC1BF80(0x759E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSetMaterialAttributes
// 0xC0840 (0x5DCDC7C0 - 0x5DC1BF80)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xC0840];                                   // 0x5DC1BF80(0xC0840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShaderStageSwitch
// 0x759C00 (0x5E375B80 - 0x5DC1BF80)
class UMaterialExpressionShaderStageSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759C00];                                  // 0x5DC1BF80(0x759C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShaderStageSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadingModel
// 0x759B80 (0x5E375B00 - 0x5DC1BF80)
class UMaterialExpressionShadingModel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759B80];                                  // 0x5DC1BF80(0x759B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadingModel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadingPathSwitch
// 0x759A80 (0x5E375A00 - 0x5DC1BF80)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759A80];                                  // 0x5DC1BF80(0x759A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadingPathSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadowReplace
// 0x759980 (0x5E375900 - 0x5DC1BF80)
class UMaterialExpressionShadowReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759980];                                  // 0x5DC1BF80(0x759980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadowReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSign
// 0x759900 (0x5E375880 - 0x5DC1BF80)
class UMaterialExpressionSign : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759900];                                  // 0x5DC1BF80(0x759900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x759800 (0x5E375780 - 0x5DC1BF80)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759800];                                  // 0x5DC1BF80(0x759800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// 0x5E375600
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E375600];                                // 0x0000(0x5E375600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// 0x759600 (0x5E375580 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759600];                                  // 0x5DC1BF80(0x759600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereLightDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// 0x759500 (0x5E375480 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759500];                                  // 0x5DC1BF80(0x759500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// 0x759480 (0x5E375400 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759480];                                  // 0x5DC1BF80(0x759480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// 0x759400 (0x5E375380 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x759400];                                  // 0x5DC1BF80(0x759400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionSkyAtmosphereViewLuminance : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSkyAtmosphereViewLuminance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSobol
// 0x75B280 (0x5E377200 - 0x5DC1BF80)
class UMaterialExpressionSobol : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75B280];                                  // 0x5DC1BF80(0x75B280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x75AE00 (0x5E376D80 - 0x5DC1BF80)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75AE00];                                  // 0x5DC1BF80(0x75AE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x75AB00 (0x5E376A80 - 0x5DC1BF80)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75AB00];                                  // 0x5DC1BF80(0x75AB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x75AA00 (0x5E376980 - 0x5DC1BF80)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75AA00];                                  // 0x5DC1BF80(0x75AA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x75A980 (0x5E376900 - 0x5DC1BF80)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75A980];                                  // 0x5DC1BF80(0x75A980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x75A900 (0x5E376880 - 0x5DC1BF80)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75A900];                                  // 0x5DC1BF80(0x75A900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0xA080 (0x5E376800 - 0x5E36C780)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0xA080];                                    // 0x5E36C780(0xA080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x9E00 (0x5E376580 - 0x5E36C780)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x9E00];                                    // 0x5E36C780(0x9E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x75A400 (0x5E376380 - 0x5DC1BF80)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75A400];                                  // 0x5DC1BF80(0x75A400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x1B80 (0x5E378380 - 0x5E376800)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x1B80];                                    // 0x5E376800(0x1B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x75C200 (0x5E378180 - 0x5DC1BF80)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75C200];                                  // 0x5DC1BF80(0x75C200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangent
// 0x75C100 (0x5E378080 - 0x5DC1BF80)
class UMaterialExpressionTangent : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75C100];                                  // 0x5DC1BF80(0x75C100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangentOutput
// 0x5E378000
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E378000];                                // 0x0000(0x5E378000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTemporalSobol
// 0x75BE80 (0x5E377E00 - 0x5DC1BF80)
class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75BE80];                                  // 0x5DC1BF80(0x75BE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTemporalSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x75BC00 (0x5E377B80 - 0x5DC1BF80)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75BC00];                                  // 0x5DC1BF80(0x75BC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureLOD
// 0xBB80 (0x5E377980 - 0x5E36BE00)
class UMaterialExpressionTextureLOD : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0xBB80];                                    // 0x5E36BE00(0xBB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureLOD");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0xFFFFFFFFA1C94200 (0x0000 - 0x5E36BE00)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0xFFFFFFFFA1C94900 (0x0000 - 0x5E36B700)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureProperty
// 0x75B900 (0x5E377880 - 0x5DC1BF80)
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75B900];                                  // 0x5DC1BF80(0x75B900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2DArray
// 0xFFFFFFFFA1C94900 (0x0000 - 0x5E36B700)
class UMaterialExpressionTextureSampleParameter2DArray : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2DArray");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0xFFFFFFFFA1C94900 (0x0000 - 0x5E36B700)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x5E377800
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x5E377800];                                // 0x0000(0x5E377800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterVolume
// 0xFFFFFFFFA1C94900 (0x0000 - 0x5E36B700)
class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterVolume");
		return ptr;
	}

};


// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// 0x5E377780
class UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E377780];                                // 0x0000(0x5E377780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionThinTranslucentMaterialOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x75B680 (0x5E377600 - 0x5DC1BF80)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75B680];                                  // 0x5DC1BF80(0x75B680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x75B500 (0x5E377480 - 0x5DC1BF80)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75B500];                                  // 0x5DC1BF80(0x75B500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x75D480 (0x5E379400 - 0x5DC1BF80)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75D480];                                  // 0x5DC1BF80(0x75D480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTruncate
// 0x75D400 (0x5E379380 - 0x5DC1BF80)
class UMaterialExpressionTruncate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75D400];                                  // 0x5DC1BF80(0x75D400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTruncate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorNoise
// 0x75D180 (0x5E379100 - 0x5DC1BF80)
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75D180];                                  // 0x5DC1BF80(0x75D180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexInterpolator
// 0x5E379080
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5E379080];                                // 0x0000(0x5E379080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexInterpolator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexTangentWS
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionVertexTangentWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexTangentWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x75D080 (0x5E379000 - 0x5DC1BF80)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75D080];                                  // 0x5DC1BF80(0x75D080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// 0x75CF80 (0x5E378F00 - 0x5DC1BF80)
class UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75CF80];                                  // 0x5DC1BF80(0x75CF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVirtualTextureFeatureSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldNormalFromDepth
// 0xFFFFFFFFA23E4080 (0x0000 - 0x5DC1BF80)
class UMaterialExpressionWorldNormalFromDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldNormalFromDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x75CF00 (0x5E378E80 - 0x5DC1BF80)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x75CF00];                                  // 0x5DC1BF80(0x75CF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInterface
// 0x5E378D80
class UMaterialFunctionInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E378D80];                                // 0x0000(0x5E378D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInterface");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0xFFFFFFFFFFFFFE00 (0x5E378B80 - 0x5E378D80)
class UMaterialFunction : public UMaterialFunctionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInstance
// 0xFFFFFFFFFFFFF980 (0x5E378700 - 0x5E378D80)
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayer
// 0xFFFFFFFFA1C87480 (0x0000 - 0x5E378B80)
class UMaterialFunctionMaterialLayer : public UMaterialFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayer");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerInstance
// 0xFFFFFFFFA1C87900 (0x0000 - 0x5E378700)
class UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlend
// 0xFFFFFFFFA1C87480 (0x0000 - 0x5E378B80)
class UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// 0xFFFFFFFFA1C87900 (0x0000 - 0x5E378700)
class UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlendInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x2D3E220 (0x5DCDC220 - 0x5AF9E000)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D3E220];                                 // 0x5AF9E000(0x2D3E220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0xFFFFFFFFA23E6B00 (0x0000 - 0x5DC19500)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void SetVectorParameterValueByInfo();
	void SetVectorParameterValue();
	void SetTextureParameterValueByInfo();
	void SetTextureParameterValue();
	void SetScalarParameterValueByInfo();
	void SetScalarParameterValue();
	void K2_InterpolateMaterialInstanceParams();
	void K2_GetVectorParameterValueByInfo();
	void K2_GetVectorParameterValue();
	void K2_GetTextureParameterValueByInfo();
	void K2_GetTextureParameterValue();
	void K2_GetScalarParameterValueByInfo();
	void K2_GetScalarParameterValue();
	void K2_CopyMaterialInstanceParameters();
	void CopyParameterOverrides();
	void CopyInterpParameters();
};


// Class Engine.MaterialParameterCollection
// 0x5E379680
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E379680];                                // 0x0000(0x5E379680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x5E379600
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E379600];                                // 0x0000(0x5E379600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x33DE580 (0x5E37C580 - 0x5AF9E000)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33DE580];                                 // 0x5AF9E000(0x33DE580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void Stop();
	void SetPosition();
	void SetLoopingState();
	void Reverse();
	void Play();
	void Pause();
	void EnableGroupByName();
	void ChangePlaybackDirection();
};


// Class Engine.MatineeActorCameraAnim
// 0xFFFFFFFFFFFFFF80 (0x5E37C500 - 0x5E37C580)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.MatineeAnimInterface
// 0x0000
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.MeshMergeCullingVolume
// 0x0000
class AMeshMergeCullingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshMergeCullingVolume");
		return ptr;
	}

};


// Class Engine.MeshSimplificationSettings
// 0x5E37C480
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E37C480];                                // 0x0000(0x5E37C480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}


	void RemovePaintedVertices();
	void PaintVerticesSingleColor();
	void PaintVerticesLerpAlongAxis();
};


// Class Engine.MicroTransactionBase
// 0x92E0 (0x5DCDBDC0 - 0x5DCD2AE0)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x92E0];                                    // 0x5DCD2AE0(0x92E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x3574880 (0x5E37BE00 - 0x5AE07580)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x3574880];                                 // 0x5AE07580(0x3574880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x5E37BD80
class UMorphTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37BD80];                                // 0x0000(0x5E37BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.NavCollisionBase
// 0x5E37BD00
class UNavCollisionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37BD00];                                // 0x0000(0x5E37BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollisionBase");
		return ptr;
	}

};


// Class Engine.NavEdgeProviderInterface
// 0x0000
class UNavEdgeProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x5E37BC80
class UNavigationDataChunk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37BC80];                                // 0x0000(0x5E37BC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationDataInterface
// 0x0000
class UNavigationDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataInterface");
		return ptr;
	}

};


// Class Engine.NavigationSystemBase
// 0x0000
class UNavigationSystemBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemBase");
		return ptr;
	}

};


// Class Engine.NavigationSystemConfig
// 0x5E37BA80
class UNavigationSystemConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37BA80];                                // 0x0000(0x5E37BA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemConfig");
		return ptr;
	}

};


// Class Engine.NullNavSysConfig
// 0xFFFFFFFFA1C84580 (0x0000 - 0x5E37BA80)
class UNullNavSysConfig : public UNavigationSystemConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NullNavSysConfig");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x5DCDBC80
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDBC80];                                // 0x0000(0x5DCDBC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.SimulatedClientNetConnection
// 0xFFFFFFFFA4F66540 (0x0000 - 0x5B099AC0)
class USimulatedClientNetConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulatedClientNetConnection");
		return ptr;
	}

};


// Class Engine.NetPushModelHelpers
// 0x0000
class UNetPushModelHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetPushModelHelpers");
		return ptr;
	}


	void MarkPropertyDirtyFromRepIndex();
	void MarkPropertyDirty();
};


// Class Engine.NetworkPredictionInterface
// 0x0000
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x5E37D580
class UNetworkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E37D580];                                // 0x0000(0x5E37D580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.NodeMappingContainer
// 0x5B0ED840
class UNodeMappingContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0ED840];                                // 0x0000(0x5B0ED840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingContainer");
		return ptr;
	}

};


// Class Engine.NodeMappingProviderInterface
// 0x0000
class UNodeMappingProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingProviderInterface");
		return ptr;
	}

};


// Class Engine.Note
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x5DCDBA00
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDBA00];                                // 0x0000(0x5DCDBA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x5DCDE2A0
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDE2A0];                                // 0x0000(0x5DCDE2A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.ObjectTraceWorldSubsystem
// 0x0000
class UObjectTraceWorldSubsystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectTraceWorldSubsystem");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x0000
class UPackageMapClient : public UPackageMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x9F6E80 (0x5E37CB80 - 0x5D985D00)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x9F6E80];                                  // 0x5D985D00(0x9F6E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.ParticleChannelContainerWrapper
// 0x5E37CB00
class UParticleChannelContainerWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37CB00];                                // 0x0000(0x5E37CB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleChannelContainerWrapper");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x5E37E400
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37E400];                                // 0x0000(0x5E37E400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x5E37DD00
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37DD00];                                // 0x0000(0x5E37DD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x5E37F780
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E37F780];                                // 0x0000(0x5E37F780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0xFFFFFFFFFFFFFF80 (0x5E37F700 - 0x5E37F780)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0xFFFFFFFFFFFFFF00 (0x5E37F600 - 0x5E37F700)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0xFFFFFFFFFFFFFE80 (0x5E37F580 - 0x5E37F700)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0xFFFFFFFFFFFFFD80 (0x5E37F480 - 0x5E37F700)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0xFFFFFFFFFFFFFC80 (0x5E37F380 - 0x5E37F700)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0xFFFFFFFFFFFFFC00 (0x5E37F300 - 0x5E37F700)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x5E37F100
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x5E37F100];                                // 0x0000(0x5E37F100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x5E37EC80
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x5E37EC80];                                // 0x0000(0x5E37EC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x5E37FE80
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x5E37FE80];                                // 0x0000(0x5E37FE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x5E37FC80
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x5E37FC80];                                // 0x0000(0x5E37FC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x5E37F880
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x5E37F880];                                // 0x0000(0x5E37F880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x5E380780
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x5E380780];                                // 0x0000(0x5E380780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x5E380280
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x5E380280];                                // 0x0000(0x5E380280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x5E381E00
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x5E381E00];                                // 0x0000(0x5E381E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x5E381C80
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x5E381C80];                                // 0x0000(0x5E381C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x5E381400
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x5E381400];                                // 0x0000(0x5E381400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x5E383080
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x5E383080];                                // 0x0000(0x5E383080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x5E382F00
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x5E382F00];                                // 0x0000(0x5E382F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E382E80 - 0x5E382F00)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x5E382D00
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x5E382D00];                                // 0x0000(0x5E382D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x5E382B80
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x5E382B80];                                // 0x0000(0x5E382B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x5DCDDBC0
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x5DCDDBC0];                                // 0x0000(0x5DCDDBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x5E382A00
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x5E382A00];                                // 0x0000(0x5E382A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0xFFFFFFFFFFFFFF80 (0x5E382980 - 0x5E382A00)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0xFFFFFFFFFFFFFC00 (0x5E382600 - 0x5E382A00)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x5E382380
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x5E382380];                                // 0x0000(0x5E382380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x5E382180
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x5E382180];                                // 0x0000(0x5E382180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x5E384200
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x5E384200];                                // 0x0000(0x5E384200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E384180 - 0x5E384200)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x5E383B80
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0x5E383B80];                                // 0x0000(0x5E383B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E383B00 - 0x5E383B80)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x5E383980
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E383980];                                // 0x0000(0x5E383980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E383900 - 0x5E383980)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x5E383400
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E383400];                                // 0x0000(0x5E383400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x5E383200
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E383200];                                // 0x0000(0x5E383200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x5E385000
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E385000];                                // 0x0000(0x5E385000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x5E384F80
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E384F80];                                // 0x0000(0x5E384F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x5E384A80
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E384A80];                                // 0x0000(0x5E384A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0xFFFFFFFFFFFFFE00 (0x5E384880 - 0x5E384A80)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E384800 - 0x5E384880)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0xFFFFFFFFFFFFFD00 (0x5E384780 - 0x5E384A80)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E384700 - 0x5E384780)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x5E384500
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E384500];                                // 0x0000(0x5E384500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x5E385E00
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E385E00];                                // 0x0000(0x5E385E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0xFFFFFFFFA1C7C680 (0x0000 - 0x5E383980)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x5E385D80
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x5E385D80];                                // 0x0000(0x5E385D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x5DCDD8A0
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x5DCDD8A0];                                // 0x0000(0x5DCDD8A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x5E385C00
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x5E385C00];                                // 0x0000(0x5E385C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E385B80 - 0x5E385C00)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x5E385B00
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x5E385B00];                                // 0x0000(0x5E385B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E385A80 - 0x5E385B00)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x5E385A00
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x5E385A00];                                // 0x0000(0x5E385A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x5E385900
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x5E385900];                                // 0x0000(0x5E385900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x6100 (0x5E385880 - 0x5E37F780)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x6100];                                    // 0x5E37F780(0x6100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0xFFFFFFFFFFFFFC80 (0x5E385500 - 0x5E385880)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x5E385480
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x5E385480];                                // 0x0000(0x5E385480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x5DCDD800
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x5DCDD800];                                // 0x0000(0x5DCDD800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x6A9B80 (0x5E387380 - 0x5DCDD800)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x6A9B80];                                  // 0x5DCDD800(0x6A9B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x5E387300
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E387300];                                // 0x0000(0x5E387300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x8600 (0x5E387D80 - 0x5E37F780)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8600];                                    // 0x5E37F780(0x8600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x5E387D00
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x5E387D00];                                // 0x0000(0x5E387D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E387C80 - 0x5E387D00)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x5E387B80
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x5E387B80];                                // 0x0000(0x5E387B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x5E387B00
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x5E387B00];                                // 0x0000(0x5E387B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E387A80 - 0x5E387B00)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x5E387A00
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x5E387A00];                                // 0x0000(0x5E387A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x5E387980
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x5E387980];                                // 0x0000(0x5E387980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E387900 - 0x5E387980)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleByTime
// 0x5E387700
class UParticleModuleSizeScaleByTime : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x5E387700];                                // 0x0000(0x5E387700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleByTime");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x5E387500
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x5E387500];                                // 0x0000(0x5E387500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x5E389400
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x5E389400];                                // 0x0000(0x5E389400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x5E389300
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x5E389300];                                // 0x0000(0x5E389300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x5E389280
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x5E389280];                                // 0x0000(0x5E389280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x9A00 (0x5E389180 - 0x5E37F780)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x9A00];                                    // 0x5E37F780(0x9A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0xFFFFFFFFFFFFFD00 (0x5E388E80 - 0x5E389180)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0xFFFFFFFFFFFFF900 (0x5E388A80 - 0x5E389180)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x5E388900
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x5E388900];                                // 0x0000(0x5E388900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0xFFFFFFFFFFFFFE80 (0x5E388780 - 0x5E388900)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x5E38A480
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x5E38A480];                                // 0x0000(0x5E38A480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x5E38A100
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x5E38A100];                                // 0x0000(0x5E38A100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x5E389800
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x5E389800];                                // 0x0000(0x5E389800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x5E389600
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x5E389600];                                // 0x0000(0x5E389600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x5E38AE80
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x5E38AE80];                                // 0x0000(0x5E38AE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x5E38C580
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x5E38C580];                                // 0x0000(0x5E38C580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0xFFFFFFFFA1C80880 (0x0000 - 0x5E37F780)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x5E38C400
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38C400];                                // 0x0000(0x5E38C400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x5E38BE80
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38BE80];                                // 0x0000(0x5E38BE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x5E38BD80
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38BD80];                                // 0x0000(0x5E38BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x5E38BD00
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38BD00];                                // 0x0000(0x5E38BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x5E38BC00
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38BC00];                                // 0x0000(0x5E38BC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x5E38BB00
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x5E38BB00];                                // 0x0000(0x5E38BB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0xC280 (0x5E38BA00 - 0x5E37F780)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0xC280];                                    // 0x5E37F780(0xC280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0xFFFFFFFFFFFFFF00 (0x5E38B900 - 0x5E38BA00)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0xFFFFFFFFFFFFFF80 (0x5E38B880 - 0x5E38B900)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0xFFFFFFFFFFFFFD00 (0x5E38B700 - 0x5E38BA00)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0xFFFFFFFFFFFFFC80 (0x5E38B680 - 0x5E38BA00)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x1C80 (0x5E38D680 - 0x5E38BA00)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1C80];                                    // 0x5E38BA00(0x1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0xFFFFFFFFA1C81C00 (0x0000 - 0x5E37E400)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x3197000 (0x5E38E500 - 0x5B1F7500)
class UParticleSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData00[0x3197000];                                 // 0x5B1F7500(0x3197000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	void ContainsEmitterType();
};


// Class Engine.ParticleSystemReplay
// 0x5E38E480
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E38E480];                                // 0x0000(0x5E38E480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PathFollowingAgentInterface
// 0x0000
class UPathFollowingAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathFollowingAgentInterface");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0xD7DE100 (0x5E38DF80 - 0x50BAFE80)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD7DE100];                                 // 0x50BAFE80(0xD7DE100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}


	void MakeNoise();
};


// Class Engine.PhysicalAnimationComponent
// 0xD7DD980 (0x5E38D800 - 0x50BAFE80)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD7DD980];                                 // 0x50BAFE80(0xD7DD980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}


	void SetStrengthMultiplyer();
	void SetSkeletalMeshComponent();
	void GetBodyTargetTransform();
	void ApplyPhysicalAnimationSettingsBelow();
	void ApplyPhysicalAnimationSettings();
	void ApplyPhysicalAnimationProfileBelow();
};


// Class Engine.PhysicalMaterial
// 0x5E38F280
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E38F280];                                // 0x0000(0x5E38F280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialMask
// 0x5E38F100
class UPhysicalMaterialMask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E38F100];                                // 0x0000(0x5E38F100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialMask");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x5DCDF600
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDF600];                                // 0x0000(0x5DCDF600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.SkeletalBodySetup
// 0x6AEA00 (0x5E38EC80 - 0x5DCE0280)
class USkeletalBodySetup : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x6AEA00];                                  // 0x5DCE0280(0x6AEA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x5E38EA80
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E38EA80];                                // 0x0000(0x5E38EA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x5E38E880
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x5E38E880];                                // 0x0000(0x5E38E880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0xD6F9080 (0x5E391800 - 0x50C98780)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD6F9080];                                 // 0x50C98780(0xD6F9080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}


	void SetOrientationDriveTwistAndSwing();
	void SetOrientationDriveSLERP();
	void SetLinearZLimit();
	void SetLinearYLimit();
	void SetLinearXLimit();
	void SetLinearVelocityTarget();
	void SetLinearVelocityDrive();
	void SetLinearPositionTarget();
	void SetLinearPositionDrive();
	void SetLinearDriveParams();
	void SetLinearBreakable();
	void SetDisableCollision();
	void SetConstraintReferencePosition();
	void SetConstraintReferenceOrientation();
	void SetConstraintReferenceFrame();
	void SetConstrainedComponents();
	void SetAngularVelocityTarget();
	void SetAngularVelocityDriveTwistAndSwing();
	void SetAngularVelocityDriveSLERP();
	void SetAngularVelocityDrive();
	void SetAngularTwistLimit();
	void SetAngularSwing2Limit();
	void SetAngularSwing1Limit();
	void SetAngularOrientationTarget();
	void SetAngularOrientationDrive();
	void SetAngularDriveParams();
	void SetAngularDriveMode();
	void SetAngularBreakable();
	void IsBroken();
	void GetCurrentTwist();
	void GetCurrentSwing2();
	void GetCurrentSwing1();
	void GetConstraintForce();
	void BreakConstraint();
};


// Class Engine.PhysicsConstraintTemplate
// 0x5E391680
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E391680];                                // 0x0000(0x5E391680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PhysicsHandleComponent
// 0xD7E2900 (0x5E392780 - 0x50BAFE80)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD7E2900];                                 // 0x50BAFE80(0xD7E2900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}


	void SetTargetRotation();
	void SetTargetLocationAndRotation();
	void SetTargetLocation();
	void SetLinearStiffness();
	void SetLinearDamping();
	void SetInterpolationSpeed();
	void SetAngularStiffness();
	void SetAngularDamping();
	void ReleaseComponent();
	void GrabComponentAtLocationWithRotation();
	void GrabComponentAtLocation();
	void GrabComponent();
	void GetTargetLocationAndRotation();
	void GetGrabbedComponent();
};


// Class Engine.PhysicsSettings
// 0x5E393200
class UPhysicsSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E393200];                                // 0x0000(0x5E393200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSpringComponent
// 0xD6FC600 (0x5E394D80 - 0x50C98780)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD6FC600];                                 // 0x50C98780(0xD6FC600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}


	void GetSpringRestingPoint();
	void GetSpringDirection();
	void GetSpringCurrentEndPoint();
	void GetNormalizedCompressionScalar();
};


// Class Engine.PhysicsThruster
// 0x5E394D00
class APhysicsThruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x5E394D00];                                // 0x0000(0x5E394D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.PhysicsThrusterComponent
// 0xD6FC500 (0x5E394C80 - 0x50C98780)
class UPhysicsThrusterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD6FC500];                                 // 0x50C98780(0xD6FC500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.SceneCapture
// 0x33F6B80 (0x5E394B80 - 0x5AF9E000)
class ASceneCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x33F6B80];                                 // 0x5AF9E000(0x33F6B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.PlanarReflection
// 0xFFFFFFFFFFFFFE80 (0x5E394A00 - 0x5E394B80)
class APlanarReflection : public ASceneCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}


	void OnInterpToggle();
};


// Class Engine.SceneCaptureComponent
// 0xD0468E0 (0x5DCDF060 - 0x50C98780)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD0468E0];                                 // 0x50C98780(0xD0468E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void ShowOnlyComponent();
	void ShowOnlyActorComponents();
	void SetCaptureSortPriority();
	void RemoveShowOnlyComponent();
	void RemoveShowOnlyActorComponents();
	void HideComponent();
	void HideActorComponents();
	void ClearShowOnlyComponents();
	void ClearHiddenComponents();
};


// Class Engine.PlanarReflectionComponent
// 0x6B6720 (0x5E395780 - 0x5DCDF060)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x6B6720];                                  // 0x5DCDF060(0x6B6720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0xFFFFFFFFA231E300 (0x0000 - 0x5DCE1D00)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x6B3C80 (0x5E395600 - 0x5DCE1980)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x6B3C80];                                  // 0x5DCE1980(0x6B3C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlatformEventsComponent
// 0x54180 (0x50C04000 - 0x50BAFE80)
class UPlatformEventsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x54180];                                   // 0x50BAFE80(0x54180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}


	void SupportsConvertibleLaptops();
	void PlatformEventDelegate__DelegateSignature();
	void IsInTabletMode();
	void IsInLaptopMode();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x5E397180
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E397180];                                // 0x0000(0x5E397180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	void GetNumHeaders();
	void GetHeaderValue();
	void GetHeader();
};


// Class Engine.PlayerStartPIE
// 0xFFFFFFFFA255F180 (0x0000 - 0x5DAA0E80)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.PluginCommandlet
// 0xFFFFFFFFA4E01300 (0x0000 - 0x5B1FED00)
class UPluginCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x6AA480 (0x5E397000 - 0x5DCECB80)
class APointLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x6AA480];                                  // 0x5DCECB80(0x6AA480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void SetRadius();
	void SetLightFalloffExponent();
};


// Class Engine.PointLightComponent
// 0x6BC4E0 (0x5E396B80 - 0x5DCDA6A0)
class UPointLightComponent : public ULocalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x6BC4E0];                                  // 0x5DCDA6A0(0x6BC4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void SetSourceRadius();
	void SetSourceLength();
	void SetSoftSourceRadius();
	void SetLightFalloffExponent();
};


// Class Engine.Polys
// 0x0000
class UPolys : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.PoseableMeshComponent
// 0xFFFFFFFFA4F21D00 (0x0000 - 0x5B0DE300)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void SetBoneTransformByName();
	void SetBoneScaleByName();
	void SetBoneRotationByName();
	void SetBoneLocationByName();
	void ResetBoneTransformByName();
	void GetBoneTransformByName();
	void GetBoneScaleByName();
	void GetBoneRotationByName();
	void GetBoneLocationByName();
	void CopyPoseFromSkeletalComponent();
};


// Class Engine.PoseAsset
// 0x6E9780 (0x5E397D80 - 0x5DCAE600)
class UPoseAsset : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x6E9780];                                  // 0x5DCAE600(0x6E9780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}

};


// Class Engine.PoseWatch
// 0x5E397C80
class UPoseWatch : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E397C80];                                // 0x0000(0x5E397C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0xD6FF100 (0x5E397880 - 0x50C98780)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD6FF100];                                 // 0x50C98780(0xD6FF100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}


	void AddOrUpdateBlendable();
};


// Class Engine.PostProcessVolume
// 0x5E397480
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5E397480];                                // 0x0000(0x5E397480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void AddOrUpdateBlendable();
};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x5DCDEDE0
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DCDEDE0];                                // 0x0000(0x5DCDEDE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.PreviewCollectionInterface
// 0x0000
class UPreviewCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewCollectionInterface");
		return ptr;
	}

};


// Class Engine.PreviewMeshCollection
// 0x32FBEC0 (0x5E399300 - 0x5B09D440)
class UPreviewMeshCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x32FBEC0];                                 // 0x5B09D440(0x32FBEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewMeshCollection");
		return ptr;
	}

};


// Class Engine.ProxyLODMeshSimplificationSettings
// 0x5E399280
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E399280];                                // 0x0000(0x5E399280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyLODMeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x5E399200
class ARadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x5E399200];                                // 0x0000(0x5E399200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}


	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};


// Class Engine.RadialForceComponent
// 0xD700580 (0x5E398D00 - 0x50C98780)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD700580];                                 // 0x50C98780(0xD700580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}


	void RemoveObjectTypeToAffect();
	void FireImpulse();
	void AddObjectTypeToAffect();
};


// Class Engine.RectLight
// 0x6AC100 (0x5E398C80 - 0x5DCECB80)
class ARectLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x6AC100];                                  // 0x5DCECB80(0x6AC100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLight");
		return ptr;
	}

};


// Class Engine.RectLightComponent
// 0x6BE0E0 (0x5E398780 - 0x5DCDA6A0)
class URectLightComponent : public ULocalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x6BE0E0];                                  // 0x5DCDA6A0(0x6BE0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLightComponent");
		return ptr;
	}


	void SetSourceWidth();
	void SetSourceTexture();
	void SetSourceHeight();
	void SetBarnDoorLength();
	void SetBarnDoorAngle();
};


// Class Engine.RendererSettings
// 0x5E39B600
class URendererSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E39B600];                                // 0x0000(0x5E39B600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.RendererOverrideSettings
// 0x5E39D600
class URendererOverrideSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E39D600];                                // 0x0000(0x5E39D600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}

};


// Class Engine.RenderThreadInputHandler
// 0x0000
class URenderThreadInputHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RenderThreadInputHandler");
		return ptr;
	}

};


// Class Engine.ReplicationDriver
// 0x0000
class UReplicationDriver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationDriver");
		return ptr;
	}

};


// Class Engine.ReplicationConnectionDriver
// 0x0000
class UReplicationConnectionDriver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationConnectionDriver");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0000
class UReporterBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0000
class UReporterGraph : public UReporterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x5E39D000
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E39D000];                                // 0x0000(0x5E39D000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x5DCDEA20
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDEA20];                                // 0x0000(0x5DCDEA20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.RotatingMovementComponent
// 0xD799E00 (0x5E39CD80 - 0x50C02F80)
class URotatingMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xD799E00];                                 // 0x50C02F80(0xD799E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.RuntimeOptionsBase
// 0x0000
class URuntimeOptionsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeOptionsBase");
		return ptr;
	}

};


// Class Engine.RuntimeVirtualTexture
// 0x5DCDE980
class URuntimeVirtualTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDE980];                                // 0x0000(0x5DCDE980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeVirtualTexture");
		return ptr;
	}


	void GetTileSize();
	void GetTileCount();
	void GetTileBorderSize();
	void GetSize();
};


// Class Engine.RuntimeVirtualTextureComponent
// 0xD705B80 (0x5E39E300 - 0x50C98780)
class URuntimeVirtualTextureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD705B80];                                 // 0x50C98780(0xD705B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeVirtualTextureComponent");
		return ptr;
	}


	void GetVirtualTextureTransform();
};


// Class Engine.RuntimeVirtualTextureStreamingProxy
// 0x6B4880 (0x5E39E180 - 0x5DCE9900)
class URuntimeVirtualTextureStreamingProxy : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x6B4880];                                  // 0x5DCE9900(0x6B4880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeVirtualTextureStreamingProxy");
		return ptr;
	}

};


// Class Engine.RuntimeVirtualTextureVolume
// 0x3400100 (0x5E39E100 - 0x5AF9E000)
class ARuntimeVirtualTextureVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3400100];                                 // 0x5AF9E000(0x3400100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeVirtualTextureVolume");
		return ptr;
	}

};


// Class Engine.RVOAvoidanceInterface
// 0x0000
class URVOAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.SceneCapture2D
// 0x9480 (0x5E39E000 - 0x5E394B80)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x9480];                                    // 0x5E394B80(0x9480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}


	void OnInterpToggle();
};


// Class Engine.SceneCaptureComponent2D
// 0x6C0720 (0x5E39F780 - 0x5DCDF060)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x6C0720];                                  // 0x5DCDF060(0x6C0720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}


	void CaptureScene();
	void AddOrUpdateBlendable();
};


// Class Engine.SceneCaptureComponentCube
// 0x6C0420 (0x5E39F480 - 0x5DCDF060)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x6C0420];                                  // 0x5DCDF060(0x6C0420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}


	void CaptureScene();
};


// Class Engine.SceneCaptureCube
// 0xA800 (0x5E39F380 - 0x5E394B80)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0xA800];                                    // 0x5E394B80(0xA800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}


	void OnInterpToggle();
};


// Class Engine.SCS_Node
// 0x5DCDE7A0
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDE7A0];                                // 0x0000(0x5DCDE7A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0000
class USelection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.ServerStatReplicator
// 0x5E3A0780
class AServerStatReplicator : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5E3A0780];                                // 0x0000(0x5E3A0780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerStatReplicator");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x6B6E00 (0x5E3A0700 - 0x5DCE9900)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x6B6E00];                                  // 0x5DCE9900(0x6B6E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x5DCDE660
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDE660];                                // 0x0000(0x5DCDE660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActor
// 0x3402200 (0x5E3A0200 - 0x5AF9E000)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3402200];                                 // 0x5AF9E000(0x3402200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};


// Class Engine.SkeletalMeshEditorData
// 0x0000
class USkeletalMeshEditorData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshEditorData");
		return ptr;
	}

};


// Class Engine.SkeletalMeshLODSettings
// 0x33049C0 (0x5E3A1E00 - 0x5B09D440)
class USkeletalMeshLODSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x33049C0];                                 // 0x5B09D440(0x33049C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshLODSettings");
		return ptr;
	}


	void SetMinMaxLodToMesh();
};


// Class Engine.SkeletalMeshSimplificationSettings
// 0x5E3A1D80
class USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E3A1D80];                                // 0x0000(0x5E3A1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x5E3A1800
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A1800];                                // 0x0000(0x5E3A1800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}


	void InitializeSocketFromLocation();
	void GetSocketLocation();
};


// Class Engine.SkyAtmosphereComponent
// 0xD047600 (0x5DCDFD80 - 0x50C98780)
class USkyAtmosphereComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD047600];                                 // 0x50C98780(0xD047600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyAtmosphereComponent");
		return ptr;
	}


	void SetSkyLuminanceFactor();
	void SetRayleighScatteringScale();
	void SetRayleighScattering();
	void SetRayleighExponentialDistribution();
	void SetOtherAbsorptionScale();
	void SetOtherAbsorption();
	void SetMieScatteringScale();
	void SetMieScattering();
	void SetMieExponentialDistribution();
	void SetMieAnisotropy();
	void SetMieAbsorptionScale();
	void SetMieAbsorption();
	void SetHeightFogContribution();
	void SetAerialPespectiveViewDistanceScale();
	void OverrideAtmosphereLightDirection();
};


// Class Engine.SkyAtmosphere
// 0x5E3A4200
class ASkyAtmosphere : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5E3A4200];                                // 0x0000(0x5E3A4200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyAtmosphere");
		return ptr;
	}

};


// Class Engine.SkyLightComponent
// 0x6B5480 (0x5E3A3400 - 0x5DCEDF80)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x6B5480];                                  // 0x5DCEDF80(0x6B5480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}


	void SetVolumetricScatteringIntensity();
	void SetOcclusionTint();
	void SetOcclusionExponent();
	void SetOcclusionContrast();
	void SetMinOcclusion();
	void SetLowerHemisphereColor();
	void SetLightColor();
	void SetIntensity();
	void SetIndirectLightingIntensity();
	void SetCubemapBlend();
	void SetCubemap();
	void RecaptureSky();
};


// Class Engine.SlateBrushAsset
// 0x5E3A3380
class USlateBrushAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A3380];                                // 0x0000(0x5E3A3380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SlateTextureAtlasInterface
// 0x0000
class USlateTextureAtlasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0xFFFFFFFFA4E01300 (0x0000 - 0x5B1FED00)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.SoundAttenuation
// 0x5E3A3300
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A3300];                                // 0x0000(0x5E3A3300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x5E3A5180
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A5180];                                // 0x0000(0x5E3A5180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundConcurrency
// 0x5E3A5100
class USoundConcurrency : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A5100];                                // 0x0000(0x5E3A5100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x71ED80 (0x5E3A4C00 - 0x5DC85E80)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x71ED80];                                  // 0x5DC85E80(0x71ED80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePresetChain
// 0x5DCDFBA0
class USoundEffectSourcePresetChain : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDFBA0];                                // 0x0000(0x5DCDFBA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePresetChain");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x5DCDFB00
class USoundGroups : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDFB00];                                // 0x0000(0x5DCDFB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x5E3A4680
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3A4680];                                // 0x0000(0x5E3A4680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x5DCDF9C0
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCDF9C0];                                // 0x0000(0x5DCDF9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0xFFFFFFFFA2320640 (0x0000 - 0x5DCDF9C0)
class USoundNodeAssetReferencer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x6C4AC0 (0x5E3A4480 - 0x5DCDF9C0)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C4AC0];                                  // 0x5DCDF9C0(0x6C4AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x6C4A40 (0x5E3A4400 - 0x5DCDF9C0)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C4A40];                                  // 0x5DCDF9C0(0x6C4A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0xFFFFFFFFFFFFFF60 (0x5DCDF920 - 0x5DCDF9C0)
class USoundNodeConcatenator : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x6C48C0 (0x5E3A4280 - 0x5DCDF9C0)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C48C0];                                  // 0x5DCDF9C0(0x6C48C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x6C68C0 (0x5E3A6280 - 0x5DCDF9C0)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C68C0];                                  // 0x5DCDF9C0(0x6C68C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0xFFFFFFFFFFFFFEC0 (0x5DCDF880 - 0x5DCDF9C0)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x6C66C0 (0x5E3A6080 - 0x5DCDF9C0)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C66C0];                                  // 0x5DCDF9C0(0x6C66C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x6C5FC0 (0x5E3A5980 - 0x5DCDF9C0)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C5FC0];                                  // 0x5DCDF9C0(0x6C5FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0xFFFFFFFFFFFFFE20 (0x5DCDF7E0 - 0x5DCDF9C0)
class USoundNodeGroupControl : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x6C5E40 (0x5E3A5800 - 0x5DCDF9C0)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C5E40];                                  // 0x5DCDF9C0(0x6C5E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0xFFFFFFFFA2320640 (0x0000 - 0x5DCDF9C0)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x6D1AA0 (0x5E3B1460 - 0x5DCDF9C0)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6D1AA0];                                  // 0x5DCDF9C0(0x6D1AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x6C5BC0 (0x5E3A5580 - 0x5DCDF9C0)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C5BC0];                                  // 0x5DCDF9C0(0x6C5BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x6C5AC0 (0x5E3A5480 - 0x5DCDF9C0)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C5AC0];                                  // 0x5DCDF9C0(0x6C5AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x6C76C0 (0x5E3A7080 - 0x5DCDF9C0)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C76C0];                                  // 0x5DCDF9C0(0x6C76C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x6C7780 (0x5E3A7000 - 0x5DCDF880)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x6C7780];                                  // 0x5DCDF880(0x6C7780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0xFFFFFFFFA2320640 (0x0000 - 0x5DCDF9C0)
class USoundNodeQualityLevel : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x6D1960 (0x5E3B1320 - 0x5DCDF9C0)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6D1960];                                  // 0x5DCDF9C0(0x6D1960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x6C7240 (0x5E3A6C00 - 0x5DCDF9C0)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C7240];                                  // 0x5DCDF9C0(0x6C7240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x6C71C0 (0x5E3A6B80 - 0x5DCDF9C0)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C71C0];                                  // 0x5DCDF9C0(0x6C71C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x6C7140 (0x5E3A6B00 - 0x5DCDF9C0)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x6C7140];                                  // 0x5DCDF9C0(0x6C7140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x5E3A6980
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData00[0x5E3A6980];                                // 0x0000(0x5E3A6980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundSourceBus
// 0x729F80 (0x5E3B1280 - 0x5DC87300)
class USoundSourceBus : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x729F80];                                  // 0x5DC87300(0x729F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSourceBus");
		return ptr;
	}

};


// Class Engine.SoundSubmixBase
// 0x5E3B11E0
class USoundSubmixBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B11E0];                                // 0x0000(0x5E3B11E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmixBase");
		return ptr;
	}

};


// Class Engine.SoundSubmixWithParentBase
// 0xFFFFFFFFFFFF5520 (0x5E3A6700 - 0x5E3B11E0)
class USoundSubmixWithParentBase : public USoundSubmixBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmixWithParentBase");
		return ptr;
	}

};


// Class Engine.SoundSubmix
// 0x1700 (0x5E3A7E00 - 0x5E3A6700)
class USoundSubmix : public USoundSubmixWithParentBase
{
public:
	unsigned char                                      UnknownData00[0x1700];                                    // 0x5E3A6700(0x1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmix");
		return ptr;
	}


	void StopRecordingOutput();
	void StopEnvelopeFollowing();
	void StartRecordingOutput();
	void StartEnvelopeFollowing();
	void SetSubmixOutputVolume();
	void AddEnvelopeFollowerDelegate();
};


// Class Engine.SoundfieldSubmix
// 0x1580 (0x5E3A7C80 - 0x5E3A6700)
class USoundfieldSubmix : public USoundSubmixWithParentBase
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5E3A6700(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundfieldSubmix");
		return ptr;
	}

};


// Class Engine.EndpointSubmix
// 0xFFFFFFFFFFFF69A0 (0x5E3A7B80 - 0x5E3B11E0)
class UEndpointSubmix : public USoundSubmixBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EndpointSubmix");
		return ptr;
	}

};


// Class Engine.SoundfieldEndpointSubmix
// 0xFFFFFFFFFFFF67A0 (0x5E3A7980 - 0x5E3B11E0)
class USoundfieldEndpointSubmix : public USoundSubmixBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundfieldEndpointSubmix");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x690F00 (0x5E3A7900 - 0x5DD16A00)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x690F00];                                  // 0x5DD16A00(0x690F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x6C5B80 (0x5E3A7880 - 0x5DCE1D00)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x6C5B80];                                  // 0x5DCE1D00(0x6C5B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x6C5D80 (0x5E3A7700 - 0x5DCE1980)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x6C5D80];                                  // 0x5DCE1980(0x6C5D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SplineMetadata
// 0x0000
class USplineMetadata : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMetadata");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x35C9200 (0x5E3D0780 - 0x5AE07580)
class USplineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x35C9200];                                 // 0x5AE07580(0x35C9200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void UpdateSpline();
	void SetWorldLocationAtSplinePoint();
	void SetUpVectorAtSplinePoint();
	void SetUnselectedSplineSegmentColor();
	void SetTangentsAtSplinePoint();
	void SetTangentAtSplinePoint();
	void SetSplineWorldPoints();
	void SetSplinePointType();
	void SetSplinePoints();
	void SetSplineLocalPoints();
	void SetSelectedSplineSegmentColor();
	void SetLocationAtSplinePoint();
	void SetDrawDebug();
	void SetDefaultUpVector();
	void SetClosedLoopAtPosition();
	void SetClosedLoop();
	void RemoveSplinePoint();
	void IsClosedLoop();
	void GetWorldTangentAtDistanceAlongSpline();
	void GetWorldRotationAtTime();
	void GetWorldRotationAtDistanceAlongSpline();
	void GetWorldLocationAtTime();
	void GetWorldLocationAtSplinePoint();
	void GetWorldLocationAtDistanceAlongSpline();
	void GetWorldDirectionAtTime();
	void GetWorldDirectionAtDistanceAlongSpline();
	void GetVectorPropertyAtSplinePoint();
	void GetVectorPropertyAtSplineInputKey();
	void GetUpVectorAtTime();
	void GetUpVectorAtSplinePoint();
	void GetUpVectorAtSplineInputKey();
	void GetUpVectorAtDistanceAlongSpline();
	void GetTransformAtTime();
	void GetTransformAtSplinePoint();
	void GetTransformAtSplineInputKey();
	void GetTransformAtDistanceAlongSpline();
	void GetTangentAtTime();
	void GetTangentAtSplinePoint();
	void GetTangentAtSplineInputKey();
	void GetTangentAtDistanceAlongSpline();
	void GetSplinePointType();
	void GetSplineLength();
	void GetScaleAtTime();
	void GetScaleAtSplinePoint();
	void GetScaleAtSplineInputKey();
	void GetScaleAtDistanceAlongSpline();
	void GetRotationAtTime();
	void GetRotationAtSplinePoint();
	void GetRotationAtSplineInputKey();
	void GetRotationAtDistanceAlongSpline();
	void GetRollAtTime();
	void GetRollAtSplinePoint();
	void GetRollAtSplineInputKey();
	void GetRollAtDistanceAlongSpline();
	void GetRightVectorAtTime();
	void GetRightVectorAtSplinePoint();
	void GetRightVectorAtSplineInputKey();
	void GetRightVectorAtDistanceAlongSpline();
	void GetNumberOfSplineSegments();
	void GetNumberOfSplinePoints();
	void GetLocationAtTime();
	void GetLocationAtSplinePoint();
	void GetLocationAtSplineInputKey();
	void GetLocationAtDistanceAlongSpline();
	void GetLocationAndTangentAtSplinePoint();
	void GetLocalLocationAndTangentAtSplinePoint();
	void GetLeaveTangentAtSplinePoint();
	void GetInputKeyAtDistanceAlongSpline();
	void GetFloatPropertyAtSplinePoint();
	void GetFloatPropertyAtSplineInputKey();
	void GetDistanceAlongSplineAtSplinePoint();
	void GetDirectionAtTime();
	void GetDirectionAtSplinePoint();
	void GetDirectionAtSplineInputKey();
	void GetDirectionAtDistanceAlongSpline();
	void GetDefaultUpVector();
	void GetArriveTangentAtSplinePoint();
	void FindUpVectorClosestToWorldLocation();
	void FindTransformClosestToWorldLocation();
	void FindTangentClosestToWorldLocation();
	void FindScaleClosestToWorldLocation();
	void FindRotationClosestToWorldLocation();
	void FindRollClosestToWorldLocation();
	void FindRightVectorClosestToWorldLocation();
	void FindLocationClosestToWorldLocation();
	void FindInputKeyClosestToWorldLocation();
	void FindDirectionClosestToWorldLocation();
	void ClearSplinePoints();
	void AddSplineWorldPoint();
	void AddSplinePointAtIndex();
	void AddSplinePoint();
	void AddSplineLocalPoint();
	void AddPoints();
	void AddPoint();
};


// Class Engine.SplineMeshActor
// 0x3432700 (0x5E3D0700 - 0x5AF9E000)
class ASplineMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3432700];                                 // 0x5AF9E000(0x3432700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x98A000 (0x5E3D2B00 - 0x5DA48B00)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x98A000];                                  // 0x5DA48B00(0x98A000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}


	void UpdateMesh();
	void SetStartTangent();
	void SetStartScale();
	void SetStartRoll();
	void SetStartPosition();
	void SetStartOffset();
	void SetStartAndEnd();
	void SetSplineUpDir();
	void SetForwardAxis();
	void SetEndTangent();
	void SetEndScale();
	void SetEndRoll();
	void SetEndPosition();
	void SetEndOffset();
	void SetBoundaryMin();
	void SetBoundaryMax();
	void GetStartTangent();
	void GetStartScale();
	void GetStartRoll();
	void GetStartPosition();
	void GetStartOffset();
	void GetSplineUpDir();
	void GetForwardAxis();
	void GetEndTangent();
	void GetEndScale();
	void GetEndRoll();
	void GetEndPosition();
	void GetEndOffset();
	void GetBoundaryMin();
	void GetBoundaryMax();
};


// Class Engine.SpotLightComponent
// 0x3BC80 (0x5E3D2800 - 0x5E396B80)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x3BC80];                                   // 0x5E396B80(0x3BC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void SetOuterConeAngle();
	void SetInnerConeAngle();
};


// Class Engine.StaticMesh
// 0x32F5F80 (0x5E3D5180 - 0x5B0DF200)
class UStaticMesh : public UStreamableRenderAsset
{
public:
	unsigned char                                      UnknownData00[0x32F5F80];                                 // 0x5B0DF200(0x32F5F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}


	void RemoveSocket();
	void GetNumSections();
	void GetNumLODs();
	void GetMinimumLODForPlatforms();
	void GetMinimumLODForPlatform();
	void GetMaterialIndex();
	void GetMaterial();
	void GetBounds();
	void GetBoundingBox();
	void FindSocket();
	void CreateStaticMeshDescription();
	void BuildFromStaticMeshDescriptions();
	void AddSocket();
	void AddMaterial();
};


// Class Engine.StaticMeshSocket
// 0x5E3D4F00
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3D4F00];                                // 0x0000(0x5E3D4F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.StereoLayerComponent
// 0xD73D480 (0x5E3D5C00 - 0x50C98780)
class UStereoLayerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD73D480];                                 // 0x50C98780(0xD73D480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}


	void SetUVRect();
	void SetTexture();
	void SetQuadSize();
	void SetPriority();
	void SetLeftTexture();
	void SetEquirectProps();
	void MarkTextureForUpdate();
	void GetUVRect();
	void GetTexture();
	void GetQuadSize();
	void GetPriority();
	void GetLeftTexture();
};


// Class Engine.StereoLayerShape
// 0x0000
class UStereoLayerShape : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerShape");
		return ptr;
	}

};


// Class Engine.StereoLayerShapeQuad
// 0x0000
class UStereoLayerShapeQuad : public UStereoLayerShape
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerShapeQuad");
		return ptr;
	}

};


// Class Engine.StereoLayerShapeCylinder
// 0x5E3D4C00
class UStereoLayerShapeCylinder : public UStereoLayerShape
{
public:
	unsigned char                                      UnknownData00[0x5E3D4C00];                                // 0x0000(0x5E3D4C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerShapeCylinder");
		return ptr;
	}


	void SetRadius();
	void SetOverlayArc();
	void SetHeight();
};


// Class Engine.StereoLayerShapeCubemap
// 0x0000
class UStereoLayerShapeCubemap : public UStereoLayerShape
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerShapeCubemap");
		return ptr;
	}

};


// Class Engine.StereoLayerShapeEquirect
// 0x5E3D4880
class UStereoLayerShapeEquirect : public UStereoLayerShape
{
public:
	unsigned char                                      UnknownData00[0x5E3D4880];                                // 0x0000(0x5E3D4880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerShapeEquirect");
		return ptr;
	}


	void SetEquirectProps();
};


// Class Engine.StereoLayerFunctionLibrary
// 0x0000
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}


	void ShowSplashScreen();
	void SetSplashScreen();
	void HideSplashScreen();
	void EnableAutoLoadingSplashScreen();
};


// Class Engine.StringTable
// 0x0000
class UStringTable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringTable");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x5E3D5880
class USubsurfaceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3D5880];                                // 0x0000(0x5E3D5880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.SubsystemBlueprintLibrary
// 0x0000
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsystemBlueprintLibrary");
		return ptr;
	}


	void GetWorldSubsystem();
	void GetLocalPlayerSubSystemFromPlayerController();
	void GetLocalPlayerSubsystem();
	void GetGameInstanceSubsystem();
	void GetEngineSubsystem();
};


// Class Engine.SubUVAnimation
// 0x5E3D7200
class USubUVAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3D7200];                                // 0x0000(0x5E3D7200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.SystemTimeTimecodeProvider
// 0x32CF980 (0x5E3D7080 - 0x5B107700)
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
public:
	unsigned char                                      UnknownData00[0x32CF980];                                 // 0x5B107700(0x32CF980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SystemTimeTimecodeProvider");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x5E3D6F00
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3D6F00];                                // 0x0000(0x5E3D6F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x3438E80 (0x5E3D6E80 - 0x5AF9E000)
class ATextRenderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3438E80];                                 // 0x5AF9E000(0x3438E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x35D0B80 (0x5E3D8100 - 0x5AE07580)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x35D0B80];                                 // 0x5AE07580(0x35D0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}


	void SetYScale();
	void SetXScale();
	void SetWorldSize();
	void SetVertSpacingAdjust();
	void SetVerticalAlignment();
	void SetTextRenderColor();
	void SetTextMaterial();
	void SetText();
	void SetHorizSpacingAdjust();
	void SetHorizontalAlignment();
	void SetFont();
	void K2_SetText();
	void GetTextWorldSize();
	void GetTextLocalSize();
};


// Class Engine.Texture2DArray
// 0xFFFFFFFFA240B480 (0x0000 - 0x5DBF4B80)
class UTexture2DArray : public UTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DArray");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x7E3500 (0x5E3D8080 - 0x5DBF4B80)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x7E3500];                                  // 0x5DBF4B80(0x7E3500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x6EE680 (0x5E3D7F80 - 0x5DCE9900)
class UTextureLightProfile : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x6EE680];                                  // 0x5DCE9900(0x6EE680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.TextureMipDataProviderFactory
// 0x0000
class UTextureMipDataProviderFactory : public UAssetUserData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureMipDataProviderFactory");
		return ptr;
	}

};


// Class Engine.TextureRenderTargetCube
// 0x6F2280 (0x5E3D7D00 - 0x5DCE5A80)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x6F2280];                                  // 0x5DCE5A80(0x6F2280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0xD829280 (0x5E3D9100 - 0x50BAFE80)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD829280];                                 // 0x50BAFE80(0xD829280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}


	void Stop();
	void SetVectorCurve();
	void SetTimelineLengthMode();
	void SetTimelineLength();
	void SetPlayRate();
	void SetPlaybackPosition();
	void SetNewTime();
	void SetLooping();
	void SetLinearColorCurve();
	void SetIgnoreTimeDilation();
	void SetFloatCurve();
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_Timeline();
	void IsReversing();
	void IsPlaying();
	void IsLooping();
	void GetTimelineLength();
	void GetPlayRate();
	void GetPlaybackPosition();
	void GetIgnoreTimeDilation();
};


// Class Engine.TimelineTemplate
// 0x5E3D8900
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3D8900];                                // 0x0000(0x5E3D8900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TireType
// 0x333B440 (0x5E3D8880 - 0x5B09D440)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x333B440];                                 // 0x5B09D440(0x333B440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x5E3B0100
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B0100];                                // 0x0000(0x5E3B0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x343C500 (0x5E3DA500 - 0x5AF9E000)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x343C500];                                 // 0x5AF9E000(0x343C500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0xFFFFFFFFA1C25B00 (0x0000 - 0x5E3DA500)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0xFFFFFFFFA1C25B00 (0x0000 - 0x5E3DA500)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0xFFFFFFFFA1C25B00 (0x0000 - 0x5E3DA500)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0xFFFFFFFFA232D520 (0x0000 - 0x5DCD2AE0)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	void TwitterRequest();
	void ShowTweetUI();
	void Init();
	void GetNumAccounts();
	void GetAccountName();
	void CanShowTweetUI();
	void AuthorizeAccounts();
};


// Class Engine.UserDefinedEnum
// 0x5B0ED6C0
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x5B0ED6C0];                                // 0x0000(0x5B0ED6C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x5E3D9C00
class UUserDefinedStruct : public UScriptStruct
{
public:
	unsigned char                                      UnknownData00[0x5E3D9C00];                                // 0x0000(0x5E3D9C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x5E3B2720
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E3B2720];                                // 0x0000(0x5E3B2720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x5E3DB200
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3DB200];                                // 0x0000(0x5E3DB200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0xFFFFFFFFFFFFF980 (0x5E3DAB80 - 0x5E3DB200)
class UVectorFieldAnimated : public UVectorField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldComponent
// 0x35D3380 (0x5E3DA900 - 0x5AE07580)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x35D3380];                                 // 0x5AE07580(0x35D3380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}


	void SetIntensity();
};


// Class Engine.VectorFieldStatic
// 0xFFFFFFFFFFFFF480 (0x5E3DA680 - 0x5E3DB200)
class UVectorFieldStatic : public UVectorField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x343C600 (0x5E3DA600 - 0x5AF9E000)
class AVectorFieldVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x343C600];                                 // 0x5AF9E000(0x343C600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.VirtualTexture
// 0x0000
class UVirtualTexture : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTexture");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTexture
// 0x0000
class ULightMapVirtualTexture : public UVirtualTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTexture");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTexture2D
// 0x6C8CE0 (0x5E3B25E0 - 0x5DCE9900)
class ULightMapVirtualTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x6C8CE0];                                  // 0x5DCE9900(0x6C8CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTexture2D");
		return ptr;
	}

};


// Class Engine.VirtualTexturePoolConfig
// 0x5E3DC580
class UVirtualTexturePoolConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3DC580];                                // 0x0000(0x5E3DC580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTexturePoolConfig");
		return ptr;
	}

};


// Class Engine.VisualLoggerAutomationTests
// 0x0000
class UVisualLoggerAutomationTests : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000
class UVisualLoggerDebugSnapshotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}

};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}


	void RedirectVislog();
	void LogText();
	void LogSegment();
	void LogLocation();
	void LogBox();
	void EnableRecording();
};


// Class Engine.VoiceChannel
// 0xFFFFFFFFA2353880 (0x0000 - 0x5DCAC780)
class UVoiceChannel : public UChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.VOIPTalker
// 0xD82D700 (0x5E3DD580 - 0x50BAFE80)
class UVOIPTalker : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD82D700];                                 // 0x50BAFE80(0xD82D700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPTalker");
		return ptr;
	}


	void RegisterWithPlayerState();
	void GetVoiceLevel();
	void CreateTalkerForPlayer();
	void BPOnTalkingEnd();
	void BPOnTalkingBegin();
};


// Class Engine.VOIPStatics
// 0x0000
class UVOIPStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPStatics");
		return ptr;
	}


	void SetMicThreshold();
};


// Class Engine.VolumeTexture
// 0xFFFFFFFFA240B480 (0x0000 - 0x5DBF4B80)
class UVolumeTexture : public UTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTexture");
		return ptr;
	}

};


// Class Engine.VolumetricLightmapDensityVolume
// 0x5E3DD480
class AVolumetricLightmapDensityVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5E3DD480];                                // 0x0000(0x5E3DD480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumetricLightmapDensityVolume");
		return ptr;
	}

};


// Class Engine.WindDirectionalSource
// 0x5E3DD400
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5E3DD400];                                // 0x0000(0x5E3DD400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0xD744680 (0x5E3DCE00 - 0x50C98780)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD744680];                                 // 0x50C98780(0xD744680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}


	void SetWindType();
	void SetStrength();
	void SetSpeed();
	void SetRadius();
	void SetMinimumGustAmount();
	void SetMaximumGustAmount();
};


// Class Engine.WorldComposition
// 0x5E3B1E60
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B1E60];                                // 0x0000(0x5E3B1E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.HierarchicalLODSetup
// 0x5E3B1DC0
class UHierarchicalLODSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B1DC0];                                // 0x0000(0x5E3B1DC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalLODSetup");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
