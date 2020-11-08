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

// WidgetBlueprintGeneratedClass Scoreboard.Scoreboard_C
// 0xFFFFFFFFC5996F00 (0x23551000 - 0x5DBBA100)
class UScoreboard_C : public UKSVoiceActivityWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Scoreboard.Scoreboard_C");
		return ptr;
	}


	void HandleInputModeChanged();
	void GetLocalPlayerJobInfo();
	void UpdateRogueInfo();
	void GetPlayerData();
	void NavigateBack();
	void GetPlayers();
	void GetPlayerButtons();
	void UpdateTeamColors();
	void SortKSPlayerStatesByMoney();
	void Get_KSPlayer_Data();
	void ComparePlayerScore();
	void UpdateScores();
	void OnLoaded_4848F73A412C50823EB015A4F7EF3736();
	void Tick();
	void UpdateScoreboard();
	void HandleOnScoreboardEntryAdded();
	void InitializeWidget();
	void OnShown();
	void LoadAndPopulateFirstPassive();
	void ExecuteUbergraph_Scoreboard();
	void OnScoreboardEntryAdded__DelegateSignature();
	void ScoreboardTabPress__DelegateSignature();
	void Closed__DelegateSignature();
	void Opened__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
