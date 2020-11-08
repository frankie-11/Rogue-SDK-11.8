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

// WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C
// 0xFFFFFFFFC4010A80 (0x1EC05400 - 0x5ABF4980)
class UScoreboardTeamSection_Lobby_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C");
		return ptr;
	}


	void GetPlayerDisplays();
	void CreatePlayerEntry();
	void SetIsVictorious();
	void SortPlayers();
	void CreatePlayerEntries();
	void FindPlayerTeam();
	void PopulatePlayer();
	void Construct();
	void SetColor();
	void PreConstruct();
	void ExecuteUbergraph_ScoreboardTeamSection_Lobby();
	void OnPlayersChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
