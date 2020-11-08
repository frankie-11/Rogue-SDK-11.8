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

// WidgetBlueprintGeneratedClass WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C
// 0x27623700
class UWBP_KillstreakMeterMgr_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x27623700];                                // 0x0000(0x27623700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C");
		return ptr;
	}


	void GetWeaponErrorText();
	void DisplayErrorText();
	void GetModInstErrorText();
	void UpdateCanUse();
	void Set_Jammed();
	void HandleEMPLockoutTick();
	void BindToEMPLockout();
	void HandleEMPLocked();
	void RemoveMeters();
	void CreateNewMeter();
	void PostSetPawn();
	void OpenPostSetPawnRetry();
	void ClosePostSetPawnRetry();
	void Tick();
	void AttemptPostSetPawnRetry();
	void RetryPostSetPawn();
	void HandleModsUpdated();
	void PreClearPawn();
	void HandleOnPlayerEliminated();
	void HandleDownedStateChange();
	void InitializeWidget();
	void HandleActivateModsUpdated();
	void OpenPromptFailureTimer();
	void ClosePromptFailureTimer();
	void StartPromptFailureTimer();
	void Construct();
	void HandleKillCam();
	void Handle_Mod_Failed();
	void OnBuildFailed();
	void OnBruteStrengthActivated();
	void HandleFireFailed();
	void ExecuteUbergraph_WBP_KillstreakMeterMgr();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
