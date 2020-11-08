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

// WidgetBlueprintGeneratedClass CoopTimer.CoopTimer_C
// 0xFFFFFFFFCCA31200 (0x27625B80 - 0x5ABF4980)
class UCoopTimer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoopTimer.CoopTimer_C");
		return ptr;
	}


	void UpdateMatchPointDisplay();
	void UpdateTeamCountDisplay();
	void SetRoundTimerSize();
	void Construct();
	void HackInProgress();
	void RoundEnd();
	void RoundWarmup();
	void RoundStart();
	void ComputersUnlock();
	void Tick();
	void Player_Eliminated();
	void OpenRetryGameStateBind();
	void CloseRetryGameStateBind();
	void RetryGameStateBind();
	void OnUIRelevantPlayerStateChanged();
	void OnGameTimerUpdate();
	void InitializeTimer();
	void HandleKillCamEnabled();
	void Unbind_OnGameTimerUpdate();
	void HandleKillCamViewPawn();
	void Handle_Alarm_State_Changed();
	void ExecuteUbergraph_CoopTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
