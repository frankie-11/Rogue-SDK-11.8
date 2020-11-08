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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C
// 0xFFFFFFFFCE893A80 (0x29488400 - 0x5ABF4980)
class UWBP_PlayerProfileScreen_AwardPanel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C");
		return ptr;
	}


	void SetDisableState();
	void NavigateConfirm();
	void RefreshAwards();
	void PreConstruct();
	void Construct();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
