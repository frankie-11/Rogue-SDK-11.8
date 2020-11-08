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

// WidgetBlueprintGeneratedClass GameTimerBarPlayer.GameTimerBarPlayer_C
// 0xFFFFFFFFD0BF3600 (0x2B7E7F80 - 0x5ABF4980)
class UGameTimerBarPlayer_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameTimerBarPlayer.GameTimerBarPlayer_C");
		return ptr;
	}


	void Try_Update_Is_Ally();
	void GameTimerBarPlayer_AutoGenFunc();
	void On_Player_Respawns_Changed();
	void HandleBindingsForPlayerStateChanges();
	void Set_Merc_Icon();
	void SetLocalIdentifier();
	void Set_View_State();
	void Set_Player_State();
	void PreConstruct();
	void InitializeWidget();
	void Handle_Bomb_State_Changed();
	void On_Player_State_Downed_Changed();
	void Handle_Player_Mods_Changed();
	void Handle_Icon_Showing_Changed();
	void Handle_Bound_Icon_Mod_Removed();
	void ExecuteUbergraph_GameTimerBarPlayer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
