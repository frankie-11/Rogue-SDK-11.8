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

// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
// 0xFFFFFFFFC862E700 (0x26129200 - 0x5DAFAB00)
class UWBP_SettingsContainer_C : public UKSSettingsContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C");
		return ptr;
	}


	void Add_Setting_Widget_To_Box();
	void SettingsContainerHoverSFX();
	void OnContainerConfigSet();
	void AddSettingsWidget();
	void OnMouseEnter();
	void OnMouseLeave();
	void PlayHoverAnim();
	void PlayUnhoverAnim();
	void ExecuteUbergraph_WBP_SettingsContainer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
