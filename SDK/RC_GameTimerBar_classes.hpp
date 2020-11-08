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

// WidgetBlueprintGeneratedClass GameTimerBar.GameTimerBar_C
// 0x12560180
class UGameTimerBar_C : public UKSGameInfoOverlayBase
{
public:
	unsigned char                                      UnknownData00[0x12560180];                                // 0x0000(0x12560180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimerBar.GameTimerBar_C");
		return ptr;
	}


	void CheckTeamSides();
	void Bind_Player_State();
	void ResetPlayerStates();
	void OnTeamChanged();
	void UpdateRoundNumberText();
	void OnTotalRoundsSet();
	void OnRoundsToWinSet();
	void BindRoundEvents();
	void OnTeamScoreChanged();
	void On_Team_Respawns_Changed();
	void OnMemberRemoved();
	void OnMemberAdded();
	void OnTeamAdded();
	void Bind_Team_Events();
	void GetRoundInProgressText();
	void SetAttackDefendIcons();
	void HandlePhaseChanged();
	void PlayBombCountdownSFX();
	void ShouldPlayCountdownSFX();
	void PlayFinalCountdownSFX();
	void Set_Timer_Text();
	void Handle_Neutral_Bomb_State_Changed();
	void Construct();
	void Tick();
	void Handle_Timer_Second_Tick();
	void Handle_Round_Info_Changed();
	void Handle_Computers_Unlocked();
	void Handle_Round_Start();
	void Handle_Computer_Update();
	void Handle_Round_End();
	void InitializeWidget();
	void HandleKillCamEnabled();
	void HandleFadeAnimEnd();
	void OnUIRelevantPlayerStateChanged();
	void OnControlPointUpdate();
	void OnControlPointScored();
	void Handle_Attacking_Team_Updated();
	void Handle_Bomb_State_Timer_Tick();
	void Handle_Bomb_State_Timer_Active();
	void Deferred_Game_State_Open();
	void Deferred_Bind_Computer_Open();
	void DeferredPlayerStateOpen();
	void StopTickCaptureProgress();
	void TickCaptureProgress();
	void DeferredBindControlPointOpen();
	void ExecuteUbergraph_GameTimerBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
