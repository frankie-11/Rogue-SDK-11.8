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

// WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C
// 0xD65F000 (0x6B1EBE80 - 0x5DB8CE80)
class UWBP_SettingsRadioButtonGroup_C : public UKSSettingsWidget
{
public:
	unsigned char                                      UnknownData00[0xD65F000];                                 // 0x5DB8CE80(0xD65F000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C");
		return ptr;
	}


	void NavigateBack();
	void Set_Selection_To_Index();
	void Get_Dirty_Index();
	void Set_Desired_Index();
	void OnWidgetSettingsInfoSet();
	void On_Radio_Button_Clicked();
	void On_Setting_Value_Changed();
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure();
	void FocusGroupNavigateUpFailure();
	void ExecuteUbergraph_WBP_SettingsRadioButtonGroup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
