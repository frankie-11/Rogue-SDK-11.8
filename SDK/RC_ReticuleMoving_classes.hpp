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

// WidgetBlueprintGeneratedClass ReticuleMoving.ReticuleMoving_C
// 0xFFFFFFFFCB909980 (0x29450A80 - 0x5DB47100)
class UReticuleMoving_C : public UKSComponentReticleWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReticuleMoving.ReticuleMoving_C");
		return ptr;
	}


	void ResetADS();
	void UpdateBlockedShotDisplay();
	void UpdateVisibility();
	void UnBindReticleAmmoGauge();
	void HandleShotgunElimination();
	void ProcessShotgunHitDisplay();
	void UnbindShotgunNotify();
	void BindToShotgunNotify();
	void IsShotgunReticleType();
	void BindReticleAmmoGauge();
	void CheckShotgunReload();
	void GetActiveReticle();
	void SetActiveReticle();
	void InitializeTickAnimations();
	void HandleBlockedShotLerpUpdate();
	void HandleBlockedShotLerpFinished();
	void Construct();
	void AimStateChange();
	void Kill();
	void OnInstigatedDamage();
	void UpdateReticleOffset();
	void UpdateBlockedShotIcon();
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void HandleOnKillCamViewProjectile();
	void HandleKillCamEnabled();
	void PreClearPawn();
	void ViewedPawnInstigatedDamageNotify();
	void OnPlayerKilled();
	void Tick();
	void HandleReload__New_();
	void GrenadeStateChange__New_();
	void HandleShotgunNotify();
	void PostSetPawn();
	void PostSetPlayerState();
	void PreClearPlayerState();
	void Handle_Player_Down_or_Elim_Changed();
	void HandleEmoteStoppedPlaying();
	void HandleOnEmoteStartedPlaying();
	void HandleDeathStateChange();
	void HandleCrosshairHidden();
	void Handle_Out_Of_Bounds_End();
	void Handle_Out_Of_Bounds_Begin();
	void ExecuteUbergraph_ReticuleMoving();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
