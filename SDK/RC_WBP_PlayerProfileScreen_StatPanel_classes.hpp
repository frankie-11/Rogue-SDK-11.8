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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C
// 0xFFFFFFFFD13E6500 (0x2BFDAE80 - 0x5ABF4980)
class UWBP_PlayerProfileScreen_StatPanel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C");
		return ptr;
	}


	void SetDisableState();
	void NavigateConfirm();
	void RefreshStats();
	void PreConstruct();
	void Construct();
	void GamepadHover();
	void GamepadUnhover();
	void OnActivityInstanceChanged();
	void ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
