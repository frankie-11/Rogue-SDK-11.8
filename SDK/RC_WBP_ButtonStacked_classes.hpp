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

// WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C
// 0xFFFFFFFFCB539C00 (0x2612E580 - 0x5ABF4980)
class UWBP_ButtonStacked_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C");
		return ptr;
	}


	void SetVisuallyDisabled();
	void SetInitialDisplay();
	void OnHoveredLogic();
	void NavigateConfirm();
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
	void PreConstruct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ButtonStacked();
	void OnBtnStackedReleased__DelegateSignature();
	void OnBtnStackedUnhovered__DelegateSignature();
	void OnBtnStackedHovered__DelegateSignature();
	void OnBtnStackedClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
