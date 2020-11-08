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

// WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C
// 0xFFFFFFFFC2FC3C80 (0x20B50B00 - 0x5DB8CE80)
class UWBP_SettingsEntryList_C : public UKSSettingsWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C");
		return ptr;
	}


	void SetDesiredIndex();
	void NavigateBack();
	void NavigateConfirmPressed();
	void NavigateConfirm();
	void GetDirtyIndex();
	void OnWidgetSettingsInfoSet();
	void Selection_Made();
	void ExecuteUbergraph_WBP_SettingsEntryList();
	void OnSelection__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
