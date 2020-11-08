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

// WidgetBlueprintGeneratedClass GameTimer.GameTimer_C
// 0xFFFFFFFFCC641700 (0x27236080 - 0x5ABF4980)
class UGameTimer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimer.GameTimer_C");
		return ptr;
	}


	void ShouldPlayCountdownSound();
	void PlayFinalCountdownSound();
	void DebugIssues();
	void UpdateRoundDisplay();
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
	void BombTimerActive();
	void BombTimerTick();
	void ExecuteUbergraph_GameTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
