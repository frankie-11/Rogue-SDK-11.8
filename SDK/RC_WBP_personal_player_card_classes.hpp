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

// WidgetBlueprintGeneratedClass WBP_personal_player_card.WBP_personal_player_card_C
// 0xFFFFFFFFD17DFA80 (0x2C3D4400 - 0x5ABF4980)
class UWBP_personal_player_card_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_personal_player_card.WBP_personal_player_card_C");
		return ptr;
	}


	void View_Refresh_Local_Player();
	void InitializeWidget();
	void Handle_Party_Member_Data_Updated();
	void ExecuteUbergraph_WBP_personal_player_card();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
