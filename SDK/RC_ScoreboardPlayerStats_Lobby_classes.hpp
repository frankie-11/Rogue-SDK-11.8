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

// WidgetBlueprintGeneratedClass ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C
// 0xFFFFFFFFC86D4F80 (0x232C9900 - 0x5ABF4980)
class UScoreboardPlayerStats_Lobby_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C");
		return ptr;
	}


	void Set_Level_From_Player_Info();
	void Set_Avatar_From_Player_Info();
	void NavigateConfirm();
	void SetColors();
	void Construct();
	void SetTeamColor();
	void SetLocalPlayer();
	void SetJobIcon();
	void InitializeWidget();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_ScoreboardPlayerStats_Lobby();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
