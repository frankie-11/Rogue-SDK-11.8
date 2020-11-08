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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C
// 0xFFFFFFFFD156E600 (0x2C162F80 - 0x5ABF4980)
class UWBP_PlayerProfileScreen_AccountPanel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C");
		return ptr;
	}


	void NavigateConfirm();
	void RefreshPlayer();
	void PreConstruct();
	void Construct();
	void InitializeWidget();
	void GamepadHover();
	void GamepadUnhover();
	void Update_Player_Identity();
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
