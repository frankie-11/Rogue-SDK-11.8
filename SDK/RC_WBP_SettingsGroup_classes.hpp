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

// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// 0xFFFFFFFFCF22D540 (0x2CD29D00 - 0x5DAFC7C0)
class UWBP_SettingsGroup_C : public UKSSettingsGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C");
		return ptr;
	}


	void Add_Sub_Settings_Widget();
	void Add_Main_Settings_Widget();
	void AddSettingsWidget();
	void InitializeWidget();
	void AddSubSettingsContainerWidget();
	void AddMainSettingsContainerWidget();
	void ExecuteUbergraph_WBP_SettingsGroup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
