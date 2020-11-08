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

// DynamicClass MainCharacter.MainCharacter_C
// 0x105DD480 (0x6B92C400 - 0x5B34EF80)
class AMainCharacter_C : public AKSCharacter
{
public:
	unsigned char                                      UnknownData00[0x105DD480];                                // 0x5B34EF80(0x105DD480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacter.MainCharacter_C");
		return ptr;
	}


	void Zipline_Pulley_Unhide();
	void Zipline_Pulley_Hide();
	void WasLastHitHeadshot();
	void VO_Player_Revived();
	void VO_Player_Death();
	void VerifyLastHitDamageType();
	void VerifyLastHitBone();
	void UserConstructionScript();
	void Update_Action_Camera();
	void UpdateRagdollOnGround();
	void UpdateRagdollMeshLocation();
	void UpdateRagdoll();
	void UpdatePlayerState();
	void UpdateHealthPP();
	void UpdateFlashBangPP();
	void UpdateDebugHealthVisibility();
	void UnhideZiplinePulley();
	void UnhideUplineDevice();
	void TurnOffCapsulePhysics_Server();
	void TurnOffCapsulePhysics();
	void Transition_To_Main_Camera();
	void Transition_To_ADS_Camera();
	void SwitchToSnapshotPose();
	void Stop_Playing_Emote_Music();
	void StopLowHealthSFX();
	void Start_Viewed_Down_Hit();
	void Start_Playing_Emote_Music();
	void StartImmunity__UpdateFunc();
	void StartImmunity__FinishedFunc();
	void StartHacking();
	void SprintFOVTimeline__UpdateFunc();
	void SprintFOVTimeline__FinishedFunc();
	void ShowDebugLocation();
	void ShouldLastHitLaunchIntoRagdoll();
	void SFXStateChangeReset();
	void SFXStateChangeMax();
	void SFXStateChangeHalf();
	void SFXRingHalfSTOP();
	void SFXRingHalfPlay();
	void SFXRingFullSTOP();
	void SFXRingFullPlay();
	void Set_up_ADS_Blur_Dynamic_Material();
	void Set_Health_SFX_RTPC();
	void Setup_Debug_Info_Widget();
	void SetPostProcessHealthValue();
	void SetHitTargetArmorLevelRTPC();
	void RestoreNormalCamera();
	void ReevaluateDebugWidgetAttachment();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void Play_Viewed_Sonar_Hit();
	void Play_Viewed_EMP_Hit();
	void Play_Viewed_Blood_Hit();
	void Play_Martial_Artist_Target_Front();
	void Play_Martial_Artist_Target_Back();
	void Play_Martial_Artist_Instigator_Front();
	void Play_Martial_Artist_Instigator_Back();
	void PlayViewFlashBangHit();
	void PlayPickupFX();
	void PlayHitMarkerSFX();
	void PlayHitFromRadialDamage();
	void PlayHitFromPointDamage();
	void PlayHitBySFX();
	void PlayerRevived();
	void PlayerDown();
	void PlayerDeath();
	void PlayDownPPOnce();
	void PlayActionCameraSequence();
	void OnZiplineChangeForFov();
	void On_Shoulder_Swap_Changed_Event();
	void On_Anim_Initialized();
	void OnUnhovered();
	void OnStartSkydive();
	void OnSprintChangedCallback();
	void OnReviveStart();
	void OnReviveInterrupt();
	void OnReviveComplete();
	void OnPowerSlideChangedCallback();
	void OnLanded();
	void OnItemPickedUp_Event_1();
	void OnImmuneStart();
	void OnImmuneEnd();
	void OnHovered();
	void OnHealthChanged();
	void OnGadgetSwapped();
	void OnFieldOfViewModChange();
	void OnEndZiplineRagdoll();
	void OnEndSkydive();
	void OnEndPowerSlide();
	void OnEndOutOfBounds();
	void OnDodgeRollChangedEvent();
	void OnBeginZiplineRagdoll();
	void OnBeginPowerSlide();
	void OnBeginOutOfBounds();
	void OnArmorInteractStart();
	void OnArmorInteractInterrupt();
	void OnArmorInteractComplete();
	void OnADSBlurSettingChanged();
	void NoseDiveFOVTimeline__UpdateFunc();
	void NoseDiveFOVTimeline__FinishedFunc();
	void NoseDiveCameraTransition();
	void Martial_Artist_Target_Front__UpdateFunc();
	void Martial_Artist_Target_Front__FinishedFunc();
	void Martial_Artist_Target_Back__UpdateFunc();
	void Martial_Artist_Target_Back__FinishedFunc();
	void Martial_Artist_Instigator_Front__UpdateFunc();
	void Martial_Artist_Instigator_Front__FinishedFunc();
	void Martial_Artist_Instigator_Back__UpdateFunc();
	void Martial_Artist_Instigator_Back__FinishedFunc();
	void LandingRollEvent();
	void KeepActionCameraAboveWater();
	void K2_OnMovementModeChanged();
	void K2_OnEndViewTarget();
	void K2_OnBecomeViewTarget();
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1();
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2();
	void InpActEvt_T_K2Node_InputKeyEvent_1();
	void InitializeHealthPP();
	void HideZiplinePulley();
	void HideUplineDevice();
	void HealthRegenerationStopped();
	void HealthRegenerationStarted();
	void Handle_Downed_Ragdoll();
	void Get_Max_FlashBang_Intensity();
	void Get_FlashBang_Intensity();
	void Get_ADS_Camera_By_Tag();
	void Get_ADS_Bend_Target_Camera_Component();
	void GetTargetFov();
	void GetTargetArmorLevel();
	void GetRagdollFacingDirection();
	void GetLastHitDistance();
	void GetFlashBangEffectDurationFromDistance();
	void GetDownedTransitionMontage();
	void GetDeathTransitionAnimation();
	void FreeFall_Camera_Burst();
	void Finish_Action_Camera_Update();
	void FinishHacking();
	void ExitDownedRagdoll();
	void ExecuteUbergraph_MainCharacter_76();
	void ExecuteUbergraph_MainCharacter_75();
	void ExecuteUbergraph_MainCharacter_57();
	void ExecuteUbergraph_MainCharacter_42();
	void ExecuteUbergraph_MainCharacter_38();
	void ExecuteUbergraph_MainCharacter_28();
	void ExecuteUbergraph_MainCharacter_27();
	void ExecuteUbergraph_MainCharacter_15();
	void EventSetupCamerasForSpectator();
	void EnterFreeFallFOVTimeline__UpdateFunc();
	void EnterFreeFallFOVTimeline__FinishedFunc();
	void EnterDownedRagdoll();
	void End_Down_PP();
	void EndImmunity__UpdateFunc();
	void EndImmunity__FinishedFunc();
	void DoSetOnFire();
	void DoExtinguishFire();
	void DoBindZiplineEvents();
	void DoBindSprintEvents();
	void DoBindDodgeRollEvents();
	void DetermineKnockbackFacing();
	void DetachSkydiveParticle();
	void DestructibleSpeedGateOverlappedEvent();
	void DeathStateChange();
	void Check_Low_Health();
	void CheckFlashBangOnViewTargetChange();
	void Camera_Boom_Timeline__UpdateFunc();
	void Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc();
	void Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc();
	void Camera_Boom_Timeline__FinishedFunc();
	void CameraDodgeRoll__UpdateFunc();
	void CameraDodgeRoll__FinishedFunc();
	void CacheRagdollPelvisLocation();
	void BlueprintOnStopSwimming();
	void BlueprintOnStartSwimming();
	void BlueprintHandleDeath();
	void BindADSBlurSetting();
	void Audio_Init();
	void ApplyLastHitImpulse();
	void PlayerReviveDelegate__DelegateSignature();
	void PlayerDownInfo__DelegateSignature();
	void PlayerDeathInfo__DelegateSignature();
	void OnSprintChanged__DelegateSignature();
	void OnShoulderSwapChanged__DelegateSignature();
	void OnPowerSlideChanged__DelegateSignature();
	void OnPlayerStateChanged__DelegateSignature();
	void OnItemPickedUp__DelegateSignature();
	void OnHealthChanged__DelegateSignature();
	void OnGoDown__DelegateSignature();
	void OnEndZipline__DelegateSignature();
	void OnDodgeRollChanged__DelegateSignature();
	void OnDeathStateChanged__DelegateSignature();
	void OnBeginZipline__DelegateSignature();
	void OnAnimInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
