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

// WidgetBlueprintGeneratedClass WBP_Graphic_Button.WBP_Graphic_Button_C
// 0xFFFFFFFFD1974500 (0x2C568E80 - 0x5ABF4980)
class UWBP_Graphic_Button_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Graphic_Button.WBP_Graphic_Button_C");
		return ptr;
	}


	void OnHoveredLogic();
	void NavigateConfirm();
	void SetImage();
	void SetImageTint();
	void OnClickSound();
	void OnHoverSound();
	void Construct();
	void OnGamepadConfirmed();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void DisableButton();
	void CallButtonHover();
	void CallButtonUnhover();
	void SetIsActiveState();
	void ExecuteUbergraph_WBP_Graphic_Button();
	void OnGraphicBtnUnhovered__DelegateSignature();
	void OnGraphicBtnHovered__DelegateSignature();
	void OnGraphicBtnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
