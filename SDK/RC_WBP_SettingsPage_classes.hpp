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

// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// 0xFFFFFFFFCF2325A0 (0x2CD2E680 - 0x5DAFC0E0)
class UWBP_SettingsPage_C : public UKSSettingsPage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C");
		return ptr;
	}


	void GetScrollBox();
	void Add_Settings_Section_Widget();
	void InitializeTickAnimations();
	void HandleShowPageAnimFinished();
	void HandleShowPageAnimUpdated();
	void HandleHidePageAnimFinished();
	void HandleHidePageAnimUpdated();
	void PlayShowPageAnim();
	void PlayHidePageAnim();
	void SetInitPageState();
	void Construct();
	void AddSettingsSectionWidget();
	void ExecuteUbergraph_WBP_SettingsPage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
