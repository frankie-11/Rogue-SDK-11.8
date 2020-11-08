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

// WidgetBlueprintGeneratedClass PopupButton.PopupButton_C
// 0xFFFFFFFFCD663C00 (0x28258580 - 0x5ABF4980)
class UPopupButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopupButton.PopupButton_C");
		return ptr;
	}


	void NavigateBack();
	void ToggleGamepadCallout();
	void SetDisplayText();
	void SetButtonCalloutImage();
	void SetFontSize();
	void NavigateConfirm();
	void PreConstruct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadPress();
	void OnNavBack();
	void Construct();
	void ExecuteUbergraph_PopupButton();
	void OnNavigateBackAction__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
