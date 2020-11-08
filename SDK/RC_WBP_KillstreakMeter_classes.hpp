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

// WidgetBlueprintGeneratedClass WBP_KillstreakMeter.WBP_KillstreakMeter_C
// 0xFFFFFFFFCCA34600 (0x27628F80 - 0x5ABF4980)
class UWBP_KillstreakMeter_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillstreakMeter.WBP_KillstreakMeter_C");
		return ptr;
	}


	void Get_Current_Cannot_Fire_Now();
	void HandleOnTargetAcquired();
	void PlayActivationEvent();
	void Set_Jammed();
	void UpdateLockTimer();
	void HandleOnReviveTrigger();
	void HandleOnReviveComplete();
	void HandleOnReviveBegin();
	void UpdateReviveProgressDisplay();
	void HandleOnTargetDeath();
	void HandleOnDroneDestroyed();
	void IsReadyToActivate();
	void Stop_Ready_Animations();
	void Start_Ready_Animations();
	void GetDynamicMats();
	void UpdateFillMeterDisplay();
	void SetFillValue();
	void UnbindChanges();
	void CheckForFullCharge();
	void UpdateCharge();
	void BindToChanges();
	void SetupBasicDisplay();
	void Play_Ability_Ready_Sound();
	void Construct();
	void HandleModChargeChange();
	void InitializeWidget();
	void OpenAnimateMeterGate();
	void CloseAnimateMeterGate();
	void Tick();
	void HandlePlayerModCharge();
	void HandleIntroAnimFinish();
	void HandlePulseAnimFinished();
	void Update_Player_Downed();
	void OpenRetryBasicDisplay();
	void CloseRetryBasicDisplay();
	void RetryBasicDisplay();
	void ReevaluateButtonPrompts();
	void HandleModActivated();
	void OpenReviveProgress();
	void EnterReviveProgress();
	void CloseReviveProgress();
	void DelayedClearOfDroneMessaging();
	void DelayedRefundDroneMessaging();
	void OnModLockedChanged();
	void StartLockoutTimer();
	void OnSetCannotFireNow();
	void ExecuteUbergraph_WBP_KillstreakMeter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
