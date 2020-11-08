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

// WidgetBlueprintGeneratedClass WBP_SettingsRadio.WBP_SettingsRadio_C
// 0xDEBAC80 (0x68AAF600 - 0x5ABF4980)
class UWBP_SettingsRadio_C : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xDEBAC80];                                 // 0x5ABF4980(0xDEBAC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsRadio.WBP_SettingsRadio_C");
		return ptr;
	}


	void NavigateConfirmPressed();
	void NavigateConfirm();
	void SettingsRadioClickedSFX();
	void SettingsRadioHoveredSFX();
	void Construct();
	void On_Selected();
	void On_Unselected();
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void Select_Button();
	void ExecuteUbergraph_WBP_SettingsRadio();
	void On_Radio_Button_Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
