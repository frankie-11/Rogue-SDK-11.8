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

// WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C
// 0xFFFFFFFFCF230900 (0x2CD2C800 - 0x5DAFBF00)
class UWBP_SettingsSection_C : public UKSSettingsSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C");
		return ptr;
	}


	void Add_Settings_Group_Widget();
	void PreConstruct();
	void InitializeWidget();
	void AddSettingsGroupWidget();
	void OnSectionConfigSet();
	void ExecuteUbergraph_WBP_SettingsSection();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
