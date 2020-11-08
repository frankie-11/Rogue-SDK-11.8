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

// WidgetBlueprintGeneratedClass DeathSpectateOverlay.DeathSpectateOverlay_C
// 0xFFFFFFFFB796A400 (0x1255ED80 - 0x5ABF4980)
class UDeathSpectateOverlay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeathSpectateOverlay.DeathSpectateOverlay_C");
		return ptr;
	}


	void UpdateViewNextTeammate();
	void Construct();
	void Handle_Viewed_Pawn_Changed();
	void InitializeWidget();
	void Handle_Input_State_Changed();
	void Handle_Spectate_State_Changed();
	void TeamMemberEliminated();
	void DetermineLocalPlayerControlled();
	void Handle_Round_Start();
	void HandleKillCamEnabled();
	void Refresh_Player_Identity();
	void ExecuteUbergraph_DeathSpectateOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
