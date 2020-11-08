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

// DynamicClass Master_WeaponComponent.Master_WeaponComponent_C
// 0x8EC24A0 (0x669B5980 - 0x5DAF34E0)
class UMaster_WeaponComponent_C : public UKSWeaponComponent
{
public:
	unsigned char                                      UnknownData00[0x8EC24A0];                                 // 0x5DAF34E0(0x8EC24A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Master_WeaponComponent.Master_WeaponComponent_C");
		return ptr;
	}


	void OnSetShieldActive__DelegateSignature();
	void OnSetScopeScaleAlpha__DelegateSignature();
	void OnSetRevolverChamberRotate__DelegateSignature();
	void OnSetLobbyState__DelegateSignature();
	void Update_Tracer_Start_Point();
	void Update_Combat_State();
	void UpdateMagDropBoneVelocity();
	void UpdateAimDownSightsBlurValues();
	void TryDisableCameraModifier();
	void SyncComputeCosmeticHits();
	void Spawn_Tracers_Simple();
	void Spawn_Tracer();
	void Spawn_Spangs_and_Decals();
	void SpawnTracers();
	void SpawnSpangs();
	void SpawnDecals();
	void ShouldPlayFireAnim1P();
	void Set_Scope_Scale_Alpha();
	void Set_Revolver_Chamber_Rotate();
	void Set_Muzzle_Flash_Emitter_and_Offset();
	void Setup_Character_Anim_Init_Callback();
	void SetUIWidget();
	void Select_Weapon_Reload_Montage();
	void Select_Reload_Montage();
	void Retrieve_Weapon();
	void Reticle_Rotate();
	void Reset_Variables_at_Start_of_Firing_Instance();
	void Reload_Weapon();
	void Reload_Mirror_Delay_End();
	void Reload_Cooldown_Weapon();
	void ReceiveTick();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	void Pre_Fire_Weapon();
	void Prepare_Next_Tracer_Spawn();
	void Post_Fire_Weapon();
	void Play_Weapon_Reload_animation();
	void Play_Reload_MultiStage();
	void Play_Reload_Logic();
	void Play_Reload_Base();
	void Play_Post_Reload();
	void Play_Fire_Tail_Sound();
	void Play_Fire_Camera_Shakes();
	void Play_Casing_Sound();
	void Play_Bullet_Impact_SFX();
	void PlayInvalidFireSound();
	void PlayFireSound();
	void PlayEmptyFireAudio();
	void PlayBulletNearMissSound();
	void On_Cosmetic_Trace_Complete_Internal();
	void On_Comestic_Trace_Complete();
	void On_Character_Anim_Initialized();
	void OnPossessedBy_Event_1();
	void OnKilled_Event_1();
	void NotifyStopFireReceived();
	void IsDropMeshValid();
	void IdleWeapon();
	void Holster_Weapon();
	void Hide_Magazine();
	void HasUIWidget();
	void HandleWeaponFiringClientEffects();
	void Get_Tracer_Offset();
	void Get_Spang_Particle_System();
	void Get_Scaled_Reload_Playrate();
	void Get_Scaled_Post_Reload_Playrate();
	void Get_Scaled_Multistage_Reload_Playrate();
	void Get_Reticle_Material();
	void Get_Post_Reload_Weapon_Section_Time();
	void Get_Player_3P_Lunge_Montage();
	void Get_Player_3P_Fire_Montage();
	void Get_Player_1P_Fire_Montage();
	void Get_Expected_Aim_Data();
	void Get_Decal_Material();
	void Get_Character_Anim_Instance();
	void Get_Character_3p_Fire_Section();
	void Get_Character_1p_Fire_Section();
	void GetTracerStartPoint();
	void GetTableRowNameForHit();
	void GetPercentRemainingAmmo();
	void GetMagDropBoneRotation();
	void GetMagDropBoneLocation();
	void GetDropVelocity();
	void GetDropMesh();
	void Force_Exit_ADS_Pose();
	void Force_ADS_Scope();
	void ForceRetrieveWeapon();
	void ForceHolsterWeapon();
	void Fixup_Laser_Sight();
	void Fixup_Attach_Point();
	void Fire_Weapon();
	void Fire_Montage_Jump_To_Section();
	void Filter_Cosmetic_Hit_Results();
	void ExecuteUbergraph_Master_WeaponComponent_7();
	void ExecuteUbergraph_Master_WeaponComponent_38();
	void ExecuteUbergraph_Master_WeaponComponent_36();
	void ExecuteUbergraph_Master_WeaponComponent_34();
	void ExecuteUbergraph_Master_WeaponComponent_29();
	void ExecuteUbergraph_Master_WeaponComponent_2();
	void Evaluate_Revolver_Chamber_Rotate();
	void EvaluateShieldState();
	void End_Reload_Weapon();
	void EnableOrAddCameraModifier();
	void DropMagInternal();
	void DropMagazine();
	void DetermineMagSize();
	void Delay_Spawn_Tracers();
	void Delay_Spawn_Spangs();
	void Delay_Spawn_Decals();
	void CheckKillCamScope();
	void Character_Combat_State_Changed();
	void Can_Spawn_Tracer_Now();
	void CancelReloadCosmetic();
	void Calculate_Reload_Time();
	void Calculate_Multistage_Reload_Time();
	void BuildupWeapon();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintPersistentCosmeticsUpdate();
	void AudioOnCooldown();
	void Attach_Weapon_To_Active_Socket();
	void Attach_Weapon_Holster_Socket();
	void AsyncComputeCosmeticHitsAndPlay();
	void Apply_Spang_From_Hit_Result();
	void ApplyDecalFromHit();
	void Anim_Init_Set_Weapon_State();
	void Anim_Init_Set_Use_Weapon_Additive();
	void Anim_Init_Set_Shield_Is_Active();
	void Anim_Init_Set_Scope_Mesh_Scale();
	void Anim_Init_Set_Lobby_State();
	void Anim_Init_Set_Hide_Magazine();
	void Anim_Init_Set_Folding_Stock();
	void Anim_Init_On_Weapon_Mesh();
	void Ancillary_Mesh_Scale_Set();
	void After_Spawn_Tracers_Delay();
	void After_Spawn_Spangs_Delay();
	void After_Spawn_Decals_Delay();
	void OnWeaponComponentStateChanged__DelegateSignature();
	void OnPossessedBy__DelegateSignature();
	void OnKilled__DelegateSignature();
	void OnCombatStateChanged__DelegateSignature();
	void OnAnimInitializedOnSkinnableMesh__DelegateSignature();
	void OnAnimInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
