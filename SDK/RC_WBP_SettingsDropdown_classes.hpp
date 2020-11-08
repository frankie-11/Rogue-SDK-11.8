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

// WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C
// 0xAF18700 (0x68AA5580 - 0x5DB8CE80)
class UWBP_SettingsDropdown_C : public UKSSettingsWidget
{
public:
	unsigned char                                      UnknownData00[0xAF18700];                                 // 0x5DB8CE80(0xAF18700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C");
		return ptr;
	}


	void NavigateBack();
	void NavigateConfirmPressed();
	void NavigateConfirm();
	void SetDesiredIndex();
	void GetDirtyIndex();
	void Set_Text_To_Index();
	void OnWidgetSettingsInfoSet();
	void Selection_Made();
	void InitializeWidget();
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure();
	void FocusGroupNavigateUpFailure();
	void OnSettingsInfoValueChanged();
	void ExecuteUbergraph_WBP_SettingsDropdown();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
