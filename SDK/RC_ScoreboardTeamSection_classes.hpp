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

// WidgetBlueprintGeneratedClass ScoreboardTeamSection.ScoreboardTeamSection_C
// 0xFFFFFFFFCAA88D80 (0x2567D700 - 0x5ABF4980)
class UScoreboardTeamSection_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardTeamSection.ScoreboardTeamSection_C");
		return ptr;
	}


	void Get_Player_Widget_byPlayerState();
	void GetPlayerButtons();
	void EndUpdate();
	void BeginUpdate();
	void UpdatePlayer();
	void Construct();
	void UpdateHeaderColors();
	void OnShown();
	void InitializeWidget();
	void Handle_Display_Cash_Changed();
	void ExecuteUbergraph_ScoreboardTeamSection();
	void OnPlayerAdded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
